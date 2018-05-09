/*
     *
    **
   ***
 */
 
 #include <stdio.h>

void main() {
	int i,j,k,n;
	//scanf("%d",&n);
	for (i=1; i<=n; i++) {
		for (j=n; j>i; j--) {
			printf(" ");
		}
		for (k=1; k<=i; k++) {
			printf("%d",k); //printf star for star pattern; printf "i" for 1 22 333; printf "j" for 1 12 123
		}
		printf("\n");
	}
}
