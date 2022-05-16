#include<stdio.h>
//userSnippedByGazi Fariya
//! ID : 213902067

//function Prototype
int StrLen(char s[]);

//main function
int main() {
	char s1[50];
	printf("\nEnter a String to show its length :");
    gets(s1);
    printf("\nLength of the string is :%d", StrLen(s1));
    printf("\n\n");
    return 0;
}

//function definition of String Length
int StrLen(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

