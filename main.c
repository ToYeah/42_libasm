#include <stdio.h>
#include "libasm.h"
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>

#ifdef REAL
#define FT_STRLEN strlen
#define FT_STRCMP strcmp
#define FT_STRCPY strcpy
#define FT_STRDUP strdup
#define FT_WRITE write
#define FT_READ read
#define OPEN_FILE "write_real.log"
#else
#define FT_STRLEN ft_strlen
#define FT_STRCMP ft_strcmp
#define FT_STRCPY ft_strcpy
#define FT_STRDUP ft_strdup
#define FT_WRITE ft_write
#define FT_READ ft_read
#define OPEN_FILE "write_toya.log"
#endif

void test_ft_strlen()
{
	char *s1 = "Hello World";
	char *s2 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	char *s3 = "";
	printf("--------------------");
	printf("ft_strlen");
	printf("--------------------\n");
	printf("s1:%ld\n", FT_STRLEN(s1));
	printf("s2:%ld\n", FT_STRLEN(s2));
	printf("s3:%ld\n", FT_STRLEN(s3));
}

void test_ft_strcmp()
{
	char *s0 = "";
	char *s1 = "Hello World!";
	char *s2 = "Hello World!";
	char *s3 = "Hello World";
	char *s4 = "Hello World!!!!!!!";

	printf("--------------------");
	printf("ft_strcmp");
	printf("--------------------\n");
	printf("s0:s0:%d\n", FT_STRCMP(s0, s0));
	printf("s0:s1:%d\n", FT_STRCMP(s0, s1));
	printf("s1:s0:%d\n", FT_STRCMP(s1, s0));
	printf("s1:s2:%d\n", FT_STRCMP(s1, s2));
	printf("s1:s3:%d\n", FT_STRCMP(s1, s3));
	printf("s1:s4:%d\n", FT_STRCMP(s1, s4));
	printf("s2:s1:%d\n", FT_STRCMP(s2, s1));
	printf("s2:s3:%d\n", FT_STRCMP(s2, s3));
	printf("s2:s4:%d\n", FT_STRCMP(s2, s4));
	printf("s3:s1:%d\n", FT_STRCMP(s3, s1));
	printf("s3:s2:%d\n", FT_STRCMP(s3, s2));
	printf("s3:s4:%d\n", FT_STRCMP(s3, s4));
	printf("s4:s1:%d\n", FT_STRCMP(s4, s1));
	printf("s4:s2:%d\n", FT_STRCMP(s4, s2));
	printf("s4:s3:%d\n", FT_STRCMP(s4, s3));
}

void test_ft_strcpy()
{
	char s1[1000];
	char *s2 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irur";
	char *s3 = "";
	char *s4 = "ABCDEFGHIJ";

	printf("--------------------");
	printf("ft_strcpy");
	printf("--------------------\n");
	printf("%s\n", FT_STRCPY(s1, s2));
	printf("%s\n", FT_STRCPY(s1, s3));
	printf("%s\n", FT_STRCPY(s1, s4));
}

void test_ft_strdup()
{
	char *s1 = "";
	char *s2 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	char *s3 = "abcdefghijklmnopqrstuvwxyz01234567890";
	char *res1 = FT_STRDUP(s1);
	char *res2 = FT_STRDUP(s2);
	char *res3 = FT_STRDUP(s3);
	printf("--------------------");
	printf("ft_strdup");
	printf("--------------------\n");
	printf("s1:%s\n", res1);
	printf("s2:%s\n", res2);
	printf("s3:%s\n", res3);
	free(res1);
	free(res2);
	free(res3);
}

void test_ft_read()
{
	char buf[1001];
	buf[1000] = '\0';
	int fd = open("./main.c", O_RDONLY);
	printf("--------------------");
	printf("ft_read");
	printf("--------------------\n");
	printf("exist:%ld\n", FT_READ(fd, buf, 1000));
	printf("exist:%s\n", buf);
	printf("not exist:%ld\n", FT_READ(5, buf, 1000));
	printf("errno:%d\n", errno);
	printf("over:%ld\n", FT_READ(fd, buf, -100));
	printf("errno:%d\n", errno);
	printf("stdin:%ld\n", FT_READ(0, buf, 1000));
	printf("stdin:%s\n", buf);
}

void test_ft_write()
{

	char *s1 = "Hello World";
	ssize_t res;
	int fd = open(OPEN_FILE, O_WRONLY);
	printf("--------------------");
	printf("ft_write");
	printf("--------------------\n");
	res = write(1, s1, 11);
	printf("%ld\n",res);

	errno = 0;
	res = write(1, s1, -11);
	printf("%ld\n",res);
	printf("errno:%d\n", errno);

	errno = 0;
	res = write(5, s1, 11);
	printf("%ld\n",res);
	printf("errno:%d\n", errno);

	res = write(fd, s1, 11);
	printf("%ld\n",res);

}

int main()
{

	test_ft_strlen();
	test_ft_strcmp();
	test_ft_strcpy();
	test_ft_strdup();
	test_ft_read();
	test_ft_write();
}
