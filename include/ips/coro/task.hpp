#ifndef IPSCORO_TASK_HPP
#define IPSCORO_TASK_HPP

#include <coroutine>

namespace ips::coro {
	struct [[nodiscard]] Task {
		struct promise_type {
			Task get_return_object() { return {}; }
			std::suspend_never initial_suspend() { return {}; }
			std::suspend_never final_suspend() noexcept { return {}; }
			void return_void() {}
			void unhandled_exception() {}
		};
	};
}  // namespace ips::coro

#endif  // IPSCORO_TASK_HPP