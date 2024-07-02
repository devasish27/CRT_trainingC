#include<stdio.h>

int harshad(a){
	int x=a, s=0, d;

  while(x){
  d=x%10;
  s= s+d;
  x=x/10;
  }
  if(a%s == 0){
    return 0
      }
  else{
    return -1
      }
}

int main(){
}


//another program

