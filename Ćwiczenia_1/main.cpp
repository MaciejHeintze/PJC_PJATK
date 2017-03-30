#include <iostream>

using namespace std;

//Napisz program wczytuj¹cy liczby ca³kowite a¿ do pojawienia siê zera i wypisuj¹cy na ekranie ile razy znak dwóch kolejno wczytanych liczb by³ ró¿ny.
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
