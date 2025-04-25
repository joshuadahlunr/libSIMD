#include <simd>

namespace simd {
	using u32v_impl = std::experimental::native_simd<uint32_t>;
	using u32v = u32v_impl*;
	using u32v_mask_impl = u32v_impl::mask_type;
	using u32v_mask = u32v_mask_impl*;

#ifndef LIB_SIMD_NO_C_INTERFACE
	extern "C" {
#endif
		u32v simd_u32_create() {
			return new u32v_impl();
		}

		void simd_u32_free(u32v v) {
			delete v;
		}

		size_t simd_u32_size() {
			return u32v_impl::size();
		}

		size_t simd_u32_optimal_alignment() {
			return std::experimental::memory_alignment_v<u32v_impl>;
		}

		u32v simd_u32_broadcast(u32v v, uint32_t value) {
			*v = u32v_impl(value);
			return v;
		}

		u32v simd_u32_load(u32v v, const uint32_t* data) {
			v->copy_from(data, std::experimental::element_aligned);
			return v;
		}

		u32v simd_u32_load_aligned(u32v v, const uint32_t* data) {
			v->copy_from(data, std::experimental::vector_aligned);
			return v;
		}

		u32v simd_u32_store(u32v v, uint32_t* data) {
			v->copy_to(data, std::experimental::element_aligned);
			return v;
		}

		u32v simd_u32_store_aligned(u32v v, uint32_t* data) {
			v->copy_to(data, std::experimental::vector_aligned);
			return v;
		}

		// u32v simd_u32_logical_negate_inplace(u32v out, u32v v) {
		// 	*out = !*v;
		// 	return out;
		// }

		// u32v simd_u32_logical_negate(u32v v) {
		// 	auto out = simd_u32_create();
		// 	return simd_u32_logical_negate_inplace(out, v);
		// }

		u32v simd_u32_bitwise_negate_inplace(u32v out, u32v v) {
			*out = ~*v;
			return out;
		}

		u32v simd_u32_bitwise_negate(u32v v) {
			auto out = simd_u32_create();
			return simd_u32_bitwise_negate_inplace(out, v);
		}

		u32v simd_u32_mathematical_negate_inplace(u32v out, const u32v v) {
			*out = -*v;
			return out;
		}

		u32v simd_u32_mathematical_negate(const u32v v) {
			auto out = simd_u32_create();
			return simd_u32_mathematical_negate_inplace(out, v);
		}

		u32v simd_u32_add_inplace(u32v out, const u32v a, const u32v b) {
			*out = *a + *b;
			return out;
		}

		u32v simd_u32_add(u32v a, const u32v b) {
			auto out = simd_u32_create();
			return simd_u32_add_inplace(out, a, b);
		}

		u32v simd_u32_subtract_inplace(u32v out, const u32v a, const u32v b) {
			*out = *a - *b;
			return out;
		}

		u32v simd_u32_subtract(u32v a, const u32v b) {
			auto out = simd_u32_create();
			return simd_u32_subtract_inplace(out, a, b);
		}

		u32v simd_u32_multiply_inplace(u32v out, const u32v a, const u32v b) {
			*out = *a * *b;
			return out;
		}

		u32v simd_u32_multiply(const u32v a, const u32v b) {
			auto out = simd_u32_create();
			return simd_u32_multiply_inplace(out, a, b);
		}

		u32v simd_u32_divide_inplace(u32v out, const u32v a, const u32v b) {
			*out = *a / *b;
			return out;
		}

		u32v simd_u32_divide(const u32v a, const u32v b) {
			auto out = simd_u32_create();
			return simd_u32_divide_inplace(out, a, b);
		}

		u32v simd_u32_modulus_inplace(u32v out, const u32v a, const u32v b) {
			*out = *a % *b;
			return out;
		}

		u32v simd_u32_modulus(const u32v a, const u32v b) {
			auto out = simd_u32_create();
			return simd_u32_divide_inplace(out, a, b);
		}

		u32v simd_u32_and_inplace(u32v out, const u32v a, const u32v b) {
			*out = *a & *b;
			return out;
		}

		u32v simd_u32_and(const u32v a, const u32v b) {
			auto out = simd_u32_create();
			return simd_u32_divide_inplace(out, a, b);
		}

		u32v simd_u32_or_inplace(u32v out, const u32v a, const u32v b) {
			*out = *a | *b;
			return out;
		}

		u32v simd_u32_or(const u32v a, const u32v b) {
			auto out = simd_u32_create();
			return simd_u32_divide_inplace(out, a, b);
		}

		u32v simd_u32_xor_inplace(u32v out, const u32v a, const u32v b) {
			*out = *a ^ *b;
			return out;
		}

		u32v simd_u32_xor(const u32v a, const u32v b) {
			auto out = simd_u32_create();
			return simd_u32_divide_inplace(out, a, b);
		}

		u32v simd_u32_shift_left_inplace(u32v out, const u32v a, const u32v b) {
			*out = *a << *b;
			return out;
		}

		u32v simd_u32_shift_left(const u32v a, const u32v b) {
			auto out = simd_u32_create();
			return simd_u32_divide_inplace(out, a, b);
		}

		u32v simd_u32_shift_right_inplace(u32v out, const u32v a, const u32v b) {
			*out = *a >> *b;
			return out;
		}

		u32v simd_u32_shift_right(const u32v a, const u32v b) {
			auto out = simd_u32_create();
			return simd_u32_divide_inplace(out, a, b);
		}






		u32v_mask simd_u32_mask_create() {
			return new u32v_mask_impl();
		}

		void simd_u32_mask_free(u32v_mask m) {
			delete m;
		}

		u32v_mask simd_u32_mask_load(u32v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::element_aligned);
			return m;
		}

