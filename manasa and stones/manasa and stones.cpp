// manasa and stones.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

typedef long long ll;
set<ll> ans;

int main()
{
	ll n, a, b;
	int T;
	cin >> T;
	while (T--) {
		cin >> n >> a >> b;
		ans.clear();
		for (int i = n - 1, j = 0; i >= 0, j < n; i--, j++)
		{
			ans.insert(a*i + b * j);
		}
		for (set<ll>::iterator it = ans.begin(); it != ans.end(); it++)
			cout << *it << " ";
		cout << endl;
	}

    return 0;
}

