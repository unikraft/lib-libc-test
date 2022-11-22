#include <stdio.h>
#include <fcntl.h> 
#include <unistd.h>
#include <uk/test.h>

UK_TESTCASE(uk_libc_access_tests, access_tests)
{
    int ret, fd;
    if ((fd = open("/test.txt", O_RDWR | O_CREAT)) != -1){
        ret = access("/test.txt", F_OK);
        UK_TEST_EXPECT_SNUM_EQ(ret, 0);
        close(fd);
    }
}
