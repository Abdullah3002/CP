#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int a,b;
   cin >> a >> b;

   int years = 0;
   
   while(a<=b){
    a = a * 3;
    b = b * 2;
    years++;
   }

   cout << years;
    

    return 0;
}