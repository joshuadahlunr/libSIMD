#include <simd>

namespace simd {
	using i32v_impl = std::experimental::native_simd<int32_t>;
	using i32v = i32v_impl*;
	using i32v_mask_impl = i32v_impl::mask_type;
	using i32v_mask = i32v_mask_impl*;

#ifndef LIB_SIMD_NO_C_INTERFACE
	extern "C" {
#endif
		i32v simd_i32_create() {
			return new i32v_impl();
		}

		void simd_i32_free(i32v v) {
			delete v;
		}

		size_t simd_i32_size() {
			return i32v_impl::size();
		}

		size_t simd_i32_optimal_alignment() {
			return std::experimental::memory_alignment_v<i32v_impl>;
		}

		i32v simd_i32_broadcast(i32v v, int32_t value) {
			*v = i32v_impl(value);
			return v;
		}

		i32v simd_i32_load(i32v v, const int32_t* data) {
			v->copy_from(data, std::experimental::element_aligned);
			return v;
		}

		i32v simd_i32_load_aligned(i32v v, const int32_t* data) {
			v->copy_from(data, std::experimental::vector_aligned);
			return v;
		}

		i32v simd_i32_store(i32v v, int32_t* data) {
			v->copy_to(data, std::experimental::element_aligned);
			return v;
		}

		i32v simd_i32_store_aligned(i32v v, int32_t* data) {
			v->copy_to(data, std::experimental::vector_aligned);
			return v;
		}

		// i32v simd_i32_logical_negate_inplace(i32v out, i32v v) {
		// 	*out = !*v;
		// 	return out;
		// }

		// i32v simd_i32_logical_negate(i32v v) {
		// 	auto out = simd_i32_create();
		// 	return simd_i32_logical_negate_inplace(out, v);
		// }

		i32v simd_i32_bitwise_negate_inplace(i32v out, i32v v) {
			*out = ~*v;
			return out;
		}

		i32v simd_i32_bitwise_negate(i32v v) {
			auto out = simd_i32_create();
			return simd_i32_bitwise_negate_inplace(out, v);
		}

		i32v simd_i32_mathematical_negate_inplace(i32v out, const i32v v) {
			*out = -*v;
			return out;
		}

		i32v simd_i32_mathematical_negate(const i32v v) {
			auto out = simd_i32_create();
			return simd_i32_mathematical_negate_inplace(out, v);
		}

		i32v simd_i32_add_inplace(i32v out, const i32v a, const i32v b) {
			*out = *a + *b;
			return out;
		}

		i32v simd_i32_add(i32v a, const i32v b) {
			auto out = simd_i32_create();
			return simd_i32_add_inplace(out, a, b);
		}

		i32v simd_i32_subtract_inplace(i32v out, const i32v a, const i32v b) {
			*out = *a - *b;
			return out;
		}

		i32v simd_i32_subtract(i32v a, const i32v b) {
			auto out = simd_i32_create();
			return simd_i32_subtract_inplace(out, a, b);
		}

		i32v simd_i32_multiply_inplace(i32v out, const i32v a, const i32v b) {
			*out = *a * *b;
			return out;
		}

		i32v simd_i32_multiply(const i32v a, const i32v b) {
			auto out = simd_i32_create();
			return simd_i32_multiply_inplace(out, a, b);
		}

		i32v simd_i32_divide_inplace(i32v out, const i32v a, const i32v b) {
			*out = *a / *b;
			return out;
		}

		i32v simd_i32_divide(const i32v a, const i32v b) {
			auto out = simd_i32_create();
			return simd_i32_divide_inplace(out, a, b);
		}

		i32v simd_i32_modulus_inplace(i32v out, const i32v a, const i32v b) {
			*out = *a % *b;
			return out;
		}

		i32v simd_i32_modulus(const i32v a, const i32v b) {
			auto out = simd_i32_create();
			return simd_i32_divide_inplace(out, a, b);
		}

		i32v simd_i32_and_inplace(i32v out, const i32v a, const i32v b) {
			*out = *a & *b;
			return out;
		}

		i32v simd_i32_and(const i32v a, const i32v b) {
			auto out = simd_i32_create();
			return simd_i32_divide_inplace(out, a, b);
		}

		i32v simd_i32_or_inplace(i32v out, const i32v a, const i32v b) {
			*out = *a | *b;
			return out;
		}

		i32v simd_i32_or(const i32v a, const i32v b) {
			auto out = simd_i32_create();
			return simd_i32_divide_inplace(out, a, b);
		}

		i32v simd_i32_xor_inplace(i32v out, const i32v a, const i32v b) {
			*out = *a ^ *b;
			return out;
		}

		i32v simd_i32_xor(const i32v a, const i32v b) {
			auto out = simd_i32_create();
			return simd_i32_divide_inplace(out, a, b);
		}

		i32v simd_i32_shift_left_inplace(i32v out, const i32v a, const i32v b) {
			*out = *a << *b;
			return out;
		}

		i32v simd_i32_shift_left(const i32v a, const i32v b) {
			auto out = simd_i32_create();
			return simd_i32_divide_inplace(out, a, b);
		}

		i32v simd_i32_shift_right_inplace(i32v out, const i32v a, const i32v b) {
			*out = *a >> *b;
			return out;
		}

		i32v simd_i32_shift_right(const i32v a, const i32v b) {
			auto out = simd_i32_create();
			return simd_i32_divide_inplace(out, a, b);
		}






		i32v_mask simd_i32_mask_create() {
			return new i32v_mask_impl();
		}

		void simd_i32_mask_free(i32v_mask m) {
			delete m;
		}

		i32v_mask simd_i32_mask_load(i32v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::element_aligned);
			return m;
		}

