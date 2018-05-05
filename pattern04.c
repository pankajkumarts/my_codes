/*
 AAAA
 BBBB
 CCCC
 DDDD
*/

#include <stdio.h>

int main() {
	//code
	char ch;
	int i=0,j=0;
	scanf("%c",&ch);
	for(i='A';i<=ch;i++){
	    for(j='A';j<=ch;j++){
	        printf("%c",i);
	    }
	    printf("\n");
	}
	return 0;
}
