#include <iostream>
using namespace std;
class Fibo {
	public:
		int terms;
		int fib[terms];
		void f_inputs(){
			cout<<"Enter the number of terms: "<<endl;
			cin>>terms;

		}
		int f_fibo_gen(int fib1[int n]){
			fib1[0]=0;
			fib1[1]=1;
			for(int i=2;i<n;i++){
				fib1[i] = fib1[i-1] + fib1[i-2];
			}
		}
		int f_output_unsorted(int fib1[int n]){
			int temp;
			for(int i=0;i<n;i++){
				for(int k=i+1;k<n;k++){
					if(fib1[k]<fib1[i]){
						temp=fib1[i];
						fib1[i]=fib1[k];
						temp=fib1[k];
					}
				}
			}
			cout<<"Unsorted elements of the fibonacci sequence: ";
			for(int i=0;i<n;i++){
				cout<<fib1[i]<<",";
			}
			cout<<endl;
			cout<<"Fibonacci ends"<<endl;
		}
		int f_output_sorted(int fib1[int n]){
			int temp;
			for(int i=0;i<n;i++){
				for(int k=i+1;k<n;k++){
					if(fib1[k]>fib1[i]){
						temp=fib1[i];
						fib1[i]=fib1[k];
						fib1[k]=temp;
					}
				}
			}
			cout<<"Sorted elements of the fibonacci sequence: ";
			for(int i=0;i<n;i++){
				cout<<fib1[i]<<",";
			}
			cout<<endl;
			cout<<"Fibonacci ends"<<endl;
		}
};
//int terms;
//int temp;
//int next_term=0;
int main(){
	Fibo Fibo1;
	Fibo1.f_inputs();
	Fibo1.f_fibo_gen(Fibo1.terms);
	//cout<<"Enter the number of terms: "<<endl;
	//cin>>terms;
	//int fib[terms];
	//fib[0]=0;
	//fib[1]=1;
	//for(int i=2;i<terms;i++){
		//fib[i] = fib[i-1] + fib[i-2];
	//}
	//cout<<"Fibonacci series: ";
	//for(int i=0;i<terms;i++){
		//cout<<fib[i]<<",";
	//}
	//cout<<endl<<endl;
	//for(int i=0;i<terms;i++){
		//for(int j=i+1;j<terms;j++){
			//if(fib[j]<fib[i]){
				//temp=fib[i];
				//fib[i]=fib[j];
				//fib[j]=temp;
			//}
		//}
	//}
	//cout<<"Unsorted elements of the fibonacci sequence: ";
	//for(int i=0;i<terms;i++){
		//cout<<fib[i]<<",";
	//}
	//cout<<endl<<endl;
	//for(int i=0;i<terms;i++){
		//for(int k=i+1;k<terms;k++){
			//if(fib[k]>fib[i]){
				//temp=fib[i];
				//fib[i]=fib[k];
				//fib[k]=temp;
			//}
		//}
	//}
	//cout<<"Sorted elements of the fibonacci sequence: ";
	//for(int i=0;i<terms;i++){
		//cout<<fib[i]<<",";
	//}
	//cout<<endl<<endl;
	
	//Fibo Fibo1;
	//Fibo1.f_inputs();
	
}
