#include<bits/stdc++.h>
using namespace std;
//#include<conio.h>

int main()

{
  char p[10][5],temp[5];
  int i,j,pt[10],wt[10],totwt=0,pr[10],temp1,n;
  float avgwt;
  
// Clrscr();
 
 printf("Enter No Of Processes -->> ");
  
scanf("%d",&n);
 
 for(i=0;i<n;i++)
 
 {
  printf("Enter Process%d Name -->> ",i+1);
  
scanf("%s",&p[i]);
  printf("Enter Process Time -->> ");
  
scanf("%d",&pt[i]);
  printf("Enter Priority:");
 
 scanf("%d",&pr[i]);
 printf("\n\n");
  }
  
for(i=0;i<n-1;i++)
  
{
 for(j=i+1;j<n;j++)
  
{
   if(pr[i]>pr[j])
   
{
   temp1=pr[i];
   
pr[i]=pr[j];
  
 pr[j]=temp1;
  
 temp1=pt[i];
  
 pt[i]=pt[j];
  
 pt[j]=temp1;
   
strcpy(temp,p[i]);
   
strcpy(p[i],p[j]);
  
 strcpy(p[j],temp);
  
 }
  }
  }
  
wt[0]=0;
 
 for(i=1;i<n;i++)
 
 {
   wt[i]=wt[i-1]+pt[i-1];
  
 totwt=totwt+wt[i];
   }
   
avgwt=(float)totwt/n;
   
printf("P_name\t P_time\t Priority\tW_time\n");
    
for(i=0;i<n;i++)
    
{
   printf(" %s\t %d\t %d\t \t%d\n" ,p[i],pt[i],pr[i],wt[i]);
   }
  
 printf("Total Waiting Time=%d\nAvg Waiting Time=%f",totwt,avgwt);
   
//getch();
   }



