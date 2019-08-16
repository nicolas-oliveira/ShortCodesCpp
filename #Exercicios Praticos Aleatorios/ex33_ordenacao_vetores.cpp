#include <iostream>
using namespace std;
int main(){
    int vet_in[4], hold;
    for(int i=0; i<4; i++){
        cout <<"[" << i << "]: ";
        cin >> vet_in[i];
    }
    
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){      // 5 3 4 1
            if(vet_in[j] > vet_in[j+1]){  // 5 > 3 HOLD = 5, [0] = 3, [1] = HOLD(5).
                hold = vet_in[j];  
                vet_in[j] = vet_in[j+1];
                vet_in[j+1] = hold;
            }
        }

    for(int i=0; i<4; i++)
        cout << vet_in[i] << endl;
    return 0;
}