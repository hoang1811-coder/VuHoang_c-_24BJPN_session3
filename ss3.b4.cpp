#include <stdio.h>
int main() {
    float toan, van, anh, tongDiem, diemTrungBinh;
    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem mon Van: ");
    scanf("%f", &van);
    printf("Nhap diem mon Anh: ");
    scanf("%f", &anh);
    tongDiem = toan + van + anh;
    diemTrungBinh = tongDiem / 3;
    printf("Tong diem: %.2f\n", tongDiem);
    printf("Diem trung binh: %.2f\n", diemTrungBinh);

    return 0;
}
