#include <iostream>
using namespace std;

int num;
long int product;
int i;
long int recurse_factorial(int num){
	if(num<=1)
		return 1;
	else
		return num * recurse_factorial(num - 1 );
}
long int factorial(int num){
	product=1;
	while(num>1){
		product*=num;
		num--;
	}
	return product;
}

int main(){
	cout<<"Enter the number to compute the factorial: "<<endl;
	cin>>num;
	cout<<"The factorial of the number using the recursive function is: "<<recurse_factorial(num)<<endl;
	cout<<"The factorial of the number using the iterative function is: "<<factorial(num)<<endl;

	long int product1=1;
	while(num>1){
		product1*=num;
		num--;
	}
	cout<<"The factorial of the number is: "<<product1<<endl;

}
