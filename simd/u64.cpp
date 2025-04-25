#include <simd>

namespace simd {
	using u64v_impl = std::experimental::native_simd<uint64_t>;
	using u64v = u64v_impl*;
	using u64v_mask_impl = u64v_impl::mask_type;
	using u64v_mask = u64v_mask_impl*;

#ifndef LIB_SIMD_NO_C_INTERFACE
	extern "C" {
#endif
		u64v simd_u64_create() {
			return new u64v_impl();
		}

		void simd_u64_free(u64v v) {
			delete v;
		}

		size_t simd_u64_size() {
			return u64v_impl::size();
		}

		size_t simd_u64_optimal_alignment() {
			return std::experimental::memory_alignment_v<u64v_impl>;
		}

		u64v simd_u64_broadcast(u64v v, uint64_t value) {
			*v = u64v_impl(value);
			return v;
		}

		u64v simd_u64_load(u64v v, const uint64_t* data) {
			v->copy_from(data, std::experimental::element_aligned);
			return v;
		}

		u64v simd_u64_load_aligned(u64v v, const uint64_t* data) {
			v->copy_from(data, std::experimental::vector_aligned);
			return v;
		}

		u64v simd_u64_store(u64v v, uint64_t* data) {
			v->copy_to(data, std::experimental::element_aligned);
			return v;
		}

		u64v simd_u64_store_aligned(u64v v, uint64_t* data) {
			v->copy_to(data, std::experimental::vector_aligned);
			return v;
		}

		// u64v simd_u64_logical_negate_inplace(u64v out, u64v v) {
		// 	*out = !*v;
		// 	return out;
		// }

		// u64v simd_u64_logical_negate(u64v v) {
		// 	auto out = simd_u64_create();
		// 	return simd_u64_logical_negate_inplace(out, v);
		// }

		u64v simd_u64_bitwise_negate_inplace(u64v out, u64v v) {
			*out = ~*v;
			return out;
		}

		u64v simd_u64_bitwise_negate(u64v v) {
			auto out = simd_u64_create();
			return simd_u64_bitwise_negate_inplace(out, v);
		}

		u64v simd_u64_mathematical_negate_inplace(u64v out, const u64v v) {
			*out = -*v;
			return out;
		}

		u64v simd_u64_mathematical_negate(const u64v v) {
			auto out = simd_u64_create();
			return simd_u64_mathematical_negate_inplace(out, v);
		}

		u64v simd_u64_add_inplace(u64v out, const u64v a, const u64v b) {
			*out = *a + *b;
			return out;
		}

		u64v simd_u64_add(u64v a, const u64v b) {
			auto out = simd_u64_create();
			return simd_u64_add_inplace(out, a, b);
		}

		u64v simd_u64_subtract_inplace(u64v out, const u64v a, const u64v b) {
			*out = *a - *b;
			return out;
		}

		u64v simd_u64_subtract(u64v a, const u64v b) {
			auto out = simd_u64_create();
			return simd_u64_subtract_inplace(out, a, b);
		}

		u64v simd_u64_multiply_inplace(u64v out, const u64v a, const u64v b) {
			*out = *a * *b;
			return out;
		}

		u64v simd_u64_multiply(const u64v a, const u64v b) {
			auto out = simd_u64_create();
			return simd_u64_multiply_inplace(out, a, b);
		}

		u64v simd_u64_divide_inplace(u64v out, const u64v a, const u64v b) {
			*out = *a / *b;
			return out;
		}

		u64v simd_u64_divide(const u64v a, const u64v b) {
			auto out = simd_u64_create();
			return simd_u64_divide_inplace(out, a, b);
		}

		u64v simd_u64_modulus_inplace(u64v out, const u64v a, const u64v b) {
			*out = *a % *b;
			return out;
		}

		u64v simd_u64_modulus(const u64v a, const u64v b) {
			auto out = simd_u64_create();
			return simd_u64_divide_inplace(out, a, b);
		}

		u64v simd_u64_and_inplace(u64v out, const u64v a, const u64v b) {
			*out = *a & *b;
			return out;
		}

		u64v simd_u64_and(const u64v a, const u64v b) {
			auto out = simd_u64_create();
			return simd_u64_divide_inplace(out, a, b);
		}

		u64v simd_u64_or_inplace(u64v out, const u64v a, const u64v b) {
			*out = *a | *b;
			return out;
		}

		u64v simd_u64_or(const u64v a, const u64v b) {
			auto out = simd_u64_create();
			return simd_u64_divide_inplace(out, a, b);
		}

		u64v simd_u64_xor_inplace(u64v out, const u64v a, const u64v b) {
			*out = *a ^ *b;
			return out;
		}

		u64v simd_u64_xor(const u64v a, const u64v b) {
			auto out = simd_u64_create();
			return simd_u64_divide_inplace(out, a, b);
		}

		u64v simd_u64_shift_left_inplace(u64v out, const u64v a, const u64v b) {
			*out = *a << *b;
			return out;
		}

		u64v simd_u64_shift_left(const u64v a, const u64v b) {
			auto out = simd_u64_create();
			return simd_u64_divide_inplace(out, a, b);
		}

		u64v simd_u64_shift_right_inplace(u64v out, const u64v a, const u64v b) {
			*out = *a >> *b;
			return out;
		}

		u64v simd_u64_shift_right(const u64v a, const u64v b) {
			auto out = simd_u64_create();
			return simd_u64_divide_inplace(out, a, b);
		}






		u64v_mask simd_u64_mask_create() {
			return new u64v_mask_impl();
		}

		void simd_u64_mask_free(u64v_mask m) {
			delete m;
		}

		u64v_mask simd_u64_mask_load(u64v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::element_aligned);
			return m;
		}

