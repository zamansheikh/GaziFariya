#include<stdio.h>
//userSnippedByGazui Fariya
//! ID : 213902067

//function Prototype
void StringUpper(char s[]);

//main function
int main() {
	char s1[50];
	printf("\nEnter a String to show its upper case :");
    gets(s1);
    StringUpper(s1);
    printf("\nUpper case of the string is :%s", s1);
    printf("\n\n");
    return 0;
}


//function definition of string upper
void StringUpper(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }
}