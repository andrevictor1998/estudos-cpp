#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    char palavra[30], letra[1], secreta[30];
    int i, chances, tam, acertos;
    bool acerto;

    i = 0;
    chances = 5;
    tam = 0;
    acertos = 0;
    acerto = false;

    cout << "Diga ao seu amigo para virar e digite uma palavra: ";
    cin >> palavra;
    system("cls");

    while(palavra[i] != '\0'){
        i++;
        tam++;
    }

    for(i = 0; i < 30; i++){
        secreta[i] = '_';
    }

    while((chances > 0) && (acertos < tam)){
        cout << "Chances restantes: " << chances << "\n\n";
        cout << "Palavra secreta: ";
    for(i = 0; i < tam; i++){
        cout << secreta[i];
    }
    cout << "\n\nDigite uma letra: ";
    cin >> letra[0];
    for(i = 0; i < tam; i++){
        if(palavra[i] == letra[0]){
            acerto = true;
            secreta[i] = palavra[i];
            acertos++;
        }
    }
    if(!acerto){
    chances--;
    }
    acerto = false;
    system("cls");
    }

    if(acertos == tam){
        cout << "Parabens, voce venceu!!\n";
    }else{
        cout << "Que pena, voce perdeu\n";
    }

    system("pause");
    return 0;
}
