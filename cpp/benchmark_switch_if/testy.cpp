#include <iostream>
#include <vector>

using namespace std;

void TestujIf(int& liczba)
{
    if(liczba==1){
	cout << "Znaleziono" << endl;	
    }else if(liczba==2){
	 cout << "Znaleziono" << endl;
    }else if(liczba==3){
	 cout << "Znaleziono" << endl;
    }else if(liczba==4){
	 cout << "Znaleziono" << endl;
    }else if(liczba==5){
	 cout << "Znaleziono" << endl;
    }else if(liczba==6){
	 cout << "Znaleziono" << endl;
    }else{
	 cout << "Znaleziono" << endl;
    }
}

void TestujSwitch(int& liczba)
{
    switch(liczba){
	case 1:
	    cout << "Znaleziono" << endl;
	    break;
	case 2:
	    cout << "Znaleziono" << endl;
	    break;
	case 3:
	    cout << "Znaleziono" << endl;
	    break;
	case 4:
	    cout << "Znaleziono" << endl;
	    break;
	case 5:
	    cout << "Znaleziono" << endl;
	    break;
	case 6:
	    cout << "Znaleziono" << endl;
	    break;
	default:
	    cout << "Znaleziono" << endl;
	    break;
    }
}