#include <iostream>
using namespace std;


int num1;
int *ptr;

int main(){
	ptr = &num1;

	cout<<"Enter a number: "<<endl;
	cin>>num1;

	cout<<"You have entered the following number: ";
	cout<<num1;

	cout<<endl<<endl;

	cout<<"The address of the number is: ";
	cout<<&num1;
	cout<<endl<<endl;

	cout<<endl<<endl;

	cout<<"You entered the following number: ";
	cout<<*ptr;
	cout<<endl<<endl;

	cout<<"The address of the number is: ";
	cout<<ptr;
	cout<<endl<<endl;

	ptr++;
	cout<<"The next address of the number is: ";
	cout<<ptr;
	cout<<endl<<endl;
}
