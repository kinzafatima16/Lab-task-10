#include&lt;stdio.h&gt;
#include&lt;string.h&gt;
int main(){
char p[50];
printf(&quot;pass:&quot;);
scanf(&quot;%s&quot;,p);
int l=strlen(p);
char *sp=strchr(p,&#39;@&#39;);
if(l&lt;5){
printf(&quot;Weak&quot;);
}
else if(l&gt;=5&amp;&amp;l&lt;8){
printf(&quot;Medium&quot;);
}
else if(sp!=NULL){
printf(&quot;Strong&quot;);
}
else{
printf(&quot;Medium&quot;);
}
}
