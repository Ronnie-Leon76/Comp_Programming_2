#include <iostream>
#include <math.h>
using namespace std;
//calculate value of sin
void cal_sin(float n) {
    float acc = 0.0001, denominator, sinx, sinval;
    n = n * (3.142 / 180.0);  //convert in radian
    float temp = n;
    sinx = n;
    sinval = sin(n);
    int i = 1;
    do {
        denominator = 2 * i * (2 * i + 1);
        temp = -temp * n * n / denominator;
        sinx = sinx + temp;
        i = i + 1;
    } while (acc <= fabs(sinval - sinx));
    cout<<sinx;
}
//calculate value of cos
void cal_cos(float n) {
    float acc = 0.0001, temp, denominator, cosx, cosval;
    n = n * (3.142 / 180.0); //convert in radiam
    temp = 1;
    cosx = temp;
    cosval = cos(n);
    int i = 1;
    do {
        denominator = 2 * i * (2 * i - 1);
        temp = -temp * n * n / denominator;
        cosx = cosx + temp;
        i = i + 1;
    } while (acc <= fabs(cosval - cosx));
    cout<< cosx;
}
int main() {
    float n,m;
    cout<<"Enter the angles to calculate their sines and angles: "<<endl;
    cin>>n;
    cin>>m;
    cout<<"Value of Sin< "<<n<" is : "; cal_sin(n);
    cout<<"\n";
    cout<<"value of Cos "<<n<<" is : ";cal_cos(n);
    cout<<"\n";
    cout<<"Value of Sin "<<m<<" is : "; cal_sin(m);
    cout<<"\n";
    cout<<"Value of Cos "<<m<<" is : ";cal_cos(m);
    cout<<"\n";
    return 0;
}


