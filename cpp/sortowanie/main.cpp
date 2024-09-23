#include <iostream>

using namespace std;

int main(){
    int liczby[5]={2,3,4,2,1};
    int i=0;
    for(int i=0; 5>i; i++)
    {
	for(int j=i; j<5; j++){
	    if(liczby[i]>liczby[j])
	    {
		int a=liczby[i];
		liczby[i]=liczby[j];
		liczby[j]=a;
	    }
	}
    }

    for(int o=0; o<5; o++){
	cout << liczby[o] << endl;
    }
    return 0;
}
