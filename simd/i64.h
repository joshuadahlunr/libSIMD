#ifndef __LIB_SIMD_I64_H__
#define __LIB_SIMD_I64_H__

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* simd_i64v;
typedef void* simd_i64v_mask;

simd_i64v simd_i64_create();
void simd_i64_free(simd_i64v v);
size_t simd_i64_size();
size_t simd_i64_optimal_alignment();
simd_i64v simd_i64_broadcast(simd_i64v v, int64_t value);
simd_i64v simd_i64_load(simd_i64v v, const int64_t* data);
simd_i64v simd_i64_load_aligned(simd_i64v v, const int64_t* data);
simd_i64v simd_i64_store(simd_i64v v, int64_t* data);
simd_i64v simd_i64_store_aligned(simd_i64v v, int64_t* data);
// simd_i64v simd_i64_logical_negate_inplace(simd_i64v out, simd_i64v v);
// simd_i64v simd_i64_logical_negate(simd_i64v v);
simd_i64v simd_i64_bitwise_negate_inplace(simd_i64v out, simd_i64v v);
simd_i64v simd_i64_bitwise_negate(simd_i64v v);
simd_i64v simd_i64_mathematical_negate_inplace(simd_i64v out, const simd_i64v v);
simd_i64v simd_i64_mathematical_negate(const simd_i64v v);
simd_i64v simd_i64_add_inplace(simd_i64v out, const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_add(simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_subtract_inplace(simd_i64v out, const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_subtract(simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_multiply_inplace(simd_i64v out, const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_multiply(const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_divide_inplace(simd_i64v out, const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_divide(const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_modulus_inplace(simd_i64v out, const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_modulus(const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_and_inplace(simd_i64v out, const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_and(const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_or_inplace(simd_i64v out, const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_or(const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_xor_inplace(simd_i64v out, const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_xor(const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_shift_left_inplace(simd_i64v out, const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_shift_left(const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_shift_right_inplace(simd_i64v out, const simd_i64v a, const simd_i64v b);
simd_i64v simd_i64_shift_right(const simd_i64v a, const simd_i64v b);

simd_i64v_mask simd_i64_mask_create();
void simd_i64_mask_free(simd_i64v_mask m);
simd_i64v_mask simd_i64_mask_load(simd_i64v_mask m, const bool* data);
simd_i64v_mask simd_i64_mask_load_aligned(simd_i64v_mask m, const bool* data);
simd_i64v_mask simd_i64_mask_load_bitmask(simd_i64v_mask m, size_t bitmask);
simd_i64v_mask simd_i64_mask_store(simd_i64v_mask m, bool* data);
simd_i64v_mask simd_i64_mask_store_aligned(simd_i64v_mask m, bool* data);
size_t simd_i64_mask_store_bitmask(simd_i64v_mask m);
bool simd_i64_mask_set_if_all(const simd_i64v_mask m);
bool simd_i64_mask_set_if_none(const simd_i64v_mask m);
bool simd_i64_mask_set_if_any(const simd_i64v_mask m);
simd_i64v_mask simd_i64_mask_negate_inplace(const simd_i64v_mask out, const simd_i64v_mask m);
simd_i64v_mask simd_i64_mask_negate(const simd_i64v_mask m);
simd_i64v_mask simd_i64_mask_and_inplace(simd_i64v_mask out, const simd_i64v_mask a, const simd_i64v_mask b);
simd_i64v_mask simd_i64_mask_and(const simd_i64v_mask a, const simd_i64v_mask b);
simd_i64v_mask simd_i64_mask_or_inplace(simd_i64v_mask out, const simd_i64v_mask a, const simd_i64v_mask b);
simd_i64v_mask simd_i64_mask_or(const simd_i64v_mask a, const simd_i64v_mask b);
simd_i64v_mask simd_i64_mask_xor_inplace(simd_i64v_mask out, const simd_i64v_mask a, const simd_i64v_mask b);
simd_i64v_mask simd_i64_mask_xor(const simd_i64v_mask a, const simd_i64v_mask b);
simd_i64v_mask simd_i64_mask_equal_inplace(simd_i64v_mask out, const simd_i64v_mask a, const simd_i64v_mask b);
simd_i64v_mask simd_i64_mask_equal(const simd_i64v_mask a, const simd_i64v_mask b);
simd_i64v_mask simd_i64_mask_not_equal_inplace(simd_i64v_mask out, const simd_i64v_mask a, const simd_i64v_mask b);
simd_i64v_mask simd_i64_mask_not_equal(const simd_i64v_mask a, const simd_i64v_mask b);

simd_i64v_mask simd_i64_equal_inplace(simd_i64v_mask out, const simd_i64v a, const simd_i64v b);
simd_i64v_mask simd_i64_equal(const simd_i64v a, const simd_i64v b);
simd_i64v_mask simd_i64_not_equal_inplace(simd_i64v_mask out, const simd_i64v a, const simd_i64v b);
simd_i64v_mask simd_i64_not_equal(const simd_i64v a, const simd_i64v b);
simd_i64v_mask simd_i64_greater_equal_inplace(simd_i64v_mask out, const simd_i64v a, const simd_i64v b);
simd_i64v_mask simd_i64_greater_equal(const simd_i64v a, const simd_i64v b);
simd_i64v_mask simd_i64_less_equal_inplace(simd_i64v_mask out, const simd_i64v a, const simd_i64v b);
simd_i64v_mask simd_i64_less_equal(const simd_i64v a, const simd_i64v b);
simd_i64v_mask simd_i64_greater_inplace(simd_i64v_mask out, const simd_i64v a, const simd_i64v b);
simd_i64v_mask simd_i64_greater(const simd_i64v a, const simd_i64v b);
simd_i64v_mask simd_i64_less_inplace(simd_i64v_mask out, const simd_i64v a, const simd_i64v b);
simd_i64v_mask simd_i64_less(const simd_i64v a, const simd_i64v b);

simd_i64v simd_i64_assign_where(simd_i64v dest, const simd_i64v_mask mask, const simd_i64v source);

#ifdef __cplusplus
}
#endif

#endif // __LIB_SIMD_I64_H__