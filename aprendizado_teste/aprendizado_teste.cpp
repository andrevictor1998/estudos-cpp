#include <iostream>

using namespace std;

int main() {

	int valores[10];

	for (int x = 0; x < 10 ; x++){

		cout << "Digite um valor qualquer: ";
		cin >> valores[x];
	}

	system("cls");

	for (int i = 0; i < 10 ; i++){
		cout << "Valor da posicao: " << i << " - " << valores[i] << endl;
	}

	return 0;

}
