#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define sample_size 4
#define rise_threshold 4

const int heartSensorPin = 4;
const int pushButtonPin = 10;

float reads[sample_size],heartRateReading,sum,prev_avg,last_avg;
long int start, now, last_beat,first,second,third;
int n, count, rise_count,print_value;
bool rising;

byte heartCustomChar1[8] = {
  0b00000,
  0b00000,
  0b00011,
  0b00111,
  0b01111,
  0b01111,
  0b01111,
  0b01111};
byte heartCustomChar2[8] = {
  0b00000,
  0b11000,
  0b11100,
  0b11110,
  0b11111,
  0b11111,
  0b11111,
  0b11111};
byte heartCustomChar3[8] = {
  0b00000,
  0b00011,
  0b00111,
  0b01111,
  0b11111,
  0b11111,
  0b11111,
  0b11111};
byte heartCustomChar4[8] = {
  0b00000,
  0b10000,
  0b11000,
  0b11100,
  0b11110,
  0b11110,
  0b11110,
  0b11110};
byte heartCustomChar5[8] = {
  0b00111,
  0b00011,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000};
byte heartCustomChar6[8] = {
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b01111,
  0b00111,
  0b00011,
  0b00001};
byte heartCustomChar7[8] = {
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11110,
  0b11100,
  0b11000,
  0b10000};
byte heartCustomChar8[8] = {
  0b11100,
  0b11000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000};



void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(pushButtonPin,INPUT);
    
    lcd.init();
    lcd.backlight();
    lcd.createChar(1, heartCustomChar1);
    lcd.createChar(2, heartCustomChar2);
    lcd.createChar(3, heartCustomChar3);
    lcd.createChar(4, heartCustomChar4);
    lcd.createChar(5, heartCustomChar5);
    lcd.createChar(6, heartCustomChar6);
    lcd.createChar(7, heartCustomChar7);
    lcd.createChar(8, heartCustomChar8); 

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < sample_size; i++)
  {
     reads[i] = 0;
  }
  sum = 0;
  count = 0;
  while(1)
  {
    //smoothening the curve
    reads[count] = readHeartSensorValue();
    sum += readHeartSensorValue();
    last_avg = sum / sample_size;

    if(last_avg > prev_avg)
    {
      rise_count = 0;
      rise_count++;
      if(!rising && rise_count > rise_threshold)
      {
        rising = true;
        first = millis() - last_beat;
        last_beat = millis();

        print_value = 60000 / (0.4*first + 0.3*second + 0.3*third);

        display_Heart_BPM();

        third = second;
        second = first;

    
      }
    }
    else
    {
      rising = false;
      rise_count = 0;
    }

  prev_avg = last_avg;

  count++;
  count %= sample_size;

    
    
        
  }
  
  

}
//Reads n values from the KY-039 heartbeat sensor
int readHeartSensorValue()
{
  n = 0;
  start = millis();
  heartRateReading = 0;
  do
  {
    heartRateReading += analogRead(heartSensorPin);
    now = millis();
    n++;
  }
  while(now < start + 20); // Reading taken after every 20ms to filter noise from artificial light
  heartRateReading /= n;
  return heartRateReading;     
}

void display_Heart_BPM()
{
              lcd.setCursor(0, 0);
              lcd.setCursor(2, 0);
              lcd.write(byte(1));
              lcd.setCursor(3, 0);
              lcd.write(byte(2));
              lcd.setCursor(4, 0);
              lcd.write(byte(3));
              lcd.setCursor(5, 0);
              lcd.write(byte(4));
    
              lcd.setCursor(2, 1);
              lcd.write(byte(5));
              lcd.setCursor(3, 1);
              lcd.write(byte(6));
              lcd.setCursor(4, 1);
              lcd.write(byte(7));
              lcd.setCursor(5, 1);
              lcd.write(byte(8));
              lcd.setCursor(7, 1);
              lcd.print(print_value);
              lcd.print(" BPM");
              Serial.print(print_value);
              Serial.print('\n');
  
}
