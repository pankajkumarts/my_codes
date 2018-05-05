/*
4444
333
22
1
*/
#include <stdio.h>

int main() {
	//code
	int n;
    int  i,j;
	scanf("%d",&n);
	for(i=n;i>=1;i--){
	    for(j=1;j<=i;j++){
	        printf("%d",i);
	    }
	    printf("\n");
	}
	return 0;
}
