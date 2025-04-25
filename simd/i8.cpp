#include <simd>

namespace simd {
	using i8v_impl = std::experimental::native_simd<int8_t>;
	using i8v = i8v_impl*;
	using i8v_mask_impl = i8v_impl::mask_type;
	using i8v_mask = i8v_mask_impl*;

#ifndef LIB_SIMD_NO_C_INTERFACE
	extern "C" {
#endif
		i8v simd_i8_create() {
			return new i8v_impl();
		}

		void simd_i8_free(i8v v) {
			delete v;
		}

		size_t simd_i8_size() {
			return i8v_impl::size();
		}

		size_t simd_i8_optimal_alignment() {
			return std::experimental::memory_alignment_v<i8v_impl>;
		}

		i8v simd_i8_broadcast(i8v v, int8_t value) {
			*v = i8v_impl(value);
			return v;
		}

		i8v simd_i8_load(i8v v, const int8_t* data) {
			v->copy_from(data, std::experimental::element_aligned);
			return v;
		}

		i8v simd_i8_load_aligned(i8v v, const int8_t* data) {
			v->copy_from(data, std::experimental::vector_aligned);
			return v;
		}

		i8v simd_i8_store(i8v v, int8_t* data) {
			v->copy_to(data, std::experimental::element_aligned);
			return v;
		}

		i8v simd_i8_store_aligned(i8v v, int8_t* data) {
			v->copy_to(data, std::experimental::vector_aligned);
			return v;
		}

		// i8v simd_i8_logical_negate_inplace(i8v out, i8v v) {
		// 	*out = !*v;
		// 	return out;
		// }

		// i8v simd_i8_logical_negate(i8v v) {
		// 	auto out = simd_i8_create();
		// 	return simd_i8_logical_negate_inplace(out, v);
		// }

		i8v simd_i8_bitwise_negate_inplace(i8v out, i8v v) {
			*out = ~*v;
			return out;
		}

		i8v simd_i8_bitwise_negate(i8v v) {
			auto out = simd_i8_create();
			return simd_i8_bitwise_negate_inplace(out, v);
		}

		i8v simd_i8_mathematical_negate_inplace(i8v out, const i8v v) {
			*out = -*v;
			return out;
		}

		i8v simd_i8_mathematical_negate(const i8v v) {
			auto out = simd_i8_create();
			return simd_i8_mathematical_negate_inplace(out, v);
		}

		i8v simd_i8_add_inplace(i8v out, const i8v a, const i8v b) {
			*out = *a + *b;
			return out;
		}

		i8v simd_i8_add(i8v a, const i8v b) {
			auto out = simd_i8_create();
			return simd_i8_add_inplace(out, a, b);
		}

		i8v simd_i8_subtract_inplace(i8v out, const i8v a, const i8v b) {
			*out = *a - *b;
			return out;
		}

		i8v simd_i8_subtract(i8v a, const i8v b) {
			auto out = simd_i8_create();
			return simd_i8_subtract_inplace(out, a, b);
		}

		i8v simd_i8_multiply_inplace(i8v out, const i8v a, const i8v b) {
			*out = *a * *b;
			return out;
		}

		i8v simd_i8_multiply(const i8v a, const i8v b) {
			auto out = simd_i8_create();
			return simd_i8_multiply_inplace(out, a, b);
		}

		i8v simd_i8_divide_inplace(i8v out, const i8v a, const i8v b) {
			*out = *a / *b;
			return out;
		}

		i8v simd_i8_divide(const i8v a, const i8v b) {
			auto out = simd_i8_create();
			return simd_i8_divide_inplace(out, a, b);
		}

		i8v simd_i8_modulus_inplace(i8v out, const i8v a, const i8v b) {
			*out = *a % *b;
			return out;
		}

		i8v simd_i8_modulus(const i8v a, const i8v b) {
			auto out = simd_i8_create();
			return simd_i8_divide_inplace(out, a, b);
		}

		i8v simd_i8_and_inplace(i8v out, const i8v a, const i8v b) {
			*out = *a & *b;
			return out;
		}

		i8v simd_i8_and(const i8v a, const i8v b) {
			auto out = simd_i8_create();
			return simd_i8_divide_inplace(out, a, b);
		}

		i8v simd_i8_or_inplace(i8v out, const i8v a, const i8v b) {
			*out = *a | *b;
			return out;
		}

		i8v simd_i8_or(const i8v a, const i8v b) {
			auto out = simd_i8_create();
			return simd_i8_divide_inplace(out, a, b);
		}

		i8v simd_i8_xor_inplace(i8v out, const i8v a, const i8v b) {
			*out = *a ^ *b;
			return out;
		}

		i8v simd_i8_xor(const i8v a, const i8v b) {
			auto out = simd_i8_create();
			return simd_i8_divide_inplace(out, a, b);
		}

		i8v simd_i8_shift_left_inplace(i8v out, const i8v a, const i8v b) {
			*out = *a << *b;
			return out;
		}

		i8v simd_i8_shift_left(const i8v a, const i8v b) {
			auto out = simd_i8_create();
			return simd_i8_divide_inplace(out, a, b);
		}

		i8v simd_i8_shift_right_inplace(i8v out, const i8v a, const i8v b) {
			*out = *a >> *b;
			return out;
		}

		i8v simd_i8_shift_right(const i8v a, const i8v b) {
			auto out = simd_i8_create();
			return simd_i8_divide_inplace(out, a, b);
		}






		i8v_mask simd_i8_mask_create() {
			return new i8v_mask_impl();
		}

		void simd_i8_mask_free(i8v_mask m) {
			delete m;
		}

		i8v_mask simd_i8_mask_load(i8v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::element_aligned);
			return m;
		}

