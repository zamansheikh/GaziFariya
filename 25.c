#include<stdio.h>
//userSnippedByGazui Fariya
//! ID : 213902067

//function Prototype
void stringcpy(char s[], char t[]);

//main function
int main() {
	char s1[50], s2[30];
	printf("\nEnter a String to show its copy :");
    gets(s1);
    stringcpy(s1, s2);
    printf("\nCopied string is :%s", s2);
    printf("\n\n");
    return 0;
}

//function definition of string copy
void stringcpy(char s[], char t[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        t[i] = s[i];
    }
    t[i] = '\0';
}

