#include&lt;stdio.h&gt;
#include&lt;string.h&gt;
int main(){
char b[10][50];
char s[50];
int i,f=0;
for(i=0;i&lt;10;i++){
printf(&quot;book:&quot;);
fgets(b[i],50,stdin);
b[i][strcspn(b[i],&quot;\n&quot;)]=0;
}
printf(&quot;search:&quot;);
scanf(&quot;%s&quot;,s);
for(i=0;i&lt;10;i++){
if(strcmp(s,b[i])==0){
f=1;
break;
}
}
if(f){
printf(&quot;Book Found&quot;);
}
else{
printf(&quot;Book Not Found&quot;);
}
}
