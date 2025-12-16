#include&lt;stdio.h&gt;
#include&lt;string.h&gt;
int main(){
char n[10][30];
char z[30];
int r[10];
int i;
FILE *f=fopen(&quot;hotel.txt&quot;,&quot;w&quot;);
for(i=0;i&lt;3;i++){
printf(&quot;name:&quot;);
scanf(&quot;%s&quot;,n[i]);
printf(&quot;room:&quot;);
scanf(&quot;%d&quot;,&amp;r[i]);
fprintf(f,&quot;%s %d\n&quot;,n[i],r[i]);
}
printf(&quot;search:&quot;);
scanf(&quot;%s&quot;,z);
for(i=0;i&lt;3;i++){
if(strcmp(z,n[i])==0){
printf(&quot;room:%d&quot;,r[i]);
return 0;
}
}
printf(&quot;not found&quot;);
}
