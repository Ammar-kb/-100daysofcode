#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
char ch,buffer[30],operators[]="+-*%/=",separators[]=";()[]{},.";
FILE *fp;
int i,j=0;
fp=fopen("program.txt","r");
if(fp==NULL)
{
printf("cannot open the file");
exit(0);
}
while((ch=fgetc(fp))!=EOF)
{
for(i=0;i<6;++i)
{
if(ch==operators[i])
printf("%c it is a operator\n",ch);
}
for(j=0;j<9;++j)
{
if(ch==separators[j])
printf("%c it is a separator\n",ch);
}
}
fclose(fp);
return 0;
}
