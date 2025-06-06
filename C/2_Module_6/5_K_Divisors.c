#include <stdio.h>  // ইনপুট ও আউটপুট ব্যবস্থার জন্য stdio হেডার ফাইল

int main() { 
   int n;                            // একটি পূর্ণসংখ্যা ইনপুট নেওয়ার জন্য ভেরিয়েবল
   scanf("%d", &n);                  // ইউজার থেকে ইনপুট নিচ্ছে

   for(int i = 1; i <= n; i++) {     // ১ থেকে n পর্যন্ত লুপ চালাবে
       if(n % i == 0) {              // যদি n সংখ্যাটি i দিয়ে ভাগ যায় (remainder 0 হয়)
           printf("%d\n", i);        // তাহলে i সংখ্যাটি n এর একটি গুণিতক (divisor), এটি প্রিন্ট করবে
       }
   }  

   return 0;                         // প্রোগ্রাম সফলভাবে শেষ
}

/*
Input:
12

Output:
1
2
3
4
6
12

Note: প্রোগ্রামটি যেকোনো ইনপুট সংখ্যা `n` এর সকল গুণিতক (divisors) প্রিন্ট করে — অর্থাৎ যেসব সংখ্যা n কে ভাগ করতে পারে।
*/
