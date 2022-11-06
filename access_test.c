#include <stdio.h>
#include <fcntl.h> 
#include <unistd.h>
#include <uk/test.h>

UK_TESTCASE(uk_libc_testsuite, access_tests)
{
    int fd2 = open("/test.txt", O_RDWR | O_CREAT);
    int ret = access("/test.txt", F_OK);

    UK_TEST_EXPECT_SNUM_EQ(ret, 0);
}