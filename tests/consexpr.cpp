#include "common.hpp"

using P = fpm::fixed_16_16;

TEST(constexpr, addition)
{
	static_assert(P{0} + P{0} == P{0}, "Arithmetics failed");
	static_assert(P{1} + P{0} == P{1}, "Arithmetics failed");
	static_assert(P{1} + P{1} == P{2}, "Arithmetics failed");
	static_assert(P{1} + P{2} == P{3}, "Arithmetics failed");

	static_assert(P{0} + 0 == P{0}, "Arithmetics failed");
	static_assert(P{1} + 0 == P{1}, "Arithmetics failed");
	static_assert(P{1} + 1 == P{2}, "Arithmetics failed");
	static_assert(P{1} + 2 == P{3}, "Arithmetics failed");

	static_assert(0 + P{0} == P{0}, "Arithmetics failed");
	static_assert(1 + P{0} == P{1}, "Arithmetics failed");
	static_assert(1 + P{1} == P{2}, "Arithmetics failed");
	static_assert(1 + P{2} == P{3}, "Arithmetics failed");
}

TEST(constexpr, subtraction)
{
	static_assert(P{0} - P{0} == P{ 0}, "Arithmetics failed");
	static_assert(P{1} - P{0} == P{ 1}, "Arithmetics failed");
	static_assert(P{1} - P{1} == P{ 0}, "Arithmetics failed");
	static_assert(P{1} - P{2} == P{-1}, "Arithmetics failed");

	static_assert(P{0} - 0 == P{ 0}, "Arithmetics failed");
	static_assert(P{1} - 0 == P{ 1}, "Arithmetics failed");
	static_assert(P{1} - 1 == P{ 0}, "Arithmetics failed");
	static_assert(P{1} - 2 == P{-1}, "Arithmetics failed");

	static_assert(0 - P{0} == P{ 0}, "Arithmetics failed");
	static_assert(1 - P{0} == P{ 1}, "Arithmetics failed");
	static_assert(1 - P{1} == P{ 0}, "Arithmetics failed");
	static_assert(1 - P{2} == P{-1}, "Arithmetics failed");
}

/*
TEST(constexpr, multiplication)
{
	static_assert(P{0} * P{0} == P{0}, "Arithmetics failed");
	static_assert(P{1} * P{0} == P{0}, "Arithmetics failed");
	static_assert(P{1} * P{1} == P{1}, "Arithmetics failed");
	static_assert(P{1} * P{2} == P{2}, "Arithmetics failed");

	static_assert(P{0} * 0 == P{0}, "Arithmetics failed");
	static_assert(P{1} * 0 == P{0}, "Arithmetics failed");
	static_assert(P{1} * 1 == P{1}, "Arithmetics failed");
	static_assert(P{1} * 2 == P{2}, "Arithmetics failed");

	static_assert(0 * P{0} == P{0}, "Arithmetics failed");
	static_assert(1 * P{0} == P{0}, "Arithmetics failed");
	static_assert(1 * P{1} == P{1}, "Arithmetics failed");
	static_assert(1 * P{2} == P{2}, "Arithmetics failed");
}

TEST(constexpr, division)
{
	static_assert(P{1} / P{1} == P{1  }, "Arithmetics failed");
	static_assert(P{1} / P{2} == P{0.5}, "Arithmetics failed");

	static_assert(P{1} / 1 == P{1  }, "Arithmetics failed");
	static_assert(P{1} / 2 == P{0.5}, "Arithmetics failed");

	static_assert(1 / P{1} == P{1  }, "Arithmetics failed");
	static_assert(1 / P{2} == P{0.5}, "Arithmetics failed");
}
*/
