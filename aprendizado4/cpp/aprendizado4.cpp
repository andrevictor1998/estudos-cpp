#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int matriz[4][4];
    int l,c;

    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            cin >> matriz[l][c];
        }
    }
    system("cls");

    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            cout << matriz[l][c] << " ";
        }
        cout << "\n";
    }

	return 0;
}
