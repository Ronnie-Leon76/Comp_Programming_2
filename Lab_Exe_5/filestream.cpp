#include<fstream>
#include<iostream>
using namespace std;
int main(){
	char data[100];

	// Open a file to write mode
	
	ofstream outfile;
	outfile.open("myfile.txt");

	cout<<"Enter your Student's registration number: "<<endl;
	cin.getline(data, 100);

	// Write inputted data to the file 
	outfile << data <<endl;

	cout<<"Enter your Student's registration number again: "<<endl;
	cin>>data;
	cin.ignore();

	// Write inputted data to the file
	outfile << data << endl;

	// Close the opened file
	outfile.close();

	// Open a file in read mode
	ifstream infile;
	infile.open("myfile.txt");

	cout<<"Reading from the file"<<endl;
	infile >> data;
	
	// Write the data to the screen
	cout<<data<<endl;

	//Again read the data from the file and display it
	infile >> data;
	cout<<data<<endl;

	// Close the opened file
	infile.close();

	return 0;


}
