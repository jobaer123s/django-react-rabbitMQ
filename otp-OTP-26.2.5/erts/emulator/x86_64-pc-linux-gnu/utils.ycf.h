#ifndef YCF_YIELDING_C_FUN_HELPERS
#define YCF_YIELDING_C_FUN_HELPERS 1
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * YCF_GCC_DIAG_ON and YCF_GCC_DIAG_OFF can be used to temporarly
 * disable a gcc or clang warning in a file.
 *
 * Example:
 * YCF_GCC_DIAG_OFF(unused-function)
 * static int test(){ return 0;}
 * YCF_GCC_DIAG_ON(unused-function)
 *
 * These macros were originally authored by Jonathan Wakely and has
 * been modified by Patrick Horgan.
 *
 * Source: http://dbp-consulting.com/tutorials/SuppressingGCCWarnings.html
 *
 */
#if defined(_MSC_VER)
#  define YCF_GCC_DIAG_OFF(x) __pragma(warning(push, 0))
#  define YCF_GCC_DIAG_ON(x)  __pragma(warning(pop))
#elif ((__GNUC__ * 100) + __GNUC_MINOR__) >= 402
#define YCF_GCC_DIAG_STR(s) #s
#define YCF_GCC_DIAG_JOINSTR(x,y) YCF_GCC_DIAG_STR(x ## y)
# define YCF_GCC_DIAG_DO_PRAGMA(x) _Pragma (#x)
# define YCF_GCC_DIAG_PRAGMA(x) YCF_GCC_DIAG_DO_PRAGMA(GCC diagnostic x)
# if ((__GNUC__ * 100) + __GNUC_MINOR__) >= 406
#  define YCF_GCC_DIAG_OFF(x) YCF_GCC_DIAG_PRAGMA(push) \
      YCF_GCC_DIAG_PRAGMA(ignored YCF_GCC_DIAG_JOINSTR(-W,x))
#  define YCF_GCC_DIAG_ON(x) YCF_GCC_DIAG_PRAGMA(pop)
# else
#  define YCF_GCC_DIAG_OFF(x) YCF_GCC_DIAG_PRAGMA(ignored YCF_GCC_DIAG_JOINSTR(-W,x))
#  define YCF_GCC_DIAG_ON(x)  YCF_GCC_DIAG_PRAGMA(warning YCF_GCC_DIAG_JOINSTR(-W,x))
# endif
#else
# define YCF_GCC_DIAG_OFF(x)
# define YCF_GCC_DIAG_ON(x)
#endif
#ifdef __GNUC__
#  if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ > 5) || defined(__clang__)
#    define YCF_GCC_ATTRIBUTE_UNUSED __attribute__ ((unused))
#  else
#    define YCF_GCC_ATTRIBUTE_UNUSED
#  endif
#else
#  define YCF_GCC_ATTRIBUTE_UNUSED
#endif

typedef void* (*ycf_yield_alloc_type) (size_t,void*);
typedef void (*ycf_yield_free_type) (void*,void*);

struct ycf_alloc_data {
  size_t size;
  size_t max_size;
  int needs_freeing;
  char* data;
};

#define YCF_ALLOC_NEXT_BLOCK() (\
 ycf_frame_alloc_data.data == NULL \
   ? NULL \
   : ((void*)(&ycf_frame_alloc_data.data[ycf_frame_alloc_data.size]))\
)
#define YCF_ALLOC_NEXT_MAX_SIZE() (\
 ycf_frame_alloc_data.data == NULL \
   ? ycf_frame_alloc_data.max_size \
   : (ycf_frame_alloc_data.max_size - ycf_frame_alloc_data.size)\
)

/* Macros for special code sections */
#define ON_SAVE_YIELD_STATE ON_SAVE_YIELD_STATE
#define ON_RESTORE_YIELD_STATE ON_RESTORE_YIELD_STATE
#define ON_DESTROY_STATE ON_DESTROY_STATE
#define ON_RETURN ON_RETURN
#define ON_DESTROY_STATE_OR_RETURN ON_DESTROY_STATE_OR_RETURN
#define YCF_SPECIAL_CODE_START(PARAM) \
   /*special_code_start:PARAM*/       \
   if(0){
#define YCF_SPECIAL_CODE_END() \
   }\
   /*special_code_end*/

YCF_GCC_ATTRIBUTE_UNUSED
static void* ycf_stack_alloc(size_t size,
                             struct ycf_alloc_data* data,
                             ycf_yield_alloc_type allocator,
                             void* ycf_yield_alloc_free_context,
                             size_t default_stack_size){
  void * ret = NULL;
  if (data->data == NULL) {
    if (default_stack_size == 0) {
      fprintf(stderr, "ycf_alloc: not enough stack!! (max size = 0)\n");
      exit(1);
    }
    data->data = allocator(default_stack_size, ycf_yield_alloc_free_context);
    data->needs_freeing = 1;
    data->max_size = default_stack_size;
    data->size = 0;
  }
  if (data->size + size > data->max_size) {
    fprintf(stderr, "ycf_alloc: not enough stack! (max size = %zu)\n", default_stack_size);
    exit(1);
  }
  ret = &data->data[data->size];
  data->size = data->size + size + (sizeof(void * ) - (size % sizeof(void * ))) % sizeof(void * );
  return ret;
}
YCF_GCC_ATTRIBUTE_UNUSED
static void ycf_destroy_stack_allocator(struct ycf_alloc_data* data,
                                        ycf_yield_free_type freer,
                                        void* ycf_yield_alloc_free_context){
  if(data->needs_freeing){
    freer(data->data, ycf_yield_alloc_free_context);
  }
}


#include <limits.h>
#define YCF_MAX_NR_OF_REDS LONG_MAX
#define YCF_NR_OF_REDS_LEFT() ycf_nr_of_reductions
#define YCF_SET_NR_OF_REDS_LEFT(NEW_NR_OF_REDS_LEFT) \
  do{ycf_nr_of_reductions = (NEW_NR_OF_REDS_LEFT);}while(0)

#define YCF_GET_EXTRA_CONTEXT() ycf_extra_context

#define YCF_IS_YIELDED(CTX) (CTX != NULL)

#define YCF_YIELD_CODE_GENERATED 1