		u64v_mask simd_u64_mask_load_aligned(u64v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::vector_aligned);
			return m;
		}

		u64v_mask simd_u64_mask_load_bitmask(u64v_mask m, size_t bitmask) {
			alignas(std::experimental::memory_alignment_v<u64v_mask_impl>) std::array<bool, sizeof(size_t) * 64> bits;
			for (size_t i = 0; i < bits.size(); ++i)
				bits[i] = (bitmask >> i) & 1;
			m->copy_from(bits.data(), std::experimental::element_aligned);
			return m;
		}

		u64v_mask simd_u64_mask_store(u64v_mask m, bool* data) {
			m->copy_to(data, std::experimental::element_aligned);
			return m;
		}

		u64v_mask simd_u64_mask_store_aligned(u64v_mask m, bool* data) {
			m->copy_to(data, std::experimental::vector_aligned);
			return m;
		}

		size_t simd_u64_mask_store_bitmask(u64v_mask m) {
			alignas(std::experimental::memory_alignment_v<u64v_mask_impl>) std::array<bool, sizeof(size_t) * 64> bits;
			m->copy_to(bits.data(), std::experimental::vector_aligned);
			size_t out = 0;
			for (size_t i = 0; i < bits.size(); ++i)
				out |= (uint64_t{bits[i]} << i);
			return out;
		}

		bool simd_u64_mask_set_if_all(const u64v_mask m) {
			return all_of(m);
		}

		bool simd_u64_mask_set_if_none(const u64v_mask m) {
			return none_of(m);
		}

		bool simd_u64_mask_set_if_any(const u64v_mask m) {
			return any_of(m);
		}

		u64v_mask simd_u64_mask_negate_inplace(const u64v_mask out, const u64v_mask m) {
			*out = !*m;
			return out;
		}

		u64v_mask simd_u64_mask_negate(const u64v_mask m) {
			auto out = simd_u64_mask_create();
			return simd_u64_mask_negate_inplace(out, m);
		}

		u64v_mask simd_u64_mask_and_inplace(u64v_mask out, const u64v_mask a, const u64v_mask b) {
			*out = *a & *b;
			return out;
		}

		u64v_mask simd_u64_mask_and(const u64v_mask a, const u64v_mask b) {
			auto out = simd_u64_mask_create();
			return simd_u64_mask_and_inplace(out, a, b);
		}

		u64v_mask simd_u64_mask_or_inplace(u64v_mask out, const u64v_mask a, const u64v_mask b) {
			*out = *a | *b;
			return out;
		}

		u64v_mask simd_u64_mask_or(const u64v_mask a, const u64v_mask b) {
			auto out = simd_u64_mask_create();
			return simd_u64_mask_and_inplace(out, a, b);
		}

		u64v_mask simd_u64_mask_xor_inplace(u64v_mask out, const u64v_mask a, const u64v_mask b) {
			*out = *a ^ *b;
			return out;
		}

		u64v_mask simd_u64_mask_xor(const u64v_mask a, const u64v_mask b) {
			auto out = simd_u64_mask_create();
			return simd_u64_mask_and_inplace(out, a, b);
		}

		u64v_mask simd_u64_mask_equal_inplace(u64v_mask out, const u64v_mask a, const u64v_mask b) {
			*out = *a == *b;
			return out;
		}

		u64v_mask simd_u64_mask_equal(const u64v_mask a, const u64v_mask b) {
			auto out = simd_u64_mask_create();
			return simd_u64_mask_and_inplace(out, a, b);
		}

		u64v_mask simd_u64_mask_not_equal_inplace(u64v_mask out, const u64v_mask a, const u64v_mask b) {
			*out = *a & *b;
			return out;
		}

		u64v_mask simd_u64_mask_not_equal(const u64v_mask a, const u64v_mask b) {
			auto out = simd_u64_mask_create();
			return simd_u64_mask_and_inplace(out, a, b);
		}






		u64v_mask simd_u64_equal_inplace(u64v_mask out, const u64v a, const u64v b) {
			*out = *a == *b;
			return out;
		}

		u64v_mask simd_u64_equal(const u64v a, const u64v b) {
			auto out = simd_u64_mask_create();
			return simd_u64_equal_inplace(out, a, b);
		}

		u64v_mask simd_u64_not_equal_inplace(u64v_mask out, const u64v a, const u64v b) {
			*out = *a != *b;
			return out;
		}

		u64v_mask simd_u64_not_equal(const u64v a, const u64v b) {
			auto out = simd_u64_mask_create();
			return simd_u64_equal_inplace(out, a, b);
		}

		u64v_mask simd_u64_greater_equal_inplace(u64v_mask out, const u64v a, const u64v b) {
			*out = *a >= *b;
			return out;
		}

		u64v_mask simd_u64_greater_equal(const u64v a, const u64v b) {
			auto out = simd_u64_mask_create();
			return simd_u64_equal_inplace(out, a, b);
		}

		u64v_mask simd_u64_less_equal_inplace(u64v_mask out, const u64v a, const u64v b) {
			*out = *a <= *b;
			return out;
		}

		u64v_mask simd_u64_less_equal(const u64v a, const u64v b) {
			auto out = simd_u64_mask_create();
			return simd_u64_equal_inplace(out, a, b);
		}

		u64v_mask simd_u64_greater_inplace(u64v_mask out, const u64v a, const u64v b) {
			*out = *a > *b;
			return out;
		}

		u64v_mask simd_u64_greater(const u64v a, const u64v b) {
			auto out = simd_u64_mask_create();
			return simd_u64_equal_inplace(out, a, b);
		}

		u64v_mask simd_u64_less_inplace(u64v_mask out, const u64v a, const u64v b) {
			*out = *a < *b;
			return out;
		}

		u64v_mask simd_u64_less(const u64v a, const u64v b) {
			auto out = simd_u64_mask_create();
			return simd_u64_equal_inplace(out, a, b);
		}

		u64v simd_u64_assign_where(u64v dest, const u64v_mask mask, const u64v source) {
			std::experimental::where(*mask, *dest) = *source;
			return dest;
		}

#ifndef LIB_SIMD_NO_C_INTERFACE
	}
#endif
}