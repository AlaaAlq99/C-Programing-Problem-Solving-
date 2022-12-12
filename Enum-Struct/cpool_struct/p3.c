#include <stdio.h>
#include <F:\IMT SC\cots\Librarry\standard data types _lib\STD_TYPES.h>
typedef  struct  Store {
	u8  name[10];
	f32 prise;
	f32 quantity;
}store;
store Update (store product , u16 pri, f32 qun);
f32 Multilication (store final_value);
void main( void ){
	f32 prise_increment , value ;
	u32 quantity_increment ;
	store First_Product = {"XYZ", 25.75, 12};
	printf("\nInput increment values:");
    printf(" price increment and quantity increment\n");
    scanf("%f %d", &prise_increment,&quantity_increment);
	
	First_Product = Update (First_Product,prise_increment,quantity_increment);
	
	printf("Updated values of First Product\n\n");
    printf("Name : %s\n",First_Product.name);
    printf("Price : %f\n",First_Product.prise);
    printf("Quantity : %d\n",First_Product.quantity);

    value = Multilication(First_Product);

    printf("\n Value of the First Product = %f\n", value);
}
store Update(store product,u16 pri, f32 qun){
product.prise    += pri;
product.quantity += qun;
return(product);
}
f32 Multilication(store final_value){
return(final_value.prise * final_value.quantity);
}