#include <stdio.h>
#include <stdlib.h>
double calc(double c, double d, long s);
double f(double x);
double g(double y);
int main()          //execution of program starts here
{
	double a, b, area;   //initalization of variables
	int n;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%d", &n);
	area = calc(a, b, n);  //calling of calc() function     
	printf("%.4lf", area);
	return 0;          //end of program
}
double f(double x)   // defination of function f 
{
	double v;
	double u = -1 * x*x*x;
	return u;
}
double g(double y)   //defination of function g
{
	double v;
	v = (2 * y*y*y) - (y*y) - (5 * y);
	return v;           //here it returns value of v 
}
double calc(double c, double d, long s)   //defination of function calc
{
	double sub, r, p, area = 0.0;
	sub = (1.0*(d - c)) / s;
	long i = 0.0;
	while (i < s)
	{
		r = f(c + i * sub);
		p = g(c + i * sub);
		if (p > r)
			area = area + (p - r);
		else
			area = area + (r - p);
		i++;
	}
	return area;        //return area of region
}