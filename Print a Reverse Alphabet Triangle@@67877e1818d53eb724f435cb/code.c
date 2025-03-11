#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // संख्या इनपुट करें

    for (int i = n; i >= 1; i--) {  // पंक्तियों के लिए लूप (बढ़ती पंक्तियाँ)
        for (char ch = 'A'; ch < 'A' + i; ch++) {  
            printf("%c ", ch);  // 'A' से 'A + i - 1' तक अक्षर प्रिंट करें
        }
        printf("\n");  // अगली लाइन पर जाएं
    }

    return 0;
}
