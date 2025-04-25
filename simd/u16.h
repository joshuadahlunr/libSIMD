#ifndef __LIB_SIMD_U16_H__
#define __LIB_SIMD_U16_H__

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* simd_u16v;
typedef void* simd_u16v_mask;

simd_u16v simd_u16_create();
void simd_u16_free(simd_u16v v);
size_t simd_u16_size();
size_t simd_u16_optimal_alignment();
simd_u16v simd_u16_broadcast(simd_u16v v, uint16_t value);
simd_u16v simd_u16_load(simd_u16v v, const uint16_t* data);
simd_u16v simd_u16_load_aligned(simd_u16v v, const uint16_t* data);
simd_u16v simd_u16_store(simd_u16v v, uint16_t* data);
simd_u16v simd_u16_store_aligned(simd_u16v v, uint16_t* data);
// simd_u16v simd_u16_logical_negate_inplace(simd_u16v out, simd_u16v v);
// simd_u16v simd_u16_logical_negate(simd_u16v v);
simd_u16v simd_u16_bitwise_negate_inplace(simd_u16v out, simd_u16v v);
simd_u16v simd_u16_bitwise_negate(simd_u16v v);
simd_u16v simd_u16_mathematical_negate_inplace(simd_u16v out, const simd_u16v v);
simd_u16v simd_u16_mathematical_negate(const simd_u16v v);
simd_u16v simd_u16_add_inplace(simd_u16v out, const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_add(simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_subtract_inplace(simd_u16v out, const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_subtract(simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_multiply_inplace(simd_u16v out, const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_multiply(const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_divide_inplace(simd_u16v out, const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_divide(const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_modulus_inplace(simd_u16v out, const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_modulus(const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_and_inplace(simd_u16v out, const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_and(const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_or_inplace(simd_u16v out, const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_or(const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_xor_inplace(simd_u16v out, const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_xor(const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_shift_left_inplace(simd_u16v out, const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_shift_left(const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_shift_right_inplace(simd_u16v out, const simd_u16v a, const simd_u16v b);
simd_u16v simd_u16_shift_right(const simd_u16v a, const simd_u16v b);

simd_u16v_mask simd_u16_mask_create();
void simd_u16_mask_free(simd_u16v_mask m);
simd_u16v_mask simd_u16_mask_load(simd_u16v_mask m, const bool* data);
simd_u16v_mask simd_u16_mask_load_aligned(simd_u16v_mask m, const bool* data);
simd_u16v_mask simd_u16_mask_load_bitmask(simd_u16v_mask m, size_t bitmask);
simd_u16v_mask simd_u16_mask_store(simd_u16v_mask m, bool* data);
simd_u16v_mask simd_u16_mask_store_aligned(simd_u16v_mask m, bool* data);
size_t simd_u16_mask_store_bitmask(simd_u16v_mask m);
bool simd_u16_mask_set_if_all(const simd_u16v_mask m);
bool simd_u16_mask_set_if_none(const simd_u16v_mask m);
bool simd_u16_mask_set_if_any(const simd_u16v_mask m);
simd_u16v_mask simd_u16_mask_negate_inplace(const simd_u16v_mask out, const simd_u16v_mask m);
simd_u16v_mask simd_u16_mask_negate(const simd_u16v_mask m);
simd_u16v_mask simd_u16_mask_and_inplace(simd_u16v_mask out, const simd_u16v_mask a, const simd_u16v_mask b);
simd_u16v_mask simd_u16_mask_and(const simd_u16v_mask a, const simd_u16v_mask b);
simd_u16v_mask simd_u16_mask_or_inplace(simd_u16v_mask out, const simd_u16v_mask a, const simd_u16v_mask b);
simd_u16v_mask simd_u16_mask_or(const simd_u16v_mask a, const simd_u16v_mask b);
simd_u16v_mask simd_u16_mask_xor_inplace(simd_u16v_mask out, const simd_u16v_mask a, const simd_u16v_mask b);
simd_u16v_mask simd_u16_mask_xor(const simd_u16v_mask a, const simd_u16v_mask b);
simd_u16v_mask simd_u16_mask_equal_inplace(simd_u16v_mask out, const simd_u16v_mask a, const simd_u16v_mask b);
simd_u16v_mask simd_u16_mask_equal(const simd_u16v_mask a, const simd_u16v_mask b);
simd_u16v_mask simd_u16_mask_not_equal_inplace(simd_u16v_mask out, const simd_u16v_mask a, const simd_u16v_mask b);
simd_u16v_mask simd_u16_mask_not_equal(const simd_u16v_mask a, const simd_u16v_mask b);

simd_u16v_mask simd_u16_equal_inplace(simd_u16v_mask out, const simd_u16v a, const simd_u16v b);
simd_u16v_mask simd_u16_equal(const simd_u16v a, const simd_u16v b);
simd_u16v_mask simd_u16_not_equal_inplace(simd_u16v_mask out, const simd_u16v a, const simd_u16v b);
simd_u16v_mask simd_u16_not_equal(const simd_u16v a, const simd_u16v b);
simd_u16v_mask simd_u16_greater_equal_inplace(simd_u16v_mask out, const simd_u16v a, const simd_u16v b);
simd_u16v_mask simd_u16_greater_equal(const simd_u16v a, const simd_u16v b);
simd_u16v_mask simd_u16_less_equal_inplace(simd_u16v_mask out, const simd_u16v a, const simd_u16v b);
simd_u16v_mask simd_u16_less_equal(const simd_u16v a, const simd_u16v b);
simd_u16v_mask simd_u16_greater_inplace(simd_u16v_mask out, const simd_u16v a, const simd_u16v b);
simd_u16v_mask simd_u16_greater(const simd_u16v a, const simd_u16v b);
simd_u16v_mask simd_u16_less_inplace(simd_u16v_mask out, const simd_u16v a, const simd_u16v b);
simd_u16v_mask simd_u16_less(const simd_u16v a, const simd_u16v b);

simd_u16v simd_u16_assign_where(simd_u16v dest, const simd_u16v_mask mask, const simd_u16v source);

#ifdef __cplusplus
}
#endif

#endif // __LIB_SIMD_U16_H__