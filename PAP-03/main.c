#include "header.h"

int main()
{
    printf("===========================================\n");
    printf("                TUGAS 1\n");
    printf("-------------------------------------------\n");
    printf("Masukkan array: ");
    scanf("%d", &array);
    printf("--------------------------\n");
    for(arr=0; arr<array; arr++)
        {
            printf("Masukkan nilai array %d: ", arr+1);
            scanf("%d", &arri[arr]);
        }
    hasil=count_array(arri, array);
    printf("--------------------------\n");
    printf("Nilai array yang ditampilkan adalah %d \n", hasil);
    printf("===========================================\n");

    puts("");
    puts("");

    printf("===========================================\n");
    printf("                TUGAS 2\n");
    printf("-------------------------------------------\n");
    printf("Masukkan jumlah array: ");
    scanf("%d", &jumlah);
    printf("--------------------------\n");
    for(nilai=0; nilai<jumlah; nilai++)
        {
            printf("Masukkan nilai array %d: ", nilai+1);
            scanf("%d", &data[nilai]);
        }
    cek=cek_urut(data,jumlah);
    printf("--------------------------\n");
    if(cek==true)
    {
        printf("Array urut.\n");
    }
    else
        {
            printf("Array blm urut.\n");
        }
    printf("===========================================\n");

    puts("");
    puts("");

    printf("===========================================\n");
    printf("                TUGAS 3\n");
    printf("-------------------------------------------\n");
    bubble_sort1(sas,bcs);

    puts("");
    puts("");

    printf("===========================================\n");
    printf("                TUGAS 4\n");
    printf("-------------------------------------------\n");
    bubble_sort2(arr1,arr2);

    puts("");
    puts("");

    printf("===========================================\n");
    printf("             TUGAS TAMBAHAN\n");
    printf("-------------------------------------------\n");
    tugastambahan(arr1,arr2);
    return 0;
}
