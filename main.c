#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[15]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
int t[15]={2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
int i;
int c;
for (i = 0; i < 15; i++) {
c = a[i];
a[i] = t[i];
t[i] = c;

}
for (i = 0; i < 15; i++) {
printf("%d",a[i]);
}
printf('/n');

for (i = 0; i < 15; i++) {
printf("%d",t[i]);

}
}
