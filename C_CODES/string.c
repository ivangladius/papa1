#include <stdio.h>

int main()
{
	char name[][10] = { {'p','a', 'p', 'a'}};

	char *name2[] = {"Maximilian", "papa"};


	for ( int x = 0; x < 1; x++ )
	{
		printf("name: ");
		for ( int y = 0; y < 4; y++ )
		{
			printf("%c", name[x][y]);
		}
		puts("");
	}

	puts("");

	for ( int x = 0; x < 2; x++ )
		printf("name: %s\n", name2[x]);

	char *names[10] = { 0 };

	return 0;
}

	
	

	
	