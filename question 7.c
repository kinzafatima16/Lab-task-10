#include&lt;stdio.h&gt;
int main(){
FILE *f=fopen(&quot;expenses.txt&quot;,&quot;a&quot;);
char c[30];
int a;
printf(&quot;cat:&quot;);
scanf(&quot;%s&quot;,c);
printf(&quot;amt:&quot;);
scanf(&quot;%d&quot;,&amp;a);
fprintf(f,&quot;%s %d\n&quot;,c,a);
fclose(f);
f=fopen(&quot;expenses.txt&quot;,&quot;r&quot;);
char x[30];
int y;
while(fscanf(f,&quot;%s %d&quot;,x,&amp;y)!=EOF){
printf(&quot;%s %d\n&quot;,x,y);
}
}
