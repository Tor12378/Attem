#include <stdio.h>
#include <stdlib.h>
int rec(void) {
    int e1, e2;
    int num;

    char symbol;
    scanf("%s", &symbol);
    if (symbol != '*' && symbol != '/') {
        num = atoi(&symbol);
        return num;
    } else {
        if (symbol == '*') {
            e1 = rec();
            e2 = rec();
            return e1 * e2;
        } else {
            e1 = rec();
            e2 = rec();
            return e1 / e2;
        }
    }
}

int main(void) {

    printf("%d", rec());

    return 0;
}
