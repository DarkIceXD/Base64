#pragma once
#include <cstdint>
#include <string>
#include <vector>

namespace base64 {
	enum class type {
		standard,
		url
	};

	std::string encode(const char* data, const size_t size, type t = type::standard);
	std::string decode(const char* data, const size_t size);
}