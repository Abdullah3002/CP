#include <stdio.h>

int main()
{
    char s[100001];

    fgets(s, 100001, stdin); // পুরো লাইন ইনপুট নিচ্ছে, কমা সহ

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ',')
        {
            // কমা হলে স্পেস প্রিন্ট করো
            printf(" ");
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            // ছোট হাতের অক্ষর → বড় হাতের অক্ষরে রূপান্তর
            printf("%c", s[i] - 32);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            // বড় হাতের অক্ষর → ছোট হাতের অক্ষরে রূপান্তর
            printf("%c", s[i] + 32);
        }
        else
        {
            // অন্য যেকোনো ক্যারেক্টার (যেমন স্পেস, সংখ্যা, চিহ্ন) অপরিবর্তিত রাখো
            printf("%c", s[i]);
        }
    }

    return 0;
}

/*
📥 Input:
happy,NewYear,enjoy

📤 Output:
HAPPY nEWyEAR ENJOY

🔍 Short Note:
এই প্রোগ্রামটি একটি ইনপুট স্ট্রিং থেকে—
✅ কমা (`,`) কে স্পেসে রূপান্তর করে  
✅ ছোট হাতের অক্ষরগুলোকে বড় করে  
✅ বড় হাতের অক্ষরগুলোকে ছোট করে  

এটি ক্যারেক্টার ম্যানিপুলেশন চর্চার জন্য খুব ভালো প্র্যাকটিস 💡

*/
