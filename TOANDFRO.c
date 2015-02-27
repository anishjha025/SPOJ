#include <stdio.h>
#include <string.h>
int main(){

    int t,len;
    scanf("%d",&t);
    while(t){
    
        char a[1000];
        scanf("%s",a);
        len=strlen(a)/t;
        char b[len][t];
        int i,j,k=0;
        for(i=0;i<len;i++){
            if(i%2){
                for(j=t-1;j>=0;j--)
                   b[i][j]=a[k++];
            }
            else{
                for(j=0;j<t;j++){
                    b[i][j]=a[k++];
                }
            }
        }
        for(i=0;i<t;i++)
        {
            for(j=0;j<len;j++)
               printf("%c",b[j][i]);
        }
        printf("\n");
        scanf("%d",&t);
    }
    return 0;
}