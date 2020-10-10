#include<stdio.h>
int main(){
	int a,b,c,t=0;
	scanf("%d%d%d",&a,&b,&c);
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
	}
	if(b+c<=a){
		printf("Not triangle\n");
	}else if(b*b+c*c>a*a){
		printf("Acute triangle\n");
	}else if(b*b+c*c<a*a){
		printf("Obtuse triangle\n");
	}else if(a*a==b*b+c*c){
		printf("Right triangle\n");
	}
	if(b+c>=a){
	if(b==c || a==b || a==c){
			printf("Isosceles triangle\n");
	}
	if(a==b && b==c){
			printf("Equlateral triangle\n");
		}
	}
	return 0;
}

