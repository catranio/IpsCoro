#include <iostream>

#include <ips/coro/task.hpp>

ips::coro::Task myCoroutine() {
	co_return;
}


int main() {
	std::cout << "playground start" << std::endl;

	auto task = myCoroutine();
	std::cout << "start coro" << &task << std::endl;
	return 0;
}
