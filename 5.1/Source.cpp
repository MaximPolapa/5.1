#include <iostream>
#include <cmath>
using namespace std;
double g(const double x, const double y);

int main()
{
	double r, s;

	cout << "r = "; cin >> r;
	cout << "s = "; cin >> s;
	double c = (pow(g(r, s * s + 1), 2) + g(1, r * r + s)) / (1 + pow(g(1, r * s), 2));
	cout << "c = " << c << endl;

	return 0;
	//pow(sin(x),1.5)
}
double g(const double x, const double y)
{
	return ((sin(x) * sin(x) + cos(y) * cos(y)) / (1 + abs(x * y)));
}