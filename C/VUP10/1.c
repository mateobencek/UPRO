#include <stdio.h>

int main(void) {
   char c;
   c = 'A' + '0';
   printf("%d\n", c);
   printf("%c\n", c);
   printf("%c\n", 'D' - 'A' + '0');
   printf("%d\n", 'D' - 'A' + '0');
   printf("%d\n", '7' - '5');
   printf("%d\n", '7' - 5);
   printf("%c\n", '7' - 5);
   printf("%d\n", '0' % 10);
}