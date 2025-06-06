#include <stdio.h>  // ইনপুট-আউটপুট ফাংশনের জন্য স্ট্যান্ডার্ড হেডার ফাইল

int main() { 
   int n, x;               // দুটি পূর্ণসংখ্যা ভেরিয়েবল n এবং x ডিক্লেয়ার করা হয়েছে
   scanf("%d", &n);        // ইউজার থেকে কতটি সংখ্যা ইনপুট নিবে তা নিচ্ছে

   for(int i = 0; i < n; i++){   // n বার লুপ চালাবে
      scanf("%d", &x);           // প্রতিবার একটি করে সংখ্যা ইনপুট নিচ্ছে

      int fact = 1;              // ফ্যাক্টোরিয়াল হিসাবের জন্য fact ভেরিয়েবল 1 দিয়ে initialize করা
      for(int j = 1; j <= x; j++){  // 1 থেকে x পর্যন্ত লুপ চালিয়ে ফ্যাক্টোরিয়াল বের করা হচ্ছে
         fact = fact * j;          // প্রতিবার fact-কে j দিয়ে গুণ করে আপডেট করা হচ্ছে
      }
      printf("%d\n", fact);       // ফ্যাক্টোরিয়াল প্রিন্ট করছে
   }
   
   return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

/*
Input:
3
5
3
6

Output:
120
6
720

Note: এই প্রোগ্রামটি ইউজার থেকে একটি সংখ্যা n ইনপুট নেয়, তারপর পরপর nটি সংখ্যা নিয়ে প্রতিটি সংখ্যার ফ্যাক্টোরিয়াল হিসাব করে প্রিন্ট করে 🧮💡
*/
