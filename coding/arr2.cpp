#include<iostream>
using namespace std ;
int main(){
	int arr[10];
	for(int i = 0; i < 10; i++){
		printf("enter value to store in array");
	    scanf("%d",&arr[i]);
	}

	for(int i = 0; i < 10; i++){
			printf("%d",arr[i]);
	}

    return 0;
}
