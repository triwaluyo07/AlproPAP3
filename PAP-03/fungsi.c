#include "header.h"
///TUGAS 1
int count_array(int data[], int jml_data)
{
    int x;
    for(x=0; x<jml_data; x++)
        {
            x=x+1;
        }
    return(jml_data);
}

///TUGAS 2
int cek_urut(int data[], int jml_data)
{
    int hitung=0, x;
    for(x=0; x<jml_data; x++)
    {
        if(data[x]<data[x+1])
        {
            hitung=hitung+1;
        }
    }
    if(hitung==jml_data-1)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

///TUGAS 3
void bubble_sort1(int data[], int jml_data)
{
    int x, y, z, temp=0;
    printf("Masukkan jumlah Array: ");
    scanf("%d", &jml_data);
    printf("--------------------------\n");
    for(x=0; x<jml_data; x++)
        {
            printf("Masukkan nilai array %d: ", x+1);
            scanf("%d", &data[x]);
        }
    printf("--------------------------\n");
    for(x=0; x<jml_data; x++)
    {
        for(y=0; y<jml_data; y++)
        {
            printf("%d ", data[y]);
        }
        for(z=0; z<jml_data-1; z++)
        {
            if(data[z]>data[z+1])
            {
                temp=data[z];
                data[z]=data[z+1];
                data[z+1]=temp;
            }
        }
        printf("\n");
    }
}

///TUGAS 4
void bubble_sort2(int data[], int jml_data)
{
    int x, y, z, temp=0;
    bool sort;
    printf("Masukkan jumlah Array: ");
    scanf("%d", &jml_data);
    printf("--------------------------\n");
    for(x=0; x<jml_data; x++)
        {
            printf("Masukkan nilai array %d: ", x+1);
            scanf("%d", &data[x]);
        }
    printf("--------------------------\n");
    for(x=0; x<jml_data; x++)
    {
        for(y=0; y<jml_data; y++)
        {
            printf("%d ", data[y]);
            sort=cek_urut(data,jml_data);
        }
        if(sort==true)
        {
            x=jml_data;
        }
        for(z=0; z<jml_data-1; z++)
        {
            if(data[z]>data[z+1])
            {
                temp=data[z];
                data[z]=data[z+1];
                data[z+1]=temp;
            }
        }
        printf("\n");
    }
}

///TUGAS TAMBAHAN
void tugastambahan(int data[], int jml_data)
{
    int x, y, z, temp=0;
    bool sort;
    printf("Masukkan jumlah Array: ");
    scanf("%d", &jml_data);
    printf("--------------------------\n");
    for(x=0; x<jml_data; x++)
        {
            printf("Masukkan nilai array %d: ", x+1);
            scanf("%d", &data[x]);
        }
    printf("--------------------------\n");
    for(x=0; x<jml_data; x++)
    {
        for(y=0; y<jml_data; y++)
        {
            printf("[%d] ", data[y]);
            sort=cek_urut(data,jml_data);
        }
        if(sort==true)
        {
            x=jml_data;
        }
        for(z=0; z<jml_data-1; z++)
        {
            if(data[z]<data[z+1])
            {
                temp=data[z];
                data[z]=data[z+1];
                data[z+1]=temp;
            }
        }
        printf("\n");
    }
}

