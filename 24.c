#include<stdio.h>
//userSnippedByGazi Fariya
//! ID : 213902067

//function Prototype
void StringCmp(char s[], char t[]);

//main function
int main() {
	char s1[50], s2[30];
	printf("\nEnter a String1 to compere :");
    gets(s1);
    printf("\nEnter a String2 to compere :");
    gets(s2);
    StringCmp(s1, s2);
    return 0;
}

//function definition of string compare
void StringCmp(char s[], char t[]) {
    int i;
    for (i = 0; s[i] != '\0' && t[i] != '\0'; i++) {
        if (s[i] != t[i]) {
            break;
        }
    }
    if (s[i] == '\0' && t[i] == '\0') {
        printf("\nBoth strings are equal");
    } else {
        printf("\nBoth strings are not equal");
    }
}

