#include <stdio.h>
int main(){
	int i,n;
	long S;
	S = 0, n = 1;
	printf("\nNhap so n:  ");
	scanf("%d",&n);
//	while(i<=n){
//		S = S+i;
//		i++;
do{
	S+=i;
	i++;

	}while(i<=n);
	 printf("\nTong S la : %d",S);
	}
	

