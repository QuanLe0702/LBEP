	//multiplication table for a given number.
	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main() {
	int n;
	printf(" Nhap so nguyen n: "); scanf("%d",&n);
	printf(" >>> Bang cua chuong %d <<< \n", n);
	for(int i=1; i<=10; i++){
		printf(" %2d * %2d = %3d \n", n, i, n*i);
	}
}

