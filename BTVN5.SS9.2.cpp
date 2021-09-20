	//Nhap 2 so va tinh tong cua cac so le ben trong 2 so
	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main() {
	int a, b;
	printf(" Nhap gia tri nguyen a: "); scanf("%d",&a);
	printf(" Nhap gia tri nguyen b: "); scanf("%d",&b);

	if(a<b){
		if(a%2 == 0){
		a++;
		}
		int sum = 0;
		for(int i=a; i<=b; i+=2){
			sum += i;
		}
		printf(" >>> Tong cac so le ben trong %d va %d = %d <<<", a, b, sum);
	} else {
		if(b%2 == 0){
		a++;
		}
		int sum = 0;
		for(int i=b; i<=a; i+=2){
			sum += i;
		}
		printf(" >>> Tong cac so le ben trong %d va %d = %d <<<", a, b, sum);
	}
	
}

