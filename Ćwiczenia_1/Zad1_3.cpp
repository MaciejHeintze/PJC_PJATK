#include <iostream>
using namespace std;

int main()
{

char *tab = new char[10];
char ciag[10];
cout << "Podaj napis " << endl;
cin >> ciag;

tab = ciag;

cout << tab << endl;


delete [] tab;





    return 0;
}
