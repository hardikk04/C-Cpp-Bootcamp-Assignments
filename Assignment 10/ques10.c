// 10. Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)
// Program to print all prime factors
# include <stdio.h>
# include <math.h>
void primeFactors(int);
int main()
{
	int n;
    printf("Enter the number\n");
    scanf("%d",&n);
	primeFactors(n);
	return 0;
}

void primeFactors(int n)
{
	int i;
	for(i=2;n>1;i++)
	{
	while(n%i==0)
	{
		printf("%d ",i);
		n=n/i;
	}
	}
}