/* end of YCF_YIELDING_C_FUN_HELPERS guard */
#endif



struct gen_ycf_trap_state_for_erts_qsort_partion_array;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  erts_qsort_partion_array_result  erts_qsort_partion_array_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

 void erts_qsort_partion_array_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */



/* **Important Note**
 *
 * A yielding version of this function is generated with YCF. This
 * means that the code has to follow some restrictions. See note about
 * YCF near the top of the file for more information.
 */
static erts_qsort_partion_array_result
erts_qsort_partion_array_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,byte *base_N46_N62,
                         size_t nr_of_items_N47_N63,
                         size_t item_size_N48_N64,
                         erts_void_ptr_cmp_t compare_N49_N65,
                         Uint32 extra_seed_N50_N66);



struct gen_ycf_trap_state_for_erts_qsort_helper;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  void  erts_qsort_helper_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

 void erts_qsort_helper_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */



/* **Important Note**
 *
 * A yielding version of this function is generated with YCF. This
 * means that the code has to follow some restrictions. See note about
 * YCF near the top of the file for more information.
 */
static void erts_qsort_helper_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,byte *base_N18_N30,
                              size_t nr_of_items_N19_N31,
                              size_t item_size_N20_N32,
                              erts_void_ptr_cmp_t compare_N21_N33,
                              Uint32 extra_seed_N22_N34);



struct gen_ycf_trap_state_for_erts_qsort;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

  void  erts_qsort_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

 void erts_qsort_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */



/***************
 ** Quicksort **
 ***************
 *
 * A quicksort implementation with the same interface as the qsort
 * function in the C standard library.
 *
 * A yielding version of erts_qsort is generated by YCF. The functions
 * (erts_qsort_ycf_gen_yielding, erts_qsort_ycf_gen_continue and
 * erts_qsort_ycf_gen_destroy) for the yielding version is declared in
 * global.h. See note about YCF near the top of the file for more
 * information.
 *
 * !!!!
 * Note that the erts_qsort_swap that is used by erts_qsort does not have
 * trapping enabled. If the array items are large erts_qsort should also
 * trap in the erts_qsort_swap function, but this causes terrible
 * performance when the array items are small, so one should investigate
 * a fast-path approach
 */
void erts_qsort_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,void *base_N3_N10,
                size_t nr_of_items_N4_N11,
                size_t item_size_N5_N12,
                erts_void_ptr_cmp_t compare_N6_N13);



struct gen_ycf_trap_state_for_erts_qsort {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data; int improved_seed_limit_N1_N8;
    Uint32 seed_N2_N9;
void* ycf_sub_fun_trap_state_wb_N7;void *base_N3_N10;
                size_t nr_of_items_N4_N11;
                size_t item_size_N5_N12;
                erts_void_ptr_cmp_t compare_N6_N13;
};


/* clang-format off */
YCF_GCC_DIAG_OFF(pragmas)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(unknown-warning-option)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-but-set-variable)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

 void erts_qsort_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_erts_qsort* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data; int improved_seed_limit_N1_N8;
    Uint32 seed_N2_N9;
void* ycf_sub_fun_trap_state_wb_N7;void *base_N3_N10;
                size_t nr_of_items_N4_N11;
                size_t item_size_N5_N12;
                erts_void_ptr_cmp_t compare_N6_N13;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    improved_seed_limit_N1_N8 = ycf_my_trap_state->improved_seed_limit_N1_N8;
    seed_N2_N9 = ycf_my_trap_state->seed_N2_N9;
    ycf_sub_fun_trap_state_wb_N7 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N7;
    base_N3_N10 = ycf_my_trap_state->base_N3_N10;
    nr_of_items_N4_N11 = ycf_my_trap_state->nr_of_items_N4_N11;
    item_size_N5_N12 = ycf_my_trap_state->item_size_N5_N12;
    compare_N6_N13 = ycf_my_trap_state->compare_N6_N13;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */
{
  if(ycf_sub_fun_trap_state_wb_N7 != NULL)
{     erts_qsort_helper_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N7);
  }
}

/* YCF SPECIAL CUSTOM CODE END */

     ycf_destroy_stack_allocator(&ycf_frame_alloc_data, ycf_yield_free, ycf_yield_alloc_free_context);
     ycf_yield_free(ycf_my_trap_state, ycf_yield_alloc_free_context);
     }
}
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(unused-but-set-variable)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(unknown-warning-option)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(pragmas)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

  void  erts_qsort_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_erts_qsort* ycf_my_trap_state = *ycf_trap_state;
erts_qsort_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->base_N3_N10,ycf_my_trap_state->nr_of_items_N4_N11,ycf_my_trap_state->item_size_N5_N12,ycf_my_trap_state->compare_N6_N13)
;
return;
}
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

#define YCF_IN_YIELDING_FUN 1
#undef YCF_STACK_ALLOC
#define YCF_STACK_ALLOC(SIZE) \
    ycf_stack_alloc(SIZE,\
                    &ycf_frame_alloc_data,\
                    ycf_yield_alloc, ycf_yield_alloc_free_context,\
                     ycf_stack_alloc_size_or_max_size)

/* clang-format off */
YCF_GCC_DIAG_OFF(pragmas)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(unknown-warning-option)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(sometimes-uninitialized)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(maybe-uninitialized)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(uninitialized)
/* clang-format on */


/***************
 ** Quicksort **
 ***************
 *
 * A quicksort implementation with the same interface as the qsort
 * function in the C standard library.
 *
 * A yielding version of erts_qsort is generated by YCF. The functions
 * (erts_qsort_ycf_gen_yielding, erts_qsort_ycf_gen_continue and
 * erts_qsort_ycf_gen_destroy) for the yielding version is declared in
 * global.h. See note about YCF near the top of the file for more
 * information.
 *
 * !!!!
 * Note that the erts_qsort_swap that is used by erts_qsort does not have
 * trapping enabled. If the array items are large erts_qsort should also
 * trap in the erts_qsort_swap function, but this causes terrible
 * performance when the array items are small, so one should investigate
 * a fast-path approach
 */
