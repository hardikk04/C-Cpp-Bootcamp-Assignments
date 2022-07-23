int main()
{
    int i,j,a;
    for(i=1;i<=4;i++){
        a=1;
        for(j=1;j<=7;j++){
            if(j<=5-i||j>=3+i){
            printf("%d",a);
            j<4?a++:a--;
                    }
            else{
            printf(" ");
            j==4?a--:a;
            }
        }
            printf("\n");
    }
    return 0;
}