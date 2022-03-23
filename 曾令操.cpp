#include<stdio.h>

void main()
{
     char a[1000],word[1000];
     int  i=0,j,k=0,y=0,count=0,sum=0;

	 printf("Please input a sentence:\n");

	 while((a[i]=getchar())!='\n')
	 {
              k++;
              i++;
	 }
     
	 printf("Please input the word you want to find:\n");
	 i=0;

	 while((word[i]=getchar())!='\n')
	 {
              y++;
              i++;
	 }

	 for (i=0;i<k;i++)
	 {
	     count=0;
         if(a[i]==word[0])
	  {
            for(j=0;j<y;j++)
	      {
               if(a[i+j]==word[j])
	        {
                  count++;
	        }
	      }
               if(count==y)
	        {
		  sum++;
	        }
	   }
		 
	  }

	 printf("The number of words you find is %d.\n",sum);
}
