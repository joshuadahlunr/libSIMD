#ifndef __LIB_SIMD_I16_H__
#define __LIB_SIMD_I16_H__

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* simd_i16v;
typedef void* simd_i16v_mask;

simd_i16v simd_i16_create();
void simd_i16_free(simd_i16v v);
size_t simd_i16_size();
size_t simd_i16_optimal_alignment();
simd_i16v simd_i16_broadcast(simd_i16v v, int16_t value);
simd_i16v simd_i16_load(simd_i16v v, const int16_t* data);
simd_i16v simd_i16_load_aligned(simd_i16v v, const int16_t* data);
simd_i16v simd_i16_store(simd_i16v v, int16_t* data);
simd_i16v simd_i16_store_aligned(simd_i16v v, int16_t* data);
// simd_i16v simd_i16_logical_negate_inplace(simd_i16v out, simd_i16v v);
// simd_i16v simd_i16_logical_negate(simd_i16v v);
simd_i16v simd_i16_bitwise_negate_inplace(simd_i16v out, simd_i16v v);
simd_i16v simd_i16_bitwise_negate(simd_i16v v);
simd_i16v simd_i16_mathematical_negate_inplace(simd_i16v out, const simd_i16v v);
simd_i16v simd_i16_mathematical_negate(const simd_i16v v);
simd_i16v simd_i16_add_inplace(simd_i16v out, const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_add(simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_subtract_inplace(simd_i16v out, const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_subtract(simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_multiply_inplace(simd_i16v out, const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_multiply(const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_divide_inplace(simd_i16v out, const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_divide(const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_modulus_inplace(simd_i16v out, const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_modulus(const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_and_inplace(simd_i16v out, const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_and(const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_or_inplace(simd_i16v out, const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_or(const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_xor_inplace(simd_i16v out, const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_xor(const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_shift_left_inplace(simd_i16v out, const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_shift_left(const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_shift_right_inplace(simd_i16v out, const simd_i16v a, const simd_i16v b);
simd_i16v simd_i16_shift_right(const simd_i16v a, const simd_i16v b);

simd_i16v_mask simd_i16_mask_create();
void simd_i16_mask_free(simd_i16v_mask m);
simd_i16v_mask simd_i16_mask_load(simd_i16v_mask m, const bool* data);
simd_i16v_mask simd_i16_mask_load_aligned(simd_i16v_mask m, const bool* data);
simd_i16v_mask simd_i16_mask_load_bitmask(simd_i16v_mask m, size_t bitmask);
simd_i16v_mask simd_i16_mask_store(simd_i16v_mask m, bool* data);
simd_i16v_mask simd_i16_mask_store_aligned(simd_i16v_mask m, bool* data);
size_t simd_i16_mask_store_bitmask(simd_i16v_mask m);
bool simd_i16_mask_set_if_all(const simd_i16v_mask m);
bool simd_i16_mask_set_if_none(const simd_i16v_mask m);
bool simd_i16_mask_set_if_any(const simd_i16v_mask m);
simd_i16v_mask simd_i16_mask_negate_inplace(const simd_i16v_mask out, const simd_i16v_mask m);
simd_i16v_mask simd_i16_mask_negate(const simd_i16v_mask m);
simd_i16v_mask simd_i16_mask_and_inplace(simd_i16v_mask out, const simd_i16v_mask a, const simd_i16v_mask b);
simd_i16v_mask simd_i16_mask_and(const simd_i16v_mask a, const simd_i16v_mask b);
simd_i16v_mask simd_i16_mask_or_inplace(simd_i16v_mask out, const simd_i16v_mask a, const simd_i16v_mask b);
simd_i16v_mask simd_i16_mask_or(const simd_i16v_mask a, const simd_i16v_mask b);
simd_i16v_mask simd_i16_mask_xor_inplace(simd_i16v_mask out, const simd_i16v_mask a, const simd_i16v_mask b);
simd_i16v_mask simd_i16_mask_xor(const simd_i16v_mask a, const simd_i16v_mask b);
simd_i16v_mask simd_i16_mask_equal_inplace(simd_i16v_mask out, const simd_i16v_mask a, const simd_i16v_mask b);
simd_i16v_mask simd_i16_mask_equal(const simd_i16v_mask a, const simd_i16v_mask b);
simd_i16v_mask simd_i16_mask_not_equal_inplace(simd_i16v_mask out, const simd_i16v_mask a, const simd_i16v_mask b);
simd_i16v_mask simd_i16_mask_not_equal(const simd_i16v_mask a, const simd_i16v_mask b);

simd_i16v_mask simd_i16_equal_inplace(simd_i16v_mask out, const simd_i16v a, const simd_i16v b);
simd_i16v_mask simd_i16_equal(const simd_i16v a, const simd_i16v b);
simd_i16v_mask simd_i16_not_equal_inplace(simd_i16v_mask out, const simd_i16v a, const simd_i16v b);
simd_i16v_mask simd_i16_not_equal(const simd_i16v a, const simd_i16v b);
simd_i16v_mask simd_i16_greater_equal_inplace(simd_i16v_mask out, const simd_i16v a, const simd_i16v b);
simd_i16v_mask simd_i16_greater_equal(const simd_i16v a, const simd_i16v b);
simd_i16v_mask simd_i16_less_equal_inplace(simd_i16v_mask out, const simd_i16v a, const simd_i16v b);
simd_i16v_mask simd_i16_less_equal(const simd_i16v a, const simd_i16v b);
simd_i16v_mask simd_i16_greater_inplace(simd_i16v_mask out, const simd_i16v a, const simd_i16v b);
simd_i16v_mask simd_i16_greater(const simd_i16v a, const simd_i16v b);
simd_i16v_mask simd_i16_less_inplace(simd_i16v_mask out, const simd_i16v a, const simd_i16v b);
simd_i16v_mask simd_i16_less(const simd_i16v a, const simd_i16v b);

simd_i16v simd_i16_assign_where(simd_i16v dest, const simd_i16v_mask mask, const simd_i16v source);

#ifdef __cplusplus
}
#endif

#endif // __LIB_SIMD_I16_H__