#include <bits/stdc++.h>
using namespace std;
// Function Max:
int max(int a, int b, int c) {
	int mx = a;
	if(mx<b) {
		mx = b;
	}
	if(mx<c) {
		mx = c;
	}
	return mx;
}
// Function Min:
int min(int a, int b, int c) {
	int mn = a;
	if(mn>b) {
		mn = b;
	}
	if (mn>c) {
		mn = c;
	}
	return mn;
}
// Function Factorial:
int factorial(int n) {
	if(n<=1) {
		return 1;
	} else {
		return n * factorial(n-1);
	}
}
// Function Fiboancci:
int fiboancci(int n) {
	if(n==0||n==1) {
		return n;
	} else {
		return fiboancci(n-2) + fiboancci(n-1);
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// Functions In Programming Language
	/*
		A function is a named, reusable block of code that performs a specific task.
		It can take inputs (parameters), process them, and optionally give back an output (return value).
		You write it once and call it as many times as you need.
	*/
	// Function: Max, Min
	cout<<"The Minimum Between 5, 0, 15 Is "<<min(5, 0, 15)<<endl;
	cout<<"The Maximum Between 5, 10, 15 Is "<<max(5, 10, 15)<<endl;
	
	// Function: Factorial
	cout<<"The Result Of Factorial For 5 Is "<<factorial(5)<<endl;
	
	// Function: Fiboancci
	/*
	 Input    : 0 1 2 3 4 5 6 7
	 Fiboancci: 0 1 1 2 3 5 8 13
	*/
	cout<<"The Result Of Fiboancci For 6 Is "<<fiboancci(6)<<endl;
	
	return 0;
	system("PAUSE");
}