		i32v_mask simd_i32_mask_load_aligned(i32v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::vector_aligned);
			return m;
		}

		i32v_mask simd_i32_mask_load_bitmask(i32v_mask m, size_t bitmask) {
			alignas(std::experimental::memory_alignment_v<i32v_mask_impl>) std::array<bool, sizeof(size_t) * 32> bits;
			for (size_t i = 0; i < bits.size(); ++i)
				bits[i] = (bitmask >> i) & 1;
			m->copy_from(bits.data(), std::experimental::element_aligned);
			return m;
		}

		i32v_mask simd_i32_mask_store(i32v_mask m, bool* data) {
			m->copy_to(data, std::experimental::element_aligned);
			return m;
		}

		i32v_mask simd_i32_mask_store_aligned(i32v_mask m, bool* data) {
			m->copy_to(data, std::experimental::vector_aligned);
			return m;
		}

		size_t simd_i32_mask_store_bitmask(i32v_mask m) {
			alignas(std::experimental::memory_alignment_v<i32v_mask_impl>) std::array<bool, sizeof(size_t) * 32> bits;
			m->copy_to(bits.data(), std::experimental::vector_aligned);
			size_t out = 0;
			for (size_t i = 0; i < bits.size(); ++i)
				out |= (uint64_t{bits[i]} << i);
			return out;
		}

		bool simd_i32_mask_set_if_all(const i32v_mask m) {
			return all_of(m);
		}

		bool simd_i32_mask_set_if_none(const i32v_mask m) {
			return none_of(m);
		}

		bool simd_i32_mask_set_if_any(const i32v_mask m) {
			return any_of(m);
		}

		i32v_mask simd_i32_mask_negate_inplace(const i32v_mask out, const i32v_mask m) {
			*out = !*m;
			return out;
		}

		i32v_mask simd_i32_mask_negate(const i32v_mask m) {
			auto out = simd_i32_mask_create();
			return simd_i32_mask_negate_inplace(out, m);
		}

		i32v_mask simd_i32_mask_and_inplace(i32v_mask out, const i32v_mask a, const i32v_mask b) {
			*out = *a & *b;
			return out;
		}

		i32v_mask simd_i32_mask_and(const i32v_mask a, const i32v_mask b) {
			auto out = simd_i32_mask_create();
			return simd_i32_mask_and_inplace(out, a, b);
		}

		i32v_mask simd_i32_mask_or_inplace(i32v_mask out, const i32v_mask a, const i32v_mask b) {
			*out = *a | *b;
			return out;
		}

		i32v_mask simd_i32_mask_or(const i32v_mask a, const i32v_mask b) {
			auto out = simd_i32_mask_create();
			return simd_i32_mask_and_inplace(out, a, b);
		}

		i32v_mask simd_i32_mask_xor_inplace(i32v_mask out, const i32v_mask a, const i32v_mask b) {
			*out = *a ^ *b;
			return out;
		}

		i32v_mask simd_i32_mask_xor(const i32v_mask a, const i32v_mask b) {
			auto out = simd_i32_mask_create();
			return simd_i32_mask_and_inplace(out, a, b);
		}

		i32v_mask simd_i32_mask_equal_inplace(i32v_mask out, const i32v_mask a, const i32v_mask b) {
			*out = *a == *b;
			return out;
		}

		i32v_mask simd_i32_mask_equal(const i32v_mask a, const i32v_mask b) {
			auto out = simd_i32_mask_create();
			return simd_i32_mask_and_inplace(out, a, b);
		}

		i32v_mask simd_i32_mask_not_equal_inplace(i32v_mask out, const i32v_mask a, const i32v_mask b) {
			*out = *a & *b;
			return out;
		}

		i32v_mask simd_i32_mask_not_equal(const i32v_mask a, const i32v_mask b) {
			auto out = simd_i32_mask_create();
			return simd_i32_mask_and_inplace(out, a, b);
		}






		i32v_mask simd_i32_equal_inplace(i32v_mask out, const i32v a, const i32v b) {
			*out = *a == *b;
			return out;
		}

		i32v_mask simd_i32_equal(const i32v a, const i32v b) {
			auto out = simd_i32_mask_create();
			return simd_i32_equal_inplace(out, a, b);
		}

		i32v_mask simd_i32_not_equal_inplace(i32v_mask out, const i32v a, const i32v b) {
			*out = *a != *b;
			return out;
		}

		i32v_mask simd_i32_not_equal(const i32v a, const i32v b) {
			auto out = simd_i32_mask_create();
			return simd_i32_equal_inplace(out, a, b);
		}

		i32v_mask simd_i32_greater_equal_inplace(i32v_mask out, const i32v a, const i32v b) {
			*out = *a >= *b;
			return out;
		}

		i32v_mask simd_i32_greater_equal(const i32v a, const i32v b) {
			auto out = simd_i32_mask_create();
			return simd_i32_equal_inplace(out, a, b);
		}

		i32v_mask simd_i32_less_equal_inplace(i32v_mask out, const i32v a, const i32v b) {
			*out = *a <= *b;
			return out;
		}

		i32v_mask simd_i32_less_equal(const i32v a, const i32v b) {
			auto out = simd_i32_mask_create();
			return simd_i32_equal_inplace(out, a, b);
		}

		i32v_mask simd_i32_greater_inplace(i32v_mask out, const i32v a, const i32v b) {
			*out = *a > *b;
			return out;
		}

		i32v_mask simd_i32_greater(const i32v a, const i32v b) {
			auto out = simd_i32_mask_create();
			return simd_i32_equal_inplace(out, a, b);
		}

		i32v_mask simd_i32_less_inplace(i32v_mask out, const i32v a, const i32v b) {
			*out = *a < *b;
			return out;
		}

		i32v_mask simd_i32_less(const i32v a, const i32v b) {
			auto out = simd_i32_mask_create();
			return simd_i32_equal_inplace(out, a, b);
		}

		i32v simd_i32_assign_where(i32v dest, const i32v_mask mask, const i32v source) {
			std::experimental::where(*mask, *dest) = *source;
			return dest;
		}

#ifndef LIB_SIMD_NO_C_INTERFACE
	}
#endif
}