#include <stdio.h>
#include <stdlib.h>


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int p;

    scanf_s("%d", &p);

    
    int* numbers = (int*)malloc(p * sizeof(int));

    
    if (numbers == NULL) {
        printf("�� ������� ������� ���'���.\n");
        return 1;
    }

    
    for (int i = 0; i < p; i++) {
        scanf_s("%d", &numbers[i]);
    }

    int result = numbers[0];
    for (int i = 1; i < p; i++) {
        result = lcm(result, numbers[i]);
    }

    
    printf("%d\n", result);

    free(numbers);

    return 0;
}
