#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;
    while(i--)
        {
            bit = (octet >> i & 1) + '0';
            write(1, &bit, 1);
        }
        write(1, "\n", 1);
}

void    main(void)
{
    print_bits(1);
     print_bits(2);
      print_bits(3);
       print_bits(4);
        print_bits(5);
         print_bits(6);
          print_bits(7);
           print_bits(8);
            print_bits(9);
             print_bits(10);

}