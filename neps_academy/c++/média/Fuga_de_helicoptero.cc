#include <iostream>

//RESOLUÇÃO: FEITO
//LINK DO PROBLEMA: https://neps.academy/br/exercise/5

using namespace std;

int main(){
	int h, p, f,d;
	cin >> h >> p >> f >> d;
	char result;
	if(h > f && h < p){
		if(d == 1){
			result = 'S';
		}else{
			result = 'N';
		}
	}else if(h < f && h > p){
		if(d == 1){
			result = 'N';
		}else{
			result = 'S';
		}	
	}else if(h > f && h > p){
		if(f > p){
			if(d == 1){
				result = 'S';
			}
			else{
				result = 'N';
			}
		}else{
			if(d == 1){
				result = 'N';
			}
			else{
				result = 'S';
			}
		}
	}else if(h < f && h < p){
		if(f < p){
			if(d == -1){
				result = 'S';
			}
			else{
				result = 'N';
			}
		}else{
			if(d == -1){
				result = 'N';
			}
			else{
				result = 'S';
			}
		}
	}
	cout << result << endl;
    return 0;
}
