	//print ueser's name as many times as his age
	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main() {
	int age, i, j;
	char ten[30];
	printf(" Ten cua nvien: "); gets(ten);
	printf(" Nhap tuoi cua nvien: "); scanf("%d", &age);
	printf("\n");
	for(i=0; i<age; i++){
		printf("%2d. %s \n", i+1, ten);
	}
}

