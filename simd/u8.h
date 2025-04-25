#ifndef __LIB_SIMD_U8_H__
#define __LIB_SIMD_U8_H__

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* simd_u8v;
typedef void* simd_u8v_mask;

simd_u8v simd_u8_create();
void simd_u8_free(simd_u8v v);
size_t simd_u8_size();
size_t simd_u8_optimal_alignment();
simd_u8v simd_u8_broadcast(simd_u8v v, uint8_t value);
simd_u8v simd_u8_load(simd_u8v v, const uint8_t* data);
simd_u8v simd_u8_load_aligned(simd_u8v v, const uint8_t* data);
simd_u8v simd_u8_store(simd_u8v v, uint8_t* data);
simd_u8v simd_u8_store_aligned(simd_u8v v, uint8_t* data);
// simd_u8v simd_u8_logical_negate_inplace(simd_u8v out, simd_u8v v);
// simd_u8v simd_u8_logical_negate(simd_u8v v);
simd_u8v simd_u8_bitwise_negate_inplace(simd_u8v out, simd_u8v v);
simd_u8v simd_u8_bitwise_negate(simd_u8v v);
simd_u8v simd_u8_mathematical_negate_inplace(simd_u8v out, const simd_u8v v);
simd_u8v simd_u8_mathematical_negate(const simd_u8v v);
simd_u8v simd_u8_add_inplace(simd_u8v out, const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_add(simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_subtract_inplace(simd_u8v out, const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_subtract(simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_multiply_inplace(simd_u8v out, const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_multiply(const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_divide_inplace(simd_u8v out, const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_divide(const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_modulus_inplace(simd_u8v out, const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_modulus(const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_and_inplace(simd_u8v out, const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_and(const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_or_inplace(simd_u8v out, const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_or(const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_xor_inplace(simd_u8v out, const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_xor(const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_shift_left_inplace(simd_u8v out, const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_shift_left(const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_shift_right_inplace(simd_u8v out, const simd_u8v a, const simd_u8v b);
simd_u8v simd_u8_shift_right(const simd_u8v a, const simd_u8v b);

simd_u8v_mask simd_u8_mask_create();
void simd_u8_mask_free(simd_u8v_mask m);
simd_u8v_mask simd_u8_mask_load(simd_u8v_mask m, const bool* data);
simd_u8v_mask simd_u8_mask_load_aligned(simd_u8v_mask m, const bool* data);
simd_u8v_mask simd_u8_mask_load_bitmask(simd_u8v_mask m, size_t bitmask);
simd_u8v_mask simd_u8_mask_store(simd_u8v_mask m, bool* data);
simd_u8v_mask simd_u8_mask_store_aligned(simd_u8v_mask m, bool* data);
size_t simd_u8_mask_store_bitmask(simd_u8v_mask m);
bool simd_u8_mask_set_if_all(const simd_u8v_mask m);
bool simd_u8_mask_set_if_none(const simd_u8v_mask m);
bool simd_u8_mask_set_if_any(const simd_u8v_mask m);
simd_u8v_mask simd_u8_mask_negate_inplace(const simd_u8v_mask out, const simd_u8v_mask m);
simd_u8v_mask simd_u8_mask_negate(const simd_u8v_mask m);
simd_u8v_mask simd_u8_mask_and_inplace(simd_u8v_mask out, const simd_u8v_mask a, const simd_u8v_mask b);
simd_u8v_mask simd_u8_mask_and(const simd_u8v_mask a, const simd_u8v_mask b);
simd_u8v_mask simd_u8_mask_or_inplace(simd_u8v_mask out, const simd_u8v_mask a, const simd_u8v_mask b);
simd_u8v_mask simd_u8_mask_or(const simd_u8v_mask a, const simd_u8v_mask b);
simd_u8v_mask simd_u8_mask_xor_inplace(simd_u8v_mask out, const simd_u8v_mask a, const simd_u8v_mask b);
simd_u8v_mask simd_u8_mask_xor(const simd_u8v_mask a, const simd_u8v_mask b);
simd_u8v_mask simd_u8_mask_equal_inplace(simd_u8v_mask out, const simd_u8v_mask a, const simd_u8v_mask b);
simd_u8v_mask simd_u8_mask_equal(const simd_u8v_mask a, const simd_u8v_mask b);
simd_u8v_mask simd_u8_mask_not_equal_inplace(simd_u8v_mask out, const simd_u8v_mask a, const simd_u8v_mask b);
simd_u8v_mask simd_u8_mask_not_equal(const simd_u8v_mask a, const simd_u8v_mask b);

simd_u8v_mask simd_u8_equal_inplace(simd_u8v_mask out, const simd_u8v a, const simd_u8v b);
simd_u8v_mask simd_u8_equal(const simd_u8v a, const simd_u8v b);
simd_u8v_mask simd_u8_not_equal_inplace(simd_u8v_mask out, const simd_u8v a, const simd_u8v b);
simd_u8v_mask simd_u8_not_equal(const simd_u8v a, const simd_u8v b);
simd_u8v_mask simd_u8_greater_equal_inplace(simd_u8v_mask out, const simd_u8v a, const simd_u8v b);
simd_u8v_mask simd_u8_greater_equal(const simd_u8v a, const simd_u8v b);
simd_u8v_mask simd_u8_less_equal_inplace(simd_u8v_mask out, const simd_u8v a, const simd_u8v b);
simd_u8v_mask simd_u8_less_equal(const simd_u8v a, const simd_u8v b);
simd_u8v_mask simd_u8_greater_inplace(simd_u8v_mask out, const simd_u8v a, const simd_u8v b);
simd_u8v_mask simd_u8_greater(const simd_u8v a, const simd_u8v b);
simd_u8v_mask simd_u8_less_inplace(simd_u8v_mask out, const simd_u8v a, const simd_u8v b);
simd_u8v_mask simd_u8_less(const simd_u8v a, const simd_u8v b);

simd_u8v simd_u8_assign_where(simd_u8v dest, const simd_u8v_mask mask, const simd_u8v source);

#ifdef __cplusplus
}
#endif

#endif // __LIB_SIMD_U8_H__