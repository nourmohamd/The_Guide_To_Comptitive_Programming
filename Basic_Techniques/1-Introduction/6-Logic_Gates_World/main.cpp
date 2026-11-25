#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// Logic Gates World
	int a = 0, b = 0;
	// 1 - Negation: It is Operation For Reverse Logic 0 ---> 1, 1 ---> 0
	// In C++ Negation Symbol Is !a
	// Example:
	cout<<"The Result Of Negation For a Equal "<<!a<<endl;
	
	// 2 - Conjunction: It is Operation For Give 1 Only When a = 1 & b = 1 And Otherwise Give Me 0
	// In C++ Conjunction Symbol Is a&&b
	int result1 = a&&b;
	cout<<"The Result Of Conjunction For a && b Equal "<<result1<<endl;
	
	// 3 - Disjunction: It is Reverse The Conjunction It is Give Me 0 Only When a = 0 & b = 0 And Otherwise Give Me 1
	// In C++ Disjunction Symbol Is a||b
	int result2 = a||b;
	cout<<"The Result Of Disjunction For a || b Equal "<<result2<<endl;
	
	// 4 - Implication: It is Operation For Give Me 0 Only When a = 1 & b = 0 And Otherwise Give Me 1
	// In C++ Implication Symbol Is (!a||b)
	int m1 = 1, m2 = 0;
	cout<<"The Result Of Implication For !m1 || m2 Equal "<<(!m1||m2)<<endl;
	
	// 5 - Equivalence: It is A Gate For Equal Between Two Values
	// In C++ Equivalence Symbol Is (a == b)
	int m3 = 1, m4 = 1;
	cout<<"The Result Of Equivalence For m3 == m4 Is "<<(m3 == m4)<<endl;
	
	// 6 - xor: It is A Gate For Not Equal Between Two Values
	// In C++ xor Symbol Is (a xor b) Or (a ^ b)
	int m5 = 0, m6 = 1;
	cout<<"The Result Of XOR For m5 xor m6 Is "<<(m5 xor m6)<<endl;
	
	
	
	return 0;
	system("PAUSE");
}
