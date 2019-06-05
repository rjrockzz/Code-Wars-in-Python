#include<Stdio.h>
int main() {
    int upper = 300;
    int lower = 0;
    int step = 20;
    int fahr = lower, celsius;
    while (fahr <= upper) {
        printf("|%-20d%20d|\n", fahr,  (5 * (fahr-32) / 9));
        fahr = fahr+step;
    }
    return 0;
}
