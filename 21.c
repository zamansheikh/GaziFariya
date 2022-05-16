#include<stdio.h>
//userSnippedByGazui Fariya
//! ID : 213902067

int StrLen(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

//function Prototype
void concat(char[], char[]);

//main function
int main() {
	char s1[50], s2[30];
	printf("\nEnter String 1 :");
	gets(s1);
	printf("\nEnter String 2 :");
	gets(s2);
	concat(s1, s2);
	printf("\nConcated string is :%s", s1);
    printf("\n\n");
    return 0;
}

//function definition of concatenation
void concat(char s1[], char s2[]) {
	int i, j;
	i = StrLen(s1);
	for (j = 0; s2[j] != '\0'; i++, j++) {
		s1[i] = s2[j];
	}
	s1[i] = '\0';
}

