#include<stdio.h>
#include<conio.h>

int max(int a,int b){
    return (a>b)?a:b;
}

int length(char str[]){
    int c =0,i=0;
    while(str[i]!='\0'){
        i++;
        c++;
    }
    return c;
}
int maxpalin(char seq[]){
    int lp = 1;

    for(int i=0;i<length(seq);i++)
    {
        int x=i,y=i+1,p=0;
        while(x>=0 && y<length(seq) && seq[x]==seq[y]){
            x--;
            y++;
            p+=2;
        }
        lp = max(lp,p);

        x=i-1,y=i+1,p=1;
        while(x>=0 && y<length(seq) && seq[x]==seq[y]){
            x--;
            y++;
            p+=2;
        }
        lp = max(lp,p);
    }
    return lp;
}

void main(){
    char seq[100];

    printf("Enter sequence of character: ");
    scanf("%s",seq);

    printf("\nThe length of the longest of palindrom sequence : %d",maxpalin(seq));

    getch();
}
