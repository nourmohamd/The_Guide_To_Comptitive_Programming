#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// Calculation Rules In Time Complexity
	/*
		The time complexity of an algorithm estimates how much time the algorithm will use for some input.
		The idea is to represent the efficiency as a function
		whose parameter is the size of the input. By calculating the time complexity, we
		can find out whether the algorithm is fast enough without implementing it.
	*/
	/*
		Calculation Rules
		=================
		The time complexity of an algorithm is denoted O(···) where the three dots
		represent some function. Usually, the variable n denotes the input size. For
		example, if the input is an array of numbers, n will be the size of the array, and if
		the input is a string, n will be the length of the string
	*/
	/*
		Loops
		=====
		A common reason why an algorithm is slow is that it contains many loops that go
		through the input. The more nested loops the algorithm contains, the slower it is.
		If there are k nested loops, the time complexity is O(n^k).
	*/
	// Example: the time complexity of the following code is O(n1):
	int n1 = 100;
	for (int i = 1; i <= n1; i++) {
		// code
	}
	// Example: And the time complexity of the following code is O(n2*n3):
	int n2 = 10, n3 = 100;
	for (int i = 1; i <= n2; i++) {
		for (int j = 1; j <= n3; j++) {
		// code
		}
	}
	
	return 0;
	system("PAUSE");
}
