/*Name: Ochieng Ronnnie 
Registration No: J23/5553/2019
*/
#include <iostream>

using namespace std;
int workingHours,regularHours,overtimeHours;
int regularPay, overtimePay, totalPay;

int main()
{
    cout<<"Enter the number of hours you have worked for the entire week: "<<endl;
    cin>>workingHours;
    cout<<"Total Number of Hours worked: "<<workingHours<<endl;
    if(workingHours<=40){
        regularHours = workingHours;
        regularPay = regularHours*1000;
        totalPay = regularPay;
        cout<<"Regular Hours worked: "<<regularHours<<endl;
        cout<<"No overtime hours worked"<<endl;
        cout<<"Regular Pay: "<<regularPay<<endl;
        cout<<"No Overtime Pay"<<endl;
        cout<<"Total Pay: "<<totalPay<<endl;
    }
    else{
        regularHours = 40;
        overtimeHours = workingHours - regularHours;
        regularPay = regularHours*1000;
        overtimePay = (overtimeHours*1000*150)/100;
        totalPay = regularPay + overtimePay;
        cout<<"Regular Hours worked: "<<regularHours<<endl;
        cout<<"Overtime Hours: "<<overtimeHours<<endl;
        cout<<"Regular Pay: "<<regularPay<<endl;
        cout<<"Overtime Pay: "<<overtimePay<<endl;
        cout<<"Total Pay: "<<totalPay<<endl;


    }

    return 0;
}
