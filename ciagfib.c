//zadanie domowe dotyczace  Ciag Fibonacciego 
//grupaII INFORMATYKA-m³.asp Piotr Pobier¿yn
#include <stdio.h>


	int fib(int n)
{
	if(n == 0) return 0;
	if(n == 1) return 1;
	return fib(n-1)+fib(n-2);
}

int main()
{

	int n;
	char liczdalej;
	do
	{
    	printf("Podaj numer wyrazu ci¹gu Fibonacciego, do obliczenia: \n");
	scanf("%d", &n);
	printf("\nWartosc numeru wyrazu, ktory podales wynosi = %d\n", fib(n));
	printf("Czy liczyc dalej?? Jesli tak wcisnij - t\n");
	scanf(" %c",&liczdalej);
	}
	while(liczdalej=='t');
	return(0);
}
