#include <iostream>
#include <locale>
using namespace std;
bool perfeito(int x)
{
   int soma =0;
   for(int i=1; i<x; i++)
      if(x%i ==0)
         soma = soma +i;
   if(soma == x)
      return true;
   else
     return false;
}
int main()
{
   int n;
   setlocale(LC_ALL, "portuguese");
   cout << "Informe um valor inteiro ";
   cin >> n;
   if(perfeito(n))
      cout << "n�mero perfeito";
   else
      cout << "n�mero imperfeito";
   return 0;
}
