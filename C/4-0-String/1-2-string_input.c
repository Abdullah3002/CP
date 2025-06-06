#include <stdio.h>     // ইনপুট-আউটপুট ফাংশনের জন্য হেডার ফাইল
#include <string.h>    // স্ট্রিং সংক্রান্ত ফাংশনের জন্য হেডার ফাইল

int main()
{
    char s[10];              // একটি ক্যারেক্টার অ্যারে, সর্বোচ্চ ৯ অক্ষরের জন্য + ১ null character

    scanf("%s", s);          // ইউজার থেকে একটি স্ট্রিং ইনপুট নিচ্ছে (স্পেস ছাড়া)
    printf("%s", s);         // ইনপুট নেয়া স্ট্রিংটি প্রিন্ট করছে

    return 0;                // প্রোগ্রাম সফলভাবে শেষ
}

/*
Input:
zubaer

Output:
zubaer

Note:
এই প্রোগ্রামটি ইউজার থেকে একটি শব্দ ইনপুট নেয় এবং সেটি প্রিন্ট করে। 
⚠️ তবে scanf() স্পেস ছাড়া ইনপুট নেয়, অর্থাৎ যদি 'Abdullah Zubaer' দাও, তাহলে শুধু 'Abdullah' নেবে।
স্পেস সহ ইনপুট নিতে চাইলে fgets() ব্যবহার করতে হবে। ✨
*/
