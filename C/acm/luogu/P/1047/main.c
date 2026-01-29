#include <stdio.h>

int main() {
    unsigned int l = 0;
    unsigned int m = 0;
    unsigned int left = 0;
    unsigned int right = 0;
    
    scanf("%u %u", &l, &m);
    
    int diff[10002] = {0};
    for (unsigned int i = 0; i < m; i++) {
        scanf("%u %u", &left, &right);
        diff[left] += 1;
        diff[right + 1] -= 1;
    }
    
    unsigned int count = 0;
    int current = 0;
    for (unsigned int i = 0; i <= l; i++) {
        current += diff[i];
        if (current == 0) {
            count++;
        }
    }
    
    printf("%u\n", count);
    return 0;
}