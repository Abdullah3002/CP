#include <stdio.h>   // ইনপুট-আউটপুটের স্ট্যান্ডার্ড হেডার ফাইল

/*-------------------------------------------------
  ফাংশন: sum
  কাজ    : দুইটি সংখ্যা ইনপুট নিয়ে তাদের যোগফল রিটার্ন করে
--------------------------------------------------*/
int sum() {
    int a, b;                     // ইনপুট নেওয়ার জন্য দুইটি ভ্যারিয়েবল
    scanf("%d %d", &a, &b);       // ইউজার থেকে দুটি পূর্ণসংখ্যা ইনপুট
    int ans = a + b;              // যোগফল হিসাব
    return ans;                   // যোগফল রিটার্ন
}

/*-----------------------------
   main ফাংশন – প্রোগ্রামের শুরু
------------------------------*/
int main() { 
    int ans = sum();              // sum() কল করে রিটার্ন-কৃত যোগফল সংগ্রহ
    printf("%d", ans);            // ফলাফল প্রিন্ট
    return 0;                     // প্রোগ্রাম সফলভাবে শেষ
}

/*
🔹 Input:
10 20

🔹 Output:
30

🔹 Short Note:
প্রোগ্রামটি `sum()` ফাংশনের মাধ্যমে দুইটি সংখ্যার যোগফল গণনা করে 
এবং main ফাংশনে ফিরে এসে প্রিন্ট করে। এখানে `sum()` নিজেই ইনপুট 
নেয় ও মান রিটার্ন করে, ফলে main-এ শুধু ফাংশন কল করলেই কাজ হয়।

🔹 Time Complexity (TC): O(1)  
   - কেবল ধ্রুবক সময়ে ইনপুট পড়া ও যোগফল বের করা হয়।

🔹 Space Complexity (SC): O(1)  
   - অতিরিক্ত কেবল কয়েকটি ইন্টিজার ভ্যারিয়েবল ব্যবহৃত হয়েছে।
*/
