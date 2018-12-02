#include <bits/stdc++.h>
#include<string>
using namespace std;


int main() {
    string str1,str2,s1,s2;
     int res[100],j;
    
     cin>>s1;
    getchar();
     cin>>s2;
     int i=0,len,temp,med,x,y;
     
     str1=s1;
       str2=s2;
       reverse(str1.begin(),str1.end());
       reverse(str2.begin(),str2.end());
       
     if(str1.length()>str2.length())
      {len=str1.length();
       for(j=str2.length();j<len;j++)
       str2[j]='0';
      }
      else
      {len=str2.length();
       for(j=str1.length();j<len;j++)
       str1[j]='0';
      }
      
      i=0;
      j=0;
      while(i<len)
      { x=(int)(str1[i]-'0');
       
        y= (int)(str2[i]-'0');
       
       
       
         med=x + y+temp;
        res[i]=med%10;
       
        temp=med/10;
        i++;  
      }
       res[len]=temp;
       if(res[len]!=0)
       cout<<res[len];
       i=len-1;
       while(i>=0)
      { cout<<res[i];
        i--;}
       cout<<"\n";
      
	return 0;
}
