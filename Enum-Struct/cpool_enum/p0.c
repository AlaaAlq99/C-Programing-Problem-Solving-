#include <stdio.h>
#include <F:\IMT SC\cots\Librarry\standard data types _lib\STD_TYPES.h>
enum  Month {
	jan=1,
	feb,
	march,
	april,
	may,
	june,
	july,
	aug,
	sep,
	oct,
	nov,
	des,
};
void main( void ){
	enum Month m;
	m=jan;
	printf("jan = %d\n",m);
	printf("feb = %d\n",m+1);
	printf("june = %d\n",m+5);
	printf("aug = %d\n",m+7);
	printf("oct = %d\n",m+9);
	printf("des = %d\n",m+11);
}