#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int a[] = {1,1,2,3,5,8,13,21,34,55,89};
	int* x[] = {a,a+2,a+3,a+5,a+7};
	int** ap = x+2;
	printf("%d",*(*(ap+1)+1));
	return 0;
}