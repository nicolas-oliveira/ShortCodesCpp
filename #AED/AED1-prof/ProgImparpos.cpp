#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Digite um valor ";
    cin >> n;
    if(n %2 == 0 )
        if(n>0) cout << n << " é um valor par positivo";
        else    cout << n << " é um valor par negativo";
    else
        if(n>0) cout << n << " é um valor ímpar positivo";
        else    cout << n << " é um valor ímpar negativo";
    return 0;

}
