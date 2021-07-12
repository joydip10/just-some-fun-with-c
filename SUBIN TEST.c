#include <stdio.h>
int main()
{
int cmarks[100],pmarks[100],amarks[100],fmarks[100];
int i,n;
double tmarks[100];
printf("\t\t NOAKHALI SCIENCE AND TECNOLOGY UNIVERSITY\n\t\t\t Welcome to Result Board\n\n\nHOW MANY STUDENT ON THE BATCH?\t\t");
scanf("%d",&n);
printf("NUMBER OF STUDENT\t %d\n\nNow Give Input According To Roll No.\n\n",n);
printf("If any seat is empty then enter 0 for that student\nNOTE:\t use space to take input and use enter to get output\n\n");
printf("Enter CT marks\n\n");
for(i=0;i<n;i++){
    printf("%d  ",i+1);
}
printf("\n");
for(i=0;i<n;i++)
{
    scanf("%d",&cmarks[i]);
}
printf("Enter Presentation Mark\n");
for(i=0;i<n;i++){
    printf("%d  ",i+1);
}
printf("\n");
for(i=0;i<n;i++){
    scanf("%d",&pmarks[i]);
}
printf("Enter Assignment marks\n");
for(i=0;i<n;i++){
    printf("%d  ",i+1);
}
printf("\n");
for(i=0;i<n;i++){
    scanf("%d",&amarks[i]);
}
printf("Enter Final marks\n");
for(i=0;i<n;i++){
    printf("%d  ",i+1);
}
printf("\n");
for(i=0;i<n;i++){
    scanf("%d",&fmarks[i]);
}
for(i = 0; i < n; i++) {
tmarks[i] = (cmarks[i]+ pmarks[i]+ amarks[i]) / 3+fmarks[i];
}
for(i = 0; i < n; i++) {
        if(tmarks[i]>=60&&tmarks[i]<100){
printf("Roll NO: %d\tTotal Marks: %0.2lf \t 1st class\n", i+1, tmarks[i]);
}
else{
    printf("Roll NO: %d\tTotal Marks: %0.2lf \t 2nd class\n", i+1, tmarks[i]);
}}
return 0;
}
