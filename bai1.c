#include <stdio.h>
#include <string.h>

struct sinhVien {
    char name[50];
    int age;
    char phoneNumber[50];
};

typedef struct sinhVien sinhVien;

int main() {
    sinhVien s;
    strcpy(s.name, "Nguyen Quang Minh");
    s.age = 18;  
    strcpy(s.phoneNumber, "0825327698");

    printf("Ten hoc sinh la %s \n", s.name);
    printf("Tuoi hoc sinh la %d \n", s.age);
    printf("So dien thoai cua hoc sinh la %s \n", s.phoneNumber);

    return 0;
}


