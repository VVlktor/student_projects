#include <iostream>

using namespace std;


void WyliczSchody(){
	double wysokoscKlatki=320;
	double szerokoscKlatki=590;
	double obecnaWysokoscSchoda=15;
	double obecnaSzerokoscSchoda=29;
	while(true){
		double ileStopni = szerokoscKlatki/obecnaSzerokoscSchoda;
		if(ileStopni-(int)ileStopni<0.1){
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

int main(){
	WyliczSchody();
	return 0;
}
