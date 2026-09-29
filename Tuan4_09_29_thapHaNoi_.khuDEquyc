#include <stdio.h>
#include <math.h>

// Hàm thực hiện di chuyển hợp lệ giữa 2 cột bất kỳ
void moveDisk(char p1, char p2, int pole1[], int *top1, int pole2[], int *top2) {
    // Lấy giá trị đĩa trên cùng, nếu cột rỗng thì cho giá trị cực lớn (9999999)
    int disk1 = (*top1 >= 0) ? pole1[*top1] : 9999999;
    int disk2 = (*top2 >= 0) ? pole2[*top2] : 9999999;

    if (disk1 < disk2) {
        // Đĩa ở cột 1 nhỏ hơn -> Chuyển đĩa từ cột 1 sang cột 2
        pole2[++(*top2)] = pole1[(*top1)--];
        printf("Chuyen dia %d tu cot %c sang cot %c\n", disk1, p1, p2);
    } else {
        // Đĩa ở cột 2 nhỏ hơn -> Chuyển đĩa từ cột 2 sang cột 1
        pole1[++(*top1)] = pole2[(*top2)--];
        printf("Chuyen dia %d tu cot %c sang cot %c\n", disk2, p2, p1);
    }
}

void Hn_Tower(int n) {
    int src[100], dest[100], aux[100];
    int top_src = -1, top_dest = -1, top_aux = -1;
    char s = 'A', d = 'C', a = 'B';
    if (n % 2 == 0) {
        char temp = d; d = a; a = temp;
    }

    for (int i = n; i >= 1; i--) {
        src[++top_src] = i;
    }

    int total_moves = (1 << n) - 1; // Tính 2^n - 1 thoi hehe
    for (int i = 1; i <= total_moves; i++) {
        if (i % 3 == 1) {
            moveDisk(s, d, src, &top_src, dest, &top_dest);
        }
        else if (i % 3 == 2) {
            moveDisk(s, a, src, &top_src, aux, &top_aux);
        }
        else if (i % 3 == 0) {
            moveDisk(a, d, aux, &top_aux, dest, &top_dest);
        }
    }
}

int main() {
    int n;
    printf("Nhap so dia: ");
    scanf("%d", &n);
    Hn_Tower(n);
    return 0;
}