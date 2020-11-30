//tính dạng công thức : 1^3+2^3+.....

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
		s = s + i*i*i;
		i = i + 1;

	}
	cout << "luy thua mu ba la :" << s << endl;
	system("pause");
	return 0;
}