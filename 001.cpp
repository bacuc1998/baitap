#include<iostream>
using namespace std;
int main()

{
	int r;
	float chuvi, dientichhv,dientichMC,thetichHC;
	cout << "nhập vào bán kính r";
	cin >> r;
	chuvi = 2 * r * 3.14;
	dientichhv = 3.14*pow(r, 2);
	dientichMC=4*3.14*pow(r, 2);
	thetichHC=(4/3)*3.14*pow(r, 2);
	cout << "diện tích hình tròn là" << dientichhv << endl;
	cout << "chu vi hinh tron la " << chuvi << endl;
	cout << "dien tich mat cau la" << dientichMC <<endl;
	cout << "the tich hinh cau la" << thetichHC << endl;

	system("pause");
	return 0;


}
