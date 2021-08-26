#include<iostream>
using namespace std;
double f_addition(double x,double y){
	double sum;
	sum = x + y;
	return sum;
}
float f_addition(float x, float y, float z){
	float total;
	total = x + y + z;
	return total;
}
int f_addition(int a, int b){
	int total;
	total = a + b;
	return total;
}
int main(){
	cout<<"The sum is: "<<f_addition(2,3)<<endl;
	cout<<"The sum is: "<<f_addition(4.5,5.0)<<endl;

}
