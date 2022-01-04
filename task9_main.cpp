#include "strekalova.h"
#include "task9_func.cpp"

int main()
{
	cout << "x: ";
	cin >> strekalova::x;
	strekalova::f();
	cout << "f(x): " << setprecision(5) << strekalova::result << endl;
	system("pause");
	return 0;
}