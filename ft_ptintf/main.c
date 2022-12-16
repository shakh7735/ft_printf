#include "ft_printf.h"
#include <limits.h>


int main()
{
    int i;
    char str[10] = "%# -6.0p";
    str[9] = 0;
    //char *d = NULL;
    //char d = '\0';
    long  d = 89;
   
    
   
    printf ("|count = %d|\n", ft_printf(str, d));
    //printf   (str, d);
    printf ("|count = %d|\n", printf   (str, d));

    return 0;
}
