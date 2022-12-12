#include <stdio.h>
#include <F:\IMT SC\cots\Librarry\standard data types _lib\STD_TYPES.h>
typedef  struct  Number {
	u32 num;
}num;
u32 Multiplication (num first_value ,  num second_value);
void main( void ){
	num st_num;
	num nd_num;
	u32 value;
	printf("\nInput Two Numbers :");
    scanf("%d%d",&st_num.num,&nd_num.num);
	
    value = Multiplication(st_num, nd_num);

    printf("\n Value of Multiplication = %d\n", value);
}
u32 Multiplication(num first_value ,  num second_value){
return(first_value.num * second_value.num);
}