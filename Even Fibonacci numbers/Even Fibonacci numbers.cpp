#include<stdio.h>

int main()
{
	int n[4000000];
	int j;
	int t = 0;
	n[1] = 1;
	n[2] = 2;
	t = n[1] + n[2];
	for (int i = 3; i < 4000000; i++)
	{
		n[i] = n[i - 1] + n[i - 2];
		t += n[i];
	}
	return 0;
}