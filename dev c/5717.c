#include<stdio.h>
int main(){
	int a,b,c,t;
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
		b=t;
		b=c;
		c=b;
	}
	if(b+c<a){
		printf("Not triangle\n");
	}else if(b*b+c*c>a*a){
		printf("Acute triangle");
		if(b==c){
			printf("Isosceles triangle");
		}
		if(a==b && b==c){
			printf("Equlateral triangle");
		}
	}else if(b*b+c*c<a*a){
		printf("Obtuse triangle\n");
		if(b==c){
			printf("Isosceles triangle");
		}
		if(a==b && b==c){
			printf("Equlateral triangle");
		}
	}else if(a*a==b*b+c*c){
		printf("Right triangle\n");
		if(b==c){
			printf("Isosceles triangle");
		}
	}
	return 0;
}

