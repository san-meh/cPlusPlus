#include<iostream>
#include <curses.h>

using namespace std;

int main(){
    int **p, nr, nc, r, c;
    system("clear");
    cout << "Enter 2D array size";
    cin >> nr >> nc;
    p = new int*[nr];
    for ( r = 0; r < nr; r++){
        p[r] = new int[nc];
    }

    //entering the value for 2D array
    cout << "entering << nr * nc << value for 2D array" << endl;
    for ( r = 0; r < nr; r++){
        for ( c = 0; c < nc; c++){
            cin >> p[r][c];
        }
    }

    //Printing the array values
    cout << endl << p;
    cout << "Printing the array values" << endl;
    for (r = 0; r < nr; r++){
        for (c = 0; c < nc; c++){
            cout << p[r][c] << ends;
        }
        cout << endl << p[r];
        cout << endl;
    }
    delete p;
    getch;
    return 0;
}