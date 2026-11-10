#include <bits/stdc++.h>
using namespace std;
// Ex1
typedef long long ll;
// Ex2
typedef vector<int> vi;
typedef pair<int, int> pi;
// Ex3 ( Macros )
#define co cout
#define cn cin
// Ex4 ( Macros )
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define SQ1(a) (a)*(a)
#define SQ2(a) a*a
int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
	
	// Shortening Code
	/*
		Shortening Code is ideal in Compatitive Programming ,
		Compatitive Programming Often define shorter names for datatypes
		and other parts of code .
		
		Type names:
		===========
		Using the command 'typedef' to give a shorter name .
		Examples In Above -^-^-^-^-
		You can also use typedef with stl such as: typedef vector<int> vi; |or| typedef pair<int, int> pi;
	*/
	ll a = 123456789;
	cout<<a<<endl;
	
	
	// Macros Theory :
	/*
		Another Way To Shorten Code is to <define> macros ===> Use #define new old keyword
		For Example Look To Above ^^^^^^^^^^
	*/
	co<<"From Macros Shorten"<<endl;
	// Macros Also Have Parameters It Can Shorten Loops And Other Structures: Look Above
	// - #define REP(i, a, b) for(int i=a;i<=b;i++)
	// - #define SQ(a) (a)*(a) != SQ(a) a*a Loop Above
	// Loops Example:
	int i;
	REP(i, 1, 10) {
		cout<<"i = "<<i<<endl;
	}
	/* It's Work:
		i = 1
		i = 2
		i = 3
		i = 4
		i = 5
		i = 6
		i = 7
		i = 8
		i = 9
		i = 10
	*/
	
	// Square Examples: By Priorities The Circle Brakits is better prioritie From Multiplication
	cout<<"Result Of SQ1 = "<<SQ1(2+2)<<endl;// Result Of SQ1 = 16 Because (2+2)*(2+2) = 16
	cout<<"Result Of SQ2 = "<<SQ2(2+2)<<endl;// Result Of SQ2 = 8 Because 2+2*2+2 = 8
	
	//	End Shortening Code...
	
	return 0;
	system("PAUSE");
}
