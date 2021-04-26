int main () {
    system("cls");
    int r1, c1, r2, c2, i, j;
    printf("Program Operasi 2 Buah Matriks\n");

    printf("Masukkan jumlah baris Matriks A : "); scanf("%d", &r1);
    printf("Masukkan jumlah kolom Matriks A/baris Matriks B : "); scanf("%d", &c1);
    printf("Masukkan jumlah kolom Matriks B : "); scanf("%d", &c2);
    printf("\n");

    r2 = c1;
    int a[r1][c1], b[r2][c2];

    printf("Masukkan elemen matriks ke-1\n");
        for(i = 0;i < r1; i++){
            for(j = 0;j < c1; j++){
            printf("Masukkan elemen matriks A[%d][%d] : ", i+1, j+1); scanf("%d", &a[i][j]);
            }
        }
        printf("Matriks A :\n");
        for(i = 0;i < r1; i++){
                for(j = 0;j < c1; j++){
                printf("%d  ", a[i][j]);
                if(j == c1 - 1){
                    printf("\n");}
                }
            }
    printf("\nMasukkan elemen matriks ke-2\n");
        for(i = 0;i < r2; i++){
            for(j = 0;j < c2; j++){
            printf("Masukkan elemen matriks B[%d][%d] : ", i+1, j+1); scanf("%d", &b[i][j]);
            }
        }
        printf("Matriks B :\n");
        for(i = 0;i < r2; i++){
                for(j = 0;j < c2; j++){
                printf("%d  ", b[i][j]);
                if(j == c2 - 1){
                    printf("\n");}
                }
            }

    int tim[100][100];
        for(i = 0;i < r1; i++){
            for(j = 0;j < c2; j++){
                for(int k = 0;k < c1;k++){
                    tim[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("\nHasil perkalian matriks a dan b adalah : \n");
        for(i = 0;i < r1; i++){
            for(j = 0;j < c2; j++){
                printf("%d  ", tim[i][j]);
                if(j == c2 - 1){
                    printf("\n");}
            }
        }
    return 0;
}