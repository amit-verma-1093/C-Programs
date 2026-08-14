#include <stdio.h>

int main(){
	int i,n1,n2,cf,low;
	printf("enter the two number: ");
	scanf("%d%d",&n1,&n2);
    low=(n1<n2)?n1:n2;
	for(i=low;i>0;i--){
		if((n1%i==0 && n2%i==0)){
			cf=i;
            break;
		}
	}
	printf("the gcd is %d",cf);

    return 0;
}