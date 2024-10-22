#include <stdio.h>
#include <pthread.h>

volatile int counter = 0;
pthread_mutex_t lock;

void* incrementCounter(void* arg) {
    for (int i = 0; i < 1000000; i++) {
        pthread_mutex_lock(&lock);  // Lock
        counter++;
        pthread_mutex_unlock(&lock);  // UnLock 
    }
    return NULL;
}

int main() {
    pthread_t t1, t2;

    // Mutex initialize 
    pthread_mutex_init(&lock, NULL);

    // Do threads create ho rahe hain
    pthread_create(&t1, NULL, incrementCounter, NULL);
    pthread_create(&t2, NULL, incrementCounter, NULL);

    // Wait for threads to finish
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("Final counter value: %d\n", counter);  // Ab 2000000 hoga
    pthread_mutex_destroy(&lock);  // Mutex destroy
    return 0;
}
