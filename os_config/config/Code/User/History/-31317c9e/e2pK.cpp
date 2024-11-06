#include <iostream>

using namespace std;

string WyliczSchody(double wysokoscKlatki, double szerokoscKlatki){
	double obecnaWysokoscSchoda=15;
	double obecnaSzerokoscSchoda=29;
	while(obecnaWysokoscSchoda<=32){
		double ileStopni = szerokoscKlatki/obecnaSzerokoscSchoda;
		if(ileStopni-(int)ileStopni<0.01){
			double jakWysokie = wysokoscKlatki/ileStopni;
			if(jakWysokie<=17){
                string wynik = to_string(ileStopni) + "|" + to_string(obecnaWysokoscSchoda) + "|" + to_string(obecnaSzerokoscSchoda);
                if(ileStopni*obecnaWysokoscSchoda<wysokoscKlatki+10 || ileStopni*obecnaWysokoscSchoda>wysokoscKlatki-10)
                {

				    return wynik;
                }
			}
		}
		else if(obecnaSzerokoscSchoda>32 || obecnaWysokoscSchoda>17){
			return "";
		}
		else{
			obecnaSzerokoscSchoda+=0.001;
			obecnaWysokoscSchoda+=0.001;
		}
	}
}