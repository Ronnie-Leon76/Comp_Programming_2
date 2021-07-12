/*
Name: Ochieng Ronnie Leon
Reg No: J23_5553_2019
EEE202:Computer Programming 2
*/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
        char reg_no[20];
        char sec_reg_no[20];
        ofstream dataFile;
        dataFile.open("myfile.txt");

        cout<<"Enter the Student's Registration Number: "<<endl;
        cin>>reg_no;
        dataFile << reg_no << endl;

        cout<<"Enter your registration once again: "<<endl;
        cin>>sec_reg_no;
        dataFile << sec_reg_no << endl;
        dataFile.close();

        ifstream infile;
        infile.open("myfile.txt");

        cout<<"Reading from the file"<<endl;

        infile >> reg_no;
        cout << reg_no << endl;

        infile >> sec_reg_no;
        cout << sec_reg_no << endl;

        char check_true[10] = "Match";
        char check_false[10] = "No Match";
	if (reg_no == sec_reg_no){
                ofstream outfile;
                outfile.open("myfile.txt");
                outfile << check_true << endl;

                ifstream in;
                in.open("myfile.txt");
                cout << check_true <<endl;

        }
        else {
                ofstream outfile;
                outfile.open("myfile.txt");
                outfile << check_false << endl;

                ifstream in1;
                in1.open("myfile.txt");
                cout << check_false << endl;
        }


        infile.close();

        return 0;
}


