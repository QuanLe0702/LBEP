#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main() {
	int a[5]={34, 45, 56, 67, 89};
	for(int i=0; i<5; i++){
		printf("\n %d \n",a[i]);
	}
	printf("\n");
	
	printf(" >>> reverses the array <<< \n");
	for(int j=4; j>=0; j--){
		printf("\n %d \n",a[j]);
	}
}

