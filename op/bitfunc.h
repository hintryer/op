#pragma once
#ifndef __BITFUNC_H_
#define __BITFUNC_H_
template<typename T>
constexpr void SET_BIT(T& x,int idx) {
	x |= 1u << idx;
}
template<typename T>
constexpr int GET_BIT(T x, int idx) {
	return (x >> idx) & 1u;
}

#endif
