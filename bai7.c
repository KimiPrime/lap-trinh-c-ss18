#include <stdio.h>
#include <string.h>

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
        {5, "thien", 24, "025327698"}
    };
    
    int currentSize = 5;
    char nameToDelete[100];
    int found = 0;
    
    printf("Nhap ten sinh vien can xoa: ");
    getchar();
    fgets(nameToDelete, sizeof(nameToDelete), stdin);
    nameToDelete[strcspn(nameToDelete, "\n")] = 0;

    for (int i = 0; i < currentSize; i++) {
        if (strcmp(sinhVien[i].name, nameToDelete) == 0) {
            found = 1;
            for (int j = i; j < currentSize - 1; j++) {
                sinhVien[j] = sinhVien[j + 1];
            }
            currentSize--;
            printf("Sinh vien %s da bi xoa.\n", nameToDelete);
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien voi ten: %s\n", nameToDelete);
    }

    printf("\nThong tin toan bo sinh vien trong mang sau khi xoa:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("Sinh vien %d:\n", sinhVien[i].id);
        printf("Ten: %s", sinhVien[i].name);
        printf("Tuoi: %d\n", sinhVien[i].age);
        printf("So dien thoai: %s", sinhVien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}
