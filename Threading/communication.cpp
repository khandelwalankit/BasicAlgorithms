#include<iostream>
#include<atomic>
#include<future>
#include<cstdlib>

void do_a(std::atomic<bool>& done) {
     // do things
     done = true;
}

int main() {
    std::atomic<bool> done(false);

    auto a = std::async(do_a, done);

    auto b = std::async([](std::atomic<bool>& done) {
        while (not done) {
            std::cout << "still not done" << std::endl;
            sleep(1);
        }
    });

    // other stuff in parallel.
}
