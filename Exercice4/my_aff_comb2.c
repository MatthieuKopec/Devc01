
void my_putchar(char c);

void print_line(char a, char b, char c, char d){

  my_putchar(a);
  my_putchar(b);
  my_putchar(' ');
  my_putchar(c);
  my_putchar(d);
}
void end(){
  my_putchar(',');
  my_putchar(' ');
}

void first(char a, char b, char c, char d){
   while(a!=57 || b!=56){
      if(d==57){
	if(c==57 && d==57 && b==57){
	  if(b==56){
	    d=49;
	    b=48;
	    a++;
	    c=a;
	  }
	  else{
	  a++;
	  b=48;
	  c=a;
	  d = b + 1;}	    
	}
	else if(c==57 && d==57){
	  if(b==56){
	    d=48;
	    b=57;
	    c = a + 1;
	  }
	  else{
	  b++;
	  c=a;
	  d = b + 1;}
	}
	else if(c==57 && b==57){
	  c=a;
	  b=48;
	}
	else{
	  c++;
	  d=48;
	}
 }
	else{
	  d++;
	}
      if(a==57 && b==56 && c ==57 && d==57){
	print_line(a, b, c, d);
	my_putchar('\n');
      }
      else{
       print_line(a, b, c, d);
       end();
      }
	 }
}

void my_aff_comb2(){
  char a;
  char b;
  char c;
  char d;
  
    a=48;
    b=48;
    c=48;
    d=49;
    
    while(c!=57 || d!=57){
      if(d>56){
	d=48;
	c++;
      }
      else{
	d++;
      }
      print_line(a, b, c, d);
    }

    b++;
    print_line(a, b, c, d);
    c=48;
    d = b + 1;
    print_line(a, b, c, d);
    first(a, b, c, d);

}


