#include <stdio.h>
#include <string.h>

#define MAX_WORDS 20
#define MAX_LEN 50

/*  Функция is_correct должна проверять, что в строке содержится фрагмент "ra" без учета регистра.
    Если это так, то она возвращает 1, иначе 0. Определите на эту функцию указатель нового типа 
    FUNC_CORRECT (тип данных).  _______________________________________________________________*/
int is_correct(const char* str) {
    int res = 0;
    if (strcmp(str, "RA") == 0 || strcmp(str, "ra") == 0 || strcmp(str, "Ra") == 0 || strcmp(str, "rA") == 0) res = 1;
    return res;
}

typedef int (*FUNC_CORRECT)(const char*);

/*  Функция get_correct_words должна подсчитывать количество корректных слов (для которых is_correct 
    возвращает 1) в массиве words и возвращать вычисленное значение.    ________________________*/
int get_correct_words(const char (*words)[MAX_LEN], int count_words, FUNC_CORRECT filter) {
    return;
}



/*  В функции  main (для прочитанных из входного потока слов) вызовите функцию get_correct_words с 
    фильтром is_correct и выведите в консоль число корректных слов. ____________________________*/
int main(void) {
/*  Необходимо прочитать си строку, подсчитать количество слов, общую длинну строки и длинну каждого слова*/
    int count_len_word = 0, res = 0, whitespaces = 0;
    char str[MAX_LEN*MAX_WORDS], c;
    fgets(str, sizeof(str), stdin);
    c = getchar();
    if(strlen(str) == MAX_LEN*MAX_WORDS -1 && c != EOF) {
        res = 1;
    } // проверка на выход за границы MAX_LEN*MAX_WORDS
    else {
        // проверка на количество символов в слове
        // проверка на количество слов
        for(int i = 0; i < strlen(str); i++) {
            printf("%c", str[i]);
            if(str[i] != ' '){
                count_len_word++;
                if (count_len_word > MAX_WORDS)
            }
            else
        }
    }
    return res;
}
