#include <stdio.h>
#include <F:\IMT SC\cots\Librarry\standard data types _lib\STD_TYPES.h>
typedef  struct  Time_Periode {
	u8 hours;
	u8 minutes;
	u8 seconds;
}time_per;
void main( void ){
	time_per start_time;
	time_per stop_time;
	time_per differ_time;
	
	printf("Please Enter Start Time :\n");
	scanf("%d%d%d",&start_time.hours,&start_time.minutes,&start_time.seconds);
	
	printf("Please Enter Stop Time :\n");
	scanf("%d%d%d",&stop_time.hours,&stop_time.minutes,&stop_time.seconds);
	
	differ_time.hours      = start_time.hours   - stop_time.hours ;
	differ_time.minutes    = start_time.minutes - stop_time.minutes ;
	differ_time.seconds    = start_time.seconds - stop_time.seconds ;
    printf("\n Differance Between Two Times Is : %d : %d : %d",differ_time.hours,differ_time.minutes,differ_time.seconds);
}