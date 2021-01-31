# include <stdio.h>
int main()
{
	int X=3,Y=4,Z=2;
	int ANS;
	ANS= X*Y/Z+Z++ - ++X;
	printf("%d",ANS);
	
}
