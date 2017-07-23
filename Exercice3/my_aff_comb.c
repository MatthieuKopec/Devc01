void my_putchar(char c);

void print_line(char a, char b, char c){
	my_putchar(' ');
	my_putchar(a);
	my_putchar(b);
	my_putchar(c);
	my_putchar(',');
}

void end(){
  my_putchar(' ');
  my_putchar('7');
  my_putchar('8');
  my_putchar('9');
  my_putchar('\n');
}

void my_aff_comb(){
  char a;
  char b;
  char c;

  a=48;
  b=49;
  c=50;

  while (a!=56, c!=58){    
    while (b!=56){
      while (c!=57){
	print_line(a, b, c);
	  c++;
}
      print_line(a, b, c);
      b++;
      c = b + 1;
}
    print_line(a, b, c);
    a++;
    b = a + 1;
    c = b + 2;
}
  end();
}
