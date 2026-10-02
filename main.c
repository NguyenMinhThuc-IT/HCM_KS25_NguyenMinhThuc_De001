#include <stdio.h>
#define MAX_SIZE 50

int main(){
    int borrows[MAX_SIZE] = {12, 7, 20, 5, 16};
    int n = 5;
    int chocie;
    int pos, value,newVale, target;
    int i, index, count = 0;

    do{
        printf("\n==================================\n");
        printf(" CHUONG TRINH QUAN LY MUON SACH BOOKHUB\n");
        printf("===================================\n");
        printf("1. Them so luot muon sach\n");
        printf("2. Sua so luong muon sach\n");
        printf("3. Xoa so luong muon sach\n");
        printf("4. Tim kiem so luong muon sach\n");
        printf("0. Thoat chuong trinh!\n");
        printf("===================================\n");
        printf("Vui long nhap lua chon cua ban: ");
        scanf("%d", &chocie);

        switch(chocie){
            case 1:
                printf("Them so luong muon sach\n");
                if ( n == MAX_SIZE){
                    printf("Loi mang da day, khong the them!");
                } else{
                printf("Nhap value: "); scanf("%d", &value);
                printf("Nhap pos: "); scanf("%d", &pos);

                if (pos < 1 || pos > n+1){
                    printf("Loi vi tri chen khong hop le\n");
                }

                // doi bo den pos tu 0 thanh 1

                index = pos -1;

                for (i = n; i > index; i--){
                    borrows[i] = borrows[i -1];
                }
                borrows[index] = value;
                n++;

                printf("Ket qua: [");
                for ( i = 0; i < n; i++){
                    printf("%d, ",borrows[i]); 
                }
                printf("]");

                }   
            break;
            case 2:
                printf("Sua so luong muon sach\n");
                printf("Mang: [");
                for ( i = 0; i < n; i++){
                    printf("%d, ", borrows[i]);
                }
                printf("]");

                printf("\nNhap vi tri pos can sua: "); scanf("%d", &pos);
                printf("Nhap vao gia tri moi newValue: "); scanf("%d", &newVale);

                if ( pos < 1 || pos > n){
                    printf("Vi tri sua khong hop le\n");
                }

                if (newVale < 0){
                    printf("So luot muon khong hop le");
                }

                borrows[pos -1] = newVale;

                printf("Ket qua: [");
                for ( i = 0; i < n; i++){
                    printf("%d, ",borrows[i]);
                }
                printf("]");

            break;
            case 3:
                printf("Xoa so luong muon sach\n");
                if ( n == 0){
                    printf("Ma rong, khong the xoa");
                }else{
                    printf("Ket qua: [");
                    for ( i = 0; i < n; i++){
                        printf("%d, ",borrows[i]);
                    }
                    printf("]");

                    printf("\nNhap vi tri pos can xoa: "); scanf("%d", &pos);
                    if ( pos < 1 || pos > n){
                        printf("Vi tri xoa khong hop le\n");
                    }
                    for( i = pos ; i < n; ++i){
                        borrows[i - 1] = borrows[i];
                    }
                    n--;
                    printf("Ket qua: [");
                    for ( i = 0; i < n; i++){
                        printf("%d, ",borrows[i]);
                    }
                    printf("]");
                }

            break;
            case 4:
            printf("Tim kiem so luong muon sach\n");
            if ( n == 0){
                printf("Mang rong, khong tim thay gia tri trong mang");
            }
            printf("Nhap gia tri can tim target: "); scanf("%d", &target);
            for( i = 0; i < n; ++i){
                if(borrows[i] == target){
                    if(count > 0){
                        printf(", ");
                    }
                printf("%d", i +1);
                count++;
                }
            }
            if (count == 0){
                printf("Loi khong tim thay\n");
            }else{
                printf("Tong so lan xuat hien: %d\n", count);
            }
            break;
            case 0:
            printf("Cam on ban da su dung ung dung cua thu vien XIN CHAO VA HEN GAP LAI\n");
            break;
            default:
            printf("[ERROR]-Vui long chon tu ( 0 - 4)!!\n");
            break;
        }

    }while(chocie != 0);


    return 0;
}