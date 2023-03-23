#include <iostream>
/*
 * korzysatjac z funkcji if else sprawdz czy x jest wiekszy od y  jesli tak wyswietl komunikat wiekszy jesli nie wyswietl komunikat mniejszy*/
using  namespace  std;
int main() {
   int x;
   int y ;
   cout<<"podaj x: ";
   cin>>x;
    cout<<"podaj y: ";
    cin>>y;
   if(x >y)
   {
       cout<<"X jest wiekszy od y";
   }
   else if (x<y) {
       cout<<"x jest mniejszy od y";
   }
   else
       cout<<"x jest rowny y";




    return 0;
}
