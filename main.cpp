#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
double funcao(double x, int n, double S, int i);
int main()
{
int i, n;
double x, S; 
cout << "digite o valor de numero de parcelas ";
cin >> n;
cout << "digite o valor de x ";
cin >> x;
cout << "resposta " << funcao(x, n, S, i) << endl;
return 0;
}
double funcao(double x, int n, double S, int i)
{

for(i=1; i<=n; i++)
{
S = ((i*3-2)*pow(x,i*2.0/10.0))/(i*4-1);
cout << "resposta " << S << endl;
}
return S;
}