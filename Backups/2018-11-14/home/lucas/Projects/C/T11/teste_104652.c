#include <stdio.h>


int main(int argc, char const *argv[])
{
	FILE *in;
	char buffer[256];
	in = fopen("readme.code.txt","r+");

	fscanf(in,"%s",buffer);
	printf("%s",buffer);
	return 0;
}