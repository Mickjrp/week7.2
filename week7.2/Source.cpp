#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>

char input[100];

int main()
{
	printf("Input: ");
	scanf_s("%s", input, sizeof(input));
	FILE* f = fopen("karaca.txt", "w");
	char v[] = { 'a','e','i','o','u' };
	char n[] = { '0','1','2','3','4' };

	int i = strlen(input);
	for (input[i];i >= 0;i--)
	{
		if (input[i] == v[0] || input[i] == v[1] || input[i] == v[2] || input[i] == v[3] || input[i] == v[4])
		{
			for (int k = 0;k <= 4;k++)
			{
				if (input[i] == v[k])
				{
					fprintf(f,"%c", n[k]);
				}
			}
			int k = 0;
		}
		else
		{
			fprintf(f,"%c", input[i]);
		}
	}
	fprintf(f,"aca");
	fclose(f);
	return 0;
}