#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int s = 109, v, t;
	cin >> v >> t;
	cout << (s + (v * t % s)) % s;
	return 0;
}

