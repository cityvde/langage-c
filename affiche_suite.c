#include <stdarg.h>
#include <stdio.h>
void affiche_suite (int nb, ...)
{
  va_list ap;
  va_start (ap, nb);
  while (nb > 0)
  {
    int n;
    n = va_arg (ap, int);
    printf ("%d.\n", n);
    --nb;
  }
  va_end (ap);
}
int main (void)
{
  affiche_suite (10, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100);
  return 0;
}
