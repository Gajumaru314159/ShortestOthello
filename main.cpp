#include <iostream>
int b[91],X=90,x,Y,t,a,i,j,f,p,d;void C(){for(i=b[X]-3?0:9;i--;){for(d=i+i/3*6-
10,j=1;b[Y=X+d*j++]==!t;);if(2<j&b[Y]==t)for(x=X;j--;a++)f?b[X+d*j]=t:0;}}int
main(){for(;X--;p=b[X]=X%9&&X>8&X<81?X-40&&X-50?X-41&&X-49?3:0:1:2);for(;p;x=f=
0){for(X=7;X++<81;a=!putchar("0@\n-"[b[X]]))C();x?Y=0,1?X=x:(std::cin>>Y>>X,0),
f=X+=Y*9,C(),a?p=2:t=!t:puts("PASS")&p--;t=!t;}}