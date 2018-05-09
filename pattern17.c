/*
1
23
456
78910
*/
#include <stdio.h>

int main() {
	//code
	int i=0,j=0,n=0,k=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    for(j=1;j<=i;j++){
	        printf("%3d",k);
	        k++;
	    }
	    printf("\n");
	}
	return 0;
}
