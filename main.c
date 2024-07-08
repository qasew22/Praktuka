#include <stdio.h>


float calculateTime(int t1, int t2, int t3) {
    float speed1 = 1.0 / t1;
    float speed2 = 1.0 / t2;
    float speed3 = 1.0 / t3;
    float totalSpeed = speed1 + speed2 + speed3;
    float totalTime = 1.0 / totalSpeed;
    return totalTime;
}

int main() {
    int t1, t2, t3;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("Введіть три значення: ");
    scanf_s("%d %d %d", &t1, &t2, &t3);


    float time = calculateTime(t1, t2, t3);


    printf("Час, необхідний для з'їдання пирога: %.2f годин\n", time);

    return 0;
}

