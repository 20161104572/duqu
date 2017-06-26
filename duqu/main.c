#include <stdio.h>
int main()
{
    char a[70];
    char b[70];
    FILE *fp;
    fp=fopen("//Users//a20161104572//Desktop//duqu//GPS170510.log","r");
    while(!feof(fp))
    {
        fscanf(fp,"%s",a);
        fscanf(fp,"%s",b);
    }
    printf("GPGGA 时间: ");
    int i=7;
    while(b[i]!=',')
    {
        printf("%c",b[i]);
        i++;
    }
    printf("\n海拔=");
    i=43;
    while(b[i]!=',')
    {
        printf("%c",b[i]);
        i++;
    }
    printf("\n纬度=");
    i=14;
    while(b[i]!=',')
    {
        printf("%c",b[i]);
        i++;
    }
    printf("%c\n",b[i+1]);
    i=i+3;
    printf("经度=");
    while(b[i]!=',')
    {
        printf("%c",b[i]);
        i++;
    }
    printf("%c\n",b[i+1]);
    printf("GPRMC时间: ");
    i=7;
    while(a[i]!=',')
    {
        printf("%c",a[i]);
        i++;
    }
    printf("\n纬度=");
    i=16;
    while(a[i]!=',')
    {
        printf("%c",a[i]);
        i++;
    }
    printf("%c\n",a[i+1]);
    return 0;
}
