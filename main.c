#include <stdio.h>
#include "libft.h"


// int main()
// {
//     char *str = "    Merhaba Dünya !";
//     printf("%s",ft_strtrim(str," "));
// }



//umut 10,mehmet 20,yılmaz 30,murat 40
//eslem 10 senem 20 murat 40 umut 20



//ft_split


int main()
{
    char s1[] = "umut 10,mehmet 20,yılmaz 30,murat 40";
    char s2[] = "eslem 10 senem 20 murat 40 umut 20";
    
    int i;

    i = 0;
    while(s2[i])
    {
        if(s2[i] == ' ' && s2[i] != '\0' && s2[i - 1] == '0')
            s2[i] = ',';
        i++;
    }
    s1[ft_strlen(s1)] = ',';

    char *str;

    str = ft_strjoin(s1, s2);

    char **res;

    res = ft_split(str, ',');
    

    i = 0;
    int j;
    while(res[i])
    {
        j = i + 1;
        while(res[j])
        {
            if(ft_strncmp(res[i], res[j], 10) == 0)
            {
                ft_bzero(res[i], ft_strlen(res[i]));
                break;
            }
            j++;
        }
    i++;
    }
    // son indexteki stringi null olan yere memmove kullanarak taşıma
    // ya da farklı bi yolla çöz murat 40 için 

    // isim ve sayıının arasına yası ekle
    // burda ft_split ve join kullanarak döngü ile 
    // 
    // isim yası sayı formatında alt alta bi dosyaya yazdır

    // sayıları al ve inte dönüştür
    // topla ve bi dosya yaz

    

    i = 0;
    while(res[i])
    {
        printf("%s\n", res[i]);
        i++;
    }


}