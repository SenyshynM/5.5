// Лабораторна робота № 5.5
#include <iostream>
#include <cmath>
using namespace std;

double f(int x, int n, int level, int& depth)
{
	if (level > depth)
		depth = level;
	cout << " level = " << level << endl;

	if (n == 0)
	{
		return 1;
	}
	
	if (n > 0)	
	{
		return x * f(x, n - 1, level+1, depth);
	}
	
	if (n < 0)	
	{
		return 1 / (x * f(x, abs(n) - 1, level+1, depth));
	}
}

int main()
{
	int x, n, level, depth = 0;
	cout << "x = "; cin >> x;
	cout << "n = "; cin >> n;

	cout << "f = " << f(x, n, 1, depth) << endl;
	cout << "depth = " << depth << endl;

	return 0;
}