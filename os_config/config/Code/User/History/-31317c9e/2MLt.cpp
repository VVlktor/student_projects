#include <iostream>

using namespace std;

void WyliczSchody(double wysokoscKlatki, double szerokoscKlatki){
	double obecnaWysokoscSchoda=15;
	double obecnaSzerokoscSchoda=29;
	while(true){
		double ileStopni = szerokoscKlatki/obecnaSzerokoscSchoda;
		if(ileStopni-(int)ileStopni<0.01){
			double jakWysokie = wysokoscKlatki/ileStopni;
			if(jakWysokie<=17){
				cout << "Ilosc stopni: " << ileStopni << ", wysokosc: " << obecnaWysokoscSchoda << ", szerokosc: " << obecnaSzerokoscSchoda << endl;
				break;
			}
		}
		else if(obecnaSzerokoscSchoda>32 || obecnaWysokoscSchoda>17){
			cout << "Nie mozna wyliczyc z takimi parametrami" << endl;
			break;
		}
		else{
			obecnaSzerokoscSchoda+=0.001;
			obecnaWysokoscSchoda+=0.001;
		}
	}
}