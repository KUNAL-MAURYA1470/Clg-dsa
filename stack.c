/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


#define size 5
/*stack structure*/
struct stack
{
  int s[size];
  int top;
} st;
//full
int
stfull ()
{
  if (st.top >= size - 1)
    return 1;
  else
    return 0;
}

//empty
int
stempty ()
{
  if (st.top == -1)
    return 1;
  else
    return 0;
}

//push
void
stpush (int item)
{
  st.top++;
  st.s[st.top] = item;
}

//pop
int
pop ()
{
  int item;
  item = st.s[st.top];
  st.top--;
  return (item);
}

//peep
void
peep ()
{
  printf ("\n\tTop : %d", st.top);
  printf ("\n\tValue: %d", st.s[st.top]);
}

void
display ()
{
  int i;
  if (stempty ())
    printf ("\nstack is Empty!");
  else
    {
      for (i = st.top; i >= 0; i--)
	printf ("\n%d", st.s[i]);
    }
}

void
main ()
{
  int item, choice;
  char ans;
  st.top = -1;

  printf ("Implementation of stack");
  do
    {
      printf ("\nMain menu");
      printf ("\n1.push\n2.pull\n3.display\n4.peep\n5.exit\n");
      printf ("\nenter your choice\n");
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  if (stfull ())
	    printf ("\nStack is full!Overflow!");


	  else
	    {
	      printf ("enter the element to be pushed");
	      scanf ("%d", &item);
	      stpush (item);
	    }
	  break;
	case 2:
	  if (stempty ())
	    printf ("\nStack is empty!underflow!");
	  else
	    {
	      item = pop ();
	      printf ("\nthe popped element is %d", item);
	    }
	  break;
	case 3:
	  display ();
	  break;
	case 4:
	  peep ();
	  break;

	case 5:
	  exit (0);
	}


    }

  while (choice != 4);

}