		u32v_mask simd_u32_mask_load_aligned(u32v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::vector_aligned);
			return m;
		}

		u32v_mask simd_u32_mask_load_bitmask(u32v_mask m, size_t bitmask) {
			alignas(std::experimental::memory_alignment_v<u32v_mask_impl>) std::array<bool, sizeof(size_t) * 32> bits;
			for (size_t i = 0; i < bits.size(); ++i)
				bits[i] = (bitmask >> i) & 1;
			m->copy_from(bits.data(), std::experimental::element_aligned);
			return m;
		}

		u32v_mask simd_u32_mask_store(u32v_mask m, bool* data) {
			m->copy_to(data, std::experimental::element_aligned);
			return m;
		}

		u32v_mask simd_u32_mask_store_aligned(u32v_mask m, bool* data) {
			m->copy_to(data, std::experimental::vector_aligned);
			return m;
		}

		size_t simd_u32_mask_store_bitmask(u32v_mask m) {
			alignas(std::experimental::memory_alignment_v<u32v_mask_impl>) std::array<bool, sizeof(size_t) * 32> bits;
			m->copy_to(bits.data(), std::experimental::vector_aligned);
			size_t out = 0;
			for (size_t i = 0; i < bits.size(); ++i)
				out |= (uint64_t{bits[i]} << i);
			return out;
		}

		bool simd_u32_mask_set_if_all(const u32v_mask m) {
			return all_of(m);
		}

		bool simd_u32_mask_set_if_none(const u32v_mask m) {
			return none_of(m);
		}

		bool simd_u32_mask_set_if_any(const u32v_mask m) {
			return any_of(m);
		}

		u32v_mask simd_u32_mask_negate_inplace(const u32v_mask out, const u32v_mask m) {
			*out = !*m;
			return out;
		}

		u32v_mask simd_u32_mask_negate(const u32v_mask m) {
			auto out = simd_u32_mask_create();
			return simd_u32_mask_negate_inplace(out, m);
		}

		u32v_mask simd_u32_mask_and_inplace(u32v_mask out, const u32v_mask a, const u32v_mask b) {
			*out = *a & *b;
			return out;
		}

		u32v_mask simd_u32_mask_and(const u32v_mask a, const u32v_mask b) {
			auto out = simd_u32_mask_create();
			return simd_u32_mask_and_inplace(out, a, b);
		}

		u32v_mask simd_u32_mask_or_inplace(u32v_mask out, const u32v_mask a, const u32v_mask b) {
			*out = *a | *b;
			return out;
		}

		u32v_mask simd_u32_mask_or(const u32v_mask a, const u32v_mask b) {
			auto out = simd_u32_mask_create();
			return simd_u32_mask_and_inplace(out, a, b);
		}

		u32v_mask simd_u32_mask_xor_inplace(u32v_mask out, const u32v_mask a, const u32v_mask b) {
			*out = *a ^ *b;
			return out;
		}

		u32v_mask simd_u32_mask_xor(const u32v_mask a, const u32v_mask b) {
			auto out = simd_u32_mask_create();
			return simd_u32_mask_and_inplace(out, a, b);
		}

		u32v_mask simd_u32_mask_equal_inplace(u32v_mask out, const u32v_mask a, const u32v_mask b) {
			*out = *a == *b;
			return out;
		}

		u32v_mask simd_u32_mask_equal(const u32v_mask a, const u32v_mask b) {
			auto out = simd_u32_mask_create();
			return simd_u32_mask_and_inplace(out, a, b);
		}

		u32v_mask simd_u32_mask_not_equal_inplace(u32v_mask out, const u32v_mask a, const u32v_mask b) {
			*out = *a & *b;
			return out;
		}

		u32v_mask simd_u32_mask_not_equal(const u32v_mask a, const u32v_mask b) {
			auto out = simd_u32_mask_create();
			return simd_u32_mask_and_inplace(out, a, b);
		}






		u32v_mask simd_u32_equal_inplace(u32v_mask out, const u32v a, const u32v b) {
			*out = *a == *b;
			return out;
		}

		u32v_mask simd_u32_equal(const u32v a, const u32v b) {
			auto out = simd_u32_mask_create();
			return simd_u32_equal_inplace(out, a, b);
		}

		u32v_mask simd_u32_not_equal_inplace(u32v_mask out, const u32v a, const u32v b) {
			*out = *a != *b;
			return out;
		}

		u32v_mask simd_u32_not_equal(const u32v a, const u32v b) {
			auto out = simd_u32_mask_create();
			return simd_u32_equal_inplace(out, a, b);
		}

		u32v_mask simd_u32_greater_equal_inplace(u32v_mask out, const u32v a, const u32v b) {
			*out = *a >= *b;
			return out;
		}

		u32v_mask simd_u32_greater_equal(const u32v a, const u32v b) {
			auto out = simd_u32_mask_create();
			return simd_u32_equal_inplace(out, a, b);
		}

		u32v_mask simd_u32_less_equal_inplace(u32v_mask out, const u32v a, const u32v b) {
			*out = *a <= *b;
			return out;
		}

		u32v_mask simd_u32_less_equal(const u32v a, const u32v b) {
			auto out = simd_u32_mask_create();
			return simd_u32_equal_inplace(out, a, b);
		}

		u32v_mask simd_u32_greater_inplace(u32v_mask out, const u32v a, const u32v b) {
			*out = *a > *b;
			return out;
		}

		u32v_mask simd_u32_greater(const u32v a, const u32v b) {
			auto out = simd_u32_mask_create();
			return simd_u32_equal_inplace(out, a, b);
		}

		u32v_mask simd_u32_less_inplace(u32v_mask out, const u32v a, const u32v b) {
			*out = *a < *b;
			return out;
		}

		u32v_mask simd_u32_less(const u32v a, const u32v b) {
			auto out = simd_u32_mask_create();
			return simd_u32_equal_inplace(out, a, b);
		}

		u32v simd_u32_assign_where(u32v dest, const u32v_mask mask, const u32v source) {
			std::experimental::where(*mask, *dest) = *source;
			return dest;
		}

#ifndef LIB_SIMD_NO_C_INTERFACE
	}
#endif
}