#include&lt;stdio.h&gt;
int main(){
FILE *f=fopen(&quot;attendance.txt&quot;,&quot;r&quot;);
char x[50];
int k=0;
while(fscanf(f,&quot;%s&quot;,x)!=EOF){
printf(&quot;%s\n&quot;,x);
k++;
}
printf(&quot;total:%d&quot;,k);
fclose(f);
}
