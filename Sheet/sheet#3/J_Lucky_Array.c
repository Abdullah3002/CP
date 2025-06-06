

#include <stdio.h>
#include<limits.h>

int main() { 
   
        int n;
        scanf("%d",&n);

            int ar[n];
            for(int i=0; i<n; i++){
                scanf("%d",&ar[i]);
            }

            int min = INT_MAX;

                for(int i=0; i<n; i++){
                       if(ar[i]<min){
                        min = ar[i];
                       }
                    }

                    int freq = 0;
                
                    for(int i=0; i<n; i++){
                        if(ar[i]==min){
                            freq++;
                        }
                    }

                    if(freq%2==0){
                        printf("Unlucky");
                    }else {
                        printf("Lucky");
                    }


   
    return 0;
}


/*
J. Lucky Array
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Determine if the array is lucky or not.

Note: the array is lucky if the frequency (number of occurrence) of the minimum element is odd.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 105 ≤ Ai ≤ 105).

Output
Print "Lucky" (without quotes) if the frequency of the minimum element is odd, otherwise print "Unlucky"(without quotes).

Examples
InputCopy
5
8 8 9 5 9
OutputCopy
Lucky
InputCopy
5
3 3 3 5 3
OutputCopy
Unlucky
Note
First Example :

minimum element is 5 and its frequency is 1 and it's ODD so the array is lucky.

Second Example :

minimum element is 3 and its frequency is 4 and it's EVEN so the array is not lucky.




*/