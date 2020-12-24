#include <iostream>

using namespace std;

int main()
{
	double k, p, sum;
	int n;
	cout << "Enter capital" << endl;
	cin >> k;
	cout << "Enter percentage" << endl;
	cin >> p;
	p = p / 100.0;
	cout << "Enter the sum" << endl;
	cin >> sum;


	// double x = 0.5;
	// s = log10(x);
	n = ceil(log((double)(sum / k)) / log((double)(1.0 + p)));
	cout << "Years: " << n << endl;
	system("pause");
}