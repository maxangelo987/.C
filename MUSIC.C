#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
float octave[7] = { 130.81, 146.83, 164.81, 174.61, 196, 220, 246.94 } ;
int n, i ;

main(){
int type;
scanf("%d",&type);
switch ( type )
{
case 1 :
for ( i = 0 ; i < 7 ; i++ )
{
sound ( octave[i] * 8 ) ;
delay ( 30 ) ;
}
nosound() ;
break ;

case 2 :
for ( i = 0 ; i < 15 ; i++ )
{
n = random ( 7 ) ;
sound ( octave[n] * 4 ) ;
delay ( 100 ) ;
}
nosound() ;
break ;

case 3 :
while ( !kbhit() )
{
n = random ( 7 ) ;
sound ( octave[n] * 4 ) ;
delay ( 100 ) ;
}
nosound() ;

/* flush the keyboard buffer */
if ( getch() == 0 )
getch() ;

break ;

case 4 :
for ( i = 4 ; i >= 0 ; i-- )
{
sound ( octave[i] * 4 ) ;
delay ( 100 ) ;
}
nosound() ;
break ;

case 5 :
sound ( octave[6] * 2 ) ;
delay ( 50 ) ;
nosound() ;
}

}