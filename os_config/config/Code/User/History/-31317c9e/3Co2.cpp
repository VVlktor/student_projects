#include <iostream>

using namespace std;

string WyliczSchody(double wysokoscKlatki, double szerokoscKlatki){
	double obecnaWysokoscSchoda=15;
	double obecnaSzerokoscSchoda=29;
	while(obecnaWysokoscSchoda<=32){
		int ileStopni = (int)(szerokoscKlatki/obecnaSzerokoscSchoda);
        double jakWysokie = wysokoscKlatki/ileStopni;
        if(obecnaSzerokoscSchoda>32 || obecnaWysokoscSchoda>17){
			return "";
		}
        else if(jakWysokie<=17){
            if(jakWysokie*ileStopni<wysokoscKlatki+10 && jakWysokie*ileStopni>wysokoscKlatki+10){
                string wynik = to_string(ileStopni) + "|" + to_string(obecnaWysokoscSchoda) + "|" + to_string(obecnaSzerokoscSchoda);
                return wynik;
            }
            else{
                obecnaSzerokoscSchoda+=0.001;
                obecnaWysokoscSchoda+=0.001;
            }
            
        }
	}
    return "Nie mozna obliczyc klatki";
}