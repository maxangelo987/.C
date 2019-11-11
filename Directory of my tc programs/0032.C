/* (32) Input numbers press zero to terminate,
determine the composite and the largest number.
Show the prime factorization of the largest 
composite numbers
(for loop, nested-if,else-if, array functions) <Comp1/MATH1> */


#include<stdio.h>
main()
{

int num[100],i,j,h,temp[100];
int count[100],y,compo[100];
int max,t;
clrscr();

h=0;

printf("Input Numbers press ZERO to break: ");
for (i=0;;i++) /* This loop is for scanning the inputs and moundang ug mo press zero */
	{
        scanf("%d",&num[i]);
        if (num[i]==0) /* This decision is the part for breaking for example if num[0]==0 then you already break it */
           {
           break;
           }

        h++;  /*the variable h mo silbing tig ihap ug pila imong gi pasud sa imong array kay in this problem wala man ta nangayog reference number so mao na ni gamiton natong reference number para sa next loop*/
        }

y=0; /* ayaw libuga ninyo si y kay si y ani mao ang index sa composite nga array ug pwede pud tig ihap ug pila ang atong nagamit nga array sa para sa composites and mo serves nasad ni ug reference variable para sa next loop */
for (i=0;i<h;i++) /* So nagamit na nato ag h as reference i<h so taman ra ang loop ani depende sa h */
	{
	count[i]=0; /* remember in getting the prime you need to put count so this time you have lots of inputs so you will assume every inputs that has count=0 and this is array so count[i] the is the indexing please ayaw libuga nga ang i ang gisu
d sa array*/
        temp[i]=num[i]; /*Atong gi swap si array num sa temp kay sa sunod nga loop kay dili naman mahimong exact value si num kay imo man siyang gi divided by to i so si temp atong gamiton sa decision (try to look if (count[i]!=0))*/


	for (j=2;j<num[i];j++) /* this loop is for prime try to open on your notes in getting the prime in one input, recap */
		{
		if (num[i]%2==0)
			{
			count[i]++; /*So every input in your array has their own count so if count[0] ning increment so ang imong compo[0] prime */
			}
		}

        if (count[i]!=0) /*but kay imong gipangita kay composite man so directly change the decision to !=0 */
		{
		compo[y]=temp[i]; /*Mao na kung every count in every array kay dili zero 1 or 2 or 3 ba siya so ipasa nato si array temp sa compo then mag create tag new index para sa compo kay lahi naman ang kauban niya I mean nakuhaan sila dili n
ogamit ni i kay mao man to ang index or number of groups kintahay sa wala pa nakuhaan*/
		y++; /*Ning increment ang index para sa compo */
		}
        }


printf("These are the composites you entered: ");
for (i=0;i<y;i++) /*Atong gi print kung sakto ba ang mingsud sa array compo, si y atong reference ani nga loop*/
        {
	printf("%d ",compo[i]);
        }




max=compo[0];    /*Kani nga algo para sa maximum number, so naa ni ninyo sa inyung notes, si array compo atong num sa inyung example sa maximum taw! */
for (i=1;i<y;i++)
        {
        if (compo[i]>max)
           {
           max=compo[i];
           }
        }



printf("\nThe Largest of the composite is: %d ",max); /*Atong gisigurado kung sakto ba ang ming sud ni max maong gi print nato*/


t=2; /*Last part is the Prime Factorization: Mao ni ang code sa Prime Factorization: */
printf("\nAnd its Prime Factorization are: ");
for (;max!=0;) /*Mu undang ug si max kay zero*/
        {
        if (max%t==0) /*so nag start sa t=2 so ug si max divided by 2 kay ang remainder kay zero so */
           {
           printf("%d ",t); /*I print niya ug unsa ang t, ma print ug 2*/
           max=max/t; /*Unya divided by napud siyag t ug pila paka factors sa t. For example 4 diba pag divide nato ana 4%2==0 right? Maong i print si 2, unya 4/2=2, unya next loop napud 2%2==0 right? so i print niya napud si 2, so ang output 2 ug
2, try to copy paste this loop and try with yourself*/

           if (max==1) /*Kani napud ug ang imong max==1 muundang na siya kay dili naman siya madivided ug 2 kay reference baya nato kay t=2, samot na ug inag loop mo increment nasad ag t, so directly break kay di man pud siya ma consider sa max!=0
kay true paman na diba 1!=0 (mo loop panag balig, try to erase this part, youll see the output)*/
              {
              break;
              }
           }

        else
            {
            t++; /*Ug si max%t==0 kay dili tinood mosaka nasad ang atong t hangtod matinood na na siya! */
            }
        }


getch();
}