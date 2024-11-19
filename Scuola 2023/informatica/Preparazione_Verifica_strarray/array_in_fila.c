#include <stdio.h>
#define ELEMENTI 10
int main(){
	int flag=1;
	int array[ELEMENTI]={1,2,3,19,5,6,7,8,9,10};
	
	for(int i=0;i<ELEMENTI; i++){
		
		if (array[i+1]<array[i]){
			flag=0;
			break;
		}
	}
	if(flag==0)
		printf("Non e' in ordine");
	else 
		printf("E' ordinato");				
	
}