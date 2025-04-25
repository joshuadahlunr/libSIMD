#ifndef __LIB_SIMD_U64_H__
#define __LIB_SIMD_U64_H__

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* simd_u64v;
typedef void* simd_u64v_mask;

simd_u64v simd_u64_create();
void simd_u64_free(simd_u64v v);
size_t simd_u64_size();
size_t simd_u64_optimal_alignment();
simd_u64v simd_u64_broadcast(simd_u64v v, uint64_t value);
simd_u64v simd_u64_load(simd_u64v v, const uint64_t* data);
simd_u64v simd_u64_load_aligned(simd_u64v v, const uint64_t* data);
simd_u64v simd_u64_store(simd_u64v v, uint64_t* data);
simd_u64v simd_u64_store_aligned(simd_u64v v, uint64_t* data);
// simd_u64v simd_u64_logical_negate_inplace(simd_u64v out, simd_u64v v);
// simd_u64v simd_u64_logical_negate(simd_u64v v);
simd_u64v simd_u64_bitwise_negate_inplace(simd_u64v out, simd_u64v v);
simd_u64v simd_u64_bitwise_negate(simd_u64v v);
simd_u64v simd_u64_mathematical_negate_inplace(simd_u64v out, const simd_u64v v);
simd_u64v simd_u64_mathematical_negate(const simd_u64v v);
simd_u64v simd_u64_add_inplace(simd_u64v out, const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_add(simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_subtract_inplace(simd_u64v out, const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_subtract(simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_multiply_inplace(simd_u64v out, const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_multiply(const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_divide_inplace(simd_u64v out, const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_divide(const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_modulus_inplace(simd_u64v out, const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_modulus(const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_and_inplace(simd_u64v out, const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_and(const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_or_inplace(simd_u64v out, const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_or(const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_xor_inplace(simd_u64v out, const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_xor(const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_shift_left_inplace(simd_u64v out, const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_shift_left(const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_shift_right_inplace(simd_u64v out, const simd_u64v a, const simd_u64v b);
simd_u64v simd_u64_shift_right(const simd_u64v a, const simd_u64v b);

simd_u64v_mask simd_u64_mask_create();
void simd_u64_mask_free(simd_u64v_mask m);
simd_u64v_mask simd_u64_mask_load(simd_u64v_mask m, const bool* data);
simd_u64v_mask simd_u64_mask_load_aligned(simd_u64v_mask m, const bool* data);
simd_u64v_mask simd_u64_mask_load_bitmask(simd_u64v_mask m, size_t bitmask);
simd_u64v_mask simd_u64_mask_store(simd_u64v_mask m, bool* data);
simd_u64v_mask simd_u64_mask_store_aligned(simd_u64v_mask m, bool* data);
size_t simd_u64_mask_store_bitmask(simd_u64v_mask m);
bool simd_u64_mask_set_if_all(const simd_u64v_mask m);
bool simd_u64_mask_set_if_none(const simd_u64v_mask m);
bool simd_u64_mask_set_if_any(const simd_u64v_mask m);
simd_u64v_mask simd_u64_mask_negate_inplace(const simd_u64v_mask out, const simd_u64v_mask m);
simd_u64v_mask simd_u64_mask_negate(const simd_u64v_mask m);
simd_u64v_mask simd_u64_mask_and_inplace(simd_u64v_mask out, const simd_u64v_mask a, const simd_u64v_mask b);
simd_u64v_mask simd_u64_mask_and(const simd_u64v_mask a, const simd_u64v_mask b);
simd_u64v_mask simd_u64_mask_or_inplace(simd_u64v_mask out, const simd_u64v_mask a, const simd_u64v_mask b);
simd_u64v_mask simd_u64_mask_or(const simd_u64v_mask a, const simd_u64v_mask b);
simd_u64v_mask simd_u64_mask_xor_inplace(simd_u64v_mask out, const simd_u64v_mask a, const simd_u64v_mask b);
simd_u64v_mask simd_u64_mask_xor(const simd_u64v_mask a, const simd_u64v_mask b);
simd_u64v_mask simd_u64_mask_equal_inplace(simd_u64v_mask out, const simd_u64v_mask a, const simd_u64v_mask b);
simd_u64v_mask simd_u64_mask_equal(const simd_u64v_mask a, const simd_u64v_mask b);
simd_u64v_mask simd_u64_mask_not_equal_inplace(simd_u64v_mask out, const simd_u64v_mask a, const simd_u64v_mask b);
simd_u64v_mask simd_u64_mask_not_equal(const simd_u64v_mask a, const simd_u64v_mask b);

simd_u64v_mask simd_u64_equal_inplace(simd_u64v_mask out, const simd_u64v a, const simd_u64v b);
simd_u64v_mask simd_u64_equal(const simd_u64v a, const simd_u64v b);
simd_u64v_mask simd_u64_not_equal_inplace(simd_u64v_mask out, const simd_u64v a, const simd_u64v b);
simd_u64v_mask simd_u64_not_equal(const simd_u64v a, const simd_u64v b);
simd_u64v_mask simd_u64_greater_equal_inplace(simd_u64v_mask out, const simd_u64v a, const simd_u64v b);
simd_u64v_mask simd_u64_greater_equal(const simd_u64v a, const simd_u64v b);
simd_u64v_mask simd_u64_less_equal_inplace(simd_u64v_mask out, const simd_u64v a, const simd_u64v b);
simd_u64v_mask simd_u64_less_equal(const simd_u64v a, const simd_u64v b);
simd_u64v_mask simd_u64_greater_inplace(simd_u64v_mask out, const simd_u64v a, const simd_u64v b);
simd_u64v_mask simd_u64_greater(const simd_u64v a, const simd_u64v b);
simd_u64v_mask simd_u64_less_inplace(simd_u64v_mask out, const simd_u64v a, const simd_u64v b);
simd_u64v_mask simd_u64_less(const simd_u64v a, const simd_u64v b);

simd_u64v simd_u64_assign_where(simd_u64v dest, const simd_u64v_mask mask, const simd_u64v source);

#ifdef __cplusplus
}
#endif

#endif // __LIB_SIMD_U64_H__