#include <simd>

namespace simd {
	using i64v_impl = std::experimental::native_simd<int64_t>;
	using i64v = i64v_impl*;
	using i64v_mask_impl = i64v_impl::mask_type;
	using i64v_mask = i64v_mask_impl*;

#ifndef LIB_SIMD_NO_C_INTERFACE
	extern "C" {
#endif
		i64v simd_i64_create() {
			return new i64v_impl();
		}

		void simd_i64_free(i64v v) {
			delete v;
		}

		size_t simd_i64_size() {
			return i64v_impl::size();
		}

		size_t simd_i64_optimal_alignment() {
			return std::experimental::memory_alignment_v<i64v_impl>;
		}

		i64v simd_i64_broadcast(i64v v, int64_t value) {
			*v = i64v_impl(value);
			return v;
		}

		i64v simd_i64_load(i64v v, const int64_t* data) {
			v->copy_from(data, std::experimental::element_aligned);
			return v;
		}

		i64v simd_i64_load_aligned(i64v v, const int64_t* data) {
			v->copy_from(data, std::experimental::vector_aligned);
			return v;
		}

		i64v simd_i64_store(i64v v, int64_t* data) {
			v->copy_to(data, std::experimental::element_aligned);
			return v;
		}

		i64v simd_i64_store_aligned(i64v v, int64_t* data) {
			v->copy_to(data, std::experimental::vector_aligned);
			return v;
		}

		// i64v simd_i64_logical_negate_inplace(i64v out, i64v v) {
		// 	*out = !*v;
		// 	return out;
		// }

		// i64v simd_i64_logical_negate(i64v v) {
		// 	auto out = simd_i64_create();
		// 	return simd_i64_logical_negate_inplace(out, v);
		// }

		i64v simd_i64_bitwise_negate_inplace(i64v out, i64v v) {
			*out = ~*v;
			return out;
		}

		i64v simd_i64_bitwise_negate(i64v v) {
			auto out = simd_i64_create();
			return simd_i64_bitwise_negate_inplace(out, v);
		}

		i64v simd_i64_mathematical_negate_inplace(i64v out, const i64v v) {
			*out = -*v;
			return out;
		}

		i64v simd_i64_mathematical_negate(const i64v v) {
			auto out = simd_i64_create();
			return simd_i64_mathematical_negate_inplace(out, v);
		}

		i64v simd_i64_add_inplace(i64v out, const i64v a, const i64v b) {
			*out = *a + *b;
			return out;
		}

		i64v simd_i64_add(i64v a, const i64v b) {
			auto out = simd_i64_create();
			return simd_i64_add_inplace(out, a, b);
		}

		i64v simd_i64_subtract_inplace(i64v out, const i64v a, const i64v b) {
			*out = *a - *b;
			return out;
		}

		i64v simd_i64_subtract(i64v a, const i64v b) {
			auto out = simd_i64_create();
			return simd_i64_subtract_inplace(out, a, b);
		}

		i64v simd_i64_multiply_inplace(i64v out, const i64v a, const i64v b) {
			*out = *a * *b;
			return out;
		}

		i64v simd_i64_multiply(const i64v a, const i64v b) {
			auto out = simd_i64_create();
			return simd_i64_multiply_inplace(out, a, b);
		}

		i64v simd_i64_divide_inplace(i64v out, const i64v a, const i64v b) {
			*out = *a / *b;
			return out;
		}

		i64v simd_i64_divide(const i64v a, const i64v b) {
			auto out = simd_i64_create();
			return simd_i64_divide_inplace(out, a, b);
		}

		i64v simd_i64_modulus_inplace(i64v out, const i64v a, const i64v b) {
			*out = *a % *b;
			return out;
		}

		i64v simd_i64_modulus(const i64v a, const i64v b) {
			auto out = simd_i64_create();
			return simd_i64_divide_inplace(out, a, b);
		}

		i64v simd_i64_and_inplace(i64v out, const i64v a, const i64v b) {
			*out = *a & *b;
			return out;
		}

		i64v simd_i64_and(const i64v a, const i64v b) {
			auto out = simd_i64_create();
			return simd_i64_divide_inplace(out, a, b);
		}

		i64v simd_i64_or_inplace(i64v out, const i64v a, const i64v b) {
			*out = *a | *b;
			return out;
		}

		i64v simd_i64_or(const i64v a, const i64v b) {
			auto out = simd_i64_create();
			return simd_i64_divide_inplace(out, a, b);
		}

		i64v simd_i64_xor_inplace(i64v out, const i64v a, const i64v b) {
			*out = *a ^ *b;
			return out;
		}

		i64v simd_i64_xor(const i64v a, const i64v b) {
			auto out = simd_i64_create();
			return simd_i64_divide_inplace(out, a, b);
		}

		i64v simd_i64_shift_left_inplace(i64v out, const i64v a, const i64v b) {
			*out = *a << *b;
			return out;
		}

		i64v simd_i64_shift_left(const i64v a, const i64v b) {
			auto out = simd_i64_create();
			return simd_i64_divide_inplace(out, a, b);
		}

		i64v simd_i64_shift_right_inplace(i64v out, const i64v a, const i64v b) {
			*out = *a >> *b;
			return out;
		}

		i64v simd_i64_shift_right(const i64v a, const i64v b) {
			auto out = simd_i64_create();
			return simd_i64_divide_inplace(out, a, b);
		}






		i64v_mask simd_i64_mask_create() {
			return new i64v_mask_impl();
		}

		void simd_i64_mask_free(i64v_mask m) {
			delete m;
		}

		i64v_mask simd_i64_mask_load(i64v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::element_aligned);
			return m;
		}

