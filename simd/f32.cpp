#include <simd>

namespace simd {
	using f32v_impl = std::experimental::native_simd<float>;
	using f32v = f32v_impl*;
	using f32v_mask_impl = f32v_impl::mask_type;
	using f32v_mask = f32v_mask_impl*;

#ifndef LIB_SIMD_NO_C_INTERFACE
	extern "C" {
#endif
		f32v simd_f32_create() {
			return new f32v_impl();
		}

		void simd_f32_free(f32v v) {
			delete v;
		}

		size_t simd_f32_size() {
			return f32v_impl::size();
		}

		size_t simd_f32_optimal_alignment() {
			return std::experimental::memory_alignment_v<f32v_impl>;
		}

		f32v simd_f32_broadcast(f32v v, float value) {
			*v = f32v_impl(value);
			return v;
		}

		f32v simd_f32_load(f32v v, const float* data) {
			v->copy_from(data, std::experimental::element_aligned);
			return v;
		}

		f32v simd_f32_load_aligned(f32v v, const float* data) {
			v->copy_from(data, std::experimental::vector_aligned);
			return v;
		}

		f32v simd_f32_store(f32v v, float* data) {
			v->copy_to(data, std::experimental::element_aligned);
			return v;
		}

		f32v simd_f32_store_aligned(f32v v, float* data) {
			v->copy_to(data, std::experimental::vector_aligned);
			return v;
		}

		// f32v simd_f32_logical_negate_inplace(f32v out, f32v v) {
		// 	*out = !*v;
		// 	return out;
		// }

		// f32v simd_f32_logical_negate(f32v v) {
		// 	auto out = simd_f32_create();
		// 	return simd_f32_logical_negate_inplace(out, v);
		// }

		// f32v simd_f32_bitwise_negate_inplace(f32v out, f32v v) {
		// 	*out = ~*v;
		// 	return out;
		// }

		// f32v simd_f32_bitwise_negate(f32v v) {
		// 	auto out = simd_f32_create();
		// 	return simd_f32_bitwise_negate_inplace(out, v);
		// }

		f32v simd_f32_mathematical_negate_inplace(f32v out, const f32v v) {
			*out = -*v;
			return out;
		}

		f32v simd_f32_mathematical_negate(const f32v v) {
			auto out = simd_f32_create();
			return simd_f32_mathematical_negate_inplace(out, v);
		}

		f32v simd_f32_add_inplace(f32v out, const f32v a, const f32v b) {
			*out = *a + *b;
			return out;
		}

		f32v simd_f32_add(f32v a, const f32v b) {
			auto out = simd_f32_create();
			return simd_f32_add_inplace(out, a, b);
		}

		f32v simd_f32_subtract_inplace(f32v out, const f32v a, const f32v b) {
			*out = *a - *b;
			return out;
		}

		f32v simd_f32_subtract(f32v a, const f32v b) {
			auto out = simd_f32_create();
			return simd_f32_subtract_inplace(out, a, b);
		}

		f32v simd_f32_multiply_inplace(f32v out, const f32v a, const f32v b) {
			*out = *a * *b;
			return out;
		}

		f32v simd_f32_multiply(const f32v a, const f32v b) {
			auto out = simd_f32_create();
			return simd_f32_multiply_inplace(out, a, b);
		}

		f32v simd_f32_divide_inplace(f32v out, const f32v a, const f32v b) {
			*out = *a / *b;
			return out;
		}

		f32v simd_f32_divide(const f32v a, const f32v b) {
			auto out = simd_f32_create();
			return simd_f32_divide_inplace(out, a, b);
		}

		// f32v simd_f32_modulus_inplace(f32v out, const f32v a, const f32v b) {
		// 	*out = *a % *b;
		// 	return out;
		// }

		// f32v simd_f32_modulus(const f32v a, const f32v b) {
		// 	auto out = simd_f32_create();
		// 	return simd_f32_divide_inplace(out, a, b);
		// }

		// f32v simd_f32_and_inplace(f32v out, const f32v a, const f32v b) {
		// 	*out = *a & *b;
		// 	return out;
		// }

		// f32v simd_f32_and(const f32v a, const f32v b) {
		// 	auto out = simd_f32_create();
		// 	return simd_f32_divide_inplace(out, a, b);
		// }

		// f32v simd_f32_or_inplace(f32v out, const f32v a, const f32v b) {
		// 	*out = *a | *b;
		// 	return out;
		// }

		// f32v simd_f32_or(const f32v a, const f32v b) {
		// 	auto out = simd_f32_create();
		// 	return simd_f32_divide_inplace(out, a, b);
		// }

		// f32v simd_f32_xor_inplace(f32v out, const f32v a, const f32v b) {
		// 	*out = *a ^ *b;
		// 	return out;
		// }

		// f32v simd_f32_xor(const f32v a, const f32v b) {
		// 	auto out = simd_f32_create();
		// 	return simd_f32_divide_inplace(out, a, b);
		// }

		// f32v simd_f32_shift_left_inplace(f32v out, const f32v a, const f32v b) {
		// 	*out = *a << *b;
		// 	return out;
		// }

		// f32v simd_f32_shift_left(const f32v a, const f32v b) {
		// 	auto out = simd_f32_create();
		// 	return simd_f32_divide_inplace(out, a, b);
		// }

		// f32v simd_f32_shift_right_inplace(f32v out, const f32v a, const f32v b) {
		// 	*out = *a >> *b;
		// 	return out;
		// }

		// f32v simd_f32_shift_right(const f32v a, const f32v b) {
		// 	auto out = simd_f32_create();
		// 	return simd_f32_divide_inplace(out, a, b);
		// }






		f32v_mask simd_f32_mask_create() {
			return new f32v_mask_impl();
		}

		void simd_f32_mask_free(f32v_mask m) {
			delete m;
		}

		f32v_mask simd_f32_mask_load(f32v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::element_aligned);
			return m;
		}

