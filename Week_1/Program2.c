#include<stdio.h>
void main ()
{
	int st = 0, i = 0;
	char str, str1[50];
	printf ("Enter a string:");
	scanf ("%s", str1);
	while ((str = str1[i++]) != '\0')
	{
		switch (st)
		{
			case 0:
				if (str == 'a')
					st = 1;
				else if (str == 'b')
					st = 3;
				else
				{
					printf ("The given token is INVALID\n");
					exit (0);
				}
				break;
			case 1:
				if (str == 'a')
					st = 2;
				else if (str == 'b')
					st = 3;
				else
				{
					printf ("The given token is INVALID\n");
					exit (0);
				}
				break;
			case 2:
				if (str == 'a')
					st = 2;
				else if (str == 'b')
					st = 3;
				else{
					printf ("The given token is INVALID\n");
					exit (0);
				}
				break;
			case 3:
				if (str == 'a')
					st = 1;
				else if (str == 'b')
					st = 4;
				else{
					printf ("The given token is INVALID\n");
					exit (0);
				}
				break;
			case 4:
				if (str == 'a')
					st = 1;
				else if (str == 'b')
					st = 4;
				else
				{
					printf ("The given token is INVALID\n");
					exit (0);
				}
				break;
		}
	}
	if (st == 2 || st == 4)
		printf ("String is accepted\n");
	else
		printf ("String is not accepted \n");
}
