#include <stdio.h>

int main()
{
	int sum;
	int i=10;
	//adding printf 
	printf("modify through branch\n");
	for (i=0; i<10; i++)
	{		
		printf("Hello-World\n");
		if (i==10)
			printf("successful\n");
		else
			printf("opps! something went wrong\n");
	}

	return 0;
}

