#include<stdio.h> //Tim so nghich dao tong quat
int main(){
	int n;
	int r,dao=0;
	printf("Nhap vao so nguyen n ");
	scanf("%d",&n);
	
	while(n!=0){
	    r=n%10;
		dao=dao*10+r;
		n=n/10;
		}
	printf("So dao la %d",dao);	
	
	
	
	
	}
	










	
