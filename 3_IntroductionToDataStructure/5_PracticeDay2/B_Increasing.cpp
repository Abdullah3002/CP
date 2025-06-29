

#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n;
   cin >> n;
   
   while(n--){
    int x;
    cin >> x;

    vector<int>v(x);

    for(int i=0; i<x; i++) cin >> v[i];

    sort(v.begin(),v.end());

    int count = 0;

    int flag = 1;

    for(int i=0; i<x; i++){
        // cout << v[i] << " ";

        if(v[i] == v[i-1]){
            flag = 0;
            break;
        }

    }

    if(flag == 1){
        cout << "YES";
    }else{
        cout << "NO";
    }

    cout << endl;

   }
    

    return 0;
}


// -------------or-------------

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; 
//     cin >> t;
    
//     while(t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         set<int> s;

//         for(int i = 0; i < n; i++) {
//             cin >> a[i];
//             s.insert(a[i]);
//         }

//         if(s.size() == n) cout << "YES" << endl; // All unique
//         else cout << "NO" << endl; // Duplicate exists
//     }

//     return 0;
// }



/*

B. Increasing
time limit per test1 second
memory limit per test256 megabytes
You are given an array a
 of n
 positive integers. Determine if, by rearranging the elements, you can make the array strictly increasing. In other words, determine if it is possible to rearrange the elements such that a1<a2<⋯<an
 holds.

Input
The first line contains a single integer t
 (1≤t≤100
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the length of the array.

The second line of each test case contains n
 integers ai
 (1≤ai≤109
) — the elements of the array.

Output
For each test case, output "YES" (without quotes) if the array satisfies the condition, and "NO" (without quotes) otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
InputCopy
3
4
1 1 1 1
5
8 7 1 3 4
1
5
OutputCopy
NO
YES
YES
Note
In the first test case any rearrangement will keep the array [1,1,1,1]
, which is not strictly increasing.

In the second test case, you can make the array [1,3,4,7,8]
.




*/