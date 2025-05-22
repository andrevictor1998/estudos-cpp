#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]){

    if(argc > 1){
        if(!strcmp(argv[1], "sol")){
            cout << "Vou para o clube.\n";
        }else if(!strcmp(argv[1], "nublado")){
            cout << "Vou para o cinema.\n";
        }else{
            cout << "Vou ficar em casa.\n";
        }
    }

	return 0;
}
