#include <stdio.h>

int main(){
		int i,k;
		printf("Quanti tabellina vuoi?\n");
		scanf("%d",&k);
		for(i=1;i<=10;i++){
			printf("%d x %d= %d\n",k,i,k*i);
		}	

}