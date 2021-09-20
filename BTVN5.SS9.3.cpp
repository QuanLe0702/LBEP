	//Fibonacci series. (1,1,2,3,5,8,13,.........)
	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main() {
	int n, t1=0, t2=1, term=0;
	printf(" ***Chuong trinh xuat ra Fibonacci series*** \n");
	printf(" Nhap khoang gioi han: "); scanf("%d",&n);
	
	printf("Fibonacci Series: %d, %d, ", t1, t2);
	term = t1 + t2;
	
	while (term <= n) {
    printf("%d, ", term);
    t1 = t2;
    t2 = term;
    term = t1 + t2;
  }
  return 0;
}

