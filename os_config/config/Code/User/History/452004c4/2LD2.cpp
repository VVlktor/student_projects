#include <iostream>

using namespace std;


void WyliczSchody(){
	double wysokoscKlatki=400;
	double szerokoscKlatki=850;
	double obecnaWysokoscSchoda=15;
	double obecnaSzerokoscSchoda=29;
	bool czyWyliczone=false;
	int ileTuByl=0;
	while(!czyWyliczone){
		double ileStopni = szerokoscKlatki/obecnaSzerokoscSchoda;
		if(ileStopni-(int)ileStopni==0.0){
			ileTuByl++;
			double jakWysokie = wysokoscKlatki/ileStopni;
			if(jakWysokie<=17){
				cout << "Ilosc stopni: " << ileStopni << ", wysokosc: " << obecnaWysokoscSchoda << ", szerokosc" << obecnaSzerokoscSchoda << endl;
				czyWyliczone=true;
			}
			obecnaSzerokoscSchoda+=0.01;
			obecnaWysokoscSchoda+=0.01;
		}
		else{
			obecnaSzerokoscSchoda+=0.01;
			obecnaWysokoscSchoda+=0.01;
			if(obecnaSzerokoscSchoda>32 || obecnaWysokoscSchoda>17){
				cout << "Nie mozna wyliczyc z takimi parametrami" << endl;
				break;
			}
		}
	}
	cout << ileTuByl;
}

int main(){
	WyliczSchody();
	return 0;
}
