#include <bits/stdc++.h>
using namespace std;
int main() {
	// Mathematics In Programming
	// 1- Sum Formulas
	// x^n(x start from 1 to k) = 1^n + 2^n + 3^n + ... + k^n
	// first Rule For Sum Formulas is:
	/*
		x(sum x from 1 until n) = 1 + 2 + 3 + ... + n === n(n+1)/2
	*/
	// Second Rule For Sum Formulas is:
	/*
		x^2(x start from 1 to n) = 1^2 + 2^2 + 3^2 + ... + n^2 === n(n+1)(2n+1)/6
	*/
	
	// 2- Arithmetic Progression
	// is a sequence of numbers where the diffrent between any two consecutive numbers is constants, For Example: 3, 7, 11, 15
	// Constant here is 4 the for get sum of these numbers is:
	// third Rule For Sum Formulas is:
	/*
		a+ ..... +b(n numbers) = n(a+b)/2
		a: first number in this sequence
		b: last number in this sequence
		n: number of numbers
		
		in that example, we Implements Rule On it:
		4(3+15)/2 = 36
	*/
	
	// 3- Geometric Progression
	// is a sequence of numbers where the ratio between any two consecutive numbers is constant, For Example: 3, 6, 12, 24
	// The Syntax Of This rule is:
	// a + a.k + a.k^2 + a.k^3 + ... + b = (b.k - a)/(k - 1)
	
	
	// 4- Harmonic Sum: Time Complexity Upper Bound = O(Log2(n) + 1)
	// 1/x(x start from 1 to n) = 1/1 + 1/2 + ... + 1/n
	
	
	return 0;
	system("PAUSE");
}
