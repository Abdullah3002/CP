#include <stdio.h>

int main() { 
    int n;
    scanf("%d", &n); // ইউজার থেকে n ইনপুট নিচ্ছে (অ্যারের সাইজ)

    int ar[n]; // সাইজ n এর একটি অ্যারে তৈরি করা হলো

    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]); // অ্যারের উপাদানগুলো ইনপুট নিচ্ছে
    }

    // সল্টিং লজিক: ছোট থেকে বড় ক্রমে সাজানো হচ্ছে
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ar[i] > ar[j]) {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp; // দুইটা সংখ্যার অদলবদল (swap)
            }
        }
    }

    // সল্ট করা অ্যারে প্রিন্ট করা হচ্ছে
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }

    return 0;
}

/*
📥 Input:
5
4 2 1 5 3

📤 Output:
1 2 3 4 5

📝 Short Note:
এই প্রোগ্রামটি একটি অ্যারে ইনপুট হিসেবে নেয় এবং সেটিকে ছোট থেকে বড় ক্রমে সাজিয়ে প্রিন্ট করে। 
এখানে দুটি nested loop ব্যবহার করা হয়েছে — যা Selection Sort / Bubble Sort এর মতো কাজ করে। 
যদি কোনো উপাদান তার পরবর্তী উপাদানের চেয়ে বড় হয়, তবে তাদের অদলবদল করা হয়।
টাইম কমপ্লেক্সিটি O(n^2), ছোট ডেটার জন্য ভালো কাজ করে। ✅
*/