void erts_qsort_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,void *base_N3_N10,
                size_t nr_of_items_N4_N11,
                size_t item_size_N5_N12,
                erts_void_ptr_cmp_t compare_N6_N13)
{ int improved_seed_limit_N1_N8;
    Uint32 seed_N2_N9;
void* ycf_sub_fun_trap_state_wb_N7;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;

{
  
  ycf_nr_of_reductions = *ycf_nr_of_reductions_param;
  ycf_frame_alloc_data.size = 0;
  ycf_frame_alloc_data.max_size = ycf_stack_alloc_size_or_max_size;
  ycf_frame_alloc_data.data = ycf_stack_alloc_data;
  ycf_frame_alloc_data.needs_freeing = 0;
  if(*ycf_trap_state != NULL){
     struct gen_ycf_trap_state_for_erts_qsort* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    improved_seed_limit_N1_N8 = ycf_my_trap_state->improved_seed_limit_N1_N8;
    seed_N2_N9 = ycf_my_trap_state->seed_N2_N9;
    ycf_sub_fun_trap_state_wb_N7 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N7;
    base_N3_N10 = ycf_my_trap_state->base_N3_N10;
    nr_of_items_N4_N11 = ycf_my_trap_state->nr_of_items_N4_N11;
    item_size_N5_N12 = ycf_my_trap_state->item_size_N5_N12;
    compare_N6_N13 = ycf_my_trap_state->compare_N6_N13;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     ycf_nr_of_reductions = *ycf_nr_of_reductions_param;
     switch(ycf_trap_location){
case 1: goto ycf_yield_location_label_1;

}
  }
}
{

ycf_sub_fun_trap_state_wb_N7 = NULL;

}
    improved_seed_limit_N1_N8 = 128;
    seed_N2_N9 = nr_of_items_N4_N11 > improved_seed_limit_N1_N8 ? erts_sched_local_random(0) : 1;
{

ycf_sub_fun_trap_state_wb_N7 = NULL;
{
 erts_qsort_helper_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N7,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,(byte*)base_N3_N10, nr_of_items_N4_N11, item_size_N5_N12, compare_N6_N13, seed_N2_N9);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N7)){
   ycf_trap_location = 1;
   goto ycf_do_yield_label_erts_qsort;
  ycf_yield_location_label_1:;
    erts_qsort_helper_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N7,
                            ycf_extra_context);
}


}
/* YCF Replaced special code */

}

{

if (*ycf_trap_state != NULL) {
   ycf_yield_free(*ycf_trap_state, ycf_yield_alloc_free_context);
   *ycf_trap_state = NULL;
}
ycf_destroy_stack_allocator(&ycf_frame_alloc_data,
                            ycf_yield_free,
                            ycf_yield_alloc_free_context);
*ycf_nr_of_reductions_param = ycf_nr_of_reductions;
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

return;
}
{

if (*ycf_trap_state != NULL) {
   ycf_yield_free(*ycf_trap_state, ycf_yield_alloc_free_context);
   *ycf_trap_state = NULL;
}
ycf_destroy_stack_allocator(&ycf_frame_alloc_data,
                            ycf_yield_free,
                            ycf_yield_alloc_free_context);
*ycf_nr_of_reductions_param = ycf_nr_of_reductions;
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

return;
}

{
  struct gen_ycf_trap_state_for_erts_qsort* ycf_my_trap_state;
  ycf_do_yield_label_erts_qsort:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_erts_qsort), ycf_yield_alloc_free_context);
      } else {
    ycf_my_trap_state = *ycf_trap_state;
  }
      ycf_my_trap_state->ycf_yield_alloc = ycf_yield_alloc;
    ycf_my_trap_state->ycf_yield_free = ycf_yield_free;
    ycf_my_trap_state->ycf_yield_alloc_free_context = ycf_yield_alloc_free_context;
    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size = ycf_stack_alloc_size_or_max_size;
    ycf_my_trap_state->ycf_stack_alloc_data = ycf_stack_alloc_data;
    ycf_my_trap_state->ycf_trap_location = ycf_trap_location;
    ycf_my_trap_state->ycf_nr_of_reductions = ycf_nr_of_reductions;
    ycf_my_trap_state->ycf_frame_alloc_data = ycf_frame_alloc_data;
    ycf_my_trap_state->improved_seed_limit_N1_N8 = improved_seed_limit_N1_N8;
    ycf_my_trap_state->seed_N2_N9 = seed_N2_N9;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N7 = ycf_sub_fun_trap_state_wb_N7;
    ycf_my_trap_state->base_N3_N10 = base_N3_N10;
    ycf_my_trap_state->nr_of_items_N4_N11 = nr_of_items_N4_N11;
    ycf_my_trap_state->item_size_N5_N12 = item_size_N5_N12;
    ycf_my_trap_state->compare_N6_N13 = compare_N6_N13;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
    return;

}
}
/* clang-format off */
YCF_GCC_DIAG_ON(uninitialized)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(maybe-uninitialized)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(sometimes-uninitialized)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(unknown-warning-option)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(pragmas)
/* clang-format on */

#undef YCF_STACK_ALLOC
#undef YCF_IN_YIELDING_FUN



struct gen_ycf_trap_state_for_erts_qsort_helper {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    erts_qsort_partion_array_result partion_info_N14_N26;
    size_t nr_of_items_in_first_partion_N15_N27;
    size_t nr_of_items_second_partion_N16_N28; size_t qsort_cut_off_N17_N29;
void* ycf_sub_fun_trap_state_wb_N23;
void* ycf_sub_fun_trap_state_wb_N24;
void* ycf_sub_fun_trap_state_wb_N25;byte *base_N18_N30;
                              size_t nr_of_items_N19_N31;
                              size_t item_size_N20_N32;
                              erts_void_ptr_cmp_t compare_N21_N33;
                              Uint32 extra_seed_N22_N34;
};


/* clang-format off */
YCF_GCC_DIAG_OFF(pragmas)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(unknown-warning-option)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-but-set-variable)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

 void erts_qsort_helper_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_erts_qsort_helper* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    erts_qsort_partion_array_result partion_info_N14_N26;
    size_t nr_of_items_in_first_partion_N15_N27;
    size_t nr_of_items_second_partion_N16_N28; size_t qsort_cut_off_N17_N29;
