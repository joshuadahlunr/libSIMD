#include <simd>

namespace simd {
	using u16v_impl = std::experimental::native_simd<uint16_t>;
	using u16v = u16v_impl*;
	using u16v_mask_impl = u16v_impl::mask_type;
	using u16v_mask = u16v_mask_impl*;

#ifndef LIB_SIMD_NO_C_INTERFACE
	extern "C" {
#endif
		u16v simd_u16_create() {
			return new u16v_impl();
		}

		void simd_u16_free(u16v v) {
			delete v;
		}

		size_t simd_u16_size() {
			return u16v_impl::size();
		}

		size_t simd_u16_optimal_alignment() {
			return std::experimental::memory_alignment_v<u16v_impl>;
		}

		u16v simd_u16_broadcast(u16v v, uint16_t value) {
			*v = u16v_impl(value);
			return v;
		}

		u16v simd_u16_load(u16v v, const uint16_t* data) {
			v->copy_from(data, std::experimental::element_aligned);
			return v;
		}

		u16v simd_u16_load_aligned(u16v v, const uint16_t* data) {
			v->copy_from(data, std::experimental::vector_aligned);
			return v;
		}

		u16v simd_u16_store(u16v v, uint16_t* data) {
			v->copy_to(data, std::experimental::element_aligned);
			return v;
		}

		u16v simd_u16_store_aligned(u16v v, uint16_t* data) {
			v->copy_to(data, std::experimental::vector_aligned);
			return v;
		}

		// u16v simd_u16_logical_negate_inplace(u16v out, u16v v) {
		// 	*out = !*v;
		// 	return out;
		// }

		// u16v simd_u16_logical_negate(u16v v) {
		// 	auto out = simd_u16_create();
		// 	return simd_u16_logical_negate_inplace(out, v);
		// }

		u16v simd_u16_bitwise_negate_inplace(u16v out, u16v v) {
			*out = ~*v;
			return out;
		}

		u16v simd_u16_bitwise_negate(u16v v) {
			auto out = simd_u16_create();
			return simd_u16_bitwise_negate_inplace(out, v);
		}

		u16v simd_u16_mathematical_negate_inplace(u16v out, const u16v v) {
			*out = -*v;
			return out;
		}

		u16v simd_u16_mathematical_negate(const u16v v) {
			auto out = simd_u16_create();
			return simd_u16_mathematical_negate_inplace(out, v);
		}

		u16v simd_u16_add_inplace(u16v out, const u16v a, const u16v b) {
			*out = *a + *b;
			return out;
		}

		u16v simd_u16_add(u16v a, const u16v b) {
			auto out = simd_u16_create();
			return simd_u16_add_inplace(out, a, b);
		}

		u16v simd_u16_subtract_inplace(u16v out, const u16v a, const u16v b) {
			*out = *a - *b;
			return out;
		}

		u16v simd_u16_subtract(u16v a, const u16v b) {
			auto out = simd_u16_create();
			return simd_u16_subtract_inplace(out, a, b);
		}

		u16v simd_u16_multiply_inplace(u16v out, const u16v a, const u16v b) {
			*out = *a * *b;
			return out;
		}

		u16v simd_u16_multiply(const u16v a, const u16v b) {
			auto out = simd_u16_create();
			return simd_u16_multiply_inplace(out, a, b);
		}

		u16v simd_u16_divide_inplace(u16v out, const u16v a, const u16v b) {
			*out = *a / *b;
			return out;
		}

		u16v simd_u16_divide(const u16v a, const u16v b) {
			auto out = simd_u16_create();
			return simd_u16_divide_inplace(out, a, b);
		}

		u16v simd_u16_modulus_inplace(u16v out, const u16v a, const u16v b) {
			*out = *a % *b;
			return out;
		}

		u16v simd_u16_modulus(const u16v a, const u16v b) {
			auto out = simd_u16_create();
			return simd_u16_divide_inplace(out, a, b);
		}

		u16v simd_u16_and_inplace(u16v out, const u16v a, const u16v b) {
			*out = *a & *b;
			return out;
		}

		u16v simd_u16_and(const u16v a, const u16v b) {
			auto out = simd_u16_create();
			return simd_u16_divide_inplace(out, a, b);
		}

		u16v simd_u16_or_inplace(u16v out, const u16v a, const u16v b) {
			*out = *a | *b;
			return out;
		}

		u16v simd_u16_or(const u16v a, const u16v b) {
			auto out = simd_u16_create();
			return simd_u16_divide_inplace(out, a, b);
		}

		u16v simd_u16_xor_inplace(u16v out, const u16v a, const u16v b) {
			*out = *a ^ *b;
			return out;
		}

		u16v simd_u16_xor(const u16v a, const u16v b) {
			auto out = simd_u16_create();
			return simd_u16_divide_inplace(out, a, b);
		}

		u16v simd_u16_shift_left_inplace(u16v out, const u16v a, const u16v b) {
			*out = *a << *b;
			return out;
		}

		u16v simd_u16_shift_left(const u16v a, const u16v b) {
			auto out = simd_u16_create();
			return simd_u16_divide_inplace(out, a, b);
		}

		u16v simd_u16_shift_right_inplace(u16v out, const u16v a, const u16v b) {
			*out = *a >> *b;
			return out;
		}

		u16v simd_u16_shift_right(const u16v a, const u16v b) {
			auto out = simd_u16_create();
			return simd_u16_divide_inplace(out, a, b);
		}






		u16v_mask simd_u16_mask_create() {
			return new u16v_mask_impl();
		}

		void simd_u16_mask_free(u16v_mask m) {
			delete m;
		}

		u16v_mask simd_u16_mask_load(u16v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::element_aligned);
			return m;
		}

