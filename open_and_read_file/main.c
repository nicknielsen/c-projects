#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("C:\\Users\\NickNielsen\\OneDrive - Nutanix\\Desktop\\test.txt", "r");
    if (fp == NULL){
        exit(EXIT_FAILURE);
    }

    while ((read = getline(&line, &len, fp)) != -1) {
        printf("%s", line);
    }

    free(line);
    fclose(fp);

    exit(EXIT_SUCCESS);

}


/* FIRST VERSION:
int main()
{
    FILE *file_ptr;
    char c;

    file_ptr = fopen("C:\\Users\\NickNielsen\\OneDrive - Nutanix\\Desktop\\test.txt", "r");

    if (file_ptr == NULL){
        printf("file could not be opened");
    }

    while ((c=fgetc(file_ptr)) != EOF){
        printf("%c", c);
    }

    fclose(file_ptr);

    return 0;
}
*/