void* ycf_sub_fun_trap_state_wb_N23;
void* ycf_sub_fun_trap_state_wb_N24;
void* ycf_sub_fun_trap_state_wb_N25;byte *base_N18_N30;
                              size_t nr_of_items_N19_N31;
                              size_t item_size_N20_N32;
                              erts_void_ptr_cmp_t compare_N21_N33;
                              Uint32 extra_seed_N22_N34;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    partion_info_N14_N26 = ycf_my_trap_state->partion_info_N14_N26;
    nr_of_items_in_first_partion_N15_N27 = ycf_my_trap_state->nr_of_items_in_first_partion_N15_N27;
    nr_of_items_second_partion_N16_N28 = ycf_my_trap_state->nr_of_items_second_partion_N16_N28;
    qsort_cut_off_N17_N29 = ycf_my_trap_state->qsort_cut_off_N17_N29;
    ycf_sub_fun_trap_state_wb_N23 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N23;
    ycf_sub_fun_trap_state_wb_N24 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N24;
    ycf_sub_fun_trap_state_wb_N25 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N25;
    base_N18_N30 = ycf_my_trap_state->base_N18_N30;
    nr_of_items_N19_N31 = ycf_my_trap_state->nr_of_items_N19_N31;
    item_size_N20_N32 = ycf_my_trap_state->item_size_N20_N32;
    compare_N21_N33 = ycf_my_trap_state->compare_N21_N33;
    extra_seed_N22_N34 = ycf_my_trap_state->extra_seed_N22_N34;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */
{
  if(ycf_sub_fun_trap_state_wb_N23 != NULL)
{     erts_qsort_partion_array_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N23);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N24 != NULL)
{     erts_qsort_helper_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N24);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N25 != NULL)
{     erts_qsort_helper_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N25);
  }
}

/* YCF SPECIAL CUSTOM CODE END */

     ycf_destroy_stack_allocator(&ycf_frame_alloc_data, ycf_yield_free, ycf_yield_alloc_free_context);
     ycf_yield_free(ycf_my_trap_state, ycf_yield_alloc_free_context);
     }
}
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(unused-but-set-variable)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(unknown-warning-option)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(pragmas)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  void  erts_qsort_helper_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_erts_qsort_helper* ycf_my_trap_state = *ycf_trap_state;
erts_qsort_helper_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->base_N18_N30,ycf_my_trap_state->nr_of_items_N19_N31,ycf_my_trap_state->item_size_N20_N32,ycf_my_trap_state->compare_N21_N33,ycf_my_trap_state->extra_seed_N22_N34)
;
return;
}
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

#define YCF_IN_YIELDING_FUN 1
#undef YCF_STACK_ALLOC
#define YCF_STACK_ALLOC(SIZE) \
    ycf_stack_alloc(SIZE,\
                    &ycf_frame_alloc_data,\
                    ycf_yield_alloc, ycf_yield_alloc_free_context,\
                     ycf_stack_alloc_size_or_max_size)

/* clang-format off */
YCF_GCC_DIAG_OFF(pragmas)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(unknown-warning-option)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(sometimes-uninitialized)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(maybe-uninitialized)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(uninitialized)
/* clang-format on */


/* **Important Note**
 *
 * A yielding version of this function is generated with YCF. This
 * means that the code has to follow some restrictions. See note about
 * YCF near the top of the file for more information.
 */
static void erts_qsort_helper_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,byte *base_N18_N30,
                              size_t nr_of_items_N19_N31,
                              size_t item_size_N20_N32,
                              erts_void_ptr_cmp_t compare_N21_N33,
                              Uint32 extra_seed_N22_N34)
{
    erts_qsort_partion_array_result partion_info_N14_N26;
    size_t nr_of_items_in_first_partion_N15_N27;
    size_t nr_of_items_second_partion_N16_N28; size_t qsort_cut_off_N17_N29;
void* ycf_sub_fun_trap_state_wb_N23;
void* ycf_sub_fun_trap_state_wb_N24;
void* ycf_sub_fun_trap_state_wb_N25;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;

{
  
  ycf_nr_of_reductions = *ycf_nr_of_reductions_param;
  ycf_frame_alloc_data.size = 0;
  ycf_frame_alloc_data.max_size = ycf_stack_alloc_size_or_max_size;
  ycf_frame_alloc_data.data = ycf_stack_alloc_data;
  ycf_frame_alloc_data.needs_freeing = 0;
  if(*ycf_trap_state != NULL){
     struct gen_ycf_trap_state_for_erts_qsort_helper* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    partion_info_N14_N26 = ycf_my_trap_state->partion_info_N14_N26;
    nr_of_items_in_first_partion_N15_N27 = ycf_my_trap_state->nr_of_items_in_first_partion_N15_N27;
    nr_of_items_second_partion_N16_N28 = ycf_my_trap_state->nr_of_items_second_partion_N16_N28;
    qsort_cut_off_N17_N29 = ycf_my_trap_state->qsort_cut_off_N17_N29;
    ycf_sub_fun_trap_state_wb_N23 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N23;
    ycf_sub_fun_trap_state_wb_N24 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N24;
    ycf_sub_fun_trap_state_wb_N25 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N25;
    base_N18_N30 = ycf_my_trap_state->base_N18_N30;
    nr_of_items_N19_N31 = ycf_my_trap_state->nr_of_items_N19_N31;
    item_size_N20_N32 = ycf_my_trap_state->item_size_N20_N32;
    compare_N21_N33 = ycf_my_trap_state->compare_N21_N33;
    extra_seed_N22_N34 = ycf_my_trap_state->extra_seed_N22_N34;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     ycf_nr_of_reductions = *ycf_nr_of_reductions_param;
     switch(ycf_trap_location){
case 1: goto ycf_yield_location_label_1;
case 2: goto ycf_yield_location_label_2;
case 3: goto ycf_yield_location_label_3;
case 4: goto ycf_yield_location_label_4;

}
  }
}
{

ycf_sub_fun_trap_state_wb_N23 = NULL;

ycf_sub_fun_trap_state_wb_N24 = NULL;

ycf_sub_fun_trap_state_wb_N25 = NULL;

}
    qsort_cut_off_N17_N29 = 16;
    if (nr_of_items_N19_N31 <= qsort_cut_off_N17_N29)
{
    {
        erts_qsort_insertion_sort(base_N18_N30, nr_of_items_N19_N31, item_size_N20_N32, compare_N21_N33);
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (nr_of_items_N19_N31 * erts_fit_in_bits_int64(nr_of_items_N19_N31) * 2);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 4;
  goto ycf_do_yield_label_erts_qsort_helper;
  ycf_yield_location_label_4:;
}

}
{

if (*ycf_trap_state != NULL) {
   ycf_yield_free(*ycf_trap_state, ycf_yield_alloc_free_context);
   *ycf_trap_state = NULL;
}
ycf_destroy_stack_allocator(&ycf_frame_alloc_data,
                            ycf_yield_free,
                            ycf_yield_alloc_free_context);
*ycf_nr_of_reductions_param = ycf_nr_of_reductions;
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

        return;
}
    }

}
{

ycf_sub_fun_trap_state_wb_N23 = NULL;
{
  erts_qsort_partion_array_result  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =  erts_qsort_partion_array_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N23,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,base_N18_N30,
                                            nr_of_items_N19_N31,
                                            item_size_N20_N32,
                                            compare_N21_N33,
                                            extra_seed_N22_N34);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N23)){
   ycf_trap_location = 1;
   goto ycf_do_yield_label_erts_qsort_helper;
  ycf_yield_location_label_1:;
   ycf_tmp_fun_call_tmp_var =  erts_qsort_partion_array_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N23,
                            ycf_extra_context);
}

    partion_info_N14_N26 = ycf_tmp_fun_call_tmp_var;


}
/* YCF Replaced special code */

}

    nr_of_items_in_first_partion_N15_N27 =
        ((partion_info_N14_N26.pivot_part_start - base_N18_N30) / sizeof(byte)) / item_size_N20_N32;
    nr_of_items_second_partion_N16_N28 =
        nr_of_items_N19_N31 - (((partion_info_N14_N26.pivot_part_end - base_N18_N30) / sizeof(byte)) / item_size_N20_N32);
{

ycf_sub_fun_trap_state_wb_N24 = NULL;
{
 erts_qsort_helper_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N24,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,base_N18_N30,
                      nr_of_items_in_first_partion_N15_N27,
                      item_size_N20_N32, compare_N21_N33,
                      extra_seed_N22_N34 + 1);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N24)){
   ycf_trap_location = 2;
   goto ycf_do_yield_label_erts_qsort_helper;
  ycf_yield_location_label_2:;
    erts_qsort_helper_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N24,
                            ycf_extra_context);
}


}
/* YCF Replaced special code */

}

