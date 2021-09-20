#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main() {
	char name[7][10];
	strcpy(name[0], "George");
	strcpy(name[1], "Albert");
	strcpy(name[2], "Tina");
	strcpy(name[3], "Xavier");
	strcpy(name[4], "Roger");
	strcpy(name[5], "Tim");
	strcpy(name[6], "William");
	
	for(int a=0; a<6; a++){
			printf("Ten sv thu %d: %s \n", a+1, name[a]);
		}

	printf("\n *** Xep lai ten nvien theo thu tu alphabet *** \n");
	for(int i=0; i<6; i++){
		for(int j=0; i<7; i++){
			if(strcmp(name[i], name[j]) < 0) {
				char temp[100];
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}
	for(int b = 0; b < 7; b++) {
		printf(">>> %d. %s <<<<\n", b+1, name[b]);
	}
}

