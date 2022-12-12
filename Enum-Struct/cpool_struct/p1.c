#include <stdio.h>
#include <F:\IMT SC\cots\Librarry\standard data types _lib\STD_TYPES.h>
typedef  struct  Complex_Num {
	f32   real;
	f32   imagine;
}com_num;
void main( void ){
	com_num st_com_num;
	com_num nd_com_num;
	com_num sum_of_com_num;
	
	printf("Please Enter 1st Complex Number :\n");
	printf("Enter Real : ");
	scanf("%f",&st_com_num.real);
	printf("Enter Imagine : ");
	scanf("%f",&st_com_num.imagine);
	
	printf("Please Enter 2nd Complex Number :\n");
	printf("Enter Real : ");
	scanf("%f",&nd_com_num.real);
	printf("Enter Imagine : ");
	scanf("%f",&nd_com_num.imagine);
	
	sum_of_com_num.real    = st_com_num.real    + nd_com_num.real ;
	sum_of_com_num.imagine = st_com_num.imagine + nd_com_num.imagine ;
	
    printf("\nSum of Two Complex Number is = %f + %f i ",sum_of_com_num.real, sum_of_com_num.imagine);
}