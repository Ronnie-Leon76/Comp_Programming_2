#include<stdio.h>
int main(){
	int numbers[4];
	printf("Enter four numbers: \n");
	for(int i=0;i<=3;i++){
		scanf("%d", &numbers[i]);
	}
	printf("You have entered the following numbers: \n");
	for(int i=0;i<=3;i++){
		printf("%d \n", numbers[i]);
	}
	int smallest = numbers[0];
	for(int i=0;i<=3;i++){
		if(numbers[i]<smallest){
			smallest = numbers[i];
		}

	}
	printf("The smallest number is: %d",smallest);
}
