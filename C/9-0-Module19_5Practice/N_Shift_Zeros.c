#include <stdio.h>  // 📘 স্ট্যান্ডার্ড ইনপুট-আউটপুট হেডার ফাইল

int main() { 
    int n;
    scanf("%d", &n);  // 📥 ইউজার থেকে অ্যারের সাইজ ইনপুট নিচ্ছে

    int ar[n];  // 🔢 n সাইজের অ্যারে ডিক্লেয়ার

    for(int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);  // 📥 অ্যারের সব উপাদান ইনপুট নিচ্ছে
    }

    // 🔄 প্রথমে যেসব উপাদান 0 নয়, সেগুলো প্রিন্ট করবে
    for(int i = 0; i < n; i++) {
        if(ar[i] != 0) {
            printf("%d ", ar[i]);
        }
    }

    // 🔄 তারপর যেসব উপাদান 0, সেগুলো প্রিন্ট করবে
    for(int i = 0; i < n; i++) {
        if(ar[i] == 0) {
            printf("0 ");
        }
    }

    printf("\n");  // ✅ নতুন লাইন দিয়ে প্রোগ্রাম শেষ

    return 0;
}

/* =====================================================
📥 Input:
7
0 2 0 3 0 4 5

📤 Output:
2 3 4 5 0 0 0

🧠 Short Note:
এই প্রোগ্রামটি অ্যারে থেকে সব 0 উপাদানকে শেষে পাঠিয়ে দেয় এবং 
বাকি উপাদানগুলোর অর্ডার ঠিক রাখে। 
একটি সহজ লজিক যেখানে প্রথমে non-zero আর পরে zero গুলো প্রিন্ট করে।

⏱ Time Complexity (TC):  O(n)
   ▸ n উপাদানের জন্য ২ বার লুপ চালানো হয়েছে।

💾 Space Complexity (SC): O(n) (array allocation)  
   ▸ নতুন কোনো অ্যারে ব্যবহার না করে ইনপ্লেস প্রিন্ট করে।

📌 Tip:
এই লজিকটি competitive programming-এ zero গুলোকে শেষে নেওয়ার জন্য অনেক কাজে লাগে।
===================================================== */
