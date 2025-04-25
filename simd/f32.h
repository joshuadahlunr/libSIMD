#ifndef __LIB_SIMD_F32_H__
#define __LIB_SIMD_F32_H__

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* simd_f32v;
typedef void* simd_f32v_mask;

simd_f32v simd_f32_create();
void simd_f32_free(simd_f32v v);
size_t simd_f32_size();
size_t simd_f32_optimal_alignment();
simd_f32v simd_f32_broadcast(simd_f32v v, float value);
simd_f32v simd_f32_load(simd_f32v v, const float* data);
simd_f32v simd_f32_load_aligned(simd_f32v v, const float* data);
simd_f32v simd_f32_store(simd_f32v v, float* data);
simd_f32v simd_f32_store_aligned(simd_f32v v, float* data);
// simd_f32v simd_f32_logical_negate_inplace(simd_f32v out, simd_f32v v);
// simd_f32v simd_f32_logical_negate(simd_f32v v);
// simd_f32v simd_f32_bitwise_negate_inplace(simd_f32v out, simd_f32v v);
// simd_f32v simd_f32_bitwise_negate(simd_f32v v);
simd_f32v simd_f32_mathematical_negate_inplace(simd_f32v out, const simd_f32v v);
simd_f32v simd_f32_mathematical_negate(const simd_f32v v);
simd_f32v simd_f32_add_inplace(simd_f32v out, const simd_f32v a, const simd_f32v b);
simd_f32v simd_f32_add(simd_f32v a, const simd_f32v b);
simd_f32v simd_f32_subtract_inplace(simd_f32v out, const simd_f32v a, const simd_f32v b);
simd_f32v simd_f32_subtract(simd_f32v a, const simd_f32v b);
simd_f32v simd_f32_multiply_inplace(simd_f32v out, const simd_f32v a, const simd_f32v b);
simd_f32v simd_f32_multiply(const simd_f32v a, const simd_f32v b);
simd_f32v simd_f32_divide_inplace(simd_f32v out, const simd_f32v a, const simd_f32v b);
simd_f32v simd_f32_divide(const simd_f32v a, const simd_f32v b);
// simd_f32v simd_f32_modulus_inplace(simd_f32v out, const simd_f32v a, const simd_f32v b);
// simd_f32v simd_f32_modulus(const simd_f32v a, const simd_f32v b);
// simd_f32v simd_f32_and_inplace(simd_f32v out, const simd_f32v a, const simd_f32v b);
// simd_f32v simd_f32_and(const simd_f32v a, const simd_f32v b);
// simd_f32v simd_f32_or_inplace(simd_f32v out, const simd_f32v a, const simd_f32v b);
// simd_f32v simd_f32_or(const simd_f32v a, const simd_f32v b);
// simd_f32v simd_f32_xor_inplace(simd_f32v out, const simd_f32v a, const simd_f32v b);
// simd_f32v simd_f32_xor(const simd_f32v a, const simd_f32v b);
// simd_f32v simd_f32_shift_left_inplace(simd_f32v out, const simd_f32v a, const simd_f32v b);
// simd_f32v simd_f32_shift_left(const simd_f32v a, const simd_f32v b);
// simd_f32v simd_f32_shift_right_inplace(simd_f32v out, const simd_f32v a, const simd_f32v b);
// simd_f32v simd_f32_shift_right(const simd_f32v a, const simd_f32v b);

simd_f32v_mask simd_f32_mask_create();
void simd_f32_mask_free(simd_f32v_mask m);
simd_f32v_mask simd_f32_mask_load(simd_f32v_mask m, const bool* data);
simd_f32v_mask simd_f32_mask_load_aligned(simd_f32v_mask m, const bool* data);
simd_f32v_mask simd_f32_mask_load_bitmask(simd_f32v_mask m, size_t bitmask);
simd_f32v_mask simd_f32_mask_store(simd_f32v_mask m, bool* data);
simd_f32v_mask simd_f32_mask_store_aligned(simd_f32v_mask m, bool* data);
size_t simd_f32_mask_store_bitmask(simd_f32v_mask m);
bool simd_f32_mask_set_if_all(const simd_f32v_mask m);
bool simd_f32_mask_set_if_none(const simd_f32v_mask m);
bool simd_f32_mask_set_if_any(const simd_f32v_mask m);
simd_f32v_mask simd_f32_mask_negate_inplace(const simd_f32v_mask out, const simd_f32v_mask m);
simd_f32v_mask simd_f32_mask_negate(const simd_f32v_mask m);
simd_f32v_mask simd_f32_mask_and_inplace(simd_f32v_mask out, const simd_f32v_mask a, const simd_f32v_mask b);
simd_f32v_mask simd_f32_mask_and(const simd_f32v_mask a, const simd_f32v_mask b);
simd_f32v_mask simd_f32_mask_or_inplace(simd_f32v_mask out, const simd_f32v_mask a, const simd_f32v_mask b);
simd_f32v_mask simd_f32_mask_or(const simd_f32v_mask a, const simd_f32v_mask b);
simd_f32v_mask simd_f32_mask_xor_inplace(simd_f32v_mask out, const simd_f32v_mask a, const simd_f32v_mask b);
simd_f32v_mask simd_f32_mask_xor(const simd_f32v_mask a, const simd_f32v_mask b);
simd_f32v_mask simd_f32_mask_equal_inplace(simd_f32v_mask out, const simd_f32v_mask a, const simd_f32v_mask b);
simd_f32v_mask simd_f32_mask_equal(const simd_f32v_mask a, const simd_f32v_mask b);
simd_f32v_mask simd_f32_mask_not_equal_inplace(simd_f32v_mask out, const simd_f32v_mask a, const simd_f32v_mask b);
simd_f32v_mask simd_f32_mask_not_equal(const simd_f32v_mask a, const simd_f32v_mask b);

simd_f32v_mask simd_f32_equal_inplace(simd_f32v_mask out, const simd_f32v a, const simd_f32v b);
simd_f32v_mask simd_f32_equal(const simd_f32v a, const simd_f32v b);
simd_f32v_mask simd_f32_not_equal_inplace(simd_f32v_mask out, const simd_f32v a, const simd_f32v b);
simd_f32v_mask simd_f32_not_equal(const simd_f32v a, const simd_f32v b);
simd_f32v_mask simd_f32_greater_equal_inplace(simd_f32v_mask out, const simd_f32v a, const simd_f32v b);
simd_f32v_mask simd_f32_greater_equal(const simd_f32v a, const simd_f32v b);
simd_f32v_mask simd_f32_less_equal_inplace(simd_f32v_mask out, const simd_f32v a, const simd_f32v b);
simd_f32v_mask simd_f32_less_equal(const simd_f32v a, const simd_f32v b);
simd_f32v_mask simd_f32_greater_inplace(simd_f32v_mask out, const simd_f32v a, const simd_f32v b);
simd_f32v_mask simd_f32_greater(const simd_f32v a, const simd_f32v b);
simd_f32v_mask simd_f32_less_inplace(simd_f32v_mask out, const simd_f32v a, const simd_f32v b);
simd_f32v_mask simd_f32_less(const simd_f32v a, const simd_f32v b);

simd_f32v simd_f32_assign_where(simd_f32v dest, const simd_f32v_mask mask, const simd_f32v source);

#ifdef __cplusplus
}
#endif

#endif // __LIB_SIMD_F32_H__