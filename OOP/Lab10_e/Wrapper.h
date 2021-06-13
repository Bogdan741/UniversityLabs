#pragma once
#ifndef _WRAPPER_
#define _WRAPPER_
#include<utility>
namespace MyType {
	template <typename T, typename Parametr>
	class NamedType {
	public:
		explicit NamedType(const T& value) : value_(value) {}
		explicit NamedType(T&& value) : value_(std::move(value)) {}
		T& get() { return value_; }
		T const& get() const { return value_; }
	private:
		T value_;
	};
}
#endif // !_WRAPPER_

