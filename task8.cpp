//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	int n;
//	cout << "������� ���������� ���������� ";
//	cin >> n;
//	if (n <= 0)
//		cout << "������� ���� ����������"<<endl;
//	string* x = new string[n];
//	double* a = new double[n*3];
//	
//	double* d = new double[n];
//	double* e = new double[n];
//	double* f = new double[n];
//
//	cout << "������� ������ � ���������� " << endl;
//	for (int i = 0; i < n; i++) {
//		cout <<endl<< "�������� " << i + 1 << endl;
//		cout << "������� ������� ";
//		cin >> x[i];
//		cout <<endl<< "������� ���������� ������������ ����� ";
//		cin >> a[i*3];
//		cout << "������� ��������� ������ ";
//		cin >> a[i*3+1];
//		cout << "������� % ������ ";
//		cin >> a[i*3+2];
//		d[i] = a[i] * a[i*3+1] * (1 + a[i*3+2] / 100);
//		e[i] = d[i] * 0.13;
//		f[i] = d[i] - e[i];
//		cout << "����� ������������ ����� " << d[i] << endl;
//		cout << "����� " << e[i] << endl;
//		cout << "����� �� ���� " << f[i] << endl;
//		cout << "" << endl;
//	}
//
//	int min = 0;
//	double min_f = f[0];
//	for (int i = 1; i < n; i++) {
//		if (f[i] < min_f) {
//			min_f = f[i];
//			min = i;
//		}
//	}
//	
//	int max = 0;
//	double max_f = f[0];
//	for (int i = 1; i < n; i++) {
//		if (f[i] > max_f) {
//			max_f = f[i];
//			max = i;
//		}
//	}
//
//	int count = 0;
//	for (int i = 0; i < n; i++) {
//		if (f[i] > 50000)
//			count += 1;
//			cout << "�������� " << i + 1 << " ���������: " << f[i] << " ������" << endl;
//
//	}
//
//	double nalog = 0;
//	for (int i = 0; i < n; i++) {
//		nalog += e[i];
//	}
//
//	cout << "������ ���� ��������� " << min + 1 << ", � ��������� " << min_f << " ������" << endl;
//	cout<<"������ ���� ��������� "<<max+1<< ", � ��������� " << max_f << " ������" << endl;
//	cout << "����������, � �� ������ 50000 ��� - " << count << " ���" << endl;
//	cout << "����� ����� �������� " << nalog << " ������" << endl;
//	
//
//	delete[] x;
//	delete[] a;
//	delete[] d;
//	delete[] e;
//	delete[] f;
//	return 0;
//}