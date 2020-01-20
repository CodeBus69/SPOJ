#include <iostream>

using namespace std;

int main()
{
    int PESEL;
    int PESEL_ARRAY[11];
    int SUM=0;
    cout << "Podaj PESEL: "; cin >> PESEL;
    cout << PESEL%10;

    for(int i=0;i<11;i++) {
            PESEL_ARRAY[11-(i+1)]=PESEL%10;
            PESEL/=10;

            cout << PESEL_ARRAY[i] << endl;

            switch (i+1) {
            case 1: case 5: case  9: case 11: SUM+=PESEL_ARRAY[i]*1; break;
            case 2: case 6: case 10: SUM+=PESEL_ARRAY[i]*3; break;
            case 3: case 7: SUM+=PESEL_ARRAY[i]*7; break;
            case 4: case 8: SUM+=PESEL_ARRAY[i]*9; break;}


            cout << i+1 << ". " << SUM << endl;
    }

    return 0;
}
