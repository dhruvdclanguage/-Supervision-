#include<stdio.h>

int main (){
	
	FILE *p ;
	
	char a[50] ;
	
	p = fopen ("second.txt" , "a");
	
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
	
	p = fopen ("first.txt" , "r");
	
	if(p == NULL){
		
		printf("File can't open !!!");
		
	}
	else{
		
		fgets(a,50,p);
		
		printf("%s",a);
		
		fclose(p);
		
	}
	
	p = fopen ("second.txt" , "a");
	
	printf("%s",a);
	
	return 0 ;
}
