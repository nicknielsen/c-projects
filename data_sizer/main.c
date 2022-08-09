#include <stdio.h>
#include <stdlib.h>

unsigned int getBytes(unsigned int programSize);
unsigned int getKilobytes(unsigned int programSize);
unsigned int getMegabytes(unsigned int programSize);
unsigned int getGigabytes(unsigned int programSize);

int main()
{
    unsigned int quantityOfData, programSize;
    char dataType;
    int i;
    char and[] = " and ";
    char end[] = "\0";

    // 1. Enter the data type (char) followed by the number of data objects of that type (int).

    scanf("%c %u", &dataType, &quantityOfData);

    // 2. Calculate the size of the data in bytes using a switch statement based on the different data types.
    switch(dataType)
    {
        case 'i':
           programSize = quantityOfData * sizeof(int);
           break;

        case 'c':
           programSize = quantityOfData * sizeof(char);
           break;

        case 's':
           programSize = quantityOfData * sizeof(short);
           break;

        case 'd':
           programSize = quantityOfData * sizeof(double);
           break;
    }

    /*
    printf("%u B Total\n", programSize);

    printf("%u B\n", getBytes(programSize));

    printf("%u KB\n", getKilobytes(programSize));

    printf("%u MB\n", getMegabytes(programSize));

    printf("%u GB\n", getGigabytes(programSize));
    */

    // 3. Print the data in human-readable form. For example "123 KB and 456 B" for a program that stores 123,456 bytes.

    unsigned int byteArray[100] = {0};

    byteArray[0] = getBytes(programSize);
    byteArray[1] = getKilobytes(programSize);
    byteArray[2] = getMegabytes(programSize);
    byteArray[3] = getGigabytes(programSize);


    for (i = 3; i >= 0; --i)
    {
        if(byteArray[i] && i == 3)
            printf("%u GB%s", byteArray[i], (byteArray[i-1]) ? and : end );

        else if(byteArray[i] && i == 2)
            printf("%u MB%s", byteArray[i], (byteArray[i-1]) ? and : end );

        else if(byteArray[i] && i == 1)
            printf("%u KB%s", byteArray[i], (byteArray[i-1]) ? and : end );

        else if(byteArray[i] && i == 0)
            printf("%u B", byteArray[i]);
    }


    return 0;
}



unsigned int getBytes(unsigned int programSize)
{
    unsigned int bytes;

    bytes = programSize % 1000;

    return bytes;
}

unsigned int getKilobytes(unsigned int programSize)
{
    unsigned int kilobytes;

    kilobytes = programSize / 1000;

    kilobytes %= 1000;

    return kilobytes;
}

unsigned int getMegabytes(unsigned int programSize)
{
    unsigned int megabytes;

    megabytes = programSize / 1000000;

    megabytes %= 1000;

    return megabytes;
}

unsigned int getGigabytes(unsigned int programSize)
{
    unsigned int gigabytes;

    gigabytes = programSize / 1000000000;

    return gigabytes;
}

