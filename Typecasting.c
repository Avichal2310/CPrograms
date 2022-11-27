/*
Write a program to input two integer values and show division of those numbers
as floating value.
*/
main(){
	int m,n;
	float d;
	printf("Enter two no");
	scanf("%d%d",&m,&n);
	d=(float)m/n; // type cast operator
	printf("division of %d and %d is %f",m,n,d);
}