		u16v_mask simd_u16_mask_load_aligned(u16v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::vector_aligned);
			return m;
		}

		u16v_mask simd_u16_mask_load_bitmask(u16v_mask m, size_t bitmask) {
			alignas(std::experimental::memory_alignment_v<u16v_mask_impl>) std::array<bool, sizeof(size_t) * 16> bits;
			for (size_t i = 0; i < bits.size(); ++i)
				bits[i] = (bitmask >> i) & 1;
			m->copy_from(bits.data(), std::experimental::element_aligned);
			return m;
		}

		u16v_mask simd_u16_mask_store(u16v_mask m, bool* data) {
			m->copy_to(data, std::experimental::element_aligned);
			return m;
		}

		u16v_mask simd_u16_mask_store_aligned(u16v_mask m, bool* data) {
			m->copy_to(data, std::experimental::vector_aligned);
			return m;
		}

		size_t simd_u16_mask_store_bitmask(u16v_mask m) {
			alignas(std::experimental::memory_alignment_v<u16v_mask_impl>) std::array<bool, sizeof(size_t) * 16> bits;
			m->copy_to(bits.data(), std::experimental::vector_aligned);
			size_t out = 0;
			for (size_t i = 0; i < bits.size(); ++i)
				out |= (uint64_t{bits[i]} << i);
			return out;
		}

		bool simd_u16_mask_set_if_all(const u16v_mask m) {
			return all_of(m);
		}

		bool simd_u16_mask_set_if_none(const u16v_mask m) {
			return none_of(m);
		}

		bool simd_u16_mask_set_if_any(const u16v_mask m) {
			return any_of(m);
		}

		u16v_mask simd_u16_mask_negate_inplace(const u16v_mask out, const u16v_mask m) {
			*out = !*m;
			return out;
		}

		u16v_mask simd_u16_mask_negate(const u16v_mask m) {
			auto out = simd_u16_mask_create();
			return simd_u16_mask_negate_inplace(out, m);
		}

		u16v_mask simd_u16_mask_and_inplace(u16v_mask out, const u16v_mask a, const u16v_mask b) {
			*out = *a & *b;
			return out;
		}

		u16v_mask simd_u16_mask_and(const u16v_mask a, const u16v_mask b) {
			auto out = simd_u16_mask_create();
			return simd_u16_mask_and_inplace(out, a, b);
		}

		u16v_mask simd_u16_mask_or_inplace(u16v_mask out, const u16v_mask a, const u16v_mask b) {
			*out = *a | *b;
			return out;
		}

		u16v_mask simd_u16_mask_or(const u16v_mask a, const u16v_mask b) {
			auto out = simd_u16_mask_create();
			return simd_u16_mask_and_inplace(out, a, b);
		}

		u16v_mask simd_u16_mask_xor_inplace(u16v_mask out, const u16v_mask a, const u16v_mask b) {
			*out = *a ^ *b;
			return out;
		}

		u16v_mask simd_u16_mask_xor(const u16v_mask a, const u16v_mask b) {
			auto out = simd_u16_mask_create();
			return simd_u16_mask_and_inplace(out, a, b);
		}

		u16v_mask simd_u16_mask_equal_inplace(u16v_mask out, const u16v_mask a, const u16v_mask b) {
			*out = *a == *b;
			return out;
		}

		u16v_mask simd_u16_mask_equal(const u16v_mask a, const u16v_mask b) {
			auto out = simd_u16_mask_create();
			return simd_u16_mask_and_inplace(out, a, b);
		}

		u16v_mask simd_u16_mask_not_equal_inplace(u16v_mask out, const u16v_mask a, const u16v_mask b) {
			*out = *a & *b;
			return out;
		}

		u16v_mask simd_u16_mask_not_equal(const u16v_mask a, const u16v_mask b) {
			auto out = simd_u16_mask_create();
			return simd_u16_mask_and_inplace(out, a, b);
		}






		u16v_mask simd_u16_equal_inplace(u16v_mask out, const u16v a, const u16v b) {
			*out = *a == *b;
			return out;
		}

		u16v_mask simd_u16_equal(const u16v a, const u16v b) {
			auto out = simd_u16_mask_create();
			return simd_u16_equal_inplace(out, a, b);
		}

		u16v_mask simd_u16_not_equal_inplace(u16v_mask out, const u16v a, const u16v b) {
			*out = *a != *b;
			return out;
		}

		u16v_mask simd_u16_not_equal(const u16v a, const u16v b) {
			auto out = simd_u16_mask_create();
			return simd_u16_equal_inplace(out, a, b);
		}

		u16v_mask simd_u16_greater_equal_inplace(u16v_mask out, const u16v a, const u16v b) {
			*out = *a >= *b;
			return out;
		}

		u16v_mask simd_u16_greater_equal(const u16v a, const u16v b) {
			auto out = simd_u16_mask_create();
			return simd_u16_equal_inplace(out, a, b);
		}

		u16v_mask simd_u16_less_equal_inplace(u16v_mask out, const u16v a, const u16v b) {
			*out = *a <= *b;
			return out;
		}

		u16v_mask simd_u16_less_equal(const u16v a, const u16v b) {
			auto out = simd_u16_mask_create();
			return simd_u16_equal_inplace(out, a, b);
		}

		u16v_mask simd_u16_greater_inplace(u16v_mask out, const u16v a, const u16v b) {
			*out = *a > *b;
			return out;
		}

		u16v_mask simd_u16_greater(const u16v a, const u16v b) {
			auto out = simd_u16_mask_create();
			return simd_u16_equal_inplace(out, a, b);
		}

		u16v_mask simd_u16_less_inplace(u16v_mask out, const u16v a, const u16v b) {
			*out = *a < *b;
			return out;
		}

		u16v_mask simd_u16_less(const u16v a, const u16v b) {
			auto out = simd_u16_mask_create();
			return simd_u16_equal_inplace(out, a, b);
		}

		u16v simd_u16_assign_where(u16v dest, const u16v_mask mask, const u16v source) {
			std::experimental::where(*mask, *dest) = *source;
			return dest;
		}

#ifndef LIB_SIMD_NO_C_INTERFACE
	}
#endif
}