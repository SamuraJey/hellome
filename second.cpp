#include <iostream>
#include<cstdio>

using namespace std;

int main(){for(int r=2,c=2,x,y,q,u,h=c*4,w=h*2,i=0;i<h+r*6+2;i++)for(q=0;q<w+2;q++)x=q%8,y=i%8,u=(i-h-1)%6,putchar(q==w+1?10:i<=h?!i&&q==h?42:i==h-q?47:i==q-h?92:32:!u&&x||!u&&(i<h+2||i==h+r*6+1)||(u==2||u==4)&&x>2&&x<6?45:!x||u==3&&(x==3||x==5)?124:32);return 0;}