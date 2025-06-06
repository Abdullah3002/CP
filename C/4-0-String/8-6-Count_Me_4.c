#include <stdio.h>  // ইনপুট-আউটপুট ফাংশনের জন্য

int main()
{
    char s[101];             // ইনপুট স্ট্রিং রাখার জন্য অ্যারে

    scanf("%s", s);          // স্ট্রিং ইনপুট নিচ্ছে

    int freq[26] = {0};      // ছোট হাতের a-z অক্ষরের জন্য ফ্রিকোয়েন্সি অ্যারে

    for (int i = 0; s[i] != 0; i++)  // স্ট্রিং-এর প্রতিটি অক্ষর ঘুরে দেখা হচ্ছে
    {
        if (s[i] >= 'a' && s[i] <= 'z')   // শুধুমাত্র ছোট হাতের অক্ষর হলে
        {
            freq[s[i] - 'a']++;           // উপযুক্ত ঘরে গিয়ে কাউন্ট বাড়াচ্ছে
        }
    }

    for (int i = 0; i < 26; i++)     // সব অক্ষরের ফ্রিকোয়েন্সি প্রিন্ট করছে
    {
        if (freq[i] > 0)
        {
            printf("%c - %d\n", i + 'a', freq[i]);  // অক্ষর এবং তার গোনার সংখ্যা
        }
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ 🎉
}

/*
Input:
programming

Output:
a - 1
g - 2
i - 1
m - 2
n - 1
o - 1
p - 1
r - 2

🔎 Note:
🔸 এই প্রোগ্রামটি ইনপুট স্ট্রিং-এর প্রতিটি ছোট হাতের অক্ষরের সংখ্যা গুনে  
🔸 `freq` অ্যারে-তে প্রতিটি অক্ষরের গোনার হিসাব রাখা হয়  
🔸 পরে সেই অক্ষর এবং তার ফ্রিকোয়েন্সি প্রিন্ট করা হয়  
🔸 যেমন: "programming" শব্দে g, m, r দুইবার করে এসেছে এবং বাকিগুলো একবার করে 😎

*/
