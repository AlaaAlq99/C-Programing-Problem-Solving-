#include <stdio.h>
#include <F:\IMT SC\cots\Librarry\standard data types _lib\STD_TYPES.h>
typedef  struct  Distance {
	u16   feet;
	f32   inch;
}dis;
void main( void ){
	dis st_dis;
	dis nd_dis;
	dis sum_of_dis;
	printf("Please Enter Information of 1st Distance :\n");
	printf("Enter Feet : ");
	scanf("%d",&st_dis.feet);
	printf("Enter Inch : ");
	scanf("%f",&st_dis.inch);
	printf("Please Enter Information of 2nd Distance :\n");
	printf("Enter Feet : ");
	scanf("%d",&nd_dis.feet);
	printf("Enter Inch : ");
	scanf("%f",&nd_dis.inch);
	sum_of_dis.feet = st_dis.feet + nd_dis.feet ;
	sum_of_dis.inch = st_dis.inch + nd_dis.inch ;
	if (sum_of_dis.inch > 12.0){
        sum_of_dis.inch = sum_of_dis.inch - 12.0;
        ++sum_of_dis.feet;
    }
    printf("\nSum of distances = %d\' - %f\" ",sum_of_dis.feet, sum_of_dis.inch);
}