		i8v_mask simd_i8_mask_load_aligned(i8v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::vector_aligned);
			return m;
		}

		i8v_mask simd_i8_mask_load_bitmask(i8v_mask m, size_t bitmask) {
			alignas(std::experimental::memory_alignment_v<i8v_mask_impl>) std::array<bool, sizeof(size_t) * 8> bits;
			for (size_t i = 0; i < bits.size(); ++i)
				bits[i] = (bitmask >> i) & 1;
			m->copy_from(bits.data(), std::experimental::element_aligned);
			return m;
		}

		i8v_mask simd_i8_mask_store(i8v_mask m, bool* data) {
			m->copy_to(data, std::experimental::element_aligned);
			return m;
		}

		i8v_mask simd_i8_mask_store_aligned(i8v_mask m, bool* data) {
			m->copy_to(data, std::experimental::vector_aligned);
			return m;
		}

		size_t simd_i8_mask_store_bitmask(i8v_mask m) {
			alignas(std::experimental::memory_alignment_v<i8v_mask_impl>) std::array<bool, sizeof(size_t) * 8> bits;
			m->copy_to(bits.data(), std::experimental::vector_aligned);
			size_t out = 0;
			for (size_t i = 0; i < bits.size(); ++i)
				out |= (uint64_t{bits[i]} << i);
			return out;
		}

		bool simd_i8_mask_set_if_all(const i8v_mask m) {
			return all_of(m);
		}

		bool simd_i8_mask_set_if_none(const i8v_mask m) {
			return none_of(m);
		}

		bool simd_i8_mask_set_if_any(const i8v_mask m) {
			return any_of(m);
		}

		i8v_mask simd_i8_mask_negate_inplace(const i8v_mask out, const i8v_mask m) {
			*out = !*m;
			return out;
		}

		i8v_mask simd_i8_mask_negate(const i8v_mask m) {
			auto out = simd_i8_mask_create();
			return simd_i8_mask_negate_inplace(out, m);
		}

		i8v_mask simd_i8_mask_and_inplace(i8v_mask out, const i8v_mask a, const i8v_mask b) {
			*out = *a & *b;
			return out;
		}

		i8v_mask simd_i8_mask_and(const i8v_mask a, const i8v_mask b) {
			auto out = simd_i8_mask_create();
			return simd_i8_mask_and_inplace(out, a, b);
		}

		i8v_mask simd_i8_mask_or_inplace(i8v_mask out, const i8v_mask a, const i8v_mask b) {
			*out = *a | *b;
			return out;
		}

		i8v_mask simd_i8_mask_or(const i8v_mask a, const i8v_mask b) {
			auto out = simd_i8_mask_create();
			return simd_i8_mask_and_inplace(out, a, b);
		}

		i8v_mask simd_i8_mask_xor_inplace(i8v_mask out, const i8v_mask a, const i8v_mask b) {
			*out = *a ^ *b;
			return out;
		}

		i8v_mask simd_i8_mask_xor(const i8v_mask a, const i8v_mask b) {
			auto out = simd_i8_mask_create();
			return simd_i8_mask_and_inplace(out, a, b);
		}

		i8v_mask simd_i8_mask_equal_inplace(i8v_mask out, const i8v_mask a, const i8v_mask b) {
			*out = *a == *b;
			return out;
		}

		i8v_mask simd_i8_mask_equal(const i8v_mask a, const i8v_mask b) {
			auto out = simd_i8_mask_create();
			return simd_i8_mask_and_inplace(out, a, b);
		}

		i8v_mask simd_i8_mask_not_equal_inplace(i8v_mask out, const i8v_mask a, const i8v_mask b) {
			*out = *a & *b;
			return out;
		}

		i8v_mask simd_i8_mask_not_equal(const i8v_mask a, const i8v_mask b) {
			auto out = simd_i8_mask_create();
			return simd_i8_mask_and_inplace(out, a, b);
		}






		i8v_mask simd_i8_equal_inplace(i8v_mask out, const i8v a, const i8v b) {
			*out = *a == *b;
			return out;
		}

		i8v_mask simd_i8_equal(const i8v a, const i8v b) {
			auto out = simd_i8_mask_create();
			return simd_i8_equal_inplace(out, a, b);
		}

		i8v_mask simd_i8_not_equal_inplace(i8v_mask out, const i8v a, const i8v b) {
			*out = *a != *b;
			return out;
		}

		i8v_mask simd_i8_not_equal(const i8v a, const i8v b) {
			auto out = simd_i8_mask_create();
			return simd_i8_equal_inplace(out, a, b);
		}

		i8v_mask simd_i8_greater_equal_inplace(i8v_mask out, const i8v a, const i8v b) {
			*out = *a >= *b;
			return out;
		}

		i8v_mask simd_i8_greater_equal(const i8v a, const i8v b) {
			auto out = simd_i8_mask_create();
			return simd_i8_equal_inplace(out, a, b);
		}

		i8v_mask simd_i8_less_equal_inplace(i8v_mask out, const i8v a, const i8v b) {
			*out = *a <= *b;
			return out;
		}

		i8v_mask simd_i8_less_equal(const i8v a, const i8v b) {
			auto out = simd_i8_mask_create();
			return simd_i8_equal_inplace(out, a, b);
		}

		i8v_mask simd_i8_greater_inplace(i8v_mask out, const i8v a, const i8v b) {
			*out = *a > *b;
			return out;
		}

		i8v_mask simd_i8_greater(const i8v a, const i8v b) {
			auto out = simd_i8_mask_create();
			return simd_i8_equal_inplace(out, a, b);
		}

		i8v_mask simd_i8_less_inplace(i8v_mask out, const i8v a, const i8v b) {
			*out = *a < *b;
			return out;
		}

		i8v_mask simd_i8_less(const i8v a, const i8v b) {
			auto out = simd_i8_mask_create();
			return simd_i8_equal_inplace(out, a, b);
		}

		i8v simd_i8_assign_where(i8v dest, const i8v_mask mask, const i8v source) {
			std::experimental::where(*mask, *dest) = *source;
			return dest;
		}

#ifndef LIB_SIMD_NO_C_INTERFACE
	}
#endif
}