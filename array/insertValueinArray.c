
#include <stdio.h>

int main() { 
   int n;
   scanf("%d",&n);
   
   int ar[n];

   for(int i=0; i<n; i++){
    scanf("%d",&ar[i]);
   }

   int idx,val;
   scanf("%d %d",&idx,&val);

   for(int i=n; i>=idx+1; i--){
    ar[i] = ar[i-1]; 
   }

   ar[idx] = val;

   for(int i=0; i<=n; i++){
    printf("%d ",ar[i]);
   }

   
    return 0;
}