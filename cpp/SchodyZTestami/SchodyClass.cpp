#include <iostream>

using namespace std;


class Schody {
public:
    double wysokoscSchoda;
    double szerokoscSchoda;
    int liczbaSchodow;
    bool czyWyliczone;

    Schody() {
        czyWyliczone = false;
    }

    Schody ObliczSchody(double H_klatki, double L_klatki) {
        Schody schody = Schody();
        double min_H_Stopnia = 15.0;
        double max_H_Stopnia = 19.0;
        double min_L_Stopnia = 29.0;
        double max_L_Stopnia = 32.0;
        for (int liczbaStopni = ceil(H_klatki / max_H_Stopnia); liczbaStopni <= floor(H_klatki / min_H_Stopnia); liczbaStopni++) {
            double wysokoscStopnia = H_klatki / liczbaStopni;
            if (!(wysokoscStopnia < min_H_Stopnia || wysokoscStopnia > max_H_Stopnia)) {
                for (double szerokoscStopnia = min_L_Stopnia; szerokoscStopnia <= max_L_Stopnia; szerokoscStopnia += 0.1) {
                    if (szerokoscStopnia * liczbaStopni <= L_klatki) {
                        schody.liczbaSchodow = liczbaStopni;
                        schody.wysokoscSchoda = wysokoscStopnia;
                        schody.szerokoscSchoda = szerokoscStopnia;
                        schody.czyWyliczone = true;
                    }
                }
            }
        }
        return schody;
    }
};
