
#include<iostream>
#include<locale>

using namespace std;


int main() {
	setlocale(LC_ALL, "Turkish");
	char a[20] = " ";
	char b=' ';
	int sayac = 0;
	char y;
	cout << "Bir kelime giriniz(max 20 harf): " << a;
	cin >> a;
	cout<<"Hangi harfi saymasini istediginizi yazin: ";
	cin>> b;
	int t=b;
	if(t>96 && t<123){
		 y=t-32;
	}
	else if(t>64 && t<91){
		 y=t+32;
	}
	for (int i = 0; i < 20; i++) {
		if (a[i] == b || a[i] == y) {
			sayac = sayac + 1;

		}
	}
	cout << "Kelimenizde " << sayac << " adet 'a' harfi vardir.";



	return 0;
}
