#include<stdio.h>

int sum(int x, int y){
	return (float)x+y; //typecast
}

int main(){
	float a=10, b=2, s;
	s= sum(a,b);
	printf("%0.1f", s); //12.0
}
