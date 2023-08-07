#include <iostream>
#include <vector>

using namespace std;

//RESOLUÇÃO: RESOLVIDA
//LINK DO PROBLEMA: https://neps.academy/br/exercise/261

int main(){
   	int N, M, G;
	cin >> N >> M;
	vector<int> A(N-1), P(N), O(M), result(M);
	for(int i = 0; i < A.size(); i++){
		cin >> G;
        A[i] = G;
	}
	for(int i = 0; i < P.size(); i++){
		cin >> G;
        P[i] = G;
	}
	for(int i = 0; i < O.size(); i++){
		cin >> G;
        O[i] = G;
	}
    for(int i = 0; i < O.size(); i++){
        for(int j = 0; j < A.size(); j++){  
            if(O[i] < A[j] && j == 0){
                result[i] = P[0];
                break;
            }
            if(O[i] >= A[j] && j == A.size()-1){
                result[i] = P[j+1];
                break;
            }
            if(O[i] >= A[j] && O[i] < A[j+1]){
                result[i] = P[j+1];
                break;
            }
        }
    }
    //Esse "for" abaixo é o que a questão aceita:  

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    //Esse "for" abaixo não funciona na questão, mas está certo, use ele para melhor visualização dos resultados e comente o de cima se for na IDE: 

    // for(int i = 0; i < result.size(); i++){
    //     cout << endl << "resultado do Ogro " << i << "º: " << result[i] << endl;
    // }

    return 0;
}