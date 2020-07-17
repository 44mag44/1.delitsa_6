/*
	Докажите,что произведение трех последовательных
	натуральных чисел делиться на 6
*/
/*

#include <stdio.h>

int main()
{
	int a=1; // answer
	int k=0;	 // count   1*2 =2 , 3*2=6, 4*6 = 24
	printf("k:");
	if(scanf("%d", &k))
	{
		if(k > 0)
		{
			for(int i=3; i>0;i--, k++)
				a*=k;
			printf("a = %d\n", a);
			a/=6;
			printf("6 / 6 = %d - okey\n", a);
		}
		else perror("Not a natural number");
	}
	else perror("scanf()");

	return 0;
}
*/





/*
	Докажите,что произведение двух последовательных
	четных чисел делиться на 4 
*/

#include <stdio.h>

int main()
{
	int chet=0;
	int nchet=0;	
	int k=0;
	printf("k: ");
	if(scanf("%d", &k))
	{
		if(!(k%2))	// чет
		{
			chet=(2*k)/4;
			printf("chet = (2*k):4\n");
			printf("answer = %d\n", chet);
		}
		else if(k%2) 	// нечет
		{
			nchet=(2*(k-1))/4;
			printf("nchet = (2*(k-1)):4\n");
			printf("answer = %d\n", nchet);
		}
		else perror("=(");
	}
	else perror("scanf()");

	return 0;
}
