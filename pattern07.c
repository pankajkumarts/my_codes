/*
 321
 321
 321
*/

#include <stdio.h>

int main() {
	//code
	int n=0,a=0;
    int i=0,j=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    for(j=n;j>=1;j--){
	       printf("%d",j);
	    }
	    printf("\n");
	}
	return 0;
}
