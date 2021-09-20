  // Kiem tra day co phai so nguyen khong
  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
int main() {
	int n;
	printf(" *** Day la chuong trinh kiem tra so nguyen to*** \n");
	printf(" Nhap so nguyen n muon kiem tra: "); scanf("%d",&n);
	
	if(n<2){
		printf(" >>> So %d khong phai la so nguyen to <<< \n", n);
	}
	 int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf(" >>> So %d la so nguyen to <<<", n);
    }else{
        printf(" >>> So %d khong phai so nguyen to <<<", n);
    }
}