{

ycf_sub_fun_trap_state_wb_N25 = NULL;
{
 erts_qsort_helper_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N25,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,partion_info_N14_N26.pivot_part_end,
                      nr_of_items_second_partion_N16_N28,
                      item_size_N20_N32,
                      compare_N21_N33,
                      extra_seed_N22_N34 + 1);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N25)){
   ycf_trap_location = 3;
   goto ycf_do_yield_label_erts_qsort_helper;
  ycf_yield_location_label_3:;
    erts_qsort_helper_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N25,
                            ycf_extra_context);
}


}
/* YCF Replaced special code */

}

{

if (*ycf_trap_state != NULL) {
   ycf_yield_free(*ycf_trap_state, ycf_yield_alloc_free_context);
   *ycf_trap_state = NULL;
}
ycf_destroy_stack_allocator(&ycf_frame_alloc_data,
                            ycf_yield_free,
                            ycf_yield_alloc_free_context);
*ycf_nr_of_reductions_param = ycf_nr_of_reductions;
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

return;
}
{

if (*ycf_trap_state != NULL) {
   ycf_yield_free(*ycf_trap_state, ycf_yield_alloc_free_context);
   *ycf_trap_state = NULL;
}
ycf_destroy_stack_allocator(&ycf_frame_alloc_data,
                            ycf_yield_free,
                            ycf_yield_alloc_free_context);
*ycf_nr_of_reductions_param = ycf_nr_of_reductions;
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

return;
}

{
  struct gen_ycf_trap_state_for_erts_qsort_helper* ycf_my_trap_state;
  ycf_do_yield_label_erts_qsort_helper:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_erts_qsort_helper), ycf_yield_alloc_free_context);
      } else {
    ycf_my_trap_state = *ycf_trap_state;
  }
      ycf_my_trap_state->ycf_yield_alloc = ycf_yield_alloc;
    ycf_my_trap_state->ycf_yield_free = ycf_yield_free;
    ycf_my_trap_state->ycf_yield_alloc_free_context = ycf_yield_alloc_free_context;
    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size = ycf_stack_alloc_size_or_max_size;
    ycf_my_trap_state->ycf_stack_alloc_data = ycf_stack_alloc_data;
    ycf_my_trap_state->ycf_trap_location = ycf_trap_location;
    ycf_my_trap_state->ycf_nr_of_reductions = ycf_nr_of_reductions;
    ycf_my_trap_state->ycf_frame_alloc_data = ycf_frame_alloc_data;
    ycf_my_trap_state->partion_info_N14_N26 = partion_info_N14_N26;
    ycf_my_trap_state->nr_of_items_in_first_partion_N15_N27 = nr_of_items_in_first_partion_N15_N27;
    ycf_my_trap_state->nr_of_items_second_partion_N16_N28 = nr_of_items_second_partion_N16_N28;
    ycf_my_trap_state->qsort_cut_off_N17_N29 = qsort_cut_off_N17_N29;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N23 = ycf_sub_fun_trap_state_wb_N23;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N24 = ycf_sub_fun_trap_state_wb_N24;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N25 = ycf_sub_fun_trap_state_wb_N25;
    ycf_my_trap_state->base_N18_N30 = base_N18_N30;
    ycf_my_trap_state->nr_of_items_N19_N31 = nr_of_items_N19_N31;
    ycf_my_trap_state->item_size_N20_N32 = item_size_N20_N32;
    ycf_my_trap_state->compare_N21_N33 = compare_N21_N33;
    ycf_my_trap_state->extra_seed_N22_N34 = extra_seed_N22_N34;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
    return;

}
}
/* clang-format off */
YCF_GCC_DIAG_ON(uninitialized)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(maybe-uninitialized)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(sometimes-uninitialized)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(unknown-warning-option)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(pragmas)
/* clang-format on */

