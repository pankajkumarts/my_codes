/*
 ABCDE
 ABCDE
 ABCDE
 ABCDE
 ABCDE
*/

#include <stdio.h>

int main() {
	//code
	char ch;
    char i,j;
	scanf("%c",&ch);
	for(i='A';i<=ch;i++){
	    for(j='A';j<=ch;j++){
	        printf("%c",j);
	    }
	    printf("\n");
	}
	return 0;
}
