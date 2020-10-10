#include <stdio.h>
int main(){
	int a,i=0;
	scanf("%d",&a);
	while(a>1){
		if(a%2==0){
			a/=2;
			i++;
		}else{
			a=a/2+1;
			i++;
		}
		printf("%d",i);
	}
	return 0;
}
