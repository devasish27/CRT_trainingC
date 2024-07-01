#include <stdio.h>

void main() {
    int a=0 , b=2;
    if(a=0)
    	b=0;
    else
		b*=10;
	
	printf("%d %d", a, b);   // 0,20
}


//another example

#include <stdio.h>

int main() {
	int x=0;
	
	do{
		x++;
	}
	
	while(x++>12);
	{
		printf("%d",x); //12
	}
	return 0;
}
