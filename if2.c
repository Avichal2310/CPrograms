/*
Example 2 of if
Write a program to input a number and check it to be divisible by 5. If divisible by 5 then print 
Divisible by 5 else printf Not Divisible by 5.
*/
main(){
	int a;
	printf("Enter a no");
	scanf("%d",&a);
	if(a%5==0)
		printf("Divisible by 5",a);
	else
		printf("Not Divisible by 5",a);
}

