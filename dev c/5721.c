#include <stdio.h>
int main(){
	int n,i,j,cnt=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			cnt++;
		if(cnt<10){
			printf("0%d",cnt);
		}else{
			printf("%d",cnt);
		}
	}
	printf("\n");
}
	return 0;
} 
