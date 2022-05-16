#include<stdio.h>
//userSnippedByGazui Fariya
//! ID : 213902067

//function Prototype
void StringLower(char s[]);

//main function
int main() {
	char s1[50];
	printf("\nEnter a String to show its lower case :");
    gets(s1);
    StringLower(s1);
    printf("\nLower case of the string is :%s", s1);
    printf("\n\n");
    return 0;
}


//function definition of string lower
void StringLower(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
}