#include <stdio.h>

struct SinhVien {
    char name[100];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhVien[5];

    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien %d:\n", i + 1);
        
        printf("Ten: ");
        fgets(sinhVien[i].name, sizeof(sinhVien[i].name), stdin);
        
        printf("Tuoi: ");
        scanf("%d", &sinhVien[i].age);
        
        getchar();  
        
        printf("So dien thoai: ");
        fgets(sinhVien[i].phoneNumber, sizeof(sinhVien[i].phoneNumber), stdin);
        
        printf("\n");
    }

    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ten: %s", sinhVien[i].name);
        printf("Tuoi: %d\n", sinhVien[i].age);
        printf("So dien thoai: %s", sinhVien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}
