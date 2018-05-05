/*
 4321
 432
 43
 4
 */
 #include <stdio.h>

int main() {
	//code
	int n;
    int  i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    for(j=n;j>=i;j--){
	        printf("%d",j);
	    }
	    printf("\n");
	}
	return 0;
}
