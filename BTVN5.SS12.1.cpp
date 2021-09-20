#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main() { 
	int n, num[10];
	while(n<=1 || n>10){
	printf("Co bao nhieu so nguyen muon so sanh (toi da 10): ");scanf("%d",&n);
	}	
	for(int i=0; i<n; i++){
		printf("Nhap so thu %d: ", i+1); scanf("%d",&num[i]);
	}

	int max = num[0];
	int min = num[0];
	for(int i=0; i<n; i++){
		max = max>num[i]?max:num[i];
		min = min<num[i]?min:num[i];
	}
	printf(" Gia cao nhat la: %d \n", max);
	printf(" Gia thap nhat la: %d \n", min);
}
