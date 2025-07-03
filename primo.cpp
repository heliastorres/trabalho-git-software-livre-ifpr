#include <iostream>

using namespace std;

int main() {

    int numero;

    cin >> numero;

    if (numero <= 1){

        cout << "Nao eh primo" << endl;

        return 0;
    }
	for (int i = 2; i < numero; i ++){

        	if (numero % i == 0){

            	cout << "Nao eh primo" << endl;

            	return 0;
        }
    }

    cout << "Primo" << endl;

    return 0;
}