#undef YCF_STACK_ALLOC
#undef YCF_IN_YIELDING_FUN



struct gen_ycf_trap_state_for_erts_qsort_partion_array {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    /*
      The array is portioned using a fast-path-slow-path approach. We
      first assume that the there is no duplicates of the selected
      pivot item in the array. If this assumption holds, we only need
      to keep track of two regions (items greater than the pivot, and
      items smaller than the pivot) which leads to fewer swaps than if
      we need to keep track of three regions (items greater than the
      pivot, items smaller than the pivot, and items equal to the
      pivot). If we find an item that is equal to the pivot, we fall
      back to the slow path that keeps track of three regions.

      Start of fast path:
     */
    byte* second_part_start_N42_N51;
    byte* curr_N43_N52;
    int more_than_one_pivot_item_N44_N53;
    size_t pivot_index_N45_N54;
        int compare_res_N35_N55;
        /* Fast path successful (we don't need to use the slow path) */
        /* Move the pivot before the second part (if any) */
        erts_qsort_partion_array_result res_N36_N56;
        /*
           We have more than one item equal to the pivot item and need
           to keep track of three regions.

           Start of slow path:
        */
        byte * pivot_part_start_N39_N57;
        byte * pivot_part_end_N40_N58;
        byte * last_part_start_N41_N59;
            int compare_res_N37_N60;
            erts_qsort_partion_array_result res_N38_N61;byte *base_N46_N62;
                         size_t nr_of_items_N47_N63;
                         size_t item_size_N48_N64;
                         erts_void_ptr_cmp_t compare_N49_N65;
                         Uint32 extra_seed_N50_N66;
};


/* clang-format off */
YCF_GCC_DIAG_OFF(pragmas)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(unknown-warning-option)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-but-set-variable)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

 void erts_qsort_partion_array_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_erts_qsort_partion_array* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    /*
      The array is portioned using a fast-path-slow-path approach. We
      first assume that the there is no duplicates of the selected
      pivot item in the array. If this assumption holds, we only need
      to keep track of two regions (items greater than the pivot, and
      items smaller than the pivot) which leads to fewer swaps than if
      we need to keep track of three regions (items greater than the
      pivot, items smaller than the pivot, and items equal to the
      pivot). If we find an item that is equal to the pivot, we fall
      back to the slow path that keeps track of three regions.

      Start of fast path:
     */
    byte* second_part_start_N42_N51;
    byte* curr_N43_N52;
    int more_than_one_pivot_item_N44_N53;
    size_t pivot_index_N45_N54;
        int compare_res_N35_N55;
        /* Fast path successful (we don't need to use the slow path) */
        /* Move the pivot before the second part (if any) */
        erts_qsort_partion_array_result res_N36_N56;
        /*
           We have more than one item equal to the pivot item and need
           to keep track of three regions.

           Start of slow path:
        */
        byte * pivot_part_start_N39_N57;
        byte * pivot_part_end_N40_N58;
        byte * last_part_start_N41_N59;
            int compare_res_N37_N60;
            erts_qsort_partion_array_result res_N38_N61;byte *base_N46_N62;
                         size_t nr_of_items_N47_N63;
                         size_t item_size_N48_N64;
                         erts_void_ptr_cmp_t compare_N49_N65;
                         Uint32 extra_seed_N50_N66;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    second_part_start_N42_N51 = ycf_my_trap_state->second_part_start_N42_N51;
    curr_N43_N52 = ycf_my_trap_state->curr_N43_N52;
    more_than_one_pivot_item_N44_N53 = ycf_my_trap_state->more_than_one_pivot_item_N44_N53;
    pivot_index_N45_N54 = ycf_my_trap_state->pivot_index_N45_N54;
    compare_res_N35_N55 = ycf_my_trap_state->compare_res_N35_N55;
    res_N36_N56 = ycf_my_trap_state->res_N36_N56;
    pivot_part_start_N39_N57 = ycf_my_trap_state->pivot_part_start_N39_N57;
    pivot_part_end_N40_N58 = ycf_my_trap_state->pivot_part_end_N40_N58;
    last_part_start_N41_N59 = ycf_my_trap_state->last_part_start_N41_N59;
    compare_res_N37_N60 = ycf_my_trap_state->compare_res_N37_N60;
    res_N38_N61 = ycf_my_trap_state->res_N38_N61;
    base_N46_N62 = ycf_my_trap_state->base_N46_N62;
    nr_of_items_N47_N63 = ycf_my_trap_state->nr_of_items_N47_N63;
    item_size_N48_N64 = ycf_my_trap_state->item_size_N48_N64;
    compare_N49_N65 = ycf_my_trap_state->compare_N49_N65;
    extra_seed_N50_N66 = ycf_my_trap_state->extra_seed_N50_N66;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     ycf_destroy_stack_allocator(&ycf_frame_alloc_data, ycf_yield_free, ycf_yield_alloc_free_context);
     ycf_yield_free(ycf_my_trap_state, ycf_yield_alloc_free_context);
     }
}
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(unused-but-set-variable)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(unknown-warning-option)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(pragmas)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  erts_qsort_partion_array_result  erts_qsort_partion_array_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_erts_qsort_partion_array* ycf_my_trap_state = *ycf_trap_state;
return erts_qsort_partion_array_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->base_N46_N62,ycf_my_trap_state->nr_of_items_N47_N63,ycf_my_trap_state->item_size_N48_N64,ycf_my_trap_state->compare_N49_N65,ycf_my_trap_state->extra_seed_N50_N66)
;
}
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

#define YCF_IN_YIELDING_FUN 1
#undef YCF_STACK_ALLOC
#define YCF_STACK_ALLOC(SIZE) \
    ycf_stack_alloc(SIZE,\
                    &ycf_frame_alloc_data,\
                    ycf_yield_alloc, ycf_yield_alloc_free_context,\
                     ycf_stack_alloc_size_or_max_size)

