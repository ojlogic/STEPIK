#include <stdio.h>
#include <string.h>

char conv(char value) {
    return (value >= '0' && value <= '9') ? value : value + 128;
}

int match_ab(const char a, const char b) {
    int res = 0;
    if ((a >= '0' && a <= '9') && (b == ' ' || b == '\0'))
        res = 1;
    else if ((b >= '0' && b <= '9') && (a == ' ' || a == '\0'))
        res = 0;
    else
        res = a < b;
    return res;
}


void sort_string(char *str, int max_len, int (*ptr_criterion)(const char, const char)) {
    for (int i = 0; i < max_len; i++) {
        char min = str[i];
        int index = i, j = i + 1;
        for (; j < max_len; j++) {
            if ((*ptr_criterion)(str[j], min)) {
                min = str[j];
                index = j;
            }
        }
        if (index != i) {
            char temp = str[i];
            str[i] = str[index];
            str[index] = temp;
        }
    }
}

int main(void) {
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    sort_string(str, strlen(str), match_ab);
    puts(str);

    return 0;
}
