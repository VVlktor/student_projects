#include <iostream>

using namespace std;

int main(){
	WyliczSchody();
	return 0;
}

void WyliczSchody(){
	double wysokoscKlatki=400;
	double szerokoscKlatki=750;
	double obecnaWysokoscSchoda=15;
	double obecnaSzerokoscSchoda=29;
	bool czyWyliczone=false;
	while(czyWyliczone){
		double ileStopni = szerokoscKlatki/obecnaSzerokoscSchoda;
		if(ileStopni%1==0){
			double jakWysokie = wysokoscKlatki/ileStopni;
			if(jakWysokie<=32){
				cout << "Ilosc stopni: " << ileStopni << ", wysokosc: " << obecnaWysokoscSchoda << ", szerokosc" << obecnaSzerokoscSchoda << endl;
			}
		}
		else{
			obecnaSzerokoscSchoda+=0.1;
			obecnaWysokoscSchoda+=0.1
			if(obecnaSzerokoscSchoda>32 || obecnaWysokoscSchoda>17){
				cout << "Nie mozna wyliczyc z takimi parametrami" << endl;
				break;
			}
		}
	}
}