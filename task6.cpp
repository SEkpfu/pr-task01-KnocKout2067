//#include <iostream>
//#include <string>
//#include <clocale>
//#ifdef _WIN32
//#include <windows.h>
//#endif
//using namespace std;
//
//int main() {
//	
//#ifdef _WIN32
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//#else
//	setlocale(LC_ALL, "Russian");
//#endif
//	string name1,name2;
//	double a, b, c, d, e, f, g, x, y, z, xx, yy, zz;
//	cout << "--- 1-�� �������� ---" << endl;
//	cout << "������� ������� 1-�� ��������� ";
//	cin >> name1;
//	if (name1.length() > 20)
//		cout << "������� ������� ������� "<<endl;
//	cout << "������� ���������� ������������ ����� ";
//	cin >> a;
//	cout << "������� ������ ��������� ������ ";
//	cin >> b;
//	cout << "������� % ������ ";
//	cin >> c;
//
//	x = a * b * (1 + c / 100);
//	y = x * 0.13;
//	z = x - y;
//
//	cout << endl << "--- 2-�� �������� ---" << endl;
//	cout << "������� ������� 2-�� ��������� ";
//	cin >> name2;
//	if (name2.length() > 20)
//		cout << "������� ������� ������� "<<endl;
//	cout << "������� ���������� ������������ ����� ";
//	cin >> d;
//	cout << "������� ������ ��������� ������ ";
//	cin >> e;
//	cout << "������� % ������ ";
//	cin >> f;
//	
//	xx = d * e * (1 + f / 100);
//	yy = xx * 0.13;
//	zz = xx - yy;
//
//	if (z < 1000)
//		cout << name1<<" ������� �� ���� ������ 1000 ������"<<endl;
//	if (zz < 1000)
//		cout << name2 << " ������� �� ���� ������ 1000 ������"<<endl;
//
//	if (y > 50)
//		cout << name1[0] << "-" << name1[name1.length()-1] <<" �������� ������ 50-�� ������ ������"<< endl;
//
//	if (yy > 50)
//		cout << name2[0] << "-" << name2[name2.length()-1] << " �������� ������ 50-�� ������ ������" << endl;
//
//	return 0;
//}