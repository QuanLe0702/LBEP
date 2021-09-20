#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main() {
	int i, vowels = 0, consonants = 0;
  	char s[20];

  	printf("Input a word: ");
  	gets(s);

  	for(i=0;s[i];i++)  {
  		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] =='o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U'){
		vowels++;
    	}
    	else{
    	consonants++;}
 	 	}
 	 	printf("Number of vowels in the string: %d \n", vowels);
 	 	printf("Number of consonants in the string: %d", consonants);
}

