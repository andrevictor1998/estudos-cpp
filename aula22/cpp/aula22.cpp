#include <iostream>

using namespace std;

void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main(){
    int res;
    string transp[4] = {"carro", "moto", "barco", "aviao"};

    texto();

    soma(7, 3);
    res = soma2(150, 25);

    cout << "Valor de res: " << res << "\n";

    tr(transp);

	return 0;
}

void texto(){
    cout << "Ola mundo!\n";
}

void soma(int n1, int n2){
    cout << "Soma dos valores: " << n1 + n2 << "\n";
}

int soma2(int n1, int n2){
    return n1 + n2;
}

void tr(string tra[4]){
    for(int i = 0; i < 4; i++){
        cout << tra[i] << "\n";
    }
}
