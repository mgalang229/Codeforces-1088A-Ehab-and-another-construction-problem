#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int x;
	cin >> x;
	int a=0, b=0;
	for(int i=1; i<=x; ++i)
		for(int j=1; j<=x; ++j)
			if(i*j>x&&i%j==0&&i/j<x) {
				a=i;
				b=j;
				break;
			}
	if(a==0||b==0)
		cout << -1 << "\n";
	else
		cout << a << " " << b << "\n";
}
