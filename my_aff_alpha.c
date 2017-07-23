void my_putchar(char c);

void my_aff_alpha() {
  char c;
  char z;
  
  z=123;
  c=97;
  
  while ( c!=z ) {
    my_putchar(c);
    c++;
  }

  my_putchar('\n');
}
