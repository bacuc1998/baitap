//////tính dạng công thức : T(n)=X^N

#include <iostream>
using namespace std;
int main()
{
	int n,x;
	cout << "nhap vao so n" << endl;
	cin >> n;
	cout << "nhap vao so x" << endl;
	cin >> x;

	int i = 1, T = 1;
	while (i <= n)
	{
		T = T *x;
		i = i + 1;

	}
	cout << "ket qua la :" << T << endl;
	system("pause");
	return 0;
}