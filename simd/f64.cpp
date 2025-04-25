#include <simd>

namespace simd {
	using f64v_impl = std::experimental::native_simd<double>;
	using f64v = f64v_impl*;
	using f64v_mask_impl = f64v_impl::mask_type;
	using f64v_mask = f64v_mask_impl*;

#ifndef LIB_SIMD_NO_C_INTERFACE
	extern "C" {
#endif
		f64v simd_f64_create() {
			return new f64v_impl();
		}

		void simd_f64_free(f64v v) {
			delete v;
		}

		size_t simd_f64_size() {
			return f64v_impl::size();
		}

		size_t simd_f64_optimal_alignment() {
			return std::experimental::memory_alignment_v<f64v_impl>;
		}

		f64v simd_f64_broadcast(f64v v, double value) {
			*v = f64v_impl(value);
			return v;
		}

		f64v simd_f64_load(f64v v, const double* data) {
			v->copy_from(data, std::experimental::element_aligned);
			return v;
		}

		f64v simd_f64_load_aligned(f64v v, const double* data) {
			v->copy_from(data, std::experimental::vector_aligned);
			return v;
		}

		f64v simd_f64_store(f64v v, double* data) {
			v->copy_to(data, std::experimental::element_aligned);
			return v;
		}

		f64v simd_f64_store_aligned(f64v v, double* data) {
			v->copy_to(data, std::experimental::vector_aligned);
			return v;
		}

		// f64v simd_f64_logical_negate_inplace(f64v out, f64v v) {
		// 	*out = !*v;
		// 	return out;
		// }

		// f64v simd_f64_logical_negate(f64v v) {
		// 	auto out = simd_f64_create();
		// 	return simd_f64_logical_negate_inplace(out, v);
		// }

		// f64v simd_f64_bitwise_negate_inplace(f64v out, f64v v) {
		// 	*out = ~*v;
		// 	return out;
		// }

		// f64v simd_f64_bitwise_negate(f64v v) {
		// 	auto out = simd_f64_create();
		// 	return simd_f64_bitwise_negate_inplace(out, v);
		// }

		f64v simd_f64_mathematical_negate_inplace(f64v out, const f64v v) {
			*out = -*v;
			return out;
		}

		f64v simd_f64_mathematical_negate(const f64v v) {
			auto out = simd_f64_create();
			return simd_f64_mathematical_negate_inplace(out, v);
		}

		f64v simd_f64_add_inplace(f64v out, const f64v a, const f64v b) {
			*out = *a + *b;
			return out;
		}

		f64v simd_f64_add(f64v a, const f64v b) {
			auto out = simd_f64_create();
			return simd_f64_add_inplace(out, a, b);
		}

		f64v simd_f64_subtract_inplace(f64v out, const f64v a, const f64v b) {
			*out = *a - *b;
			return out;
		}

		f64v simd_f64_subtract(f64v a, const f64v b) {
			auto out = simd_f64_create();
			return simd_f64_subtract_inplace(out, a, b);
		}

		f64v simd_f64_multiply_inplace(f64v out, const f64v a, const f64v b) {
			*out = *a * *b;
			return out;
		}

		f64v simd_f64_multiply(const f64v a, const f64v b) {
			auto out = simd_f64_create();
			return simd_f64_multiply_inplace(out, a, b);
		}

		f64v simd_f64_divide_inplace(f64v out, const f64v a, const f64v b) {
			*out = *a / *b;
			return out;
		}

		f64v simd_f64_divide(const f64v a, const f64v b) {
			auto out = simd_f64_create();
			return simd_f64_divide_inplace(out, a, b);
		}

		// f64v simd_f64_modulus_inplace(f64v out, const f64v a, const f64v b) {
		// 	*out = *a % *b;
		// 	return out;
		// }

		// f64v simd_f64_modulus(const f64v a, const f64v b) {
		// 	auto out = simd_f64_create();
		// 	return simd_f64_divide_inplace(out, a, b);
		// }

		// f64v simd_f64_and_inplace(f64v out, const f64v a, const f64v b) {
		// 	*out = *a & *b;
		// 	return out;
		// }

		// f64v simd_f64_and(const f64v a, const f64v b) {
		// 	auto out = simd_f64_create();
		// 	return simd_f64_divide_inplace(out, a, b);
		// }

		// f64v simd_f64_or_inplace(f64v out, const f64v a, const f64v b) {
		// 	*out = *a | *b;
		// 	return out;
		// }

		// f64v simd_f64_or(const f64v a, const f64v b) {
		// 	auto out = simd_f64_create();
		// 	return simd_f64_divide_inplace(out, a, b);
		// }

		// f64v simd_f64_xor_inplace(f64v out, const f64v a, const f64v b) {
		// 	*out = *a ^ *b;
		// 	return out;
		// }

		// f64v simd_f64_xor(const f64v a, const f64v b) {
		// 	auto out = simd_f64_create();
		// 	return simd_f64_divide_inplace(out, a, b);
		// }

		// f64v simd_f64_shift_left_inplace(f64v out, const f64v a, const f64v b) {
		// 	*out = *a << *b;
		// 	return out;
		// }

		// f64v simd_f64_shift_left(const f64v a, const f64v b) {
		// 	auto out = simd_f64_create();
		// 	return simd_f64_divide_inplace(out, a, b);
		// }

		// f64v simd_f64_shift_right_inplace(f64v out, const f64v a, const f64v b) {
		// 	*out = *a >> *b;
		// 	return out;
		// }

		// f64v simd_f64_shift_right(const f64v a, const f64v b) {
		// 	auto out = simd_f64_create();
		// 	return simd_f64_divide_inplace(out, a, b);
		// }






		f64v_mask simd_f64_mask_create() {
			return new f64v_mask_impl();
		}

		void simd_f64_mask_free(f64v_mask m) {
			delete m;
		}

		f64v_mask simd_f64_mask_load(f64v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::element_aligned);
			return m;
		}

