#include<stdio.h> //Tim so nghich dao tong quat
//int main(){
//	int n;
//	int r,dao=0;
//	printf("Nhap vao so nguyen n ");
//	scanf("%d",&n);
//	
//	while(n!=0){
//	    r=n%10;
//		dao=dao*10+r;
//		n=n/10;
//		}
//	printf("So dao la %d",dao);	
	
	//Cach khac
	
	int main(){
		int n;
		printf("nhap so can tinh\n ");
		scanf("%d",&n);
		int n2=0;
		for( ; n!=0 ;n/=10){
			
			n2=n2*10+(n%10);
			//nhanh yes
			}
		//nhanh no
		printf("so nghich dao la: %d",n2);
		
		}
	
	
	
	










	
