#include <stdio.h>

int main()
{
    int s1, s2, s3;               // তিনটি সংখ্যা ইনপুট নেওয়ার জন্য ভ্যারিয়েবল

    scanf("%d %d %d", &s1, &s2, &s3);  // ইউজার থেকে তিনটি সংখ্যা ইনপুট নেওয়া

    printf("%d", s1 + s2 + s3);         // তিনটি সংখ্যার যোগফল প্রিন্ট করা

    return 0;
}

/*

Input:
10 20 30

Output:
60

📝 Short Note:
- এই প্রোগ্রামটি তিনটি পূর্ণসংখ্যার যোগফল নির্ণয় করে প্রিন্ট করে।
- scanf() দিয়ে তিনটি সংখ্যাকে আলাদা আলাদা ইনপুট নেওয়া হয়।
- তারপর সেগুলোর যোগফল প্রিন্ট করা হয়।

*/
