#include <iostream>

using namespace std;


int numFinder(int x, int y){


int res = 0;
int pow = 10;
int pow2 = 1;

for (int i=0 ; i < (y-1) ; i++){
    pow2 *= pow;
}

res = (x / pow2) % 10;

return res;
}



int main(){

int num;
int ind;


cout << "Inserisci un numero:" << endl;
cin >> num;
cout << "Bene, ora inserisci un indice." << endl << "Nota che l'indice per le unita' e' 1. Numeri <1 non saranno quindi accettati." << endl;
cin >> ind;
cout << "La cifra dell'indice da te specificato e': " << numFinder(num, ind);

return 0;

}
