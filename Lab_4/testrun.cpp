/*
Name: Ochieng Ronnie Leon
Reg No: J23_5553_2019
EEE202:Computer_Programming_2
Lab_Exercise_4
*/

#include <iostream>
using namespace std;

class fibo
{
public:
	int term, i;
	int fib[50];
	int* ptr;
	
    
	void f_inputs()
	{
		cout << "Input the number of terms:" << endl;
		cin >> term;
	}

	void f_fibo_generate()
	{
		ptr = fib;
		fib[0] = 0;
		fib[1] = 1;
		for (i = 2; i < term; i++)
		{
			fib[i] = fib[i-1] + fib[i-2];
			
		}
		
		for (i = 0; i < term; i++)
		{
			cout << " " << *ptr;
			ptr++;
		}
		cout << endl;
	}

	void f_output_unsorted()
	{
		
		cout << "The fibonacci sequence in ascending order:" << endl;
		  
		f_fibo_generate();
	}

	void f_output_sorted()
	{
		ptr = fib;
		int j;
		int temp;
		cout << "The fibonnaci sequence in descending order :" << endl;
		for (i = 0; i < term-1; i++)
		{
			for (j = 0; j < term-1; j++)
			{
				if (fib[j] < fib[j +1])
				{
					temp = fib[j];
					fib[j] = fib[j + 1];
					fib[j + 1] = temp;

			    }
			}
			
		}
		for (i = 0; i < term; i++)
		{
			cout <<" "<< *ptr;
			ptr++;
		}
		cout<<endl;

	} 
};

int main()
{
	int* ptr;
	fibo fibo1;
	fibo1.f_inputs();
	fibo1.f_output_unsorted();
	fibo1.f_output_sorted();

	
	
}
