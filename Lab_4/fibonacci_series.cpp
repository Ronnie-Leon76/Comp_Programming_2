#include <iostream>
using namespace std;
class Fibo {
	public:
		int fib[40];
		int terms;
		int temp;
		void f_inputs(){
			cout<<"Enter the number of terms: "<<endl;
        		cin>>terms;

		}
		void f_fibo_gen(int n){
			fib[0]=0;
        		fib[1]=1;
        		for(int i=2;i<n;i++){
                		fib[i] = fib[i-1] + fib[i-2];
        		}
			cout<<endl;
        		cout<<"Fibonacci series: ";
        		for(int i=0;i<n;i++){
                		cout<<fib[i]<<",";
        		}
			cout<<endl;
			cout<<"Fibonacci ends"<<endl;


		}
		void f_output_unsorted(int n,int *num){
			cout<<endl;
			for(int i=0;i<n;i++){
                		for(int j=i+1;j<n;j++){
                        		if(fib[j]<fib[i]){
                                		temp=fib[i];
                                		fib[i]=fib[j];
                                		fib[j]=temp;
                        		}
                		}
        		}
        		cout<<"Unsorted elements of the fibonacci sequence: ";
        		for(int i=0;i<n;i++){
                		cout<<fib[i]<<",";
        		}
			cout<<endl;
			cout<<"FIbonacci ends"<<endl;

		}
		void f_output_sorted(int n, int *num){
			cout<<endl;
	 		for(int i=0;i<n;i++){
                		for(int k=i+1;k<n;k++){
                        		if(fib[k]>fib[i]){
                                		temp=fib[i];
                                		fib[i]=fib[k];
                                		fib[k]=temp;
                        		}
                		}
        		}
        		cout<<"Sorted elements of the fibonacci sequence: ";
        		for(int i=0;i<n;i++){
                		cout<<fib[i]<<",";
        		}
			cout<<endl;
			cout<<"Fibonacci ends"<<endl;

		}
};

int main(){
	Fibo fibo1;
	fibo1.f_inputs();
	fibo1.f_fibo_gen(fibo1.terms);
	fibo1.f_output_unsorted(fibo1.terms,fibo1.fib);
	fibo1.f_output_sorted(fibo1.terms,fibo1.fib);
}
