#include <iostream>
using namespace std;

int main()
{
//Qui vanno definite le variabili
  
float a, b, c ;
float triangolo, quadrato, rettangolo, trapezio;
cin >> a >> b >> c;
  
//Qui va scritto il codice per eseguire i calcoli richiesti
  
  triangolo = (a*b)/2 ;
    cout << "area triangolo :"<< triangolo<<endl;
    quadrato = a*a ;
    cout << "area quadrato:"<<quadrato<<endl;
   rettangolo = a*b ;
    cout << "area rettangolo:"<<rettangolo<<endl;
   trapezio = ((a*b)/2)*c ;
    cout << "area trapezio:"<<trapezio<<endl;

    return 0;
  
}
