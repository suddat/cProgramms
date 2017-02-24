#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int j;
    double val;
    char x[100];
    // Declare second integer, double, and String variables.
    scanf("%d %lf ",&j,&val);
    // Read and save an integer, double, and String to your variables.
    fgets(x,100,stdin);    
    // Print the sum of both integer variables on a new line.
    i = i+j;
    printf("%d\n",i);
    // Print the sum of the double variables on a new line.
    val = val+d;
    printf("%.01lf\n",val);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s",s,x);
    return 0;
}