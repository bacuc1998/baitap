S(n) = 1*1 + 2*2 + 3*3 + ... + (n-1)*(n-1) + n*n


#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap vao so n" << endl;
	cin >> n;

	int i = 1, s = 0;
	while (i <= n)
	{
		s = s+ i*i;
		i = i + 1;

	}
	cout << "ket qua la :" << s << endl;
	system("pause");
	return 0;
}