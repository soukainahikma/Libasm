#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>

size_t 	ft_strlen(char *str);
ssize_t	ft_write(unsigned int fd, const char *buf, size_t count);
ssize_t	ft_read(unsigned int fd, const char *buf, size_t count);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
char   	*ft_strdup(const char *src);

int main()
{
	printf("testing my functions\n");
	printf("----testing ft_write----************************************************\n");
	int fd1;
	char	*str;
	
	str = (char *)malloc(255);
	str = "hello world\n";
	fd1 = open("existing_file.txt",O_WRONLY | O_APPEND);
	printf("----ft_write----\n");
	printf("return of ft_write ===> %zu\n", ft_write(fd1, str, 12));
	printf("printing the errno ===> %d\n", errno);
	printf("----write----\n");
	printf("return of write    ===> %zu\n", write(fd1, str, 12));
	printf("printing the errno ===> %d\n", errno);
	printf("----ft_write----\n");
	printf("\nreturn of ft_write ===> %zu\n", ft_write(0, str, 12));
	printf("printing the errno   ===> %d\n", errno);
	printf("----write----\n");
	printf("\nreturn of write  ===> %zu\n", write(0, str, 12));
	printf("printing the errno ===> %d\n", errno);
	printf("----testing ft_read----************************************************\n");
	int i;
	int j;
	int fd2;
	int fd3;
	char	st1[12];
	char	st2[12];
	fd2 = open("main1.c",   O_RDONLY);
	fd3 = open("existing_file", O_CREAT | O_RDWR);
	i = ft_read(fd2, st2, 13);
	printf("----ft_read----\n");
	printf("return of ft_read ==> %d\n", i);
	printf("return of %s\n", st2);
	printf("printing the errno ===> %d\n", errno);
	j = read(fd2, st2, 13);
	printf("----read----\n");
	printf("return of read ==> %d\n", j);
	printf("return of %s\n", st2);
	printf("printing the errno ===> %d\n", errno);
	printf("----testing ft_strlen----************************************************\n");
	char *len_test;
	len_test = (char *)malloc(17);
	len_test = "";
	printf("ft_strlen ===> |%zu|\n", ft_strlen(len_test));
	printf("strlen    ===> |%zu|\n", strlen(len_test));
	len_test = "kikouelnsdjk";
	printf("ft_strlen ===> |%zu|\n", ft_strlen(len_test));
	printf("strlen    ===> |%zu|\n", strlen(len_test));
	printf("----testing ft_strcpy----************************************************\n");
	char *src;
	char *dst;
	src = (char *)malloc(200);
	dst = (char *)malloc(200);
	src = "here is a copied string";
	printf("ft_strcpy ===> %s\n", ft_strcpy(dst, src));
	printf("strcpy    ===> %s\n", strcpy(dst, src));
	src = "";
	printf("ft_strcpy ===> %s\n", ft_strcpy(dst, src));
	printf("strcpy    ===> %s\n", strcpy(dst, src));
	printf("----testing ft_strcmp----************************************************\n");
	char *src1;
	char *dst1;
	src1 = "a";
	dst1 = "s";
	printf("ft_strcmp ===> %d\n", ft_strcmp(dst1, src1));
	printf("strcmp   ===> %d\n", strcmp(dst1, src1));
	src1 = "";
	dst1 = "";
	printf("ft_strcmp ===> %d\n", ft_strcmp(dst1, src1));
	printf("strcmp   ===> %d\n", strcmp(dst1, src1));
	src1 = "";
	dst1 = "s";
	printf("ft_strcmp ===> %d\n", ft_strcmp(dst1, src1));
	printf("strcmp   ===> %d\n", strcmp(dst1, src1));
	src1 = "a";
	dst1 = "";
	printf("ft_strcmp ===> %d\n", ft_strcmp(dst1, src1));
	printf("strcmp   ===> %d\n", strcmp(dst1, src1));
	src1 = "auyjkhgjugvghffjgf";
	dst1 = "skjhuyjgjhfyghftfg";
	printf("ft_strcmp ===> %d\n", ft_strcmp(dst1, src1));
	printf("strcmp   ===> %d\n", strcmp(dst1, src1));
	src1 = "aaaaaaa";
	dst1 = "aaaaaaa";
	printf("ft_strcmp ===> %d\n", ft_strcmp(dst1, src1));
	printf("strcmp   ===> %d\n", strcmp(dst1, src1));
	printf("----testing ft_strdup----************************************************\n");
	char *dup;
	char *src3;
	src3 = "hello world, here i'm trying to write a very long string hello world, here i'm trying to write a very long string hello world, here i'm trying to write a very long string hello world, here i'm trying to write a very long string hello world, here i'm trying to write a very long string hello world, here i'm trying to write a very long string hello world, here i'm trying to write a very long string hello world, here i'm trying to write a very long string ";
	printf("ft_strdup ===> %s\n", dup = ft_strdup(src3));
	printf("len of the dup %lu\n", strlen(dup));
	printf("strdup    ===> %s\n", dup = strdup(src3));
	printf("len of the dup %lu\n", strlen(dup));
	src3 = "";
	printf("ft_strdup ===> %s\n", dup = ft_strdup(src3));
	printf("len of the dup %lu\n", strlen(dup));
	printf("strdup    ===> %s\n", dup = strdup(src3));
	printf("len of the dup %lu\n", strlen(dup));
}
