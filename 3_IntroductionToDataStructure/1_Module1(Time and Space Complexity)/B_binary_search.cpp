#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;

   cin >> n;

//    int ar[n];
vector<int> ar(n);
   
   for(int i=0; i<n; i++){
    cin >> ar[i];
   }

   

   int val;
   cin >> val;
   
   int flag = 0;

   int l=0, r=n-1;

   while(l<=r){

    int mid = (l+r)/2;

    if(ar[mid] == val){

        flag =1;
        break;

    }else if(ar[mid]>val){
        r = mid-1;
        
        
    }
    else{
    l = mid + 1; 
    
   }
   }
   
 
   if(flag == 1){
    cout << "Found" << endl;
   }else{
    cout << "Not Found" << endl;
   }
    

    return 0;
}


/*

Input: 
6
1 5 9 11 15 25
15

Output: Found

Input: 
6
1 5 9 11 15 25
100

Output: Not Found

*/