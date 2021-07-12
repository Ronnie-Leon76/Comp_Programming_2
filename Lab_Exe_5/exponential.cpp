/*
 Name: Ochieng Ronnie Leon
 Reg No: J23_5553_2019
 EEE202: Computer Programming 2
  */
#include<iostream>
using namespace std;
class f_exponential{
	public:
		int num,x,val;
		// A recursive function to get x*y
		int multiply(int x, int y)
		{
			if(y)
				return (x + multiply(x, y - 1));
			else
				return 0;
		}

		// A recursive function to get a^b
		//Works only if a >= 0 and b >= 0 
		int pow(int a, int b)
		{
			if(b)
				return multiply(a, pow(a, b - 1));
			else
				return 1;
		}
		int f_recursive(){
			if(x==0)
                		return 1;
        		else if(x==1)
                		return num;
        		else if(x%2==0)
                		return pow(num,x);
			else if(x%2!=0)
				return pow(num,x);
			else
				return 0;
		}
		int f_iterative(int a,int b){
			int val = 1;
			for(int i=0;i<b;i++){
				val = val*a;
			}
			return val;
		}
};

int main()
{
	f_exponential expo_value;
	cout<<"Enter the number to calculate its value raised to an exponent: "<<endl;
	cin>>expo_value.num;
	cout<<"Enter the exponent to raise the value to: "<<endl;
	cin>>expo_value.x;
	cout<<"The value of the number raised to the exponent is:  "<<expo_value.f_recursive()<<endl;
	cout<<"The value of the number raised to the exponent using iteration is: "<<expo_value.f_iterative(expo_value.num,expo_value.x)<<endl;
	
}


