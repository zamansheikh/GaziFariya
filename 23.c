#include<stdio.h>
//userSnippedByGazi Fariya
//! ID : 213902067

int StrLen(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}


//function Prototype
void StringRev(char s[]);

//main function
int main() {
	char s1[50];
	printf("\nEnter a String to show its reverse :");
    gets(s1);
    StringRev(s1);
    printf("\nReverse of the string is :%s", s1);
    printf("\n\n");
    return 0;
}

//function definition of string reverse
void StringRev(char s[]) {
    int i, j;
    char temp;
    for (i = 0, j = StrLen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}


