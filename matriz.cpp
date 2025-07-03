#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    cin >> x;

    vector<vector<int>> matriz(x, vector<int>(x));
    vector<vector<int>> matriz2(x, vector<int>(x));
    vector<vector<int>> adicao(x, vector<int>(x));
    vector<vector<int>> subtracao(x, vector<int>(x));
    vector<vector<int>> multiplicacao(x, vector<int>(x, 0));

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cin >> matriz2[i][j];
            adicao[i][j] = matriz[i][j] + matriz2[i][j];
            subtracao[i][j] = matriz[i][j] - matriz2[i][j];
        }
    }

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            for (int k = 0; k < x; ++k) {
                multiplicacao[i][j] += matriz[i][k] * matriz2[k][j];
            }
        }
    }

    char operacao;
    cin >> operacao;

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            if (operacao == 'a')
                cout << adicao[i][j] << " ";
            else if (operacao == 's')
                cout << subtracao[i][j] << " ";
            else if (operacao == 'm')
                cout << multiplicacao[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

