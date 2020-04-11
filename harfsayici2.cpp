#include<iostream>
#include<locale.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	char a[20]=" ";
	char sayilacakharf;
	int sayac = 0;
	cout << "Hangi kelimenin üzerine sayılacak: ";
	cin >> a;
	cout <<endl<< "Sayılmasını istediğiniz harfi giriniz: ";
	cin >> sayilacakharf;
	for (char item:a) {

		if (item == sayilacakharf) {
			sayac++;
		}
		
		
	}
	cout << sayac;

	return 0;
}
