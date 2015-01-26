  1 #include<unistd.h>
  2
  3 void    ft_putchar(char c)
  4 {
  5         write(1, &c, 1);
  6 }
  7
  8 void    ft_is_negative(int n)
  9 {
 10         if (n>=0)
 11         {
 12                 ft_putchar('P');
 13         }
 14         else
 15         {
 16                 ft_putchar('N');
 17         }
 18 }
 19
 20 int     main()
 21 {
 22         ft_is_negative(7);
 23         ft_putchar('\n');
 24         ft_is_negative(0);
 25         ft_putchar('\n');
 26         ft_is_negative(-3);
 27         ft_putchar('\n');
 28         return(0);
 29 }
