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
                string wynik = ileStopni.toString() + "|" + obecnaWysokoscSchoda.toString() + "|" + obecnaSzerokoscSchoda.toString();
				return wynik;
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