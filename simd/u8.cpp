#include <simd>

namespace simd {
	using u8v_impl = std::experimental::native_simd<uint8_t>;
	using u8v = u8v_impl*;
	using u8v_mask_impl = u8v_impl::mask_type;
	using u8v_mask = u8v_mask_impl*;

#ifndef LIB_SIMD_NO_C_INTERFACE
	extern "C" {
#endif
		u8v simd_u8_create() {
			return new u8v_impl();
		}

		void simd_u8_free(u8v v) {
			delete v;
		}

		size_t simd_u8_size() {
			return u8v_impl::size();
		}

		size_t simd_u8_optimal_alignment() {
			return std::experimental::memory_alignment_v<u8v_impl>;
		}

		u8v simd_u8_broadcast(u8v v, uint8_t value) {
			*v = u8v_impl(value);
			return v;
		}

		u8v simd_u8_load(u8v v, const uint8_t* data) {
			v->copy_from(data, std::experimental::element_aligned);
			return v;
		}

		u8v simd_u8_load_aligned(u8v v, const uint8_t* data) {
			v->copy_from(data, std::experimental::vector_aligned);
			return v;
		}

		u8v simd_u8_store(u8v v, uint8_t* data) {
			v->copy_to(data, std::experimental::element_aligned);
			return v;
		}

		u8v simd_u8_store_aligned(u8v v, uint8_t* data) {
			v->copy_to(data, std::experimental::vector_aligned);
			return v;
		}

		// u8v simd_u8_logical_negate_inplace(u8v out, u8v v) {
		// 	*out = !*v;
		// 	return out;
		// }

		// u8v simd_u8_logical_negate(u8v v) {
		// 	auto out = simd_u8_create();
		// 	return simd_u8_logical_negate_inplace(out, v);
		// }

		u8v simd_u8_bitwise_negate_inplace(u8v out, u8v v) {
			*out = ~*v;
			return out;
		}

		u8v simd_u8_bitwise_negate(u8v v) {
			auto out = simd_u8_create();
			return simd_u8_bitwise_negate_inplace(out, v);
		}

		u8v simd_u8_mathematical_negate_inplace(u8v out, const u8v v) {
			*out = -*v;
			return out;
		}

		u8v simd_u8_mathematical_negate(const u8v v) {
			auto out = simd_u8_create();
			return simd_u8_mathematical_negate_inplace(out, v);
		}

		u8v simd_u8_add_inplace(u8v out, const u8v a, const u8v b) {
			*out = *a + *b;
			return out;
		}

		u8v simd_u8_add(u8v a, const u8v b) {
			auto out = simd_u8_create();
			return simd_u8_add_inplace(out, a, b);
		}

		u8v simd_u8_subtract_inplace(u8v out, const u8v a, const u8v b) {
			*out = *a - *b;
			return out;
		}

		u8v simd_u8_subtract(u8v a, const u8v b) {
			auto out = simd_u8_create();
			return simd_u8_subtract_inplace(out, a, b);
		}

		u8v simd_u8_multiply_inplace(u8v out, const u8v a, const u8v b) {
			*out = *a * *b;
			return out;
		}

		u8v simd_u8_multiply(const u8v a, const u8v b) {
			auto out = simd_u8_create();
			return simd_u8_multiply_inplace(out, a, b);
		}

		u8v simd_u8_divide_inplace(u8v out, const u8v a, const u8v b) {
			*out = *a / *b;
			return out;
		}

		u8v simd_u8_divide(const u8v a, const u8v b) {
			auto out = simd_u8_create();
			return simd_u8_divide_inplace(out, a, b);
		}

		u8v simd_u8_modulus_inplace(u8v out, const u8v a, const u8v b) {
			*out = *a % *b;
			return out;
		}

		u8v simd_u8_modulus(const u8v a, const u8v b) {
			auto out = simd_u8_create();
			return simd_u8_divide_inplace(out, a, b);
		}

		u8v simd_u8_and_inplace(u8v out, const u8v a, const u8v b) {
			*out = *a & *b;
			return out;
		}

		u8v simd_u8_and(const u8v a, const u8v b) {
			auto out = simd_u8_create();
			return simd_u8_divide_inplace(out, a, b);
		}

		u8v simd_u8_or_inplace(u8v out, const u8v a, const u8v b) {
			*out = *a | *b;
			return out;
		}

		u8v simd_u8_or(const u8v a, const u8v b) {
			auto out = simd_u8_create();
			return simd_u8_divide_inplace(out, a, b);
		}

		u8v simd_u8_xor_inplace(u8v out, const u8v a, const u8v b) {
			*out = *a ^ *b;
			return out;
		}

		u8v simd_u8_xor(const u8v a, const u8v b) {
			auto out = simd_u8_create();
			return simd_u8_divide_inplace(out, a, b);
		}

		u8v simd_u8_shift_left_inplace(u8v out, const u8v a, const u8v b) {
			*out = *a << *b;
			return out;
		}

		u8v simd_u8_shift_left(const u8v a, const u8v b) {
			auto out = simd_u8_create();
			return simd_u8_divide_inplace(out, a, b);
		}

		u8v simd_u8_shift_right_inplace(u8v out, const u8v a, const u8v b) {
			*out = *a >> *b;
			return out;
		}

		u8v simd_u8_shift_right(const u8v a, const u8v b) {
			auto out = simd_u8_create();
			return simd_u8_divide_inplace(out, a, b);
		}






		u8v_mask simd_u8_mask_create() {
			return new u8v_mask_impl();
		}

		void simd_u8_mask_free(u8v_mask m) {
			delete m;
		}

		u8v_mask simd_u8_mask_load(u8v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::element_aligned);
			return m;
		}

