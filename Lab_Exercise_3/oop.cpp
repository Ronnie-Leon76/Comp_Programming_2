#include <iostream>
using namespace std;

class Box {
	public:
		double length; //length of a box
		double breadth; // breadth of a box
		double height; // height of a box
		double getVolume(void) {
			return length*breadth*height;
		}
};


int main(){
	Box Box1;
	Box Box2;
	double volume = 0.0;

	Box1.height = 5.0;
	Box1.length = 6.0;
	Box1.breadth = 7.0;

	Box2.height = 10.0;
	Box2.length = 12.0;
	Box2.breadth = 13.0;
	
	Box Box3;

	volume = Box1.getVolume();
	cout<<"Volume of Box1: "<<volume<<endl;

	volume = Box2.getVolume();
	cout<<"Volume of Box2: "<<volume<<endl;

	cout<<"Enter the length, breadth and height of the box: "<<endl;
	cin>>Box3.length>>Box3.breadth>>Box3.height;
	volume = Box3.getVolume();
	cout<<"Volume of Box3: "<<volume<<endl;
}
