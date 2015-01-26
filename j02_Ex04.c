  1 #include<unistd.h>
  2
  3 void    ft_putchar(char c)
  4 {
  5         write(1, &c, 1);
  6 }
  7
  8 void    ft_print_comb(void)
  9 {
 10         char x;
 11         char y;
 12         char z;
 13
 14         x = '0';
 15         y = '1';
 16         z = '2';
 17         while (x<='7')
 18         {
 19                 y=x+1;
 20                 while (y<='8')
 21                 {
 22                         z=y+1;
 23                         while (z<='9')
 24                         {
 25                                 ft_putchar(x);
 26                                 ft_putchar(y);
 27                                 ft_putchar(z);
 28                                 if (x+y+z !='7'+'8'+'9')
 29                                 {
 30                                         ft_putchar(',');
 31                                         ft_putchar(' ');
 32                                 }
 33                         z++;
 34                         }
 35                 y++;
 36                 }
 37         x++;
 38         }
 39 }
 41 int     main()
 42 {
 43         ft_print_comb();
 44         ft_putchar('\n');
 45         return(0);
 46 }
 47
