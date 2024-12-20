#include <stdio.h>

struct SinhVien {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhVien[50] = {
        {1, "decade", 20, "0123456789"},
        {2, "zio", 21, "0987654321"},
        {3, "ooo", 22, "0980808800"},
        {4, "fang", 23, "0965412548"},
        {5, "thien", 24, "0253276908"}
    };
    
    int currentSize = 5;
    int idSearch;
    int found = 0;

    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &idSearch);

    for (int i = 0; i < currentSize; i++) {
        if (sinhVien[i].id == idSearch) {
            found = 1;
            printf("Sinh vien tim thay:\n");
            printf("ID: %d\n", sinhVien[i].id);
            printf("Ten: %s", sinhVien[i].name);
            printf("Tuoi: %d\n", sinhVien[i].age);
            printf("So dien thoai: %s", sinhVien[i].phoneNumber);

            printf("\nNhap ten moi: ");
            getchar();  
            fgets(sinhVien[i].name, sizeof(sinhVien[i].name), stdin);

            printf("Nhap tuoi moi: ");
            scanf("%d", &sinhVien[i].age);

            printf("\nThong tin sinh vien sau khi sua:\n");
            printf("ID: %d\n", sinhVien[i].id);
            printf("Ten: %s", sinhVien[i].name);
            printf("Tuoi: %d\n", sinhVien[i].age);
            printf("So dien thoai: %s", sinhVien[i].phoneNumber);
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien voi ID %d.\n", idSearch);
    }

    printf("\nThong tin toan bo sinh vien:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("Sinh vien %d:\n", sinhVien[i].id);
        printf("Ten: %s", sinhVien[i].name);
        printf("Tuoi: %d\n", sinhVien[i].age);
        printf("So dien thoai: %s", sinhVien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}
