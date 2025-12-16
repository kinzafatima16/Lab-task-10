#include&lt;stdio.h&gt;
int main(){
char c[5][20];
float t[5];
int i,m=0;
FILE *f=fopen(&quot;temperature.txt&quot;,&quot;w&quot;);
for(i=0;i&lt;5;i++){
printf(&quot;city:&quot;);
scanf(&quot;%s&quot;,c[i]);
printf(&quot;temp:&quot;);
scanf(&quot;%f&quot;,&amp;t[i]);
fprintf(f,&quot;%s %.1f\n&quot;,c[i],t[i]);
}
fclose(f);
f=fopen(&quot;temperature.txt&quot;,&quot;r&quot;);
for(i=0;i&lt;5;i++){
fscanf(f,&quot;%s %f&quot;,c[i],&amp;t[i]);
}
for(i=1;i&lt;5;i++){
if(t[i]&gt;t[m]){
m=i;
}
}
printf(&quot;hottest:%s %.1f\n&quot;,c[m],t[m]);
}
