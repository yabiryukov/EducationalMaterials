#include <iostream>

void insertion_sort(int [], int);

int main() {
    
    const int n = 10;
    int m[10] = { 2, 3, 1, 5, 3, 6, 4, 6, 75, 15 };
    insertion_sort(m, n);
    
    for (int i = 0; i < n; i++)
        std::cout << m[i] << " ";
    
    std::cout << "\n";
    return 0;
}

void insertion_sort(int s[], int n) {
    
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && s[j] < s[j-1]; --j) {
            int buf = s[j];
            s[j] = s[j-1];
            s[j-1] = buf;
        }
    }
    
}
