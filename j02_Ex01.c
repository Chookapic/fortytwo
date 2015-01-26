  1 #include<unistd.h>
  2
  3 void    ft_putchar(char c)
  4 {
  5         write(1, &c, 1);
  6 }
  7
  8 void    ft_print_reverse_alphabet(void)
  9 {
 10         char x;
 11
 12         x ='z';
 13         while (x>='a')
 14         {
 15                 ft_putchar(x);
 16                 x--;
 17         }
 18 }
 19
 20 int     main()
 21 {
 22         ft_print_reverse_alphabet();
 23         ft_putchar('\n');
 24         return(0);
 25 }
 26
