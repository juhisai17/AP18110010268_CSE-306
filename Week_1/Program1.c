#include<stdio.h>
void main ()
{
	int st= 0, i = 0;
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
					st = 2;
				else
				{
					printf ("The given token is INVALID");
					exit (0);
				}
				break;
			case 1:
				if (str == 'a')
					st = 0;
				else if (str == 'b')
					st = 3;
				else
				{
					printf ("The given token is INVALID");
					exit (0);
				}
				break;
			case 2:
				if (str == 'a')
					st = 3;
				else if (str == 'b')
					st = 0;
				else{
					printf ("The given token is INVALID");
					exit (0);
				}
				break;
			case 3:
				if (str == 'a')
					st = 2;
				else if (str == 'b')
					st = 1;
				else
				{
					printf ("The given token is INVALID");
					exit (0);
				}
				break;
		}
	}
	if (st == 0)
		printf ("\nString is accepted");
	else
		printf ("\nString is not accepted");
}
