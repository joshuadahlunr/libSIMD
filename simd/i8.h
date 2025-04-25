#ifndef __LIB_SIMD_I8_H__
#define __LIB_SIMD_I8_H__

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* simd_i8v;
typedef void* simd_i8v_mask;

simd_i8v simd_i8_create();
void simd_i8_free(simd_i8v v);
size_t simd_i8_size();
size_t simd_i8_optimal_alignment();
simd_i8v simd_i8_broadcast(simd_i8v v, int8_t value);
simd_i8v simd_i8_load(simd_i8v v, const int8_t* data);
simd_i8v simd_i8_load_aligned(simd_i8v v, const int8_t* data);
simd_i8v simd_i8_store(simd_i8v v, int8_t* data);
simd_i8v simd_i8_store_aligned(simd_i8v v, int8_t* data);
// simd_i8v simd_i8_logical_negate_inplace(simd_i8v out, simd_i8v v);
// simd_i8v simd_i8_logical_negate(simd_i8v v);
simd_i8v simd_i8_bitwise_negate_inplace(simd_i8v out, simd_i8v v);
simd_i8v simd_i8_bitwise_negate(simd_i8v v);
simd_i8v simd_i8_mathematical_negate_inplace(simd_i8v out, const simd_i8v v);
simd_i8v simd_i8_mathematical_negate(const simd_i8v v);
simd_i8v simd_i8_add_inplace(simd_i8v out, const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_add(simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_subtract_inplace(simd_i8v out, const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_subtract(simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_multiply_inplace(simd_i8v out, const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_multiply(const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_divide_inplace(simd_i8v out, const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_divide(const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_modulus_inplace(simd_i8v out, const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_modulus(const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_and_inplace(simd_i8v out, const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_and(const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_or_inplace(simd_i8v out, const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_or(const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_xor_inplace(simd_i8v out, const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_xor(const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_shift_left_inplace(simd_i8v out, const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_shift_left(const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_shift_right_inplace(simd_i8v out, const simd_i8v a, const simd_i8v b);
simd_i8v simd_i8_shift_right(const simd_i8v a, const simd_i8v b);

simd_i8v_mask simd_i8_mask_create();
void simd_i8_mask_free(simd_i8v_mask m);
simd_i8v_mask simd_i8_mask_load(simd_i8v_mask m, const bool* data);
simd_i8v_mask simd_i8_mask_load_aligned(simd_i8v_mask m, const bool* data);
simd_i8v_mask simd_i8_mask_load_bitmask(simd_i8v_mask m, size_t bitmask);
simd_i8v_mask simd_i8_mask_store(simd_i8v_mask m, bool* data);
simd_i8v_mask simd_i8_mask_store_aligned(simd_i8v_mask m, bool* data);
size_t simd_i8_mask_store_bitmask(simd_i8v_mask m);
bool simd_i8_mask_set_if_all(const simd_i8v_mask m);
bool simd_i8_mask_set_if_none(const simd_i8v_mask m);
bool simd_i8_mask_set_if_any(const simd_i8v_mask m);
simd_i8v_mask simd_i8_mask_negate_inplace(const simd_i8v_mask out, const simd_i8v_mask m);
simd_i8v_mask simd_i8_mask_negate(const simd_i8v_mask m);
simd_i8v_mask simd_i8_mask_and_inplace(simd_i8v_mask out, const simd_i8v_mask a, const simd_i8v_mask b);
simd_i8v_mask simd_i8_mask_and(const simd_i8v_mask a, const simd_i8v_mask b);
simd_i8v_mask simd_i8_mask_or_inplace(simd_i8v_mask out, const simd_i8v_mask a, const simd_i8v_mask b);
simd_i8v_mask simd_i8_mask_or(const simd_i8v_mask a, const simd_i8v_mask b);
simd_i8v_mask simd_i8_mask_xor_inplace(simd_i8v_mask out, const simd_i8v_mask a, const simd_i8v_mask b);
simd_i8v_mask simd_i8_mask_xor(const simd_i8v_mask a, const simd_i8v_mask b);
simd_i8v_mask simd_i8_mask_equal_inplace(simd_i8v_mask out, const simd_i8v_mask a, const simd_i8v_mask b);
simd_i8v_mask simd_i8_mask_equal(const simd_i8v_mask a, const simd_i8v_mask b);
simd_i8v_mask simd_i8_mask_not_equal_inplace(simd_i8v_mask out, const simd_i8v_mask a, const simd_i8v_mask b);
simd_i8v_mask simd_i8_mask_not_equal(const simd_i8v_mask a, const simd_i8v_mask b);

simd_i8v_mask simd_i8_equal_inplace(simd_i8v_mask out, const simd_i8v a, const simd_i8v b);
simd_i8v_mask simd_i8_equal(const simd_i8v a, const simd_i8v b);
simd_i8v_mask simd_i8_not_equal_inplace(simd_i8v_mask out, const simd_i8v a, const simd_i8v b);
simd_i8v_mask simd_i8_not_equal(const simd_i8v a, const simd_i8v b);
simd_i8v_mask simd_i8_greater_equal_inplace(simd_i8v_mask out, const simd_i8v a, const simd_i8v b);
simd_i8v_mask simd_i8_greater_equal(const simd_i8v a, const simd_i8v b);
simd_i8v_mask simd_i8_less_equal_inplace(simd_i8v_mask out, const simd_i8v a, const simd_i8v b);
simd_i8v_mask simd_i8_less_equal(const simd_i8v a, const simd_i8v b);
simd_i8v_mask simd_i8_greater_inplace(simd_i8v_mask out, const simd_i8v a, const simd_i8v b);
simd_i8v_mask simd_i8_greater(const simd_i8v a, const simd_i8v b);
simd_i8v_mask simd_i8_less_inplace(simd_i8v_mask out, const simd_i8v a, const simd_i8v b);
simd_i8v_mask simd_i8_less(const simd_i8v a, const simd_i8v b);

simd_i8v simd_i8_assign_where(simd_i8v dest, const simd_i8v_mask mask, const simd_i8v source);

#ifdef __cplusplus
}
#endif

#endif // __LIB_SIMD_I8_H__