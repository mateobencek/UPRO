#include <stdio.h>

int main(void) {
   int broj;
   printf("Upisite cijeli broj > ");
   scanf("%d", &broj);
   printf("%d %d", broj, broj + 1);
   return 0;
}