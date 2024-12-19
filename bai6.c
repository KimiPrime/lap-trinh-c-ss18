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
        {5, "thien", 24, "025327698"}
    };
    
    int currentSize = 5;

    struct SinhVien newSinhVien;

    printf("Nhap thong tin sinh vien moi:\n");

    newSinhVien.id = currentSize + 1;

    printf("Ten: ");
    getchar();
    fgets(newSinhVien.name, sizeof(newSinhVien.name), stdin);

    printf("Tuoi: ");
    scanf("%d", &newSinhVien.age);

    printf("So dien thoai: ");
    getchar();
    fgets(newSinhVien.phoneNumber, sizeof(newSinhVien.phoneNumber), stdin);

    sinhVien[currentSize] = newSinhVien;
    currentSize++;

    printf("\nThong tin toan bo sinh vien trong mang:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("Sinh vien %d:\n", sinhVien[i].id);
        printf("Ten: %s", sinhVien[i].name);
        printf("Tuoi: %d\n", sinhVien[i].age);
        printf("So dien thoai: %s", sinhVien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}
