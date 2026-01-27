#include <stdio.h>
#include <iostream>
#define COUNT 10

int main()
{
	/*

	*****
	*****
	*****
	*****
	*****

	*/
	const int NUMBER = 5; // »ó¼ö


	// printf("*****"); (x)
	// print("*"); (o)


	int i = 1;
	while (i < 26)
	{
		printf("*");
		if (i % 5 == 0)
		{
			printf("\n");
		}
		i++;
	}

	i = 0;
	while (i < COUNT)
	{
		int j = 0;
		while (j < COUNT)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}