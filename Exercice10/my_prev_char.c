void my_putchar(char c);

char my_prev_char(char c)
{
  if ((c>=66 && c<=90 || c>98 && c<=122))
    {
      c = c - 1;
      return (c);
    }
  else if (c==65)
    return (90);
  else if (c==97)
    return (122);
  else
    return (32);
}
