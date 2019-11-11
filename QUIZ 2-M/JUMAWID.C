#include<stdio.h>
main()
{
  long c,temp,d,x[1000],real,i,size=0;
  clrscr();
      printf("INPUTS: ");

      for(i=0; ; i++)
      {
	 scanf("%ld",&x[i]);
	   if(x[i]==0)
	   {
	    break;
	   }
	    size++;
}
for(i=0; i<size; i++)
{
 real=2;
 c=0;
 temp=x[i];
	 for(;temp!=1;)
	 {
	  if(temp%real!=0)
	  {
	   real++;
	  }
	  else
	  {
	   temp=temp/real;
	   c++;
	  }
 }
 temp=x[i];
 d=0;
     for(;temp!=0;)
     {
      temp=temp/10;
      d++;
      }
printf("\nOUTPUTS: ");
   if(c>d)
      {
       printf(" %ld = ",x[i]);
       real=2;
       c=0;
       temp=x[i];
		for(;temp!=1;)
		{
		 if(temp%real!=0)
		 {
		   real++;
		}
		else
		    {
		      printf(" %ld ",real);
		      temp=temp/real;
		      c++;
		    }
		}
		 printf(" = %ld factors = %ld digits =  WASTEFUL NUMBER",c,d);

      }

   else

       {
       real=2;
       c=0;
       temp=x[i];
       printf("%ld = ",x[i]);
	for(;temp!=1;)
	{
	  if(temp%real!=0)
	  {
	   real++;
	  }
	  else
	  {
	  printf(" %ld",real);
	   temp=temp/real;
	   c++;
	  }
}
     printf("\n- %ld factor",c);
     printf("\n- %ld digit",d);
     printf("\n- NOT A WASTEFUL NUMBER");

}

}
getch();
}