		f64v_mask simd_f64_mask_load_aligned(f64v_mask m, const bool* data) {
			m->copy_from(data, std::experimental::vector_aligned);
			return m;
		}

		f64v_mask simd_f64_mask_load_bitmask(f64v_mask m, size_t bitmask) {
			alignas(std::experimental::memory_alignment_v<f64v_mask_impl>) std::array<bool, sizeof(size_t) * 8> bits;
			for (size_t i = 0; i < bits.size(); ++i)
				bits[i] = (bitmask >> i) & 1;
			m->copy_from(bits.data(), std::experimental::element_aligned);
			return m;
		}

		f64v_mask simd_f64_mask_store(f64v_mask m, bool* data) {
			m->copy_to(data, std::experimental::element_aligned);
			return m;
		}

		f64v_mask simd_f64_mask_store_aligned(f64v_mask m, bool* data) {
			m->copy_to(data, std::experimental::vector_aligned);
			return m;
		}

		size_t simd_f64_mask_store_bitmask(f64v_mask m) {
			alignas(std::experimental::memory_alignment_v<f64v_mask_impl>) std::array<bool, sizeof(size_t) * 8> bits;
			m->copy_to(bits.data(), std::experimental::vector_aligned);
			size_t out = 0;
			for (size_t i = 0; i < bits.size(); ++i)
				out |= (uint64_t{bits[i]} << i);
			return out;
		}

		bool simd_f64_mask_set_if_all(const f64v_mask m) {
			return all_of(m);
		}

		bool simd_f64_mask_set_if_none(const f64v_mask m) {
			return none_of(m);
		}

		bool simd_f64_mask_set_if_any(const f64v_mask m) {
			return any_of(m);
		}

		f64v_mask simd_f64_mask_negate_inplace(const f64v_mask out, const f64v_mask m) {
			*out = !*m;
			return out;
		}

		f64v_mask simd_f64_mask_negate(const f64v_mask m) {
			auto out = simd_f64_mask_create();
			return simd_f64_mask_negate_inplace(out, m);
		}

		f64v_mask simd_f64_mask_and_inplace(f64v_mask out, const f64v_mask a, const f64v_mask b) {
			*out = *a & *b;
			return out;
		}

