/*Name: Ochieng Ronnie 
Registration No: J23/5553/2019
*/
#include <iostream>

using namespace std;
int arr[5];
int even[4], odd[4];
int even_count = 0;
int odd_count = 0;
int temp;
void f_input_nums()
{
    for(int i=0;i<=4;i++){
        cout<<"Enter the number: "<<endl;
        cin>>arr[i];
    }

}
void f_numbers_entered()
{
	cout<<"You entered the following numbers: "<<endl;
	for(int i=0;i<=4;i++){
		cout<<arr[i]<<endl;
	}
}
void f_find_even()
{
    cout<<"The following unsorted numbers are even: "<<endl;
    for(int i=0;i<=4;i++){
        if(arr[i]%2 == 0){
            cout<<arr[i]<<endl;
	    even[even_count++]=arr[i];
    }

}
}
void f_find_odd(){
	cout<<"The following unsorted numbers are odd: "<<endl;
	for(int i=0;i<=4;i++){
		if(arr[i]%2!=0){
			cout<<arr[i]<<endl;
			odd[odd_count++]=arr[i];
		}
	}
}
void f_sort_even(){
	for(int i=0;i<even_count;i++){
		for(int j=i+1;j<even_count;j++){
			//swap greater element found
			if(even[j]>even[i]){
				temp = even[i];
				even[i] = even[j];
				even[j] = temp;
			}
		}
	}
	cout<<"The following numbers are even(sorted): "<<endl;
	for(int i=0;i<even_count;i++){
		cout<<even[i]<<endl;
	}
}
void f_sort_odd(){
        for(int i=0;i<odd_count;i++){
                for(int j=i+1;j<odd_count;j++){
                        //swap greater element found
                        if(odd[j]>odd[i]){
                                temp = odd[i];
                                odd[i] = odd[j];
                                odd[j] = temp;
                        }
                }
        }
        cout<<"The following numbers are odd(sorted): "<<endl;
        for(int i=0;i<odd_count;i++){
                cout<<odd[i]<<endl;
        }
}

int main()
{
    f_input_nums();
    f_numbers_entered();
    f_find_even();
    f_find_odd();
    f_sort_even();
    f_sort_odd();


    return 0;
}
