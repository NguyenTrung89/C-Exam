//Exercise 1: Write a program to enter three edges of the triangle from a keyboard. If all of values are valid, compute the area of the triangle, otherwise print out the error.

#include<stdio.h>
#include<math.h>

int main() {
	float a, b, c;
	float p, s;
	
	printf("Enter 3 edges of triangle:\n");
	scanf("%f%f%f", &a, &b, &c);
	
	if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("Area of the triangle is: %.2f", s);
	} else {
		printf("Not the three edges of the triangle!");
	}
	
	return 0;
}
