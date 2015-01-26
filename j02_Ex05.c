  1 #include<unistd.h>
  2
  3 void    ft_putchar(char c)
  4 {
  5         write(1, &c, 1);
  6 }
  7
  8 void    ft_print_99(void)
  9 {
 10         char a;
 11         char b;
 12         char c;
 13         char d;
 14         char x;
 15         char y;
 16         char z;
 17
 18         a = '0';
 19         b = '0';
 20         c = '0';
 21         d = '0';
 22         x = a+b;
 23         y = c+d;
 24         z = x+y;
 25
 26         while ( x != y)
 27         {
 28                 while (a<='9')
 29                 {
 30                         b='0';
 31                         while (b<='9')
 32                         {
 33                                 ft_putchar(a);
 34                                 ft_putchar(b);
 35                                 if (a+b != '9'+'9')
 36                                 {
 37 //                                      ft_putchar(',');
 38                                         ft_putchar(' ');
 39
 40                                 }
 41                                 b++;
 42                         }
 43                         a++;
 44                 }
 45
 46         }
 47 }
 48
 49 int     main()
 50 {
 51         ft_print_print99();
 52         ft_putchar(',');
 53         ft_print_print99();
 54         return(0);
 55 }
