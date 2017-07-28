void my_putchar(char c);

void my_rev_alpha()
{
  char alph;
  alph=122;

  while (alph!=96)
    {
      my_putchar(alph);
      alph = alph - 1;
    }
  my_putchar('\n');
}
