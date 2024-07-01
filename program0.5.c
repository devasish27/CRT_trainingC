#include <stdio.h>

int main() {
	int c,a=25;
  c=printf("%d",a); //25
	printf("\n%d",c); //2
	return 0;
} 

//another example

#include <stdio.h>

int main() {
	int n,x=0;
	scanf("%d",&n);
	
	if(n%4==0)printf("%d",1);
	
	else if(n%4==2) printf("%d",n+1);
	
	else if(n%4==3) printf("%d",0);
	
	else if(n%4==0) printf("%d",n);
		
	else printf("error");
	
	return 0;
}
