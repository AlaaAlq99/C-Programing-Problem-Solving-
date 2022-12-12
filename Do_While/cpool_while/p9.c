#include <stdio.h>
void main (void){
	int num,i=2;
	printf("enter the number:");
	scanf("%d",&num);   
	while ( i <= num ){ 
     if ( num == i ){
		 printf("this is number is prime"); 
		 break;
	 }
      else if ( num%i == 0 ) 
	  {		  
	  printf("this is number is not prime") ;
	   break;  
	  }
      i++; 
   }  
}