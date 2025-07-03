#include <iostream>

using namespace std;

int main()
{
    int x, maior = 0;

    cin >> x;

    int vetor[x];

    for (int i = 0; i < x; i++){

        cin >> vetor[i];

	if (i == 0 or vetor[i] > maior){
            
            maior = vetor[i];
        }
    }
    
    cout << maior << endl;

     return 0;
}
