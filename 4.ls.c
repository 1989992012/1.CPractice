/*************************************************************************
	> File Name: 4.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年04月27日 星期六 16时55分53秒
 ************************************************************************/

#include <stdio.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>
int main(int argc,char* argv[])
{
     DIR* dir = opendir(".");
     struct dirent* ent=NULL;
     while((ent = readdir(dir)))
     {
         if((ent->d_type == 4||ent->d_type == 8)&&ent->d_name[0]!='.')
         printf("%s  ",ent->d_name);
     }
     closedir(dir);
     puts("");
     return 0;
}
