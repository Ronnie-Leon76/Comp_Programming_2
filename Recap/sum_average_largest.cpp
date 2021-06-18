/*Name: Ochieng Ronnnie 
Registration No: J23/5553/2019
*/
#include <iostream>

using namespace std;
int marks[3];
int average;
int sum = 0;
int largest = 0;

int main()
{
    for(int i=0;i<=2;i++){
        cout<<"Enter the marks: "<<endl;
        cin>>marks[i];
    }
    for(int i=0;i<=2;i++){
        if((marks[i]<0)&&(marks[i]>100)){
            cout<<" Invalid marks entered "<<endl;
        }
        else{
            if(marks[i]>=70){
                cout<<"The grade for "<<marks[i]<<" is an A"<<endl;
            }
            else if(marks[i]>=60){
                 cout<<"The grade for "<<marks[i]<<" is an B"<<endl;
            }
            else if(marks[i]>=50){
                cout<<"The grade for "<<marks[i]<<" is an C"<<endl;
            }
            else if(marks[i]>=40){
                cout<<"The grade for "<<marks[i]<<" is an D"<<endl;
            }
            else{
                 cout<<"The grade for "<<marks[i]<<" is an E"<<endl;
            }
        }
    }
    for(int i=0;i<=2;i++){
        sum = sum + marks[i];
        if(marks[i]>largest){
            largest = marks[i];
        }

    }
    average = sum/3;
    cout<<"The sum of the marks entered is: "<<sum<<endl;
    cout<<"The largest score of the marks entered is: "<<largest<<endl;
    cout<<"The average of the marks entered is: "<<average<<endl;
    return 0;
}
