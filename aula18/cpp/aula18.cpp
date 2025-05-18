#include <iostream>

using namespace std;

int main(){
    int vetor[5] = {10,20,30,40,50}; //De forma simplificada colocando os valores entre chaves
    int i;

    /*
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    */
                                   // ou dividido por 4
    for(i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++){
        cout << vetor[i] << "\n";
    }

	return 0;
}
