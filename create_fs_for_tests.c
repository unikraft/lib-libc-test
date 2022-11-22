#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <dirent.h>
#include <unistd.h>
#include <fcntl.h>

static int not_initialized = 1;

int create_fs_for_tests(void)
{
	struct stat st = {0};

	if(not_initialized == 0)
		return 0;

	if(not_initialized == -1)
		return -1;

	if (stat("/tmp", &st) == -1) {
    	if(mkdir("/tmp", 0700) == -1){
			not_initialized = -1;
			return not_initialized;
		}
	}

	if (stat("/etc", &st) == -1) {
    	if(mkdir("/etc", 0700) == -1){
			not_initialized == -1;
			return not_initialized;
		}
	}

	int fd2 = open ("/etc/passwd", O_RDWR|O_CREAT, 0777);

	if (fd2 != -1)
    	close(fd2);

	not_initialized = 0;
	return not_initialized;
}

int destroy_fs(void){

	struct dirent *dir;
	DIR *dr;

	if((dr = opendir("/tmp")) == NULL){
		return -1;
	}

	char filename_qfd[261];

	while ((dir = readdir(dr)) != NULL){
  		struct stat stbuf;
  		sprintf(filename_qfd , "%s/%s", "/tmp", dir->d_name);

		if(stat(filename_qfd, &stbuf) == -1)
			continue;

  		if ( ( stbuf.st_mode & S_IFMT ) == S_IFDIR )
   			continue;
  		
  		else 
			if (remove(filename_qfd))
				return	-1;
  		
 	}

	if(closedir(dr))
		return -1;

	if (remove("/tmp")) 
        return -1;

	if (remove("/etc/passwd")) 
        return -1;
	
	if (remove("/etc")) 
        return -1;
	
    not_initialized = 1;
    return 0;
}
