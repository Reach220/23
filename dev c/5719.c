#include <stdio.h>
int main(){
	int n,k,i,a=0,b=0;
	double sum=0.0,num=0.0;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++){
		if(i%k!=0){
			sum+=i;
			a++;
		}else{
			num+=i;
			b++;
		}
	}
	sum=sum*1.0/a;
	num=num*1.0/b;
	printf("%.1f %.1f",sum,num);
	return 0;
}
