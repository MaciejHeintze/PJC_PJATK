#include <iostream>

using namespace std;

int main()
{

    char tab[] = "fantasmagoria";

    char *ptr1;
    ptr1 = &tab[0];

    char *ptr2;
    ptr2 =&tab[sizeof(tab)/sizeof(char)-2];

    return 0;
}
