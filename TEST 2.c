#include <stdio.h>
int main()
{
int cmarks[100],pmarks[100],amarks[100],fmarks[100];
int i,n,c[100];
double tmarks[100];
char name[50][50];
scanf("%d",&n);
for(i=0;i<n;i++){
    gets(name[i]);
}
for(i=0;i<n;i++)
{
    scanf("%d",&cmarks[i]);
}
for(i=0;i<n;i++){
    scanf("%d",&pmarks[i]);
}
for(i=0;i<n;i++){
    scanf("%d",&amarks[i]);
}
for(i=0;i<n;i++){
    scanf("%d",&fmarks[i]);
}
for(i=0;i<n;i++){
    c[i]=cmarks[i]+ pmarks[i]+ amarks[i];
}
for(i = 0; i < n; i++) {
tmarks[i] = (c[i]*1.0)/ 3+fmarks[i];
}
for(i = 1; i <= n; i++) {
printf("Roll NO: %d\t NAME: %s \tTotal Marks: %0.2lf\n", i,name[i-1] ,tmarks[i-1]);
}
return 0;
}

