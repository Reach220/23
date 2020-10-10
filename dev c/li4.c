#include <stdio.h>
int main(){
	char str[27];
	scanf("%s",str[26]);
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=26;i++){
		printf("%c",str[n]);
		n++;
	}
	printf("%c%c",str[1],str[2]);
	return 0;
}
