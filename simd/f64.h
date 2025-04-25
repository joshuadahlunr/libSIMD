#ifndef __LIB_SIMD_F64_H__
#define __LIB_SIMD_F64_H__

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* simd_f64v;
typedef void* simd_f64v_mask;

simd_f64v simd_f64_create();
void simd_f64_free(simd_f64v v);
size_t simd_f64_size();
size_t simd_f64_optimal_alignment();
simd_f64v simd_f64_broadcast(simd_f64v v, double value);
simd_f64v simd_f64_load(simd_f64v v, const double* data);
simd_f64v simd_f64_load_aligned(simd_f64v v, const double* data);
simd_f64v simd_f64_store(simd_f64v v, double* data);
simd_f64v simd_f64_store_aligned(simd_f64v v, double* data);
// simd_f64v simd_f64_logical_negate_inplace(simd_f64v out, simd_f64v v);
// simd_f64v simd_f64_logical_negate(simd_f64v v);
// simd_f64v simd_f64_bitwise_negate_inplace(simd_f64v out, simd_f64v v);
// simd_f64v simd_f64_bitwise_negate(simd_f64v v);
simd_f64v simd_f64_mathematical_negate_inplace(simd_f64v out, const simd_f64v v);
simd_f64v simd_f64_mathematical_negate(const simd_f64v v);
simd_f64v simd_f64_add_inplace(simd_f64v out, const simd_f64v a, const simd_f64v b);
simd_f64v simd_f64_add(simd_f64v a, const simd_f64v b);
simd_f64v simd_f64_subtract_inplace(simd_f64v out, const simd_f64v a, const simd_f64v b);
simd_f64v simd_f64_subtract(simd_f64v a, const simd_f64v b);
simd_f64v simd_f64_multiply_inplace(simd_f64v out, const simd_f64v a, const simd_f64v b);
simd_f64v simd_f64_multiply(const simd_f64v a, const simd_f64v b);
simd_f64v simd_f64_divide_inplace(simd_f64v out, const simd_f64v a, const simd_f64v b);
simd_f64v simd_f64_divide(const simd_f64v a, const simd_f64v b);
// simd_f64v simd_f64_modulus_inplace(simd_f64v out, const simd_f64v a, const simd_f64v b);
// simd_f64v simd_f64_modulus(const simd_f64v a, const simd_f64v b);
// simd_f64v simd_f64_and_inplace(simd_f64v out, const simd_f64v a, const simd_f64v b);
// simd_f64v simd_f64_and(const simd_f64v a, const simd_f64v b);
// simd_f64v simd_f64_or_inplace(simd_f64v out, const simd_f64v a, const simd_f64v b);
// simd_f64v simd_f64_or(const simd_f64v a, const simd_f64v b);
// simd_f64v simd_f64_xor_inplace(simd_f64v out, const simd_f64v a, const simd_f64v b);
// simd_f64v simd_f64_xor(const simd_f64v a, const simd_f64v b);
// simd_f64v simd_f64_shift_left_inplace(simd_f64v out, const simd_f64v a, const simd_f64v b);
// simd_f64v simd_f64_shift_left(const simd_f64v a, const simd_f64v b);
// simd_f64v simd_f64_shift_right_inplace(simd_f64v out, const simd_f64v a, const simd_f64v b);
// simd_f64v simd_f64_shift_right(const simd_f64v a, const simd_f64v b);

simd_f64v_mask simd_f64_mask_create();
void simd_f64_mask_free(simd_f64v_mask m);
simd_f64v_mask simd_f64_mask_load(simd_f64v_mask m, const bool* data);
simd_f64v_mask simd_f64_mask_load_aligned(simd_f64v_mask m, const bool* data);
simd_f64v_mask simd_f64_mask_load_bitmask(simd_f64v_mask m, size_t bitmask);
simd_f64v_mask simd_f64_mask_store(simd_f64v_mask m, bool* data);
simd_f64v_mask simd_f64_mask_store_aligned(simd_f64v_mask m, bool* data);
size_t simd_f64_mask_store_bitmask(simd_f64v_mask m);
bool simd_f64_mask_set_if_all(const simd_f64v_mask m);
bool simd_f64_mask_set_if_none(const simd_f64v_mask m);
bool simd_f64_mask_set_if_any(const simd_f64v_mask m);
simd_f64v_mask simd_f64_mask_negate_inplace(const simd_f64v_mask out, const simd_f64v_mask m);
simd_f64v_mask simd_f64_mask_negate(const simd_f64v_mask m);
simd_f64v_mask simd_f64_mask_and_inplace(simd_f64v_mask out, const simd_f64v_mask a, const simd_f64v_mask b);
simd_f64v_mask simd_f64_mask_and(const simd_f64v_mask a, const simd_f64v_mask b);
simd_f64v_mask simd_f64_mask_or_inplace(simd_f64v_mask out, const simd_f64v_mask a, const simd_f64v_mask b);
simd_f64v_mask simd_f64_mask_or(const simd_f64v_mask a, const simd_f64v_mask b);
simd_f64v_mask simd_f64_mask_xor_inplace(simd_f64v_mask out, const simd_f64v_mask a, const simd_f64v_mask b);
simd_f64v_mask simd_f64_mask_xor(const simd_f64v_mask a, const simd_f64v_mask b);
simd_f64v_mask simd_f64_mask_equal_inplace(simd_f64v_mask out, const simd_f64v_mask a, const simd_f64v_mask b);
simd_f64v_mask simd_f64_mask_equal(const simd_f64v_mask a, const simd_f64v_mask b);
simd_f64v_mask simd_f64_mask_not_equal_inplace(simd_f64v_mask out, const simd_f64v_mask a, const simd_f64v_mask b);
simd_f64v_mask simd_f64_mask_not_equal(const simd_f64v_mask a, const simd_f64v_mask b);

simd_f64v_mask simd_f64_equal_inplace(simd_f64v_mask out, const simd_f64v a, const simd_f64v b);
simd_f64v_mask simd_f64_equal(const simd_f64v a, const simd_f64v b);
simd_f64v_mask simd_f64_not_equal_inplace(simd_f64v_mask out, const simd_f64v a, const simd_f64v b);
simd_f64v_mask simd_f64_not_equal(const simd_f64v a, const simd_f64v b);
simd_f64v_mask simd_f64_greater_equal_inplace(simd_f64v_mask out, const simd_f64v a, const simd_f64v b);
simd_f64v_mask simd_f64_greater_equal(const simd_f64v a, const simd_f64v b);
simd_f64v_mask simd_f64_less_equal_inplace(simd_f64v_mask out, const simd_f64v a, const simd_f64v b);
simd_f64v_mask simd_f64_less_equal(const simd_f64v a, const simd_f64v b);
simd_f64v_mask simd_f64_greater_inplace(simd_f64v_mask out, const simd_f64v a, const simd_f64v b);
simd_f64v_mask simd_f64_greater(const simd_f64v a, const simd_f64v b);
simd_f64v_mask simd_f64_less_inplace(simd_f64v_mask out, const simd_f64v a, const simd_f64v b);
simd_f64v_mask simd_f64_less(const simd_f64v a, const simd_f64v b);

simd_f64v simd_f64_assign_where(simd_f64v dest, const simd_f64v_mask mask, const simd_f64v source);

#ifdef __cplusplus
}
#endif

#endif // __LIB_SIMD_F64_H__