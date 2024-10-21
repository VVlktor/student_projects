#include <iostream>
#include <vector>

using namespace std;

void Sortuj(vector<int>& liczby){
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
}
