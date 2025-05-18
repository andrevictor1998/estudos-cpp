#include <iostream>

using namespace std;

int main(){

    int n1;

    cout << "\nEscolha um numero de 1 a 5 e tenha uma surpresa!\n";
    cin >> n1;

    switch(n1){
        case 1:
            cout << "\nEu te amo\n";
            switch(n1){
                case 1:
                    cout << "Taninha S2\n";
            }
            break;
        case 2:
            cout << "\nVoce eh especial\n";
            break;
        case 3:
            cout << "\nContinue sendo essa otima pessoa\n";
            break;
        case 4:
            cout << "\nTe adoro\n";
            break;
        case 5:
            cout << "\nVoce eh a razao do meu desejo de viver\n";
            break;
        default:
            cout << "\nNenhuma surpresa para mostrar...\n";
    }
	return 0;
}
