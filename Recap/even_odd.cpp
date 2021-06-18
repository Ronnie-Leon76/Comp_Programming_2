/*Name: Ochieng Ronnnie 
Registration No: J23/5553/2019
*/
#include <iostream>

using namespace std;
int arr[5];
int main()
{
    for(int i=0;i<=4;i++){
        cout<<"Enter the number: "<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
         if(arr[i]%2 == 0){
            cout<<arr[i]<<" is an even number "<<endl;
        }
        else{
            cout<<arr[i]<<" is an odd number "<<endl;
        }
    }


    return 0;
}