/* clang-format off */
YCF_GCC_DIAG_OFF(pragmas)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(unknown-warning-option)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(sometimes-uninitialized)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(maybe-uninitialized)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_OFF(uninitialized)
/* clang-format on */


/* **Important Note**
 *
 * A yielding version of this function is generated with YCF. This
 * means that the code has to follow some restrictions. See note about
 * YCF near the top of the file for more information.
 */
static erts_qsort_partion_array_result
erts_qsort_partion_array_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,byte *base_N46_N62,
                         size_t nr_of_items_N47_N63,
                         size_t item_size_N48_N64,
                         erts_void_ptr_cmp_t compare_N49_N65,
                         Uint32 extra_seed_N50_N66)
{
    /*
      The array is portioned using a fast-path-slow-path approach. We
      first assume that the there is no duplicates of the selected
      pivot item in the array. If this assumption holds, we only need
      to keep track of two regions (items greater than the pivot, and
      items smaller than the pivot) which leads to fewer swaps than if
      we need to keep track of three regions (items greater than the
      pivot, items smaller than the pivot, and items equal to the
      pivot). If we find an item that is equal to the pivot, we fall
      back to the slow path that keeps track of three regions.

      Start of fast path:
     */
    byte* second_part_start_N42_N51;
    byte* curr_N43_N52;
    int more_than_one_pivot_item_N44_N53;
    size_t pivot_index_N45_N54;
        int compare_res_N35_N55;
        /* Fast path successful (we don't need to use the slow path) */
        /* Move the pivot before the second part (if any) */
        erts_qsort_partion_array_result res_N36_N56;
        /*
           We have more than one item equal to the pivot item and need
           to keep track of three regions.

           Start of slow path:
        */
        byte * pivot_part_start_N39_N57;
        byte * pivot_part_end_N40_N58;
        byte * last_part_start_N41_N59;
            int compare_res_N37_N60;
            erts_qsort_partion_array_result res_N38_N61;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;

{
  
  ycf_nr_of_reductions = *ycf_nr_of_reductions_param;
  ycf_frame_alloc_data.size = 0;
  ycf_frame_alloc_data.max_size = ycf_stack_alloc_size_or_max_size;
  ycf_frame_alloc_data.data = ycf_stack_alloc_data;
  ycf_frame_alloc_data.needs_freeing = 0;
  if(*ycf_trap_state != NULL){
     struct gen_ycf_trap_state_for_erts_qsort_partion_array* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    second_part_start_N42_N51 = ycf_my_trap_state->second_part_start_N42_N51;
    curr_N43_N52 = ycf_my_trap_state->curr_N43_N52;
    more_than_one_pivot_item_N44_N53 = ycf_my_trap_state->more_than_one_pivot_item_N44_N53;
    pivot_index_N45_N54 = ycf_my_trap_state->pivot_index_N45_N54;
    compare_res_N35_N55 = ycf_my_trap_state->compare_res_N35_N55;
    res_N36_N56 = ycf_my_trap_state->res_N36_N56;
    pivot_part_start_N39_N57 = ycf_my_trap_state->pivot_part_start_N39_N57;
    pivot_part_end_N40_N58 = ycf_my_trap_state->pivot_part_end_N40_N58;
    last_part_start_N41_N59 = ycf_my_trap_state->last_part_start_N41_N59;
    compare_res_N37_N60 = ycf_my_trap_state->compare_res_N37_N60;
    res_N38_N61 = ycf_my_trap_state->res_N38_N61;
    base_N46_N62 = ycf_my_trap_state->base_N46_N62;
    nr_of_items_N47_N63 = ycf_my_trap_state->nr_of_items_N47_N63;
    item_size_N48_N64 = ycf_my_trap_state->item_size_N48_N64;
    compare_N49_N65 = ycf_my_trap_state->compare_N49_N65;
    extra_seed_N50_N66 = ycf_my_trap_state->extra_seed_N50_N66;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     ycf_nr_of_reductions = *ycf_nr_of_reductions_param;
     switch(ycf_trap_location){
case 1: goto ycf_yield_location_label_1;
case 2: goto ycf_yield_location_label_2;

}
  }
}
{

}
    /*
      The array is portioned using a fast-path-slow-path approach. We
      first assume that the there is no duplicates of the selected
      pivot item in the array. If this assumption holds, we only need
      to keep track of two regions (items greater than the pivot, and
      items smaller than the pivot) which leads to fewer swaps than if
      we need to keep track of three regions (items greater than the
      pivot, items smaller than the pivot, and items equal to the
      pivot). If we find an item that is equal to the pivot, we fall
      back to the slow path that keeps track of three regions.

      Start of fast path:
     */
    second_part_start_N42_N51 = base_N46_N62 + (nr_of_items_N47_N63 * item_size_N48_N64);
    curr_N43_N52 = base_N46_N62 + item_size_N48_N64;
    more_than_one_pivot_item_N44_N53 = 0;
    pivot_index_N45_N54 =
        ((size_t)erts_sched_local_random_hash_64_to_32_shift((Uint64)extra_seed_N50_N66 +
                                                             (Uint64)((UWord)compare_N49_N65) +
                                                             (Uint64)((UWord)base_N46_N62) -
                                                             (Uint64)nr_of_items_N47_N63)) % nr_of_items_N47_N63;
    /* Move pivot first */
    erts_qsort_swap(item_size_N48_N64, base_N46_N62, base_N46_N62 + pivot_index_N45_N54 * item_size_N48_N64);
    while (curr_N43_N52 != second_part_start_N42_N51)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 1;
  goto ycf_do_yield_label_erts_qsort_partion_array;
  ycf_yield_location_label_1:;
}

}
    {
        compare_res_N35_N55 = compare_N49_N65(curr_N43_N52, base_N46_N62);
        if (compare_res_N35_N55 < 0)
{
    {
            /* Include in first part */
            curr_N43_N52 += item_size_N48_N64;
        }

} else
{
{
    if (compare_res_N35_N55 == 0)
{
    {
            more_than_one_pivot_item_N44_N53 = 1;
            break;
        }

} else
{
    {
            /* Move to last part */
            second_part_start_N42_N51 -= item_size_N48_N64;
            erts_qsort_swap(item_size_N48_N64, curr_N43_N52, second_part_start_N42_N51);
        }

}
}

}
    }

}
    if (!more_than_one_pivot_item_N44_N53)
{
    {
        res_N36_N56.pivot_part_start = second_part_start_N42_N51 - item_size_N48_N64;
        res_N36_N56.pivot_part_end = second_part_start_N42_N51;
        erts_qsort_swap(item_size_N48_N64, base_N46_N62, res_N36_N56.pivot_part_start);
{

if (*ycf_trap_state != NULL) {
   ycf_yield_free(*ycf_trap_state, ycf_yield_alloc_free_context);
   *ycf_trap_state = NULL;
}
ycf_destroy_stack_allocator(&ycf_frame_alloc_data,
                            ycf_yield_free,
                            ycf_yield_alloc_free_context);
*ycf_nr_of_reductions_param = ycf_nr_of_reductions;
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

        return res_N36_N56;
}
    }

} else
{
    {
        /*
           We have more than one item equal to the pivot item and need
           to keep track of three regions.

           Start of slow path:
        */
        pivot_part_start_N39_N57 = curr_N43_N52 - item_size_N48_N64;
        pivot_part_end_N40_N58 = curr_N43_N52 + item_size_N48_N64;
        last_part_start_N41_N59 = second_part_start_N42_N51;

	erts_qsort_swap(item_size_N48_N64, base_N46_N62, pivot_part_start_N39_N57);

        while (pivot_part_end_N40_N58 != last_part_start_N41_N59)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 2;
  goto ycf_do_yield_label_erts_qsort_partion_array;
  ycf_yield_location_label_2:;
}

}
    {
            compare_res_N37_N60 =
                compare_N49_N65(pivot_part_end_N40_N58, pivot_part_end_N40_N58 - item_size_N48_N64);
            if (compare_res_N37_N60 == 0)
{
    {
                /* Include in pivot part */
                pivot_part_end_N40_N58 += item_size_N48_N64;
            }

} else
{
{
    if (compare_res_N37_N60 < 0)
{
    {
                /* Move pivot part one step to the right */
                erts_qsort_swap(item_size_N48_N64, pivot_part_start_N39_N57, pivot_part_end_N40_N58);
                pivot_part_start_N39_N57 += item_size_N48_N64;
                pivot_part_end_N40_N58 += item_size_N48_N64;
            }

} else
{
    {
                /* Move to last part */
                last_part_start_N41_N59 -= item_size_N48_N64;
                erts_qsort_swap(item_size_N48_N64, pivot_part_end_N40_N58, last_part_start_N41_N59);
            }

}
}

}
        }

}
        {
            res_N38_N61.pivot_part_start = pivot_part_start_N39_N57;
            res_N38_N61.pivot_part_end = pivot_part_end_N40_N58;
{

if (*ycf_trap_state != NULL) {
   ycf_yield_free(*ycf_trap_state, ycf_yield_alloc_free_context);
   *ycf_trap_state = NULL;
}
ycf_destroy_stack_allocator(&ycf_frame_alloc_data,
                            ycf_yield_free,
                            ycf_yield_alloc_free_context);
*ycf_nr_of_reductions_param = ycf_nr_of_reductions;
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

            return res_N38_N61;
}
        }
    }

}

