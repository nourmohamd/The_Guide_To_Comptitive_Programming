#include <bits/stdc++.h>
// Use All Library In C++

using namespace std;


int main() {
	ios::sync_with_stdio(0);// 0|NULL For Faster Operations
	cin.tie(0);// 0|NULL Faster Input
	cout.tie(0);// 0|NULL Faster Output
	
	
	
	// For Input & Output Operations
	int x = 1;
	// Method 1
	cin>>x;
	cout<<"The Number x = "<<x<<endl;
	// Method 2
	int y = 1, z = 1;
	scanf("%d %d", &y, &z);
	printf("The Number y = %d, And z = %d\n", y, z);
	
	// Getline Method In String
	string s1;
	getline(cin, s1);
	cout<<"Word Is "<<s1<<endl;
	
	// Loop For Inputing Numbers And Click On $ For Out Inputing Mode
	int t;
	while(cin>>t) {
		cout<<"t = "<<t<<endl;
	}
	
	/*
	For Take Input Data From File :
	------> freopen("input.txt", "r", stdin);
	For Show Result In File :
	------> freopen("output.txt", "w", stdout);
	Then :
	int n;
	cin>>n;
	cout<<n;
	*/
	
	return 0;
	system("PAUSE");
}