		f64v_mask simd_f64_mask_and(const f64v_mask a, const f64v_mask b) {
			auto out = simd_f64_mask_create();
			return simd_f64_mask_and_inplace(out, a, b);
		}

		f64v_mask simd_f64_mask_or_inplace(f64v_mask out, const f64v_mask a, const f64v_mask b) {
			*out = *a | *b;
			return out;
		}

		f64v_mask simd_f64_mask_or(const f64v_mask a, const f64v_mask b) {
			auto out = simd_f64_mask_create();
			return simd_f64_mask_and_inplace(out, a, b);
		}

		f64v_mask simd_f64_mask_xor_inplace(f64v_mask out, const f64v_mask a, const f64v_mask b) {
			*out = *a ^ *b;
			return out;
		}

		f64v_mask simd_f64_mask_xor(const f64v_mask a, const f64v_mask b) {
			auto out = simd_f64_mask_create();
			return simd_f64_mask_and_inplace(out, a, b);
		}

		f64v_mask simd_f64_mask_equal_inplace(f64v_mask out, const f64v_mask a, const f64v_mask b) {
			*out = *a == *b;
			return out;
		}

		f64v_mask simd_f64_mask_equal(const f64v_mask a, const f64v_mask b) {
			auto out = simd_f64_mask_create();
			return simd_f64_mask_and_inplace(out, a, b);
		}

		f64v_mask simd_f64_mask_not_equal_inplace(f64v_mask out, const f64v_mask a, const f64v_mask b) {
			*out = *a & *b;
			return out;
		}

		f64v_mask simd_f64_mask_not_equal(const f64v_mask a, const f64v_mask b) {
			auto out = simd_f64_mask_create();
			return simd_f64_mask_and_inplace(out, a, b);
		}






		f64v_mask simd_f64_equal_inplace(f64v_mask out, const f64v a, const f64v b) {
			*out = *a == *b;
			return out;
		}

		f64v_mask simd_f64_equal(const f64v a, const f64v b) {
			auto out = simd_f64_mask_create();
			return simd_f64_equal_inplace(out, a, b);
		}

		f64v_mask simd_f64_not_equal_inplace(f64v_mask out, const f64v a, const f64v b) {
			*out = *a != *b;
			return out;
		}

		f64v_mask simd_f64_not_equal(const f64v a, const f64v b) {
			auto out = simd_f64_mask_create();
			return simd_f64_equal_inplace(out, a, b);
		}

		f64v_mask simd_f64_greater_equal_inplace(f64v_mask out, const f64v a, const f64v b) {
			*out = *a >= *b;
			return out;
		}

		f64v_mask simd_f64_greater_equal(const f64v a, const f64v b) {
			auto out = simd_f64_mask_create();
			return simd_f64_equal_inplace(out, a, b);
		}

		f64v_mask simd_f64_less_equal_inplace(f64v_mask out, const f64v a, const f64v b) {
			*out = *a <= *b;
			return out;
		}

		f64v_mask simd_f64_less_equal(const f64v a, const f64v b) {
			auto out = simd_f64_mask_create();
			return simd_f64_equal_inplace(out, a, b);
		}

		f64v_mask simd_f64_greater_inplace(f64v_mask out, const f64v a, const f64v b) {
			*out = *a > *b;
			return out;
		}

		f64v_mask simd_f64_greater(const f64v a, const f64v b) {
			auto out = simd_f64_mask_create();
			return simd_f64_equal_inplace(out, a, b);
		}

		f64v_mask simd_f64_less_inplace(f64v_mask out, const f64v a, const f64v b) {
			*out = *a < *b;
			return out;
		}

		f64v_mask simd_f64_less(const f64v a, const f64v b) {
			auto out = simd_f64_mask_create();
			return simd_f64_equal_inplace(out, a, b);
		}

		f64v simd_f64_assign_where(f64v dest, const f64v_mask mask, const f64v source) {
			std::experimental::where(*mask, *dest) = *source;
			return dest;
		}

#ifndef LIB_SIMD_NO_C_INTERFACE
	}
#endif
}