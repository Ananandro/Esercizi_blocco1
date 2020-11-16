#include <iostream>

using namespace std;

int palindromissimo(int x)
{

    int res;
    int x1, x2, y1, y2;

    x1 = x % 10;
    x2 = (x / 10) % 10;
    y2 = (x / 1000) % 10;
    y1 = (x / 10000) % 10;

    if((x1 == y1) && (x2 == y2)) res = 1;
    else res = 0;

    return res;
}



int main()
{

    int num;

    cout << "Inserisci un numero DI 5 CIFRE. Io controllero' se e' palindromo o no." << endl;
    cin >> num;

    if(palindromissimo(num) == 1){
        cout << "Il numero che hai inserito e' palindromo";
    }
    else{
        cout << "Il numero che hai inserito NON e' palindromo";
    }

    return 0;
    
}