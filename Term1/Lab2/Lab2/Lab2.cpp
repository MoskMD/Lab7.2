#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <windows.h> 

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char name1[9] = "RT-11-24", name2[13] = "RT-11-24", name3[9] = "CGU-12K";
    char sc1 = 'R', sc2 = 'R', sc3 = 'C';
    int cnt1 = 100000, cnt2 = 50000;
    double cnt3 = 17.5;
    int sq1 = 12, sq2 = 10, sq3 = 3;

<<<<<<< HEAD
    /* printf("1. ������: ����������, ���, ������, ������� > ");
=======
     printf("1. ������: ����������, ���, ������, ������� > ");
>>>>>>> Add .gitattributes, .gitignore, and README.md. g
     scanf("%s %c %d %d", name1, &sc1, &cnt1, &sq1);
     printf("2. ������: ����������, ���, ������, ������� > ");
     scanf("%s %c %d %d", name2, &sc2, &cnt2, &sq2);
     printf("3. ������: ����������, ���, ������, ������� > ");
<<<<<<< HEAD
     scanf("%s %c %lf %d", name3, &sc3, &cnt3, &sq3);*/
=======
     scanf("%s %c %lf %d", name3, &sc3, &cnt3, &sq3);
>>>>>>> Add .gitattributes, .gitignore, and README.md. g

    printf("|--------------------------------------------|\n");
    printf("|³������ �������������                     |\n");
    printf("|--------------------------------------------|\n");
    printf("| ����������   | ��� | ������  | ʳ������  |\n");
    printf("|--------------|-----|----------|------------|\n");

    printf("|%-14s|%-5c|%-10d|%-12d|\n", name1, sc1, cnt1, sq1);
    printf("|--------------|-----|----------|------------|\n");
    printf("|%-14s|%-5c|%-10d|%-12d|\n", name2, sc2, cnt2, sq2);
    printf("|--------------|-----|----------|------------|\n");
    printf("|%-14s|%-5c|%-10.1lf|%-12d|\n", name3, sc3, cnt3, sq3);

    printf("|--------------------------------------------|\n");
    printf("| �������: R � ��������; C � �����������    |\n");
    printf("|--------------------------------------------|\n");

    return 0;
}
