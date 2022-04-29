
#include <stdio.h>
int main()
{
int 
days,hours,minutes,seconds,totaldaysseconds,totalminhours,totalminutesseconds,total;
scanf("%d",&days);
scanf("%d",&hours);
scanf("%d",&minutes);
scanf("%d",&seconds);
totaldaysseconds=days*86400;
totalminhours=hours*60;
totalminutesseconds=(totalminhours+minutes)*60;
total=totaldaysseconds+totalminutesseconds+seconds;
printf("%d seconds",total);
return 0;
}