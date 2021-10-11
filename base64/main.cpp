#include "base64.h"
#include <iostream>

int main()
{
	const auto string = std::string("Base64 encode test");
	const auto encoded = base64::encode(string.data(), string.size());
	std::cout << "encoded: " << encoded << '\n';
	const auto string2 = std::string("Base64 encode test.");
	const auto encoded2 = base64::encode(string2.data(), string2.size());
	std::cout << "encoded: " << encoded2 << '\n';
	const auto string3 = std::string("Base64 encode test..");
	const auto encoded3 = base64::encode(string3.data(), string3.size());
	std::cout << "encoded: " << encoded3 << '\n';
	
	const auto decoded = base64::decode(encoded.c_str(), encoded.size());
	std::cout << "decoded: " << decoded << '\n';
	const auto decoded2 = base64::decode(encoded2.c_str(), encoded2.size());
	std::cout << "decoded: " << decoded2 << '\n';
	const auto decoded3 = base64::decode(encoded3.c_str(), encoded3.size());
	std::cout << "decoded: " << decoded3 << '\n';

	const auto string_without_padding = std::string("QmFzZTY0IGVuY29kZSB0ZXN0Lg");
	const auto decoded_without_padding = base64::decode(string_without_padding.data(), string_without_padding.size());
	std::cout << "decoded: " << decoded_without_padding << '\n';
}