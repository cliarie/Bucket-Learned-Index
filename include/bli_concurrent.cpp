#include <pthread.h>

namespace learnedindex
{
    class Concurrent
    {
    public:
        Concurrent();
        ~Concurrent();

        void run();

    private:
        pthread_t thread;
        static void *run(void *arg);
    };

    Concurrent::Concurrent()
    {
        pthread_create(&thread, NULL, run, NULL);
    }

    Concurrent::~Concurrent()
    {
        pthread_join(thread, NULL);
    }

    void Concurrent::run()
    {
        // do something
    }

    void *Concurrent::run(void *arg)
    {
        ((Concurrent *)arg)->run();
        return NULL;
    }
}