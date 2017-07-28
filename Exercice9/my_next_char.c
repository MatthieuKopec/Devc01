void my_putchar(char c);

char my_next_char(char c){


  if ((c>=65 && c<=89 || c>=97 && c<=121))
    {
    c++;
    return (c);
    }

  else if (c==90)
    return (65);

  else if (c==122)
    return (97);
  else
    return (32);

}
