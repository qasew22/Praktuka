#include <stdio.h>
#include <math.h>

int main() {
    int x_start, y_start, x_end, y_end;
    double delta_x, delta_y, vector_length;

    printf("Enter the coordinates x1 y1 x2 y2: ");
    scanf("%d %d %d %d", &x_start, &y_start, &x_end, &y_end);
    delta_x = x_end - x_start;
    delta_y = y_end - y_start;
    vector_length = sqrt(delta_x * delta_x + delta_y * delta_y);

    printf("Length of the vector: %.6lf\n", vector_length);
    return 0;
}
