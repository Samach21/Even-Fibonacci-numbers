#include<stdio.h>

int main()
{
	long n[4000000];
	long t = 0;
	n[1] = 1;
	n[2] = 2;
	t = n[1] + n[2];
	for (long i = 3; i < 4000000; i++)
	{
		n[i] = n[i - 1] + n[i - 2];
		t += n[i];
		printf("\n%d", n[i]);
	}
	printf("Result: %d", t);
	return 0;
}