{
  struct gen_ycf_trap_state_for_erts_qsort_partion_array* ycf_my_trap_state;
  ycf_do_yield_label_erts_qsort_partion_array:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_erts_qsort_partion_array), ycf_yield_alloc_free_context);
      } else {
    ycf_my_trap_state = *ycf_trap_state;
  }
      ycf_my_trap_state->ycf_yield_alloc = ycf_yield_alloc;
    ycf_my_trap_state->ycf_yield_free = ycf_yield_free;
    ycf_my_trap_state->ycf_yield_alloc_free_context = ycf_yield_alloc_free_context;
    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size = ycf_stack_alloc_size_or_max_size;
    ycf_my_trap_state->ycf_stack_alloc_data = ycf_stack_alloc_data;
    ycf_my_trap_state->ycf_trap_location = ycf_trap_location;
    ycf_my_trap_state->ycf_nr_of_reductions = ycf_nr_of_reductions;
    ycf_my_trap_state->ycf_frame_alloc_data = ycf_frame_alloc_data;
    ycf_my_trap_state->second_part_start_N42_N51 = second_part_start_N42_N51;
    ycf_my_trap_state->curr_N43_N52 = curr_N43_N52;
    ycf_my_trap_state->more_than_one_pivot_item_N44_N53 = more_than_one_pivot_item_N44_N53;
    ycf_my_trap_state->pivot_index_N45_N54 = pivot_index_N45_N54;
    ycf_my_trap_state->compare_res_N35_N55 = compare_res_N35_N55;
    ycf_my_trap_state->res_N36_N56 = res_N36_N56;
    ycf_my_trap_state->pivot_part_start_N39_N57 = pivot_part_start_N39_N57;
    ycf_my_trap_state->pivot_part_end_N40_N58 = pivot_part_end_N40_N58;
    ycf_my_trap_state->last_part_start_N41_N59 = last_part_start_N41_N59;
    ycf_my_trap_state->compare_res_N37_N60 = compare_res_N37_N60;
    ycf_my_trap_state->res_N38_N61 = res_N38_N61;
    ycf_my_trap_state->base_N46_N62 = base_N46_N62;
    ycf_my_trap_state->nr_of_items_N47_N63 = nr_of_items_N47_N63;
    ycf_my_trap_state->item_size_N48_N64 = item_size_N48_N64;
    ycf_my_trap_state->compare_N49_N65 = compare_N49_N65;
    ycf_my_trap_state->extra_seed_N50_N66 = extra_seed_N50_N66;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   erts_qsort_partion_array_result  const ycf_unused_ret_value;
    return ycf_unused_ret_value;
  }

}
}
/* clang-format off */
YCF_GCC_DIAG_ON(uninitialized)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(maybe-uninitialized)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(sometimes-uninitialized)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(unknown-warning-option)
/* clang-format on */

/* clang-format off */
YCF_GCC_DIAG_ON(pragmas)
/* clang-format on */

#undef YCF_STACK_ALLOC
#undef YCF_IN_YIELDING_FUN
