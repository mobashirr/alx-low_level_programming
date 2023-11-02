#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * calculate_the_maximum - calculate the result of some bit opreators
 * in groups of two numbers
 * @n: the number
 * @k: the mazimum be less than this parameter if now don't consider it as max
*/
void calculate_the_maximum(int n, int k) {
	int i, j;
	int copy = n;
	int and = 0, or = 0, xor = 0, hand = 2;

/*the group of numbers (x,y),()... should be: 
/*for example if n = 3 
the groups will be : (1.2)(1.3) (2.3) 
if n = 5:
(1,2)(1,3)(1,4)(1,5)(2,3)(2,4)(2,4)(3,4)(3,5)(4,5)
*/
  for (i = 1; i < n; i++)
  {
	for (j = hand; j <= copy; j++)
	{
		(((i & j) > and) && ((i & j) < k)) ? (and = i & j) : (n += 0);
		(((i | j) > or) && ((i | j) < k)) ? (or = i | j) : (n += 0);
		(((i ^ j) > xor) && ((i ^ j) < k)) ? (xor = i ^ j) : (n += 0);
		// printf("%d:\n%d\n%d\n%d\n",i , and, or, xor);   -- check if the grougs are correct
	}

	hand++;
  }

	printf("%d\n%d\n%d\n", and, or, xor);
}

int main() {
	int n, k;
  
	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);
	return 0;
}