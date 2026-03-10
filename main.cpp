#include <stdio.h>
int b[81],x,X,Y,t,a,c,i,j,f,p,d[]={-9,-8,1,10,9,8,-1,-10};int C(){a=0;if(b[X]==
2)for(i=8;i--;){for(j=0,Y=X+d[i];b[Y%81]==!t;Y+=d[i])j++;if(j&&b[Y]==t)for(;j--
+2;Y-=d[i],a++)f?b[Y]=t:0;}return a;}int main(){for(x=81;x--;b[x]=x%9-8&&x>8?2:
3);b[39]=b[49]=0;p=t=b[40]=b[48]=1;for(;p+1;){x=f=0;for(X=7;X++<80;printf(" %c"
,"O@-\n"[b[X]]))C()?x=X:0;if(x)Y=0,t?scanf("%d%d",&X,&Y):X=x+1,f=X+=Y*9-1,t=C()
?t:!t;else puts("pass"),p--;t=!t;}return 0;}