# include "main.h"
/**
* leet - Turns letter to integer
* @a: String to be converted
* Description: The above
* Return: Return value is pointer to dest
*/

char *leet(char *a)
{
	int i;
	int x;
	char cap[5] = {'A', 'E', 'O', 'T', 'L'};
	char low[5] = {'a', 'e', 'o', 't', 'l'};
	char num[5] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (a[i] != '\0')
	{
		for (x = 0; x < 5; x++)
		{
			if (a[i] == cap[x] || a[i] == low[x])
			{
				a[i] = num[x];
			}
		}
		i++;
	}
	return (a);
}
