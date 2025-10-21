oid bai8() {
    int x;
    printf("Nhap x: ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }
}
int main(){
    bai8();
    return 0;
}