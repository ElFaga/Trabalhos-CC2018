#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *in;
	char buffer[256];
	in = fopen("readme.code.txt","r+");

	fgets(buffer,256,in);
	printf("%s",buffer);
	return 0;
}