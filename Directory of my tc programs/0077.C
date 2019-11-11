/* (77) Look and say. 2-12-1112
(malloc, realloc, sprintf, array pointers functions) <Comp1/MATH1> */


#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{

    char *a = malloc(2), *b = 0, *x, c;
    int cnt, len = 1,i=1,lim,s;

clrscr();

 printf("Input Number: ");
 scanf("%d",&s);
 printf("Input Range: ");
 scanf("%d",&lim);


    for (sprintf(a, "%d",s); (b = realloc(b, len * 2 + 1)); a = b, b = x)
    {
        puts(x = a);

	for (len = 0, cnt = 1; (c = *a); )
        {
            if (c == *++a)
                cnt++;
            else if (c)
            {
                len += sprintf(b + len, "%d%c", cnt, c);
                cnt = 1;

            }


        }
      if(i==lim+1)
	{
	break;
	}
      i++;

      getch();
    }

    return 0;
}