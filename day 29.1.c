#include<stdio.h>

int main (){
	
	FILE *p ;
	
	char a[50] ;
	
	p = fopen ("first.txt" , "a");
	
	if(p == NULL){
		
		printf("File can't open !!!");
		
	}
	else{
		
		printf("Enter text : ");
		gets(a);
		
		fputs("\n",p);
		fputs(a,p);
		
		fclose(p);
		
	}
	
	return 0 ;
}
