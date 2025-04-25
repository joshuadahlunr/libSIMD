#include <simd>

namespace simd {
	using i16v_impl = std::experimental::native_simd<int16_t>;
	using i16v = i16v_impl*;
	using i16v_mask_impl = i16v_impl::mask_type;
	using i16v_mask = i16v_mask_impl*;

#ifndef LIB_SIMD_NO_C_INTERFACE
	extern "C" {
#endif
		i16v simd_i16_create() {
			return new i16v_impl();
		}

		void simd_i16_free(i16v v) {
			delete v;
		}

		size_t simd_i16_size() {
			return i16v_impl::size();
		}

		size_t simd_i16_optimal_alignment() {
			return std::experimental::memory_alignment_v<i16v_impl>;
		}

		i16v simd_i16_broadcast(i16v v, int16_t value) {
			*v = i16v_impl(value);
			return v;
		}

		i16v simd_i16_load(i16v v, const int16_t* data) {
			v->copy_from(data, std::experimental::element_aligned);
			return v;
		}

		i16v simd_i16_load_aligned(i16v v, const int16_t* data) {
			v->copy_from(data, std::experimental::vector_aligned);
			return v;
		}

		i16v simd_i16_store(i16v v, int16_t* data) {
			v->copy_to(data, std::experimental::element_aligned);
			return v;
		}

		i16v simd_i16_store_aligned(i16v v, int16_t* data) {
			v->copy_to(data, std::experimental::vector_aligned);
			return v;
		}

		// i16v simd_i16_logical_negate_inplace(i16v out, i16v v) {
		// 	*out = !*v;
		// 	return out;
		// }

		// i16v simd_i16_logical_negate(i16v v) {
		// 	auto out = simd_i16_create();
		// 	return simd_i16_logical_negate_inplace(out, v);
		// }

		i16v simd_i16_bitwise_negate_inplace(i16v out, i16v v) {
			*out = ~*v;
			return out;
		}

		i16v simd_i16_bitwise_negate(i16v v) {
			auto out = simd_i16_create();
			return simd_i16_bitwise_negate_inplace(out, v);
		}

		i16v simd_i16_mathematical_negate_inplace(i16v out, const i16v v) {
			*out = -*v;
			return out;
		}

		i16v simd_i16_mathematical_negate(const i16v v) {
			auto out = simd_i16_create();
			return simd_i16_mathematical_negate_inplace(out, v);
		}

		i16v simd_i16_add_inplace(i16v out, const i16v a, const i16v b) {
			*out = *a + *b;
			return out;
		}

		i16v simd_i16_add(i16v a, const i16v b) {
			auto out = simd_i16_create();
			return simd_i16_add_inplace(out, a, b);
		}

		i16v simd_i16_subtract_inplace(i16v out, const i16v a, const i16v b) {
			*out = *a - *b;
			return out;
		}

		i16v simd_i16_subtract(i16v a, const i16v b) {
			auto out = simd_i16_create();
			return simd_i16_subtract_inplace(out, a, b);
		}

		i16v simd_i16_multiply_inplace(i16v out, const i16v a, const i16v b) {
			*out = *a * *b;
			return out;
		}

		i16v simd_i16_multiply(const i16v a, const i16v b) {
			auto out = simd_i16_create();
			return simd_i16_multiply_inplace(out, a, b);
		}

		i16v simd_i16_divide_inplace(i16v out, const i16v a, const i16v b) {
			*out = *a / *b;
			return out;
		}

		i16v simd_i16_divide(const i16v a, const i16v b) {
			auto out = simd_i16_create();
			return simd_i16_divide_inplace(out, a, b);
		}

		i16v simd_i16_modulus_inplace(i16v out, const i16v a, const i16v b) {
			*out = *a % *b;
			return out;
		}

		i16v simd_i16_modulus(const i16v a, const i16v b) {
			auto out = simd_i16_create();
			return simd_i16_divide_inplace(out, a, b);
		}

		i16v simd_i16_and_inplace(i16v out, const i16v a, const i16v b) {
			*out = *a & *b;
			return out;
		}

		i16v simd_i16_and(const i16v a, const i16v b) {
			auto out = simd_i16_create();
			return simd_i16_divide_inplace(out, a, b);
		}

		i16v simd_i16_or_inplace(i16v out, const i16v a, const i16v b) {
			*out = *a | *b;
			return out;
		}

		i16v simd_i16_or(const i16v a, const i16v b) {
			auto out = simd_i16_create();
			return simd_i16_divide_inplace(out, a, b);
		}

		i16v simd_i16_xor_inplace(i16v out, const i16v a, const i16v b) {
			*out = *a ^ *b;
			return out;
		}

		i16v simd_i16_xor(const i16v a, const i16v b) {
			auto out = simd_i16_create();
			return simd_i16_divide_inplace(out, a, b);
		}

		i16v simd_i16_shift_left_inplace(i16v out, const i16v a, const i16v b) {
			*out = *a << *b;
			return out;
		}

		i16v simd_i16_shift_left(const i16v a, const i16v b) {
			auto out = simd_i16_create();
			return simd_i16_divide_inplace(out, a, b);
		}

		i16v simd_i16_shift_right_inplace(i16v out, const i16v a, const i16v b) {
			*out = *a >> *b;
			return out;
		}

		i16v simd_i16_shift_right(const i16v a, const i16v b) {
			auto out = simd_i16_create();
			return simd_i16_divide_inplace(out, a, b);
		}






		i16v_mask simd_i16_mask_create() {
			return new i16v_mask_impl();
		}

		void simd_i16_mask_free(i16v_mask m) {
			delete m;
		}

		i16v_mask simd_i16_mask_load(i16v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::element_aligned);
			return m;
		}

