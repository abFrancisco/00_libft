#include <stdio.h>
#include <string.h>
#include <time.h>

int main(int argc, char **argv)
{
    int i = 1;
    FILE *fp;
    time_t current_time;
    char    *current_time_str;
    size_t success = 0;

    #ifdef _WIN32
        fp = fopen("C:\\Users\\Francisco\\Documents\\42\\C\\LOGS\\log.txt", "a");
    #endif
    #ifdef unix
        fp = fopen(, "a")
    #endif
    time(&current_time);
    current_time_str = ctime(&current_time);
    if(argc > 1)
    {
        success = fwrite(current_time_str , 1 , strlen(current_time_str) - 1 , fp );
        success = fwrite("," , 1 , 1 , fp );
        while (i < argc)
        {
            success = fwrite(" " , 1 , 1 , fp );
            success = fwrite(argv[i] , 1 , strlen(argv[i]) , fp );
            i++;
        }
        success = fwrite("\n" , 1 , 1 , fp );
    }
    fclose(fp);
    return (0);
}