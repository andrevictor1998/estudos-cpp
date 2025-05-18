#include <iostream>

using namespace std;

int main(){

    int n1, x;

    x = 10;

    cout << "Digite um valor: ";
    cin >> n1;

    (n1 > 5) ? x++ : x--;

    cout << "\nNovo valor de X: " << x << "\n";

	return 0;
}