		u8v_mask simd_u8_mask_load_aligned(u8v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::vector_aligned);
			return m;
		}

		u8v_mask simd_u8_mask_load_bitmask(u8v_mask m, size_t bitmask) {
			alignas(std::experimental::memory_alignment_v<u8v_mask_impl>) std::array<bool, sizeof(size_t) * 8> bits;
			for (size_t i = 0; i < bits.size(); ++i)
				bits[i] = (bitmask >> i) & 1;
			m->copy_from(bits.data(), std::experimental::element_aligned);
			return m;
		}

		u8v_mask simd_u8_mask_store(u8v_mask m, bool* data) {
			m->copy_to(data, std::experimental::element_aligned);
			return m;
		}

		u8v_mask simd_u8_mask_store_aligned(u8v_mask m, bool* data) {
			m->copy_to(data, std::experimental::vector_aligned);
			return m;
		}

		size_t simd_u8_mask_store_bitmask(u8v_mask m) {
			alignas(std::experimental::memory_alignment_v<u8v_mask_impl>) std::array<bool, sizeof(size_t) * 8> bits;
			m->copy_to(bits.data(), std::experimental::vector_aligned);
			size_t out = 0;
			for (size_t i = 0; i < bits.size(); ++i)
				out |= (uint64_t{bits[i]} << i);
			return out;
		}

		bool simd_u8_mask_set_if_all(const u8v_mask m) {
			return all_of(m);
		}

		bool simd_u8_mask_set_if_none(const u8v_mask m) {
			return none_of(m);
		}

		bool simd_u8_mask_set_if_any(const u8v_mask m) {
			return any_of(m);
		}

		u8v_mask simd_u8_mask_negate_inplace(const u8v_mask out, const u8v_mask m) {
			*out = !*m;
			return out;
		}

		u8v_mask simd_u8_mask_negate(const u8v_mask m) {
			auto out = simd_u8_mask_create();
			return simd_u8_mask_negate_inplace(out, m);
		}

		u8v_mask simd_u8_mask_and_inplace(u8v_mask out, const u8v_mask a, const u8v_mask b) {
			*out = *a & *b;
			return out;
		}

		u8v_mask simd_u8_mask_and(const u8v_mask a, const u8v_mask b) {
			auto out = simd_u8_mask_create();
			return simd_u8_mask_and_inplace(out, a, b);
		}

		u8v_mask simd_u8_mask_or_inplace(u8v_mask out, const u8v_mask a, const u8v_mask b) {
			*out = *a | *b;
			return out;
		}

		u8v_mask simd_u8_mask_or(const u8v_mask a, const u8v_mask b) {
			auto out = simd_u8_mask_create();
			return simd_u8_mask_and_inplace(out, a, b);
		}

		u8v_mask simd_u8_mask_xor_inplace(u8v_mask out, const u8v_mask a, const u8v_mask b) {
			*out = *a ^ *b;
			return out;
		}

		u8v_mask simd_u8_mask_xor(const u8v_mask a, const u8v_mask b) {
			auto out = simd_u8_mask_create();
			return simd_u8_mask_and_inplace(out, a, b);
		}

		u8v_mask simd_u8_mask_equal_inplace(u8v_mask out, const u8v_mask a, const u8v_mask b) {
			*out = *a == *b;
			return out;
		}

		u8v_mask simd_u8_mask_equal(const u8v_mask a, const u8v_mask b) {
			auto out = simd_u8_mask_create();
			return simd_u8_mask_and_inplace(out, a, b);
		}

		u8v_mask simd_u8_mask_not_equal_inplace(u8v_mask out, const u8v_mask a, const u8v_mask b) {
			*out = *a & *b;
			return out;
		}

		u8v_mask simd_u8_mask_not_equal(const u8v_mask a, const u8v_mask b) {
			auto out = simd_u8_mask_create();
			return simd_u8_mask_and_inplace(out, a, b);
		}






		u8v_mask simd_u8_equal_inplace(u8v_mask out, const u8v a, const u8v b) {
			*out = *a == *b;
			return out;
		}

		u8v_mask simd_u8_equal(const u8v a, const u8v b) {
			auto out = simd_u8_mask_create();
			return simd_u8_equal_inplace(out, a, b);
		}

		u8v_mask simd_u8_not_equal_inplace(u8v_mask out, const u8v a, const u8v b) {
			*out = *a != *b;
			return out;
		}

		u8v_mask simd_u8_not_equal(const u8v a, const u8v b) {
			auto out = simd_u8_mask_create();
			return simd_u8_equal_inplace(out, a, b);
		}

		u8v_mask simd_u8_greater_equal_inplace(u8v_mask out, const u8v a, const u8v b) {
			*out = *a >= *b;
			return out;
		}

		u8v_mask simd_u8_greater_equal(const u8v a, const u8v b) {
			auto out = simd_u8_mask_create();
			return simd_u8_equal_inplace(out, a, b);
		}

		u8v_mask simd_u8_less_equal_inplace(u8v_mask out, const u8v a, const u8v b) {
			*out = *a <= *b;
			return out;
		}

		u8v_mask simd_u8_less_equal(const u8v a, const u8v b) {
			auto out = simd_u8_mask_create();
			return simd_u8_equal_inplace(out, a, b);
		}

		u8v_mask simd_u8_greater_inplace(u8v_mask out, const u8v a, const u8v b) {
			*out = *a > *b;
			return out;
		}

		u8v_mask simd_u8_greater(const u8v a, const u8v b) {
			auto out = simd_u8_mask_create();
			return simd_u8_equal_inplace(out, a, b);
		}

		u8v_mask simd_u8_less_inplace(u8v_mask out, const u8v a, const u8v b) {
			*out = *a < *b;
			return out;
		}

		u8v_mask simd_u8_less(const u8v a, const u8v b) {
			auto out = simd_u8_mask_create();
			return simd_u8_equal_inplace(out, a, b);
		}

		u8v simd_u8_assign_where(u8v dest, const u8v_mask mask, const u8v source) {
			std::experimental::where(*mask, *dest) = *source;
			return dest;
		}

#ifndef LIB_SIMD_NO_C_INTERFACE
	}
#endif
}