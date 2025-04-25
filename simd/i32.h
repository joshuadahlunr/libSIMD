#ifndef __LIB_SIMD_I32_H__
#define __LIB_SIMD_I32_H__

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* simd_i32v;
typedef void* simd_i32v_mask;

simd_i32v simd_i32_create();
void simd_i32_free(simd_i32v v);
size_t simd_i32_size();
size_t simd_i32_optimal_alignment();
simd_i32v simd_i32_broadcast(simd_i32v v, int32_t value);
simd_i32v simd_i32_load(simd_i32v v, const int32_t* data);
simd_i32v simd_i32_load_aligned(simd_i32v v, const int32_t* data);
simd_i32v simd_i32_store(simd_i32v v, int32_t* data);
simd_i32v simd_i32_store_aligned(simd_i32v v, int32_t* data);
// simd_i32v simd_i32_logical_negate_inplace(simd_i32v out, simd_i32v v);
// simd_i32v simd_i32_logical_negate(simd_i32v v);
simd_i32v simd_i32_bitwise_negate_inplace(simd_i32v out, simd_i32v v);
simd_i32v simd_i32_bitwise_negate(simd_i32v v);
simd_i32v simd_i32_mathematical_negate_inplace(simd_i32v out, const simd_i32v v);
simd_i32v simd_i32_mathematical_negate(const simd_i32v v);
simd_i32v simd_i32_add_inplace(simd_i32v out, const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_add(simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_subtract_inplace(simd_i32v out, const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_subtract(simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_multiply_inplace(simd_i32v out, const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_multiply(const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_divide_inplace(simd_i32v out, const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_divide(const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_modulus_inplace(simd_i32v out, const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_modulus(const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_and_inplace(simd_i32v out, const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_and(const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_or_inplace(simd_i32v out, const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_or(const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_xor_inplace(simd_i32v out, const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_xor(const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_shift_left_inplace(simd_i32v out, const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_shift_left(const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_shift_right_inplace(simd_i32v out, const simd_i32v a, const simd_i32v b);
simd_i32v simd_i32_shift_right(const simd_i32v a, const simd_i32v b);

simd_i32v_mask simd_i32_mask_create();
void simd_i32_mask_free(simd_i32v_mask m);
simd_i32v_mask simd_i32_mask_load(simd_i32v_mask m, const bool* data);
simd_i32v_mask simd_i32_mask_load_aligned(simd_i32v_mask m, const bool* data);
simd_i32v_mask simd_i32_mask_load_bitmask(simd_i32v_mask m, size_t bitmask);
simd_i32v_mask simd_i32_mask_store(simd_i32v_mask m, bool* data);
simd_i32v_mask simd_i32_mask_store_aligned(simd_i32v_mask m, bool* data);
size_t simd_i32_mask_store_bitmask(simd_i32v_mask m);
bool simd_i32_mask_set_if_all(const simd_i32v_mask m);
bool simd_i32_mask_set_if_none(const simd_i32v_mask m);
bool simd_i32_mask_set_if_any(const simd_i32v_mask m);
simd_i32v_mask simd_i32_mask_negate_inplace(const simd_i32v_mask out, const simd_i32v_mask m);
simd_i32v_mask simd_i32_mask_negate(const simd_i32v_mask m);
simd_i32v_mask simd_i32_mask_and_inplace(simd_i32v_mask out, const simd_i32v_mask a, const simd_i32v_mask b);
simd_i32v_mask simd_i32_mask_and(const simd_i32v_mask a, const simd_i32v_mask b);
simd_i32v_mask simd_i32_mask_or_inplace(simd_i32v_mask out, const simd_i32v_mask a, const simd_i32v_mask b);
simd_i32v_mask simd_i32_mask_or(const simd_i32v_mask a, const simd_i32v_mask b);
simd_i32v_mask simd_i32_mask_xor_inplace(simd_i32v_mask out, const simd_i32v_mask a, const simd_i32v_mask b);
simd_i32v_mask simd_i32_mask_xor(const simd_i32v_mask a, const simd_i32v_mask b);
simd_i32v_mask simd_i32_mask_equal_inplace(simd_i32v_mask out, const simd_i32v_mask a, const simd_i32v_mask b);
simd_i32v_mask simd_i32_mask_equal(const simd_i32v_mask a, const simd_i32v_mask b);
simd_i32v_mask simd_i32_mask_not_equal_inplace(simd_i32v_mask out, const simd_i32v_mask a, const simd_i32v_mask b);
simd_i32v_mask simd_i32_mask_not_equal(const simd_i32v_mask a, const simd_i32v_mask b);

simd_i32v_mask simd_i32_equal_inplace(simd_i32v_mask out, const simd_i32v a, const simd_i32v b);
simd_i32v_mask simd_i32_equal(const simd_i32v a, const simd_i32v b);
simd_i32v_mask simd_i32_not_equal_inplace(simd_i32v_mask out, const simd_i32v a, const simd_i32v b);
simd_i32v_mask simd_i32_not_equal(const simd_i32v a, const simd_i32v b);
simd_i32v_mask simd_i32_greater_equal_inplace(simd_i32v_mask out, const simd_i32v a, const simd_i32v b);
simd_i32v_mask simd_i32_greater_equal(const simd_i32v a, const simd_i32v b);
simd_i32v_mask simd_i32_less_equal_inplace(simd_i32v_mask out, const simd_i32v a, const simd_i32v b);
simd_i32v_mask simd_i32_less_equal(const simd_i32v a, const simd_i32v b);
simd_i32v_mask simd_i32_greater_inplace(simd_i32v_mask out, const simd_i32v a, const simd_i32v b);
simd_i32v_mask simd_i32_greater(const simd_i32v a, const simd_i32v b);
simd_i32v_mask simd_i32_less_inplace(simd_i32v_mask out, const simd_i32v a, const simd_i32v b);
simd_i32v_mask simd_i32_less(const simd_i32v a, const simd_i32v b);

simd_i32v simd_i32_assign_where(simd_i32v dest, const simd_i32v_mask mask, const simd_i32v source);

#ifdef __cplusplus
}
#endif

#endif // __LIB_SIMD_I32_H__