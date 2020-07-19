//CHALLENGE = FUNCTIONS 
//calculation ofsum of digits of a number using recursion function


#include<stdio.h>
int recurse(int num)//formal parameter
{
	int digit,s,t;
	//4. base condition
	if(num==0)
	{
		return;
	}
	//5. recursion condition
	else
	{
	    t = num % 10;
	    num = num/10;
	    return (t + recurse(num));//input: 1234 has t = 4 and num = 123 and return (4 + recurse(123))
	}
}
main()
{
	int n,sum;
	//1. Take a input from the user
	printf("Enter any digit number: \n");
	scanf("%d",&n);
	//2. Pass the number as an argument in recursion function
	sum = recurse(n);//actual parameter
	printf("Input Number: %d \nOutput: \nSum of digits: %d",n,sum);
	return 0;
}
