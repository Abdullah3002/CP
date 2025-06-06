#include <stdio.h>

int main() { 
   int n;
   scanf("%d", &n); // ইউজার থেকে একটি সংখ্যা ইনপুট নিচ্ছে

   int space = n - 1; // প্রথম লাইনে n-1 টি স্পেস থাকবে
   
   for(int i = 1; i <= n; i++){
       for(int j = 1; j <= space; j++){
           printf(" "); // স্পেস প্রিন্ট করছে
       }

       for(int j = i; j >= 1; j--){
           printf("%d", j); // সংখ্যাগুলো উল্টা ক্রমে প্রিন্ট করছে
       }

       printf("\n"); // প্রতিটি লাইনের পরে নিউলাইন
       space--; // পরবর্তী লাইনের জন্য স্পেস কমিয়ে নিচ্ছে
   }

   return 0;
}


/*
📥 Input:
5

📤 Output:
    1
   21
  321
 4321
54321

📝 Short Note:
🔸 এই প্যাটার্ন প্রোগ্রামটি প্রতি লাইনে decreasing order-এ সংখ্যা প্রিন্ট করে (i থেকে 1 পর্যন্ত)।
🔸 প্রতিটি লাইনের শুরুতে স্পেস দিয়ে সংখ্যা সেন্টার-আলাইন্ড করা হয়।
🔸 যেমনঃ ৫ সংখ্যার ইনপুট দিলে ৫টি লাইন প্রিন্ট হয়, যেখানে প্রতিটি লাইনে সংখ্যাগুলো ডানে সরানো থাকে।

📌 Time Complexity: O(n²)
📌 Space Complexity: O(1)

👍 এই কোডটা প্যাটার্ন ও লুপ কনসেপ্ট বুঝার জন্য দারুণ প্র্যাকটিস ভাই 😎💪
*/
