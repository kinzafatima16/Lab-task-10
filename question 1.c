#include&lt;stdio.h&gt;
int main(){
char a[50];
float b;
int c;
FILE *f=fopen(&quot;products.txt&quot;,&quot;a&quot;);
printf(&quot;name:&quot;);
scanf(&quot;%s&quot;,a);
printf(&quot;price:&quot;);
scanf(&quot;%f&quot;,&amp;b);
printf(&quot;qty:&quot;);
scanf(&quot;%d&quot;,&amp;c);
fprintf(f,&quot;%s %.2f %d\n&quot;,a,b,c);
fclose(f);
printf(&quot;saved\n&quot;);
}
