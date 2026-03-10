#include <stdio.h>
int b[91],X=90,x,Y,t,a,i,j,f,p,d[]{-9,-8,1,10,9,8,-1,-10};void C(){a=0;for(i=b[
X]-3?0:8;i--;){for(j=1;b[Y=X+d[i]*j]==!t;)j++;if(1<j&&b[Y]==t)for(;j--;a++)f?b[
X+d[i]*j]=t:0;}}int main(){for(;X--;p=b[X]=X%9&&X>8&&X<81?X-40&&X-50?X-41&&X-49
?3:0:1:2);for(;p;x=f=0){for(X=7;X++<81;putchar("0@\n-"[b[X]]))C(),a?x=X:0;x?Y=0
,t?X=x:scanf_s("%d%d",&Y,&X),f=X+=Y*9,C(),t=a?p=2,t:!t:(puts("PASS"),p--);t=!t;
}}