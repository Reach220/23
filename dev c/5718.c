#include <stdio.h>
int main(){
	int n,i,x=1000;
	int a[n];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i]<=x){
		x=a[i];	
		}
	}
	printf("%d",x);
	return 0;
}
