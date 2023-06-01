#include <cstdlib>
#include <ips/coro/version.hpp>

const unsigned ips::coro::Version::major = 0;
const unsigned ips::coro::Version::minor = 0;
const unsigned ips::coro::Version::patch = 0;

const std::string ips::coro::Version::version_ = std::to_string(major) + "." +
                                                 std::to_string(minor) + "." +
                                                 std::to_string(patch);

[[maybe_unused]] std::string ips::coro::Version::pretty() noexcept {
  return "IpsCoro version: " + version_;
}

[[maybe_unused]] std::string_view ips::coro::Version::version() noexcept {
  return version_;
}
