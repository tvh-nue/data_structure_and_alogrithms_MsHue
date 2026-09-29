#include<stdio.h>
    //Giả sử đĩa đành số theo thứ tự 1->n từ trên xuống dưới.
    //Giả sử là chuyển từ A qua C, B là cột trung gian.
int Hn_Tower(int n, char src, char dest, char aux){
    if(n==1) return printf("Di chuyen dia 1 tu cot %c sang cot %c\n", src, dest);
    Hn_Tower(n-1, src, aux, dest);
    printf("Di chuyen dia %d tu cot %c qua cot %c\n", n, src, dest);
    Hn_Tower(n-1, aux, dest, src);
    return 0;
}

int main(){
    int n;
    printf("Nhap so dia:");
    scanf("%d", &n);
    printf("\n");
    Hn_Tower(n, 'A', 'C','B');
}