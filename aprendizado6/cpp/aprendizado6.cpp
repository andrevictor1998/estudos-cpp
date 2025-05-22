#include <iostream>

using namespace std;

void soma();
void soma(int n1, int n2);
int soma2(int n3, int n4);

int main(){

    soma();
    soma(30, 20);
    soma(40, 50);
    int res = soma2(30, 40);
    cout << "A soma de n3 e n4 = " << res << "\n";

	return 0;
}

void soma(){
    int n1, n2;
    n1 = 40;
    n2 = 60;
    int res = n1 + n2;
    cout << "A soma de n1 e n2 = " << res << "\n";
}

void soma(int n1, int n2){
    int res = n1 + n2;
    cout << "A soma de n1 e n2 = " << res << "\n";
}

int soma2(int n3, int n4){
    return n3 + n4;
}
