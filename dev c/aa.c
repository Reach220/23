#include <stdio.h>
int main(){
	int i,a,b;
	scanf("%d",&a);
	for(i=1;i<=3;i++){
		b=a%10;
		a/=10;
		printf("%d",b);
	}
	return 0;
}
