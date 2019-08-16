#include <iostream>

using namespace std;

int main()
{
    float peso[3];
    float notas[4][3];
    //leitura dos pesos

    for(int i=0; i< 3; i++)
    {
        cout << "Digite o peso : ";
        cin >> peso[i];
    }
    float media =0;
    //leitura das notas dos alunos
    for(int l=0; l<4; l++)
    {
        for(int c=0; c<3; c++)
        {
            cout << "Informe nota ";
            cin >> notas[l][c];
            media += peso[c] * notas[l][c];
        }
        cout << "A média do aluno" << (l+1) << " é : " << media/10;
        media =0;
        cout << endl;
    }
    return 0;
}
