//Exercise 2: Write a upperCase() function to convert all characters in the input string to upper case.

#include<stdio.h>
#include <string.h>

void upperCase(char s[]) {
	int i;
	
	for (i = 0; i < strlen(s); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] -= ('a' - 'A');
		}
	}
}

int main() {
	char s[100];
	
	printf("Enter a string: ");
	fflush(stdin);
	gets(s);
	
	upperCase(s);
	printf("Upper case: ");
	puts(s);

	return 0;
}
