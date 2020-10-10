#include <stdio.h>
int main(){
	unsigned long long n;
	int a=1,b=1,c=0,i;
	scanf("%d",&n);
	if(n<=2){
		printf("1");
	}else{
	for(i=3;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	printf("%llu",c);
}
	return 0;
}
