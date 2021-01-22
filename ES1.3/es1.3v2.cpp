/* programma che dice se un numero da 5 cifre è palindromo o no*/

#include <iostream>

using namespace std;


int powint(int base, int rep){

    if(rep == 0) return 1;

    int res = 1;

    if (rep != 0){

        while(rep > 0){

            res *= base;
            rep--;
        }

    }

    return res;
}



bool palindromissimo(int x){

    int a[5];
    int z;

    for(int i=0; i<5; i++){

        z = powint(10, i);
        a[i] = (x / z) % 10;

    }

    if((a[0] == a[4]) && (a[1] == a[3])) return true;
    else return false;

}




int main(){

    int num;

    cout << "Inserisci un numero di 5 cifre ed io ti diro' se e' palindromo o no: ";
    cin >> num;

    if(palindromissimo(num) == true) cout << "Il numero da te inserito e' palindromo.";

    if(palindromissimo(num) == false) cout << "Il numero da te inserito NON e' palindromo.";

    return 0;

}