#include <iostream>
using namespace std;

int arr_1[5];
int *ptr;
int temp;

void print_array(int arr[5]){
	cout<<"You entered the following numbers: "<<endl;
        for(int i=0;i<=4;i++){
                cout<<arr[i]<<" "<<endl;
        }
}
void print_by_pointers(int *num){
	cout<<"You entered the following numbers: "<<endl;
        for(int i=0;i<=4;i++){
                cout<<"Memory: "<<num<<endl;
                cout<<"Number: "<<*num<<endl;
                num++;
                cout<<endl;
        }

}
void input_numbers(){
	cout<<"Enter the five numbers: "<<endl;
        for(int i=0;i<=4;i++){
                cin>>arr_1[i];
        }

}
void sort_desc(int arr[5]){
	for(int i=0;i<=4;i++){
		for(int j = i+1;j<=4;j++){
			if(arr[j]>arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout<<"The elements of the array sorted in a descending form are: "<<endl;
	for(int i=0;i<=4;i++){
		cout<<arr[i]<<endl;
	}
}
int main(){
	input_numbers();
	print_array(arr_1);
	print_by_pointers(arr_1);
	sort_desc(arr_1);
}
