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
		subtracao[i][j] = matriz[i][j] - matriz2[i][j];
		multiplicacao[i][j] = 0;
        }
    }
    
    for (int i = 0; i < x; ++i){
        for (int j = 0; j < x; ++j){
            for (int k = 0; k < x; ++k){
                
                multiplicacao[i][j] += matriz[i][k] * matriz2[k][j];
            }
        }
    }

	char operacao;
    
    cin >> operacao;
    
    for (int i = 0; i < x; ++i){
        for (int j = 0; j < x; ++j){
            
            if (operacao == 'a'){
                
                cout << adicao[i][j] << " ";
            }
            
            if (operacao == 's'){
                
                cout << subtracao[i][j] << " ";
            }
            
            if (operacao == 'm'){
                
                cout << multiplicacao[i][j] << " ";
            }
        }
        
        cout << endl;
    }
	

	return 0;
}
