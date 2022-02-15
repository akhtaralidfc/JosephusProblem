#include <stdio.h>

int josephus(int n, int k)
{
	if (n == 1)
		return 1;
	else
		return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main()
{
	int n,k;
    printf("Enter the number of peoples: ");
    scanf("%d",&n);
	printf("Enter the count value to skip peoples: ");
    scanf("%d",&k);
	printf("The Winner will be at the positon %d.", josephus(n, k));
	return 0;
}

/* Time Complexity : O(n)  Space Complexity : O(n) */
