#include <stdio.h>

void sum (int a, int b) {
    printf("sum: %d\n", a+b);
}

void sub (int a, int b) {
    printf("sub: %d\n", a-b);
}

void mul (int a, int b) {
    printf("mul: %d\n", a*b);
}

void div (int a, int b) {
    printf("div: %d\n", (double)a/b);
}

void calc(void (*p_cal)(int, int), int a, int b) {
    printf("Tinh toan \n");
    p_cal(a, b);
}
typedef struct 
{
    /* data */
    int a; 
    int b;
}Point;

// Ứng dụng con trỏ hằng
void write(const char *words) {
    printf("text: %s\n", words);
}



int main(int argc, char const *argv[])
{
    /* code */
    int var = 10;
    double d = 10.3;
    Point p = {.a = 4, .b = 6};
    Point *p_ptr = &p;
    printf("a = %d, b = %d\n",p_ptr->a, p_ptr->b);

    // printf("Dia chi sum: %p\n", &sum);
    // printf("Dia chi p: %p\n", &p);
    // printf("Dia chi var: %p\n", &var);

    char string[] = "HEllo world"; // ứng dung con trỏ hằng
    void (*ptr)(int, int) = &sum;
    ptr(7,4);

    ptr = &div;
    ptr(9,3);

    // void (*arr[4])(int, int) = {&sum, &sub, &mul, &div};

    // arr[0](6,6);
    // arr[1](6,6);
    // arr[2](6,6);
    // arr[3](6,6);

    // calc(&sum, 6, 8);
    
    write(string);

    return 0;
}
