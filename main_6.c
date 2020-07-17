/*
	Докажите,что произведение трех последовательных
	натуральных чисел делиться на 6
*/

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
