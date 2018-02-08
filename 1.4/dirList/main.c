#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
    DIR *dir;
    struct dirent *dirp;

    if ((dir = opendir(argv[1])) == NULL) {
        printf("error");
        return 1;
    }

    while ((dirp = readdir(dir)) != NULL) {
        printf("%s %d\n", dirp->d_name,dirp->d_type);
    }
    closedir(dir);
    return 0;
}