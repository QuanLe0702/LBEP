#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main() {
	int i,j;
	for(int i=7; i>=1; i--){
		for(int j=1; j<=i; j++){
			printf("* ");
		}
		
		printf("\n");
	}
}

