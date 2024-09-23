#include <iostream>

using namespace std;

int main(){
	int liczby[5]={2,3,4,2,1};
	int i=0;	
	while(i+1<liczby.length){
		if(liczby[i]>liczby[i+1]){
			int a = liczby[i];
			liczby[i+1]=liczby[i];
			liczby[i]=a
			i=0;
		}
		else{
			i++;		
		}
	}

for(int o=0; o<liczby.length; o++){
cout << liczby[o] << endl;
}

	return 0;
}
