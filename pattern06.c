?*
 333
 222
 111
*/
#include <stdio.h>

int main() {
	//code
	int n=0,a=0;
    int i=0,j=0;
	scanf("%d",&n);
	for(i=n;i>=1;i--){
	    for(j=1;j<=n;j++){
	       printf("%d",i);
	    }
	    printf("\n");
	}
	return 0;
}
