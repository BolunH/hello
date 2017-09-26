#include <stdio.h>

#include <pthread.h>

void *say_hello(void *msg)
{
	printf("hello, %s\n", (char *)msg);
	return NULL;
}

int main(void)
{
	pthread_t hello;
	pthread_create(&hello, NULL,
		       	say_hello, "friend");
	printf("你好， 世界!\n");
	pthread_join(hello, NULL);
	return 0; 
}