		f32v_mask simd_f32_mask_load_aligned(f32v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::vector_aligned);
			return m;
		}

		f32v_mask simd_f32_mask_load_bitmask(f32v_mask m, size_t bitmask) {
			alignas(std::experimental::memory_alignment_v<f32v_mask_impl>) std::array<bool, sizeof(size_t) * 8> bits;
			for (size_t i = 0; i < bits.size(); ++i)
				bits[i] = (bitmask >> i) & 1;
			m->copy_from(bits.data(), std::experimental::element_aligned);
			return m;
		}

		f32v_mask simd_f32_mask_store(f32v_mask m, bool* data) {
			m->copy_to(data, std::experimental::element_aligned);
			return m;
		}

		f32v_mask simd_f32_mask_store_aligned(f32v_mask m, bool* data) {
			m->copy_to(data, std::experimental::vector_aligned);
			return m;
		}

		size_t simd_f32_mask_store_bitmask(f32v_mask m) {
			alignas(std::experimental::memory_alignment_v<f32v_mask_impl>) std::array<bool, sizeof(size_t) * 8> bits;
			m->copy_to(bits.data(), std::experimental::vector_aligned);
			size_t out = 0;
			for (size_t i = 0; i < bits.size(); ++i)
				out |= (uint64_t{bits[i]} << i);
			return out;
		}

		bool simd_f32_mask_set_if_all(const f32v_mask m) {
			return all_of(m);
		}

		bool simd_f32_mask_set_if_none(const f32v_mask m) {
			return none_of(m);
		}

		bool simd_f32_mask_set_if_any(const f32v_mask m) {
			return any_of(m);
		}

		f32v_mask simd_f32_mask_negate_inplace(const f32v_mask out, const f32v_mask m) {
			*out = !*m;
			return out;
		}

		f32v_mask simd_f32_mask_negate(const f32v_mask m) {
			auto out = simd_f32_mask_create();
			return simd_f32_mask_negate_inplace(out, m);
		}

		f32v_mask simd_f32_mask_and_inplace(f32v_mask out, const f32v_mask a, const f32v_mask b) {
			*out = *a & *b;
			return out;
		}

		f32v_mask simd_f32_mask_and(const f32v_mask a, const f32v_mask b) {
			auto out = simd_f32_mask_create();
			return simd_f32_mask_and_inplace(out, a, b);
		}

		f32v_mask simd_f32_mask_or_inplace(f32v_mask out, const f32v_mask a, const f32v_mask b) {
			*out = *a | *b;
			return out;
		}

		f32v_mask simd_f32_mask_or(const f32v_mask a, const f32v_mask b) {
			auto out = simd_f32_mask_create();
			return simd_f32_mask_and_inplace(out, a, b);
		}

		f32v_mask simd_f32_mask_xor_inplace(f32v_mask out, const f32v_mask a, const f32v_mask b) {
			*out = *a ^ *b;
			return out;
		}

		f32v_mask simd_f32_mask_xor(const f32v_mask a, const f32v_mask b) {
			auto out = simd_f32_mask_create();
			return simd_f32_mask_and_inplace(out, a, b);
		}

		f32v_mask simd_f32_mask_equal_inplace(f32v_mask out, const f32v_mask a, const f32v_mask b) {
			*out = *a == *b;
			return out;
		}

		f32v_mask simd_f32_mask_equal(const f32v_mask a, const f32v_mask b) {
			auto out = simd_f32_mask_create();
			return simd_f32_mask_and_inplace(out, a, b);
		}

		f32v_mask simd_f32_mask_not_equal_inplace(f32v_mask out, const f32v_mask a, const f32v_mask b) {
			*out = *a & *b;
			return out;
		}

		f32v_mask simd_f32_mask_not_equal(const f32v_mask a, const f32v_mask b) {
			auto out = simd_f32_mask_create();
			return simd_f32_mask_and_inplace(out, a, b);
		}






		f32v_mask simd_f32_equal_inplace(f32v_mask out, const f32v a, const f32v b) {
			*out = *a == *b;
			return out;
		}

		f32v_mask simd_f32_equal(const f32v a, const f32v b) {
			auto out = simd_f32_mask_create();
			return simd_f32_equal_inplace(out, a, b);
		}

		f32v_mask simd_f32_not_equal_inplace(f32v_mask out, const f32v a, const f32v b) {
			*out = *a != *b;
			return out;
		}

		f32v_mask simd_f32_not_equal(const f32v a, const f32v b) {
			auto out = simd_f32_mask_create();
			return simd_f32_equal_inplace(out, a, b);
		}

		f32v_mask simd_f32_greater_equal_inplace(f32v_mask out, const f32v a, const f32v b) {
			*out = *a >= *b;
			return out;
		}

		f32v_mask simd_f32_greater_equal(const f32v a, const f32v b) {
			auto out = simd_f32_mask_create();
			return simd_f32_equal_inplace(out, a, b);
		}

		f32v_mask simd_f32_less_equal_inplace(f32v_mask out, const f32v a, const f32v b) {
			*out = *a <= *b;
			return out;
		}

		f32v_mask simd_f32_less_equal(const f32v a, const f32v b) {
			auto out = simd_f32_mask_create();
			return simd_f32_equal_inplace(out, a, b);
		}

		f32v_mask simd_f32_greater_inplace(f32v_mask out, const f32v a, const f32v b) {
			*out = *a > *b;
			return out;
		}

		f32v_mask simd_f32_greater(const f32v a, const f32v b) {
			auto out = simd_f32_mask_create();
			return simd_f32_equal_inplace(out, a, b);
		}

		f32v_mask simd_f32_less_inplace(f32v_mask out, const f32v a, const f32v b) {
			*out = *a < *b;
			return out;
		}

		f32v_mask simd_f32_less(const f32v a, const f32v b) {
			auto out = simd_f32_mask_create();
			return simd_f32_equal_inplace(out, a, b);
		}

		f32v simd_f32_assign_where(f32v dest, const f32v_mask mask, const f32v source) {
			std::experimental::where(*mask, *dest) = *source;
			return dest;
		}

#ifndef LIB_SIMD_NO_C_INTERFACE
	}
#endif
}