/*
 1111
 222
 33
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
	        printf("%d",i);
	    }
	    printf("\n");
	}
	return 0;
}
