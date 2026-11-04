#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// Working With Numbers
	
	// 1- Integers
	// int for numbers smallest
	// long long for numbers largest
	int x = 100000;
	long long y = 100000000;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	
	
	// 2- Modular Arithmetic ( remainder of division )
	int x1 = 17%2;// The Answer is 1 Because 17 = 8*2 + (1 Reminder)
	cout<<"Reminder Of Division is "<<x1<<endl;
	/*
	Rules :
	- (a+b)mode m = (a mode m + b mode m)mode m
	- (a-b)mode m = (a mode m - b mode m)mode m
	- (a*b)mode m = (a mode m * b mode m)mode m
	- (a/b)mode m = (a mode m / b mode m)mode m
	*/
	
	// Example : Factorial n!mode m
	int  x2 = 1;
	int factorial = 5;
	int m1 = 23;
	for(int i=1;i<=factorial;i++) {
		x2 = (x2*i)%m1;
	}
	cout<<"n!mode m is "<<x2%m1<<endl;// n!mode m is 5
	
	// Note: if(x2<0) x2 += m1 // If Answer Is Negative
	
	
	// 3- Floating Point Numbers
	// Ex: 10.23224
	float x3 = 10.23224;
	printf("%.3f\n", x3);// 10.232
	
	// For Get Epsilon: pow(10, -9)
	long double x4 = 0.0000000001, x5 = 0.0000000002;
	if(abs(x4-x5)<pow(10, -9)) {
		cout<<"x4 = x5 , "<<x4<<" = "<<x5<<endl;
	}
	
	
	return 0;
	system("PAUSE");
}
