#include<stdio.h>
 int helper(int n,int k){
        if(n==1)
            return 0;
        return (helper(n-1,k) + k) % n;
    }
    int josephus(int n, int k) {
        return helper(n,k)+1; 
    }

int main(){
    int n,k;
    printf("Enter the number of peoples: ");
    scanf("%d",&n);
	printf("Enter the count value to skip peoples: ");
    scanf("%d",&k);
	printf("The Winner will be at the positon %d.", josephus(n, k));
	return 0;
}

/* Time Complexity : O(n)  Space Complexity : O(1) */