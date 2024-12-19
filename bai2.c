#include <stdio.h>
#include <string.h>
struct SinhVien{
	char name[50];
	char age[10];
	char phoneNumber[15];
};
typedef struct SinhVien SinhVien;
int main(){
	SinhVien s;
	printf("vui long nhap ten ");
	fgets(s.name,sizeof(s.name),stdin);
	fflush(stdin);
	printf("vui long nhap tuoi ");
	fgets(s.age,sizeof (s.age),stdin);
	fflush(stdin);
	printf("vui long nhap so dien thoai ");
	fgets(s.phoneNumber,sizeof (s.phoneNumber),stdin);
	fflush(stdin);
	printf(" ten hoc sinh %s ",s.name);
	printf(" tuoi hoc sinh %s ",s.age);
	printf(" so dien thoai hoc sinh %s",s.phoneNumber);	
return 0;
}

