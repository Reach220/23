#include <stdio.h>
int main(){
	int n,i;
	unsigned long long sum,num;
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		num=i*num;
		sum+=num;
	}
	printf("%lld",sum);
	return 0;
}
