#include <iostream>

using namespace std;

string WyliczSchody(double wysokoscKlatki, double szerokoscKlatki){
	double obecnaWysokoscSchoda=15;
	double obecnaSzerokoscSchoda=29;
	while(obecnaWysokoscSchoda<=32 && obecnaWysokoscSchoda<=17){
		double ileStopni = (szerokoscKlatki/obecnaSzerokoscSchoda);
        double jakWysokie = wysokoscKlatki/ileStopni;
        if(jakWysokie<=17 && jakWysokie*ileStopni<wysokoscKlatki+20 && jakWysokie*ileStopni>wysokoscKlatki-20){
            string wynik = to_string(ileStopni) + "|" + to_string(obecnaWysokoscSchoda) + "|" + to_string(obecnaSzerokoscSchoda);
            return wynik;
        }
        else{
            obecnaSzerokoscSchoda+=0.001;
            obecnaWysokoscSchoda+=0.001;
        }
	}
    return "Nie mozna miec schodow, zrob sobie winde";
}