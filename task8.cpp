//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	setlocale(0, "");
//	int n;
//	cout << "Введите количество работников ";
//	cin >> n;
//	if (n <= 0)
//		cout << "Слишком мало работников"<<endl;
//	string* x = new string[n];
//	double* a = new double[n*3];
//	
//	double* d = new double[n];
//	double* e = new double[n];
//	double* f = new double[n];
//
//	cout << "Введите данные о работниках " << endl;
//	for (int i = 0; i < n; i++) {
//		cout <<endl<< "Работник " << i + 1 << endl;
//		cout << "Введите фамилию ";
//		cin >> x[i];
//		cout <<endl<< "Введите количество отработанных часов ";
//		cin >> a[i*3];
//		cout << "Введите почасовую ставку ";
//		cin >> a[i*3+1];
//		cout << "Введите % премии ";
//		cin >> a[i*3+2];
//		d[i] = a[i] * a[i*3+1] * (1 + a[i*3+2] / 100);
//		e[i] = d[i] * 0.13;
//		f[i] = d[i] - e[i];
//		cout << "Общая заработанная сумма " << d[i] << endl;
//		cout << "Налог " << e[i] << endl;
//		cout << "Сумма на руки " << f[i] << endl;
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
//			cout << "Работник " << i + 1 << " заработал: " << f[i] << " рублей" << endl;
//
//	}
//
//	double nalog = 0;
//	for (int i = 0; i < n; i++) {
//		nalog += e[i];
//	}
//
//	cout << "Меньше всех заработал " << min + 1 << ", с зарплатой " << min_f << " рублей" << endl;
//	cout<<"Больше всех заработал "<<max+1<< ", с зарплатой " << max_f << " рублей" << endl;
//	cout << "Работников, с зп больше 50000 руб - " << count << " чел" << endl;
//	cout << "Общий налог составил " << nalog << " рублей" << endl;
//	
//
//	delete[] x;
//	delete[] a;
//	delete[] d;
//	delete[] e;
//	delete[] f;
//	return 0;
//}