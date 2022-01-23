#include<stdio.h>
int main()
{
    char ch,a,e,i,o,u,A,E,I,O,U;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}