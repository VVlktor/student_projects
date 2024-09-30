#include <iostream>
#include <vector>

using namespace std;

int main(){
    string nowaliczba="";
    vector<int> liczby;
    while(true){
	cout << "Podaj liczbe" << endl;
	cin >> nowaliczba;
	if(nowaliczba=="x"){
	    break;
	}
	liczby.push_back(stoi(nowaliczba));
    }
    for(int i=0; i<liczby.size(); i++)
    {
	for(int j=i; j<liczby.size(); j++){
	    if(liczby[i]>liczby[j])
	    {
		int a=liczby[i];
		liczby[i]=liczby[j];
		liczby[j]=a;
	    }
	}
    }

    for(int o=0; o<liczby.size(); o++){
	cout << liczby[o] << endl;
    }
    return 0;
}
