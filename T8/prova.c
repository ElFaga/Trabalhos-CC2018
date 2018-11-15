#include <stdio.h>
int main(int argc, char const *argv[])
{
	int firstvalue = 5,secondvalue = 15;
	int *p1,*p2;

	p1 = &firstvalue;
	p2 = &secondvalue;

	*p1 = 10;
	*p2 = *p1;
	p1 = p2;
	*p1 = 20;

	printf("%d %d\n",firstvalue,secondvalue);
	return 0;
}