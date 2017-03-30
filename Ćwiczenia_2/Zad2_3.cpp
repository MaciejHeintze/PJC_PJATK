#include <iostream>
using namespace std;


// 1 --------------
char  inputData[100];
//3 --------------
int strlen(char* s)
{
    char* x = s;

    while(*s)
        ++s;

    return s - x;
}


int main()
{
//2 ----------------------
cout<< "Podaj ciag znakow" << endl;

cin>> inputData;
cout << inputData << endl;
cout <<"Dlugosc: " <<  strlen(inputData) << endl;
char *tablica = new char[strlen(inputData)];

delete [] tablica;


    return 0;
}
