#include <stdio.h>
int main(){
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	char s[4];
	scanf("%s",s);
	if(b>=a){
		t=a;
		a=b;
		b=t;
	}
	if(c>=a){
		t=a;
		a=c;
		c=t;
	}
	if(c>=b){
		t=b;
		b=c;
		c=t;
	}//±»¥Û–° 
	switch(s[0]){
		case 'A':
			printf("%d ",c);
			break;
		case 'B':
			printf("%d ",b);
			break;
		case 'C':
			printf("%d ",a);
			break;
	}
	switch(s[1]){
		case 'A':
			printf("%d ",c);
			break;
		case 'B':
			printf("%d ",b);
			break;
		case 'C':
			printf("%d ",a);
			break;
	}	
	switch(s[2]){
		case 'A':
			printf("%d ",c);
			break;
		case 'B':
			printf("%d ",b);
			break;
		case 'C':
			printf("%d ",a);
			break;
	}
	return 0;
}
