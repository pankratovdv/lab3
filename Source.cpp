#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	long a, b;
	cout << "ВВедите 2 числа" << endl;
	cin >> a >> b;
	long c;
	c = a + b;
	cout << "a+b=" << c << endl;

	a = a + b; b = a - b; a = a - b;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	if ((a - b) % 2 == 0) { c = a * b; cout << "разница четная, a*b=" << endl; }
	else { c = a / b; cout << "разница НЕчетная, a/b=" << endl; }
	cout << "c=" << c << endl;

	cout << "ax2+bx+c=0" << endl;
	long D;
	D = b * b - 4 * a * c;
	if (D >= 0) {
		long x1;
		x1 = (-b + sqrt(D)) / 2 * a;
		long x2;
		x2 = (-b - sqrt(D)) / 2 * a;
		cout << "x=" << x1 << x2 << endl;
	}
	else { cout << "D<0, x not found" << endl; }


	int n, fact = 1, i;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		fact *= i;
	}
	cout << "n!=" << fact << endl;
	int fact2 = 1; i = 1;
	while (i <= n)
	{
		fact2 *= i;
		i = i++;
	}
	cout << "n!=" << fact2 << endl;

	int fact3 = 1; i = 1;
	do
	{
		fact3 = i++;
	} while (i <= n);
	cout << "n!=" << fact2 << endl;

	system("pause");
}