#include <iostream>

using namespace std;

//Napisz program wczytuj�cy liczby ca�kowite a� do pojawienia si� zera i wypisuj�cy na ekranie ile razy znak dw�ch kolejno wczytanych liczb by� r�ny.
int a;
int x;
int i = 0;

int main()
{
     cout << "PODAJ LICZBE: " << endl;
     cin >> a;
        x = a;
 do{
    cout << "PODAJ LICZBE: " << endl;
    cin >> a;
    if(a < 0&& x < 0);
    else if(a>0&&x>0);
    else i++;
    x = a;
 }
 while(a != 0);
 if(i==1){
cout << "ROZNE ZNAKI WYSTAPILY " << i << " RAZ." << endl;
 }else{
     cout << "ROZNE ZNAKI WYSTAPILY " << i << " RAZY." << endl;

 }

    return 0;
}
