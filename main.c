#include <stdio.h>
#include <string.h>
#include <stdarg.h>

double sumf(const char* format, ...);

int main(void)
{
    double res = sumf("++ + +", 1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
    printf("%.2f ", res);

    return 0;
}

double sumf(const char* format, ...) {
    double res = 0.0, current;
    va_list arg;
    va_start(arg, format);
    for(int i = 0; i < (int)strlen(format); i++) {
        current = (double)va_arg(arg, double); 
        if('+' == format[i]) {
            res += current;
            //printf("i = %d, current = %.2lf, sign = %c\n", i, current, format[i]);
        }        
    }
    va_end(arg);
    return res;
}