		i16v_mask simd_i16_mask_load_aligned(i16v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::vector_aligned);
			return m;
		}

		i16v_mask simd_i16_mask_load_bitmask(i16v_mask m, size_t bitmask) {
			alignas(std::experimental::memory_alignment_v<i16v_mask_impl>) std::array<bool, sizeof(size_t) * 16> bits;
			for (size_t i = 0; i < bits.size(); ++i)
				bits[i] = (bitmask >> i) & 1;
			m->copy_from(bits.data(), std::experimental::element_aligned);
			return m;
		}

		i16v_mask simd_i16_mask_store(i16v_mask m, bool* data) {
			m->copy_to(data, std::experimental::element_aligned);
			return m;
		}

		i16v_mask simd_i16_mask_store_aligned(i16v_mask m, bool* data) {
			m->copy_to(data, std::experimental::vector_aligned);
			return m;
		}

		size_t simd_i16_mask_store_bitmask(i16v_mask m) {
			alignas(std::experimental::memory_alignment_v<i16v_mask_impl>) std::array<bool, sizeof(size_t) * 16> bits;
			m->copy_to(bits.data(), std::experimental::vector_aligned);
			size_t out = 0;
			for (size_t i = 0; i < bits.size(); ++i)
				out |= (uint64_t{bits[i]} << i);
			return out;
		}

		bool simd_i16_mask_set_if_all(const i16v_mask m) {
			return all_of(m);
		}

		bool simd_i16_mask_set_if_none(const i16v_mask m) {
			return none_of(m);
		}

		bool simd_i16_mask_set_if_any(const i16v_mask m) {
			return any_of(m);
		}

		i16v_mask simd_i16_mask_negate_inplace(const i16v_mask out, const i16v_mask m) {
			*out = !*m;
			return out;
		}

		i16v_mask simd_i16_mask_negate(const i16v_mask m) {
			auto out = simd_i16_mask_create();
			return simd_i16_mask_negate_inplace(out, m);
		}

		i16v_mask simd_i16_mask_and_inplace(i16v_mask out, const i16v_mask a, const i16v_mask b) {
			*out = *a & *b;
			return out;
		}

		i16v_mask simd_i16_mask_and(const i16v_mask a, const i16v_mask b) {
			auto out = simd_i16_mask_create();
			return simd_i16_mask_and_inplace(out, a, b);
		}

		i16v_mask simd_i16_mask_or_inplace(i16v_mask out, const i16v_mask a, const i16v_mask b) {
			*out = *a | *b;
			return out;
		}

		i16v_mask simd_i16_mask_or(const i16v_mask a, const i16v_mask b) {
			auto out = simd_i16_mask_create();
			return simd_i16_mask_and_inplace(out, a, b);
		}

		i16v_mask simd_i16_mask_xor_inplace(i16v_mask out, const i16v_mask a, const i16v_mask b) {
			*out = *a ^ *b;
			return out;
		}

		i16v_mask simd_i16_mask_xor(const i16v_mask a, const i16v_mask b) {
			auto out = simd_i16_mask_create();
			return simd_i16_mask_and_inplace(out, a, b);
		}

		i16v_mask simd_i16_mask_equal_inplace(i16v_mask out, const i16v_mask a, const i16v_mask b) {
			*out = *a == *b;
			return out;
		}

		i16v_mask simd_i16_mask_equal(const i16v_mask a, const i16v_mask b) {
			auto out = simd_i16_mask_create();
			return simd_i16_mask_and_inplace(out, a, b);
		}

		i16v_mask simd_i16_mask_not_equal_inplace(i16v_mask out, const i16v_mask a, const i16v_mask b) {
			*out = *a & *b;
			return out;
		}

		i16v_mask simd_i16_mask_not_equal(const i16v_mask a, const i16v_mask b) {
			auto out = simd_i16_mask_create();
			return simd_i16_mask_and_inplace(out, a, b);
		}






		i16v_mask simd_i16_equal_inplace(i16v_mask out, const i16v a, const i16v b) {
			*out = *a == *b;
			return out;
		}

		i16v_mask simd_i16_equal(const i16v a, const i16v b) {
			auto out = simd_i16_mask_create();
			return simd_i16_equal_inplace(out, a, b);
		}

		i16v_mask simd_i16_not_equal_inplace(i16v_mask out, const i16v a, const i16v b) {
			*out = *a != *b;
			return out;
		}

		i16v_mask simd_i16_not_equal(const i16v a, const i16v b) {
			auto out = simd_i16_mask_create();
			return simd_i16_equal_inplace(out, a, b);
		}

		i16v_mask simd_i16_greater_equal_inplace(i16v_mask out, const i16v a, const i16v b) {
			*out = *a >= *b;
			return out;
		}

		i16v_mask simd_i16_greater_equal(const i16v a, const i16v b) {
			auto out = simd_i16_mask_create();
			return simd_i16_equal_inplace(out, a, b);
		}

		i16v_mask simd_i16_less_equal_inplace(i16v_mask out, const i16v a, const i16v b) {
			*out = *a <= *b;
			return out;
		}

		i16v_mask simd_i16_less_equal(const i16v a, const i16v b) {
			auto out = simd_i16_mask_create();
			return simd_i16_equal_inplace(out, a, b);
		}

		i16v_mask simd_i16_greater_inplace(i16v_mask out, const i16v a, const i16v b) {
			*out = *a > *b;
			return out;
		}

		i16v_mask simd_i16_greater(const i16v a, const i16v b) {
			auto out = simd_i16_mask_create();
			return simd_i16_equal_inplace(out, a, b);
		}

		i16v_mask simd_i16_less_inplace(i16v_mask out, const i16v a, const i16v b) {
			*out = *a < *b;
			return out;
		}

		i16v_mask simd_i16_less(const i16v a, const i16v b) {
			auto out = simd_i16_mask_create();
			return simd_i16_equal_inplace(out, a, b);
		}

		i16v simd_i16_assign_where(i16v dest, const i16v_mask mask, const i16v source) {
			std::experimental::where(*mask, *dest) = *source;
			return dest;
		}

#ifndef LIB_SIMD_NO_C_INTERFACE
	}
#endif
}