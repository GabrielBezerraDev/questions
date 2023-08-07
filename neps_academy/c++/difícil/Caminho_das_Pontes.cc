#include<iostream>
#include<vector>

using namespace std;

//RESOLUÇÃO: EM PROCESSO
//LINK DO PROBLEMA: https://neps.academy/br/exercise/297

int main(){
    int pontes, colunas, cI,cF,b;
    cin >> pontes >> colunas;
    vector<vector<int>> pilares(colunas);
    for(int i = 0; i < colunas; i++){
        cin >> cI >> cF >> b;
        pilares[i] = {cI,cF,b};
    }
    for(int i = 0; i < pilares.size(); i++){
        if(pilares[i][0] == 0){
            
        }
    }

    return 0;
}