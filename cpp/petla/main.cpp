#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ofstream myStream;
	myStream.open("plikZZapisem.txt");	
	double a;
	cout << "Podaj liczbe" << endl;
	cin >> a;
	while(a>=0.1){
		a=a-0.1;
		if(!(a>=7 && a<=10)){
			cout << a << endl;
			myStream << a << endl;
		}
	}
	myStream.close();
	return 0;
}

