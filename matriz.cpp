#include <iostream>

using namespace std;

int main()
{
    int x;
    
    cin >> x;
    
    int matriz[x][x], matriz2[x][x], adicao[x][x], subtracao[x][x], multiplicacao[x][x];
    
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            
            cin >> matriz[i][j];
        }
    }
    
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            
            cin >> matriz2[i][j];
            
            adicao[i][j] = matriz[i][j] + matriz2[i][j];

	return 0;
}
