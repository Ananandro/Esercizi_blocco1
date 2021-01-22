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


int main(){

    int x,y;

    cout << "inserire base: ";
    cin >> x;
    cout << "inserire esponente: ";
    cin >> y;

    cout << "Il risultato e': " << powint(x, y);

    return 0;
}