#include <iostream>
#include <math.h>
using namespace std;
class Shape{
	public:
		double radius;
		double length;
		const double pi = 3.142;
		double f_circum_circle(void){
			return 2*pi*radius;
		}
		double f_area_circle(void){
			return pi*pow(radius,2);
		}
		double f_perimeter_square(void){
			return (2*radius)*4;
		}
		double f_area_square(void){
			return pow((2*radius),2);
		}

};
int main(){
	Shape Shape1;
	cout<<"Enter the radius of the circle: "<<endl;
	cin>>Shape1.radius;
	cout<<"The circumference of the circle is: "<<Shape1.f_circum_circle()<<endl;
	cout<<"The area of the circle is: "<<Shape1.f_area_circle()<<endl;
	cout<<"The perimeter of a square with length twice the radius of the circle is: "<<Shape1.f_perimeter_square()<<endl;
	cout<<"The area of a sqaure with length twice the circle's radius is: "<<Shape1.f_area_square()<<endl;
}

