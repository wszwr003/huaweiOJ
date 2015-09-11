#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 1100

int cmp(const void *p1,const void *p2)
{
	return *(char*)p1-*(char*)p2;
}

int compare_char(const void* a, const void* b)
{
    int arg1 = *(const char*)a;
    int arg2 = *(const char*)b;
 
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

int main(int argc, char const *argv[])
{
	char a[MAXSIZE];
	printf("plase input sort num&char:");
	gets(a);	

	qsort(a, strlen(a),sizeof(char),compare_char);
	printf("%s",a);

	return 0;
}