#include<stdio.h>

int main (){
	
	FILE *p ;
	
	char a[50] ;
	
	p = fopen ("first.txt" , "r");
	
	if(p == NULL){
		
		printf("File can't open !!!");
		
	}
	else{
		
		fgets(a,50,p);
		
		printf("%s",a);
		
		fclose(p);
		
	}
	
	return 0 ;
}
