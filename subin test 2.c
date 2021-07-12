#include <stdio.h>
int main()
{
int ft_marks[100],st_marks[100],final_marks[100];
int i,n;
double total_marks[100];
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&ft_marks[i]);
}
for(i=0;i<n;i++){
    scanf("%d",&st_marks[i]);
}
for(i=0;i<n;i++){
    scanf("%d",&final_marks[i]);
}
for(i = 0; i < n; i++) {
total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 +
final_marks[i] / 2.0;
}
for(i = 1; i <= n; i++) {
printf("Roll NO: %d\tTotal Marks: %0.0lf\n", i, total_marks[i-1]);
}
return 0;
}
