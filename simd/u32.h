#ifndef __LIB_SIMD_U32_H__
#define __LIB_SIMD_U32_H__

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* simd_u32v;
typedef void* simd_u32v_mask;

simd_u32v simd_u32_create();
void simd_u32_free(simd_u32v v);
size_t simd_u32_size();
size_t simd_u32_optimal_alignment();
simd_u32v simd_u32_broadcast(simd_u32v v, uint32_t value);
simd_u32v simd_u32_load(simd_u32v v, const uint32_t* data);
simd_u32v simd_u32_load_aligned(simd_u32v v, const uint32_t* data);
simd_u32v simd_u32_store(simd_u32v v, uint32_t* data);
simd_u32v simd_u32_store_aligned(simd_u32v v, uint32_t* data);
// simd_u32v simd_u32_logical_negate_inplace(simd_u32v out, simd_u32v v);
// simd_u32v simd_u32_logical_negate(simd_u32v v);
simd_u32v simd_u32_bitwise_negate_inplace(simd_u32v out, simd_u32v v);
simd_u32v simd_u32_bitwise_negate(simd_u32v v);
simd_u32v simd_u32_mathematical_negate_inplace(simd_u32v out, const simd_u32v v);
simd_u32v simd_u32_mathematical_negate(const simd_u32v v);
simd_u32v simd_u32_add_inplace(simd_u32v out, const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_add(simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_subtract_inplace(simd_u32v out, const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_subtract(simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_multiply_inplace(simd_u32v out, const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_multiply(const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_divide_inplace(simd_u32v out, const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_divide(const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_modulus_inplace(simd_u32v out, const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_modulus(const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_and_inplace(simd_u32v out, const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_and(const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_or_inplace(simd_u32v out, const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_or(const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_xor_inplace(simd_u32v out, const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_xor(const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_shift_left_inplace(simd_u32v out, const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_shift_left(const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_shift_right_inplace(simd_u32v out, const simd_u32v a, const simd_u32v b);
simd_u32v simd_u32_shift_right(const simd_u32v a, const simd_u32v b);

simd_u32v_mask simd_u32_mask_create();
void simd_u32_mask_free(simd_u32v_mask m);
simd_u32v_mask simd_u32_mask_load(simd_u32v_mask m, const bool* data);
simd_u32v_mask simd_u32_mask_load_aligned(simd_u32v_mask m, const bool* data);
simd_u32v_mask simd_u32_mask_load_bitmask(simd_u32v_mask m, size_t bitmask);
simd_u32v_mask simd_u32_mask_store(simd_u32v_mask m, bool* data);
simd_u32v_mask simd_u32_mask_store_aligned(simd_u32v_mask m, bool* data);
size_t simd_u32_mask_store_bitmask(simd_u32v_mask m);
bool simd_u32_mask_set_if_all(const simd_u32v_mask m);
bool simd_u32_mask_set_if_none(const simd_u32v_mask m);
bool simd_u32_mask_set_if_any(const simd_u32v_mask m);
simd_u32v_mask simd_u32_mask_negate_inplace(const simd_u32v_mask out, const simd_u32v_mask m);
simd_u32v_mask simd_u32_mask_negate(const simd_u32v_mask m);
simd_u32v_mask simd_u32_mask_and_inplace(simd_u32v_mask out, const simd_u32v_mask a, const simd_u32v_mask b);
simd_u32v_mask simd_u32_mask_and(const simd_u32v_mask a, const simd_u32v_mask b);
simd_u32v_mask simd_u32_mask_or_inplace(simd_u32v_mask out, const simd_u32v_mask a, const simd_u32v_mask b);
simd_u32v_mask simd_u32_mask_or(const simd_u32v_mask a, const simd_u32v_mask b);
simd_u32v_mask simd_u32_mask_xor_inplace(simd_u32v_mask out, const simd_u32v_mask a, const simd_u32v_mask b);
simd_u32v_mask simd_u32_mask_xor(const simd_u32v_mask a, const simd_u32v_mask b);
simd_u32v_mask simd_u32_mask_equal_inplace(simd_u32v_mask out, const simd_u32v_mask a, const simd_u32v_mask b);
simd_u32v_mask simd_u32_mask_equal(const simd_u32v_mask a, const simd_u32v_mask b);
simd_u32v_mask simd_u32_mask_not_equal_inplace(simd_u32v_mask out, const simd_u32v_mask a, const simd_u32v_mask b);
simd_u32v_mask simd_u32_mask_not_equal(const simd_u32v_mask a, const simd_u32v_mask b);

simd_u32v_mask simd_u32_equal_inplace(simd_u32v_mask out, const simd_u32v a, const simd_u32v b);
simd_u32v_mask simd_u32_equal(const simd_u32v a, const simd_u32v b);
simd_u32v_mask simd_u32_not_equal_inplace(simd_u32v_mask out, const simd_u32v a, const simd_u32v b);
simd_u32v_mask simd_u32_not_equal(const simd_u32v a, const simd_u32v b);
simd_u32v_mask simd_u32_greater_equal_inplace(simd_u32v_mask out, const simd_u32v a, const simd_u32v b);
simd_u32v_mask simd_u32_greater_equal(const simd_u32v a, const simd_u32v b);
simd_u32v_mask simd_u32_less_equal_inplace(simd_u32v_mask out, const simd_u32v a, const simd_u32v b);
simd_u32v_mask simd_u32_less_equal(const simd_u32v a, const simd_u32v b);
simd_u32v_mask simd_u32_greater_inplace(simd_u32v_mask out, const simd_u32v a, const simd_u32v b);
simd_u32v_mask simd_u32_greater(const simd_u32v a, const simd_u32v b);
simd_u32v_mask simd_u32_less_inplace(simd_u32v_mask out, const simd_u32v a, const simd_u32v b);
simd_u32v_mask simd_u32_less(const simd_u32v a, const simd_u32v b);

simd_u32v simd_u32_assign_where(simd_u32v dest, const simd_u32v_mask mask, const simd_u32v source);

#ifdef __cplusplus
}
#endif

#endif // __LIB_SIMD_U32_H__