void bai9() {
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    int i=1,x;
    while(i<=n){
        printf("Nhap so thu %d: ",i);
        scanf("%d",&x);
        if(x==i) i++;
        else {
            printf("Sai! Nhap lai tu dau!\n");
            i=1;
        }
    }
    printf("Ban da nhap dung tu 1 den %d\n",n);
}
int main(){
    bai9();
    return 0;
}