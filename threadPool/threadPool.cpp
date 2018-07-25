// threadPool.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "thread_pool.h"
void func(int n) {
    printf("hello from %d\n", n);
}

void test() {
    ThreadPool pool(10);
    pool.start();

    for (int i = 0; i < 100; ++i) {
        pool.append(std::bind(func, i));
    }
    while (true)
    {
    };
}

int main() {
    test();

}