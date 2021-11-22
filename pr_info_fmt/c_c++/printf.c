#include<stdio.h>
//not output
//#define printf(fmt)          "->%s:%d:   " fmt,__func__,__LINE__

#define h(code)                   printf("%s->%d:%s->Debug->"code"\n",__FILE__,__LINE__,__func__)
int main() {

printf("%d:%s->hello\n",__LINE__,__func__);
h(" HI to everyone");

return 0;

}