		i64v_mask simd_i64_mask_load_aligned(i64v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::vector_aligned);
			return m;
		}

		i64v_mask simd_i64_mask_load_bitmask(i64v_mask m, size_t bitmask) {
			alignas(std::experimental::memory_alignment_v<i64v_mask_impl>) std::array<bool, sizeof(size_t) * 64> bits;
			for (size_t i = 0; i < bits.size(); ++i)
				bits[i] = (bitmask >> i) & 1;
			m->copy_from(bits.data(), std::experimental::element_aligned);
			return m;
		}

		i64v_mask simd_i64_mask_store(i64v_mask m, bool* data) {
			m->copy_to(data, std::experimental::element_aligned);
			return m;
		}

		i64v_mask simd_i64_mask_store_aligned(i64v_mask m, bool* data) {
			m->copy_to(data, std::experimental::vector_aligned);
			return m;
		}

		size_t simd_i64_mask_store_bitmask(i64v_mask m) {
			alignas(std::experimental::memory_alignment_v<i64v_mask_impl>) std::array<bool, sizeof(size_t) * 64> bits;
			m->copy_to(bits.data(), std::experimental::vector_aligned);
			size_t out = 0;
			for (size_t i = 0; i < bits.size(); ++i)
				out |= (int64_t{bits[i]} << i);
			return out;
		}

		bool simd_i64_mask_set_if_all(const i64v_mask m) {
			return all_of(m);
		}

		bool simd_i64_mask_set_if_none(const i64v_mask m) {
			return none_of(m);
		}

		bool simd_i64_mask_set_if_any(const i64v_mask m) {
			return any_of(m);
		}

		i64v_mask simd_i64_mask_negate_inplace(const i64v_mask out, const i64v_mask m) {
			*out = !*m;
			return out;
		}

		i64v_mask simd_i64_mask_negate(const i64v_mask m) {
			auto out = simd_i64_mask_create();
			return simd_i64_mask_negate_inplace(out, m);
		}

		i64v_mask simd_i64_mask_and_inplace(i64v_mask out, const i64v_mask a, const i64v_mask b) {
			*out = *a & *b;
			return out;
		}

		i64v_mask simd_i64_mask_and(const i64v_mask a, const i64v_mask b) {
			auto out = simd_i64_mask_create();
			return simd_i64_mask_and_inplace(out, a, b);
		}

		i64v_mask simd_i64_mask_or_inplace(i64v_mask out, const i64v_mask a, const i64v_mask b) {
			*out = *a | *b;
			return out;
		}

		i64v_mask simd_i64_mask_or(const i64v_mask a, const i64v_mask b) {
			auto out = simd_i64_mask_create();
			return simd_i64_mask_and_inplace(out, a, b);
		}

		i64v_mask simd_i64_mask_xor_inplace(i64v_mask out, const i64v_mask a, const i64v_mask b) {
			*out = *a ^ *b;
			return out;
		}

		i64v_mask simd_i64_mask_xor(const i64v_mask a, const i64v_mask b) {
			auto out = simd_i64_mask_create();
			return simd_i64_mask_and_inplace(out, a, b);
		}

		i64v_mask simd_i64_mask_equal_inplace(i64v_mask out, const i64v_mask a, const i64v_mask b) {
			*out = *a == *b;
			return out;
		}

		i64v_mask simd_i64_mask_equal(const i64v_mask a, const i64v_mask b) {
			auto out = simd_i64_mask_create();
			return simd_i64_mask_and_inplace(out, a, b);
		}

		i64v_mask simd_i64_mask_not_equal_inplace(i64v_mask out, const i64v_mask a, const i64v_mask b) {
			*out = *a & *b;
			return out;
		}

		i64v_mask simd_i64_mask_not_equal(const i64v_mask a, const i64v_mask b) {
			auto out = simd_i64_mask_create();
			return simd_i64_mask_and_inplace(out, a, b);
		}






		i64v_mask simd_i64_equal_inplace(i64v_mask out, const i64v a, const i64v b) {
			*out = *a == *b;
			return out;
		}

		i64v_mask simd_i64_equal(const i64v a, const i64v b) {
			auto out = simd_i64_mask_create();
			return simd_i64_equal_inplace(out, a, b);
		}

		i64v_mask simd_i64_not_equal_inplace(i64v_mask out, const i64v a, const i64v b) {
			*out = *a != *b;
			return out;
		}

		i64v_mask simd_i64_not_equal(const i64v a, const i64v b) {
			auto out = simd_i64_mask_create();
			return simd_i64_equal_inplace(out, a, b);
		}

		i64v_mask simd_i64_greater_equal_inplace(i64v_mask out, const i64v a, const i64v b) {
			*out = *a >= *b;
			return out;
		}

		i64v_mask simd_i64_greater_equal(const i64v a, const i64v b) {
			auto out = simd_i64_mask_create();
			return simd_i64_equal_inplace(out, a, b);
		}

		i64v_mask simd_i64_less_equal_inplace(i64v_mask out, const i64v a, const i64v b) {
			*out = *a <= *b;
			return out;
		}

		i64v_mask simd_i64_less_equal(const i64v a, const i64v b) {
			auto out = simd_i64_mask_create();
			return simd_i64_equal_inplace(out, a, b);
		}

		i64v_mask simd_i64_greater_inplace(i64v_mask out, const i64v a, const i64v b) {
			*out = *a > *b;
			return out;
		}

		i64v_mask simd_i64_greater(const i64v a, const i64v b) {
			auto out = simd_i64_mask_create();
			return simd_i64_equal_inplace(out, a, b);
		}

		i64v_mask simd_i64_less_inplace(i64v_mask out, const i64v a, const i64v b) {
			*out = *a < *b;
			return out;
		}

		i64v_mask simd_i64_less(const i64v a, const i64v b) {
			auto out = simd_i64_mask_create();
			return simd_i64_equal_inplace(out, a, b);
		}

		i64v simd_i64_assign_where(i64v dest, const i64v_mask mask, const i64v source) {
			std::experimental::where(*mask, *dest) = *source;
			return dest;
		}

#ifndef LIB_SIMD_NO_C_INTERFACE
	}
#endif
}