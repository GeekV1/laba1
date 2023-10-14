#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
for (double x=0.1; x<=1; x+=0.6)
{
	for (double y=1; y<=2; y+=0.7)
	{
	if(x+y<=2)
	printf("x=%f y=%f V = %f \n", x, y, (fmax(abs(pow(sin(x),y)),pow((x+y),1/5))));
	else
	printf("x=%f y=%f V = %f \n", x, y, (pow(x,2)+pow(y,2)));
	}
}
    return 0;
}
