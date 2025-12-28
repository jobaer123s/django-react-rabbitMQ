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



struct gen_ycf_trap_state_for_hashmap_from_validated_list;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  Eterm  hashmap_from_validated_list_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void hashmap_from_validated_list_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

static Eterm hashmap_from_validated_list_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process *p_N216_N238,
                                         Eterm list_N217_N239,
                                         Eterm fill_value_N218_N240,
                                         Uint size_N219_N241);



struct gen_ycf_trap_state_for_maps_from_list_1_helper;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  BIF_RETTYPE  maps_from_list_1_helper_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void maps_from_list_1_helper_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

static BIF_RETTYPE maps_from_list_1_helper_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process* p_N189_N197, Eterm* bif_args_N190_N198);



struct gen_ycf_trap_state_for_maps_from_keys_2_helper;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  BIF_RETTYPE  maps_from_keys_2_helper_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void maps_from_keys_2_helper_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

static BIF_RETTYPE maps_from_keys_2_helper_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process* p_N174_N182, Eterm* bif_args_N175_N183);



struct gen_ycf_trap_state_for_maps_values_1_helper;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  BIF_RETTYPE  maps_values_1_helper_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void maps_values_1_helper_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

static BIF_RETTYPE maps_values_1_helper_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process* p_N157_N167, Eterm* bif_args_N158_N168);



struct gen_ycf_trap_state_for_maps_keys_1_helper;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  BIF_RETTYPE  maps_keys_1_helper_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void maps_keys_1_helper_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

static BIF_RETTYPE maps_keys_1_helper_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process* p_N138_N148, Eterm* bif_args_N139_N149);



struct gen_ycf_trap_state_for_hashmap_from_chunked_array;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  Eterm  hashmap_from_chunked_array_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void hashmap_from_chunked_array_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */



/* **Important Note**
 *
 * A yielding version of this function is generated with YCF. This
 * means that the code has to follow some restrictions. See note about
 * YCF near the top of the file for more information.
 */
static Eterm hashmap_from_chunked_array_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,ErtsHeapFactory *factory_N103_N126, hxnode_t *hxns_N104_N127, Uint n_N105_N128,
                                        Uint size_N106_N129,
                                        ErtsAlcType_t temp_memory_allocator_N107_N130);



struct gen_ycf_trap_state_for_hashmap_from_sorted_unique_array;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  Eterm  hashmap_from_sorted_unique_array_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void hashmap_from_sorted_unique_array_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */



/* **Important Note**
 *
 * A yielding version of this function is generated with YCF. This
 * means that the code has to follow some restrictions. See note about
 * YCF near the top of the file for more information.
 */
static Eterm hashmap_from_sorted_unique_array_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,ErtsHeapFactory* factory_N67_N81,
                                              hxnode_t *hxns_N68_N82, Uint n_N69_N83,
                                              ErtsAlcType_t temp_memory_allocator_N70_N84);



struct gen_ycf_trap_state_for_hashmap_from_unsorted_array;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  Eterm  hashmap_from_unsorted_array_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void hashmap_from_unsorted_array_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */



/* **Important Note**
 *
 * A yielding version of this function is generated with YCF. This
 * means that the code has to follow some restrictions. See note about
 * YCF near the top of the file for more information.
 */
static Eterm hashmap_from_unsorted_array_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,ErtsHeapFactory* factory_N39_N53,
                                         hxnode_t *hxns_N40_N54, Uint n_N41_N55,
                                         int reject_dupkeys_N42_N56,
                                         ErtsAlcType_t temp_memory_allocator_N43_N57);



struct gen_ycf_trap_state_for_hashmap_values;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  Eterm  hashmap_values_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void hashmap_values_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

static Eterm hashmap_values_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process* p_N23_N31, Eterm node_N24_N32);



struct gen_ycf_trap_state_for_hashmap_keys;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  Eterm  hashmap_keys_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void hashmap_keys_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

static Eterm hashmap_keys_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process* p_N7_N15, Eterm node_N8_N16);



struct gen_ycf_trap_state_for_hashmap_keys {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm stack_default_wstack_N1_N9[16];
    ErtsWStack stack_N2_N10;
    hashmap_head_t* root_N3_N11;
    Eterm *hp_N4_N12;
    Eterm *kv_N5_N13;
    Eterm res_N6_N14;Process* p_N7_N15; Eterm node_N8_N16;
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

static void hashmap_keys_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_hashmap_keys* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm stack_default_wstack_N1_N9[16];
    ErtsWStack stack_N2_N10;
    hashmap_head_t* root_N3_N11;
    Eterm *hp_N4_N12;
    Eterm *kv_N5_N13;
    Eterm res_N6_N14;Process* p_N7_N15; Eterm node_N8_N16;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    memcpy(stack_default_wstack_N1_N9, ycf_my_trap_state->stack_default_wstack_N1_N9, 16 *  sizeof(
    Eterm));
    stack_N2_N10 = ycf_my_trap_state->stack_N2_N10;
    root_N3_N11 = ycf_my_trap_state->root_N3_N11;
    hp_N4_N12 = ycf_my_trap_state->hp_N4_N12;
    kv_N5_N13 = ycf_my_trap_state->kv_N5_N13;
    res_N6_N14 = ycf_my_trap_state->res_N6_N14;
    p_N7_N15 = ycf_my_trap_state->p_N7_N15;
    node_N8_N16 = ycf_my_trap_state->node_N8_N16;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */
{

    {
        DESTROY_WSTACK_EXPLICIT_DEFAULT_ARRAY(stack_N2_N10, stack_default_wstack_N1_N9);
    }}

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

   static  Eterm  hashmap_keys_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_hashmap_keys* ycf_my_trap_state = *ycf_trap_state;
return hashmap_keys_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->p_N7_N15,ycf_my_trap_state->node_N8_N16)
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
static Eterm hashmap_keys_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process* p_N7_N15, Eterm node_N8_N16) {
    Eterm stack_default_wstack_N1_N9[16];
    ErtsWStack stack_N2_N10;
    hashmap_head_t* root_N3_N11;
    Eterm *hp_N4_N12;
    Eterm *kv_N5_N13;
    Eterm res_N6_N14;
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
     struct gen_ycf_trap_state_for_hashmap_keys* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    memcpy(stack_default_wstack_N1_N9, ycf_my_trap_state->stack_default_wstack_N1_N9, 16 *  sizeof(
    Eterm));
    stack_N2_N10 = ycf_my_trap_state->stack_N2_N10;
    root_N3_N11 = ycf_my_trap_state->root_N3_N11;
    hp_N4_N12 = ycf_my_trap_state->hp_N4_N12;
    kv_N5_N13 = ycf_my_trap_state->kv_N5_N13;
    res_N6_N14 = ycf_my_trap_state->res_N6_N14;
    p_N7_N15 = ycf_my_trap_state->p_N7_N15;
    node_N8_N16 = ycf_my_trap_state->node_N8_N16;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     ycf_nr_of_reductions = *ycf_nr_of_reductions_param;
     switch(ycf_trap_location){
case 1: goto ycf_yield_location_label_1;

}
  }
}
{

}
    res_N6_N14 = NIL;
#if DEF_WSTACK_SIZE != (16)
#error "The macro DEF_WSTACK_SIZE has changed from 16 (need to change constant above)"
    /* We cannot use "UWord stack_default_wstack[DEF_WSTACK_SIZE];"
       because macros are not expanded before the code is passed to
       YCF, and YCF needs to know the size of the array */
#endif
    stack_N2_N10 = WSTACK_DEFAULT_VALUE(stack_default_wstack_N1_N9, ERTS_ALC_T_MAP_TRAP);
/* YCF Replaced special code */

/* YCF Replaced special code */


    root_N3_N11 = (hashmap_head_t*) boxed_val(node_N8_N16);
    hp_N4_N12  = HAlloc(p_N7_N15, root_N3_N11->size * 2);
    hashmap_iterator_init(&stack_N2_N10, node_N8_N16, 0);
    while ((kv_N5_N13=hashmap_iterator_next(&stack_N2_N10)) != NULL)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 1;
  goto ycf_do_yield_label_hashmap_keys;
  ycf_yield_location_label_1:;
}

}
    {
	res_N6_N14 = CONS(hp_N4_N12, CAR(kv_N5_N13), res_N6_N14);
	hp_N4_N12 += 2;
    }

}
    DESTROY_WSTACK_EXPLICIT_DEFAULT_ARRAY(stack_N2_N10, stack_default_wstack_N1_N9);
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

    return res_N6_N14;
}

{
  struct gen_ycf_trap_state_for_hashmap_keys* ycf_my_trap_state;
  ycf_do_yield_label_hashmap_keys:;

    {
        ENSURE_WSTACK_HEAP_STACK_ARRAY(stack_N2_N10, stack_default_wstack_N1_N9);
    }

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_hashmap_keys), ycf_yield_alloc_free_context);
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
    memcpy(ycf_my_trap_state->stack_default_wstack_N1_N9, stack_default_wstack_N1_N9, 16 *  sizeof(
    Eterm));
    ycf_my_trap_state->stack_N2_N10 = stack_N2_N10;
    ycf_my_trap_state->root_N3_N11 = root_N3_N11;
    ycf_my_trap_state->hp_N4_N12 = hp_N4_N12;
    ycf_my_trap_state->kv_N5_N13 = kv_N5_N13;
    ycf_my_trap_state->res_N6_N14 = res_N6_N14;
    ycf_my_trap_state->p_N7_N15 = p_N7_N15;
    ycf_my_trap_state->node_N8_N16 = node_N8_N16;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   Eterm  const ycf_unused_ret_value;
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



struct gen_ycf_trap_state_for_hashmap_values {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm stack_default_wstack_N17_N25[16];
    ErtsWStack stack_N18_N26;
    hashmap_head_t* root_N19_N27;
    Eterm *hp_N20_N28;
    Eterm *kv_N21_N29;
    Eterm res_N22_N30;Process* p_N23_N31; Eterm node_N24_N32;
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

static void hashmap_values_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_hashmap_values* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm stack_default_wstack_N17_N25[16];
    ErtsWStack stack_N18_N26;
    hashmap_head_t* root_N19_N27;
    Eterm *hp_N20_N28;
    Eterm *kv_N21_N29;
    Eterm res_N22_N30;Process* p_N23_N31; Eterm node_N24_N32;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    memcpy(stack_default_wstack_N17_N25, ycf_my_trap_state->stack_default_wstack_N17_N25, 16 *  sizeof(
    Eterm));
    stack_N18_N26 = ycf_my_trap_state->stack_N18_N26;
    root_N19_N27 = ycf_my_trap_state->root_N19_N27;
    hp_N20_N28 = ycf_my_trap_state->hp_N20_N28;
    kv_N21_N29 = ycf_my_trap_state->kv_N21_N29;
    res_N22_N30 = ycf_my_trap_state->res_N22_N30;
    p_N23_N31 = ycf_my_trap_state->p_N23_N31;
    node_N24_N32 = ycf_my_trap_state->node_N24_N32;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */
{

    {
        DESTROY_WSTACK_EXPLICIT_DEFAULT_ARRAY(stack_N18_N26, stack_default_wstack_N17_N25);
    }}

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

   static  Eterm  hashmap_values_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_hashmap_values* ycf_my_trap_state = *ycf_trap_state;
return hashmap_values_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->p_N23_N31,ycf_my_trap_state->node_N24_N32)
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
static Eterm hashmap_values_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process* p_N23_N31, Eterm node_N24_N32) {
    Eterm stack_default_wstack_N17_N25[16];
    ErtsWStack stack_N18_N26;
    hashmap_head_t* root_N19_N27;
    Eterm *hp_N20_N28;
    Eterm *kv_N21_N29;
    Eterm res_N22_N30;
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
     struct gen_ycf_trap_state_for_hashmap_values* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    memcpy(stack_default_wstack_N17_N25, ycf_my_trap_state->stack_default_wstack_N17_N25, 16 *  sizeof(
    Eterm));
    stack_N18_N26 = ycf_my_trap_state->stack_N18_N26;
    root_N19_N27 = ycf_my_trap_state->root_N19_N27;
    hp_N20_N28 = ycf_my_trap_state->hp_N20_N28;
    kv_N21_N29 = ycf_my_trap_state->kv_N21_N29;
    res_N22_N30 = ycf_my_trap_state->res_N22_N30;
    p_N23_N31 = ycf_my_trap_state->p_N23_N31;
    node_N24_N32 = ycf_my_trap_state->node_N24_N32;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     ycf_nr_of_reductions = *ycf_nr_of_reductions_param;
     switch(ycf_trap_location){
case 1: goto ycf_yield_location_label_1;

}
  }
}
{

}
    res_N22_N30 = NIL;
#if DEF_WSTACK_SIZE != (16)
#error "The macro DEF_WSTACK_SIZE has changed from 16 (need to change constant above)"
    /* We cannot use "UWord stack_default_wstack[DEF_WSTACK_SIZE];"
       because macros are not expanded before the code is passed to
       YCF, and YCF needs to know the size of the array */
#endif
    stack_N18_N26 = WSTACK_DEFAULT_VALUE(stack_default_wstack_N17_N25, ERTS_ALC_T_MAP_TRAP);
/* YCF Replaced special code */

/* YCF Replaced special code */



    root_N19_N27 = (hashmap_head_t*) boxed_val(node_N24_N32);
    hp_N20_N28  = HAlloc(p_N23_N31, root_N19_N27->size * 2);
    hashmap_iterator_init(&stack_N18_N26, node_N24_N32, 0);
    while ((kv_N21_N29=hashmap_iterator_next(&stack_N18_N26)) != NULL)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 1;
  goto ycf_do_yield_label_hashmap_values;
  ycf_yield_location_label_1:;
}

}
    {
	res_N22_N30 = CONS(hp_N20_N28, CDR(kv_N21_N29), res_N22_N30);
	hp_N20_N28 += 2;
    }

}
    DESTROY_WSTACK_EXPLICIT_DEFAULT_ARRAY(stack_N18_N26, stack_default_wstack_N17_N25);
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

    return res_N22_N30;
}

{
  struct gen_ycf_trap_state_for_hashmap_values* ycf_my_trap_state;
  ycf_do_yield_label_hashmap_values:;

    {
        ENSURE_WSTACK_HEAP_STACK_ARRAY(stack_N18_N26, stack_default_wstack_N17_N25);
    }

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_hashmap_values), ycf_yield_alloc_free_context);
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
    memcpy(ycf_my_trap_state->stack_default_wstack_N17_N25, stack_default_wstack_N17_N25, 16 *  sizeof(
    Eterm));
    ycf_my_trap_state->stack_N18_N26 = stack_N18_N26;
    ycf_my_trap_state->root_N19_N27 = root_N19_N27;
    ycf_my_trap_state->hp_N20_N28 = hp_N20_N28;
    ycf_my_trap_state->kv_N21_N29 = kv_N21_N29;
    ycf_my_trap_state->res_N22_N30 = res_N22_N30;
    ycf_my_trap_state->p_N23_N31 = p_N23_N31;
    ycf_my_trap_state->node_N24_N32 = node_N24_N32;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   Eterm  const ycf_unused_ret_value;
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



struct gen_ycf_trap_state_for_hashmap_from_unsorted_array {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Uint jx_N34_N47;
    Uint ix_N35_N48;
    Uint lx_N36_N49;
    Uint cx_N37_N50;
    Eterm res_N38_N51;
	Eterm *hp_N33_N52;
void* ycf_sub_fun_trap_state_wb_N44;

void* ycf_sub_fun_trap_state_wb_N45;

void* ycf_sub_fun_trap_state_wb_N46;ErtsHeapFactory* factory_N39_N53;
                                         hxnode_t *hxns_N40_N54; Uint n_N41_N55;
                                         int reject_dupkeys_N42_N56;
                                         ErtsAlcType_t temp_memory_allocator_N43_N57;
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

static void hashmap_from_unsorted_array_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_hashmap_from_unsorted_array* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Uint jx_N34_N47;
    Uint ix_N35_N48;
    Uint lx_N36_N49;
    Uint cx_N37_N50;
    Eterm res_N38_N51;
	Eterm *hp_N33_N52;
void* ycf_sub_fun_trap_state_wb_N44;

void* ycf_sub_fun_trap_state_wb_N45;

void* ycf_sub_fun_trap_state_wb_N46;ErtsHeapFactory* factory_N39_N53;
                                         hxnode_t *hxns_N40_N54; Uint n_N41_N55;
                                         int reject_dupkeys_N42_N56;
                                         ErtsAlcType_t temp_memory_allocator_N43_N57;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    jx_N34_N47 = ycf_my_trap_state->jx_N34_N47;
    ix_N35_N48 = ycf_my_trap_state->ix_N35_N48;
    lx_N36_N49 = ycf_my_trap_state->lx_N36_N49;
    cx_N37_N50 = ycf_my_trap_state->cx_N37_N50;
    res_N38_N51 = ycf_my_trap_state->res_N38_N51;
    hp_N33_N52 = ycf_my_trap_state->hp_N33_N52;
    ycf_sub_fun_trap_state_wb_N44 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N44;
    ycf_sub_fun_trap_state_wb_N45 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N45;
    ycf_sub_fun_trap_state_wb_N46 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N46;
    factory_N39_N53 = ycf_my_trap_state->factory_N39_N53;
    hxns_N40_N54 = ycf_my_trap_state->hxns_N40_N54;
    n_N41_N55 = ycf_my_trap_state->n_N41_N55;
    reject_dupkeys_N42_N56 = ycf_my_trap_state->reject_dupkeys_N42_N56;
    temp_memory_allocator_N43_N57 = ycf_my_trap_state->temp_memory_allocator_N43_N57;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */
{
  if(ycf_sub_fun_trap_state_wb_N44 != NULL)
{     erts_qsort_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N44);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N45 != NULL)
{     erts_qsort_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N45);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N46 != NULL)
{     hashmap_from_sorted_unique_array_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N46);
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

   static  Eterm  hashmap_from_unsorted_array_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_hashmap_from_unsorted_array* ycf_my_trap_state = *ycf_trap_state;
return hashmap_from_unsorted_array_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->factory_N39_N53,ycf_my_trap_state->hxns_N40_N54,ycf_my_trap_state->n_N41_N55,ycf_my_trap_state->reject_dupkeys_N42_N56,ycf_my_trap_state->temp_memory_allocator_N43_N57)
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
static Eterm hashmap_from_unsorted_array_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,ErtsHeapFactory* factory_N39_N53,
                                         hxnode_t *hxns_N40_N54, Uint n_N41_N55,
                                         int reject_dupkeys_N42_N56,
                                         ErtsAlcType_t temp_memory_allocator_N43_N57) {
    Uint jx_N34_N47;
    Uint ix_N35_N48;
    Uint lx_N36_N49;
    Uint cx_N37_N50;
    Eterm res_N38_N51;
	Eterm *hp_N33_N52;
void* ycf_sub_fun_trap_state_wb_N44;

void* ycf_sub_fun_trap_state_wb_N45;

void* ycf_sub_fun_trap_state_wb_N46;
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
     struct gen_ycf_trap_state_for_hashmap_from_unsorted_array* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    jx_N34_N47 = ycf_my_trap_state->jx_N34_N47;
    ix_N35_N48 = ycf_my_trap_state->ix_N35_N48;
    lx_N36_N49 = ycf_my_trap_state->lx_N36_N49;
    cx_N37_N50 = ycf_my_trap_state->cx_N37_N50;
    res_N38_N51 = ycf_my_trap_state->res_N38_N51;
    hp_N33_N52 = ycf_my_trap_state->hp_N33_N52;
    ycf_sub_fun_trap_state_wb_N44 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N44;
    ycf_sub_fun_trap_state_wb_N45 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N45;
    ycf_sub_fun_trap_state_wb_N46 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N46;
    factory_N39_N53 = ycf_my_trap_state->factory_N39_N53;
    hxns_N40_N54 = ycf_my_trap_state->hxns_N40_N54;
    n_N41_N55 = ycf_my_trap_state->n_N41_N55;
    reject_dupkeys_N42_N56 = ycf_my_trap_state->reject_dupkeys_N42_N56;
    temp_memory_allocator_N43_N57 = ycf_my_trap_state->temp_memory_allocator_N43_N57;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     ycf_nr_of_reductions = *ycf_nr_of_reductions_param;
     switch(ycf_trap_location){
case 1: goto ycf_yield_location_label_1;
case 2: goto ycf_yield_location_label_2;
case 3: goto ycf_yield_location_label_3;
case 4: goto ycf_yield_location_label_4;
case 5: goto ycf_yield_location_label_5;
case 6: goto ycf_yield_location_label_6;
case 7: goto ycf_yield_location_label_7;
case 8: goto ycf_yield_location_label_8;
case 9: goto ycf_yield_location_label_9;
case 10: goto ycf_yield_location_label_10;
case 11: goto ycf_yield_location_label_11;
case 12: goto ycf_yield_location_label_12;

}
  }
}
{

ycf_sub_fun_trap_state_wb_N44 = NULL;

ycf_sub_fun_trap_state_wb_N45 = NULL;

ycf_sub_fun_trap_state_wb_N46 = NULL;

}
    jx_N34_N47 = 0;
    ix_N35_N48 = 0;

    ASSERT(n_N41_N55 > 0);
{

ycf_sub_fun_trap_state_wb_N44 = NULL;
{
 erts_qsort_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N44,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,hxns_N40_N54, n_N41_N55, sizeof(hxnode_t), hxnodecmp);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N44)){
   ycf_trap_location = 1;
   goto ycf_do_yield_label_hashmap_from_unsorted_array;
  ycf_yield_location_label_1:;
    erts_qsort_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N44,
                            ycf_extra_context);
}


}
/* YCF Replaced special code */

}


    ix_N35_N48 = 0, cx_N37_N50 = 0;
    while(ix_N35_N48 < n_N41_N55 - 1)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 4;
  goto ycf_do_yield_label_hashmap_from_unsorted_array;
  ycf_yield_location_label_4:;
}

}
    {
	if (hxns_N40_N54[ix_N35_N48].hx == hxns_N40_N54[ix_N35_N48+1].hx)
{
    {

	    /* find region of equal hash values */
	    jx_N34_N47 = ix_N35_N48 + 2;
	    while(jx_N34_N47 < n_N41_N55 && hxns_N40_N54[ix_N35_N48].hx == hxns_N40_N54[jx_N34_N47].hx)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 5;
  goto ycf_do_yield_label_hashmap_from_unsorted_array;
  ycf_yield_location_label_5:;
}

}

{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 6;
  goto ycf_do_yield_label_hashmap_from_unsorted_array;
  ycf_yield_location_label_6:;
}

}
    { jx_N34_N47++; }

}

}
{


ycf_sub_fun_trap_state_wb_N45 = NULL;
{
 erts_qsort_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N45,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,&hxns_N40_N54[ix_N35_N48], jx_N34_N47 - ix_N35_N48, sizeof(hxnode_t), hxnodecmpkey);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N45)){
   ycf_trap_location = 2;
   goto ycf_do_yield_label_hashmap_from_unsorted_array;
  ycf_yield_location_label_2:;
    erts_qsort_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N45,
                            ycf_extra_context);
}


}
/* YCF Replaced special code */

}



	    while(ix_N35_N48 < jx_N34_N47)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 7;
  goto ycf_do_yield_label_hashmap_from_unsorted_array;
  ycf_yield_location_label_7:;
}

}

{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 8;
  goto ycf_do_yield_label_hashmap_from_unsorted_array;
  ycf_yield_location_label_8:;
}

}
    {
		lx_N36_N49 = ix_N35_N48;
		while(++ix_N35_N48 < jx_N34_N47 && EQ(CAR(list_val(hxns_N40_N54[ix_N35_N48].val)),
				      CAR(list_val(hxns_N40_N54[lx_N36_N49].val))))
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 9;
  goto ycf_do_yield_label_hashmap_from_unsorted_array;
  ycf_yield_location_label_9:;
}

}

{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 10;
  goto ycf_do_yield_label_hashmap_from_unsorted_array;
  ycf_yield_location_label_10:;
}

}

{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 11;
  goto ycf_do_yield_label_hashmap_from_unsorted_array;
  ycf_yield_location_label_11:;
}

}

{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 12;
  goto ycf_do_yield_label_hashmap_from_unsorted_array;
  ycf_yield_location_label_12:;
}

}
    {
                    if (reject_dupkeys_N42_N56)
{
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

   
                        return THE_NON_VALUE;
}

}

                    if (hxns_N40_N54[ix_N35_N48].i > hxns_N40_N54[lx_N36_N49].i)
{
    {
			lx_N36_N49 = ix_N35_N48;
		    }

}
		}

}

}

}

}
		hxns_N40_N54[cx_N37_N50].hx  = hxns_N40_N54[lx_N36_N49].hx;
		hxns_N40_N54[cx_N37_N50].val = hxns_N40_N54[lx_N36_N49].val;
		cx_N37_N50++;
	    }

}

}
	    ix_N35_N48 = jx_N34_N47;
	    continue;
	}

}
	if (ix_N35_N48 > cx_N37_N50)
{
    {
	    hxns_N40_N54[cx_N37_N50].hx  = hxns_N40_N54[ix_N35_N48].hx;
	    hxns_N40_N54[cx_N37_N50].val = hxns_N40_N54[ix_N35_N48].val;
	}

}
	cx_N37_N50++;
	ix_N35_N48++;
    }

}

    if (ix_N35_N48 < n_N41_N55)
{
    {
	hxns_N40_N54[cx_N37_N50].hx  = hxns_N40_N54[ix_N35_N48].hx;
	hxns_N40_N54[cx_N37_N50].val = hxns_N40_N54[ix_N35_N48].val;
	cx_N37_N50++;
    }

}

    if (cx_N37_N50 > 1)
{
{


ycf_sub_fun_trap_state_wb_N46 = NULL;
{
  Eterm  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =  hashmap_from_sorted_unique_array_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N46,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,factory_N39_N53, hxns_N40_N54, cx_N37_N50,
                                               temp_memory_allocator_N43_N57);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N46)){
   ycf_trap_location = 3;
   goto ycf_do_yield_label_hashmap_from_unsorted_array;
  ycf_yield_location_label_3:;
   ycf_tmp_fun_call_tmp_var =  hashmap_from_sorted_unique_array_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N46,
                            ycf_extra_context);
}

	/* recursive decompose array */
	res_N38_N51 = ycf_tmp_fun_call_tmp_var;


}
/* YCF Replaced special code */

}


} else
{
    {

	/* we only have one item, either because n was 1 or
	 * because we hade multiples of the same key.
	 *
	 * hash value has been swizzled, need to drag it down to get the
	 * correct slot. */

	hp_N33_N52    = erts_produce_heap(factory_N39_N53, HAMT_HEAD_BITMAP_SZ(1), 0);
	hp_N33_N52[0] = MAP_HEADER_HAMT_HEAD_BITMAP(1 << ((hxns_N40_N54[0].hx >> 0x1c) & 0xf));
	hp_N33_N52[1] = 1;
	hp_N33_N52[2] = hxns_N40_N54[0].val;
	res_N38_N51   = make_hashmap(hp_N33_N52);
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


    return res_N38_N51;
}

{
  struct gen_ycf_trap_state_for_hashmap_from_unsorted_array* ycf_my_trap_state;
  ycf_do_yield_label_hashmap_from_unsorted_array:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_hashmap_from_unsorted_array), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->jx_N34_N47 = jx_N34_N47;
    ycf_my_trap_state->ix_N35_N48 = ix_N35_N48;
    ycf_my_trap_state->lx_N36_N49 = lx_N36_N49;
    ycf_my_trap_state->cx_N37_N50 = cx_N37_N50;
    ycf_my_trap_state->res_N38_N51 = res_N38_N51;
    ycf_my_trap_state->hp_N33_N52 = hp_N33_N52;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N44 = ycf_sub_fun_trap_state_wb_N44;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N45 = ycf_sub_fun_trap_state_wb_N45;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N46 = ycf_sub_fun_trap_state_wb_N46;
    ycf_my_trap_state->factory_N39_N53 = factory_N39_N53;
    ycf_my_trap_state->hxns_N40_N54 = hxns_N40_N54;
    ycf_my_trap_state->n_N41_N55 = n_N41_N55;
    ycf_my_trap_state->reject_dupkeys_N42_N56 = reject_dupkeys_N42_N56;
    ycf_my_trap_state->temp_memory_allocator_N43_N57 = temp_memory_allocator_N43_N57;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   Eterm  const ycf_unused_ret_value;
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



struct gen_ycf_trap_state_for_hashmap_from_sorted_unique_array {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm res_N63_N72;
    Uint ix_N64_N73;
    Uint elems_N65_N74;
    hxnode_t *tmp_N66_N75;
            Uint n_colliders_N58_N76;
            Eterm* hp_N59_N77;
            Eterm collision_node_N60_N78;
            Uint jx_N61_N79;
            Uint i_N62_N80;
void* ycf_sub_fun_trap_state_wb_N71;ErtsHeapFactory* factory_N67_N81;
                                              hxnode_t *hxns_N68_N82; Uint n_N69_N83;
                                              ErtsAlcType_t temp_memory_allocator_N70_N84;
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

static void hashmap_from_sorted_unique_array_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_hashmap_from_sorted_unique_array* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm res_N63_N72;
    Uint ix_N64_N73;
    Uint elems_N65_N74;
    hxnode_t *tmp_N66_N75;
            Uint n_colliders_N58_N76;
            Eterm* hp_N59_N77;
            Eterm collision_node_N60_N78;
            Uint jx_N61_N79;
            Uint i_N62_N80;
void* ycf_sub_fun_trap_state_wb_N71;ErtsHeapFactory* factory_N67_N81;
                                              hxnode_t *hxns_N68_N82; Uint n_N69_N83;
                                              ErtsAlcType_t temp_memory_allocator_N70_N84;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    res_N63_N72 = ycf_my_trap_state->res_N63_N72;
    ix_N64_N73 = ycf_my_trap_state->ix_N64_N73;
    elems_N65_N74 = ycf_my_trap_state->elems_N65_N74;
    tmp_N66_N75 = ycf_my_trap_state->tmp_N66_N75;
    n_colliders_N58_N76 = ycf_my_trap_state->n_colliders_N58_N76;
    hp_N59_N77 = ycf_my_trap_state->hp_N59_N77;
    collision_node_N60_N78 = ycf_my_trap_state->collision_node_N60_N78;
    jx_N61_N79 = ycf_my_trap_state->jx_N61_N79;
    i_N62_N80 = ycf_my_trap_state->i_N62_N80;
    ycf_sub_fun_trap_state_wb_N71 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N71;
    factory_N67_N81 = ycf_my_trap_state->factory_N67_N81;
    hxns_N68_N82 = ycf_my_trap_state->hxns_N68_N82;
    n_N69_N83 = ycf_my_trap_state->n_N69_N83;
    temp_memory_allocator_N70_N84 = ycf_my_trap_state->temp_memory_allocator_N70_N84;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */
{

    {
        if (tmp_N66_N75 != NULL) {
            /* Execution of this function got destroyed while yielding in
               the loop above */
            erts_free(temp_memory_allocator_N70_N84, (void *) tmp_N66_N75);
        }
    }}
{
  if(ycf_sub_fun_trap_state_wb_N71 != NULL)
{     hashmap_from_chunked_array_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N71);
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

   static  Eterm  hashmap_from_sorted_unique_array_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_hashmap_from_sorted_unique_array* ycf_my_trap_state = *ycf_trap_state;
return hashmap_from_sorted_unique_array_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->factory_N67_N81,ycf_my_trap_state->hxns_N68_N82,ycf_my_trap_state->n_N69_N83,ycf_my_trap_state->temp_memory_allocator_N70_N84)
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
static Eterm hashmap_from_sorted_unique_array_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,ErtsHeapFactory* factory_N67_N81,
                                              hxnode_t *hxns_N68_N82, Uint n_N69_N83,
                                              ErtsAlcType_t temp_memory_allocator_N70_N84) {
    Eterm res_N63_N72;
    Uint ix_N64_N73;
    Uint elems_N65_N74;
    hxnode_t *tmp_N66_N75;
            Uint n_colliders_N58_N76;
            Eterm* hp_N59_N77;
            Eterm collision_node_N60_N78;
            Uint jx_N61_N79;
            Uint i_N62_N80;
void* ycf_sub_fun_trap_state_wb_N71;
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
     struct gen_ycf_trap_state_for_hashmap_from_sorted_unique_array* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    res_N63_N72 = ycf_my_trap_state->res_N63_N72;
    ix_N64_N73 = ycf_my_trap_state->ix_N64_N73;
    elems_N65_N74 = ycf_my_trap_state->elems_N65_N74;
    tmp_N66_N75 = ycf_my_trap_state->tmp_N66_N75;
    n_colliders_N58_N76 = ycf_my_trap_state->n_colliders_N58_N76;
    hp_N59_N77 = ycf_my_trap_state->hp_N59_N77;
    collision_node_N60_N78 = ycf_my_trap_state->collision_node_N60_N78;
    jx_N61_N79 = ycf_my_trap_state->jx_N61_N79;
    i_N62_N80 = ycf_my_trap_state->i_N62_N80;
    ycf_sub_fun_trap_state_wb_N71 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N71;
    factory_N67_N81 = ycf_my_trap_state->factory_N67_N81;
    hxns_N68_N82 = ycf_my_trap_state->hxns_N68_N82;
    n_N69_N83 = ycf_my_trap_state->n_N69_N83;
    temp_memory_allocator_N70_N84 = ycf_my_trap_state->temp_memory_allocator_N70_N84;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     ycf_nr_of_reductions = *ycf_nr_of_reductions_param;
     switch(ycf_trap_location){
case 1: goto ycf_yield_location_label_1;
case 2: goto ycf_yield_location_label_2;
case 3: goto ycf_yield_location_label_3;
case 4: goto ycf_yield_location_label_4;
case 5: goto ycf_yield_location_label_5;
case 6: goto ycf_yield_location_label_6;

}
  }
}
{

ycf_sub_fun_trap_state_wb_N71 = NULL;

}
    res_N63_N72 = NIL;
    tmp_N66_N75 = NULL;

    ix_N64_N73 = 0;
    elems_N65_N74 = 1;
    while (ix_N64_N73 < n_N69_N83 - 1)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 2;
  goto ycf_do_yield_label_hashmap_from_sorted_unique_array;
  ycf_yield_location_label_2:;
}

}
    {
	if (hxns_N68_N82[ix_N64_N73].hx == hxns_N68_N82[ix_N64_N73+1].hx)
{
    {
            jx_N61_N79 = ix_N64_N73 + 2;

	    while (jx_N61_N79 < n_N69_N83 && hxns_N68_N82[ix_N64_N73].hx == hxns_N68_N82[jx_N61_N79].hx)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 3;
  goto ycf_do_yield_label_hashmap_from_sorted_unique_array;
  ycf_yield_location_label_3:;
}

}

{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 4;
  goto ycf_do_yield_label_hashmap_from_sorted_unique_array;
  ycf_yield_location_label_4:;
}

}
{
   
                jx_N61_N79++;
}

}

}

            n_colliders_N58_N76 = jx_N61_N79 - ix_N64_N73;
            hp_N59_N77 = erts_produce_heap(factory_N67_N81, HAMT_COLLISION_NODE_SZ(n_colliders_N58_N76),
                                   HALLOC_EXTRA);
            collision_node_N60_N78 = make_tuple(hp_N59_N77);

            *hp_N59_N77++ = MAP_HEADER_HAMT_COLLISION_NODE(n_colliders_N58_N76);
            for (i_N62_N80 = 0; i_N62_N80 < n_colliders_N58_N76; i_N62_N80++)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 5;
  goto ycf_do_yield_label_hashmap_from_sorted_unique_array;
  ycf_yield_location_label_5:;
}

}

{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 6;
  goto ycf_do_yield_label_hashmap_from_sorted_unique_array;
  ycf_yield_location_label_6:;
}

}
    {
                *hp_N59_N77++ = hxns_N68_N82[ix_N64_N73 + i_N62_N80].val;
                ASSERT(i_N62_N80 == 0
                       || CMP_TERM(CAR(list_val(hxns_N68_N82[ix_N64_N73+i_N62_N80-1].val)),
                                   CAR(list_val(hxns_N68_N82[ix_N64_N73+i_N62_N80].val))) < 0);
            }

}

}

            hxns_N68_N82[ix_N64_N73].val  = collision_node_N60_N78;
            hxns_N68_N82[ix_N64_N73].skip = n_colliders_N58_N76;
            ix_N64_N73 = jx_N61_N79;

            if (ix_N64_N73 < n_N69_N83)
{
    { elems_N65_N74++; }

}
            continue;
	}

}
        hxns_N68_N82[ix_N64_N73].skip = 1;
        elems_N65_N74++;
        ix_N64_N73++;
    }

}
/* YCF Replaced special code */

{

ycf_sub_fun_trap_state_wb_N71 = NULL;
{
  Eterm  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =  hashmap_from_chunked_array_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N71,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,factory_N67_N81, hxns_N68_N82, elems_N65_N74, n_N69_N83, temp_memory_allocator_N70_N84);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N71)){
   ycf_trap_location = 1;
   goto ycf_do_yield_label_hashmap_from_sorted_unique_array;
  ycf_yield_location_label_1:;
   ycf_tmp_fun_call_tmp_var =  hashmap_from_chunked_array_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N71,
                            ycf_extra_context);
}


    res_N63_N72 = ycf_tmp_fun_call_tmp_var;


}
/* YCF Replaced special code */

}


    ERTS_FACTORY_HOLE_CHECK(factory_N67_N81);
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


    return res_N63_N72;
}

{
  struct gen_ycf_trap_state_for_hashmap_from_sorted_unique_array* ycf_my_trap_state;
  ycf_do_yield_label_hashmap_from_sorted_unique_array:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_hashmap_from_sorted_unique_array), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->res_N63_N72 = res_N63_N72;
    ycf_my_trap_state->ix_N64_N73 = ix_N64_N73;
    ycf_my_trap_state->elems_N65_N74 = elems_N65_N74;
    ycf_my_trap_state->tmp_N66_N75 = tmp_N66_N75;
    ycf_my_trap_state->n_colliders_N58_N76 = n_colliders_N58_N76;
    ycf_my_trap_state->hp_N59_N77 = hp_N59_N77;
    ycf_my_trap_state->collision_node_N60_N78 = collision_node_N60_N78;
    ycf_my_trap_state->jx_N61_N79 = jx_N61_N79;
    ycf_my_trap_state->i_N62_N80 = i_N62_N80;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N71 = ycf_sub_fun_trap_state_wb_N71;
    ycf_my_trap_state->factory_N67_N81 = factory_N67_N81;
    ycf_my_trap_state->hxns_N68_N82 = hxns_N68_N82;
    ycf_my_trap_state->n_N69_N83 = n_N69_N83;
    ycf_my_trap_state->temp_memory_allocator_N70_N84 = temp_memory_allocator_N70_N84;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   Eterm  const ycf_unused_ret_value;
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



struct gen_ycf_trap_state_for_hashmap_from_chunked_array {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Uint ix_N86_N108;
    Uint d_N87_N109;
    Uint dn_N88_N110;
    Uint dc_N89_N111;
    Uint slot_N90_N112;
    Uint elems_N91_N113;
    Uint32 v_N92_N114;
    Uint32 vp_N93_N115;
    Uint32 vn_N94_N116;
    Uint32 hdr_N95_N117;
    Uint bp_N96_N118;
    Uint sz_N97_N119;
    Eterm res_N98_N120;
    Eterm *hp_N99_N121;
    Eterm *nhp_N100_N122;
    Eterm stack_default_estack_N101_N123[16];    ErtsEStack stack_N102_N124;
	    int wat_N85_N125;ErtsHeapFactory *factory_N103_N126; hxnode_t *hxns_N104_N127; Uint n_N105_N128;
                                        Uint size_N106_N129;
                                        ErtsAlcType_t temp_memory_allocator_N107_N130;
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

static void hashmap_from_chunked_array_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_hashmap_from_chunked_array* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Uint ix_N86_N108;
    Uint d_N87_N109;
    Uint dn_N88_N110;
    Uint dc_N89_N111;
    Uint slot_N90_N112;
    Uint elems_N91_N113;
    Uint32 v_N92_N114;
    Uint32 vp_N93_N115;
    Uint32 vn_N94_N116;
    Uint32 hdr_N95_N117;
    Uint bp_N96_N118;
    Uint sz_N97_N119;
    Eterm res_N98_N120;
    Eterm *hp_N99_N121;
    Eterm *nhp_N100_N122;
    Eterm stack_default_estack_N101_N123[16];    ErtsEStack stack_N102_N124;
	    int wat_N85_N125;ErtsHeapFactory *factory_N103_N126; hxnode_t *hxns_N104_N127; Uint n_N105_N128;
                                        Uint size_N106_N129;
                                        ErtsAlcType_t temp_memory_allocator_N107_N130;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    ix_N86_N108 = ycf_my_trap_state->ix_N86_N108;
    d_N87_N109 = ycf_my_trap_state->d_N87_N109;
    dn_N88_N110 = ycf_my_trap_state->dn_N88_N110;
    dc_N89_N111 = ycf_my_trap_state->dc_N89_N111;
    slot_N90_N112 = ycf_my_trap_state->slot_N90_N112;
    elems_N91_N113 = ycf_my_trap_state->elems_N91_N113;
    v_N92_N114 = ycf_my_trap_state->v_N92_N114;
    vp_N93_N115 = ycf_my_trap_state->vp_N93_N115;
    vn_N94_N116 = ycf_my_trap_state->vn_N94_N116;
    hdr_N95_N117 = ycf_my_trap_state->hdr_N95_N117;
    bp_N96_N118 = ycf_my_trap_state->bp_N96_N118;
    sz_N97_N119 = ycf_my_trap_state->sz_N97_N119;
    res_N98_N120 = ycf_my_trap_state->res_N98_N120;
    hp_N99_N121 = ycf_my_trap_state->hp_N99_N121;
    nhp_N100_N122 = ycf_my_trap_state->nhp_N100_N122;
    memcpy(stack_default_estack_N101_N123, ycf_my_trap_state->stack_default_estack_N101_N123, 16 *  sizeof(
    Eterm));
    stack_N102_N124 = ycf_my_trap_state->stack_N102_N124;
    wat_N85_N125 = ycf_my_trap_state->wat_N85_N125;
    factory_N103_N126 = ycf_my_trap_state->factory_N103_N126;
    hxns_N104_N127 = ycf_my_trap_state->hxns_N104_N127;
    n_N105_N128 = ycf_my_trap_state->n_N105_N128;
    size_N106_N129 = ycf_my_trap_state->size_N106_N129;
    temp_memory_allocator_N107_N130 = ycf_my_trap_state->temp_memory_allocator_N107_N130;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */
{

    {
        DESTROY_ESTACK_EXPLICIT_DEFAULT_ARRAY(stack_N102_N124, stack_default_estack_N101_N123);
    }}

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

   static  Eterm  hashmap_from_chunked_array_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_hashmap_from_chunked_array* ycf_my_trap_state = *ycf_trap_state;
return hashmap_from_chunked_array_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->factory_N103_N126,ycf_my_trap_state->hxns_N104_N127,ycf_my_trap_state->n_N105_N128,ycf_my_trap_state->size_N106_N129,ycf_my_trap_state->temp_memory_allocator_N107_N130)
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
static Eterm hashmap_from_chunked_array_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,ErtsHeapFactory *factory_N103_N126, hxnode_t *hxns_N104_N127, Uint n_N105_N128,
                                        Uint size_N106_N129,
                                        ErtsAlcType_t temp_memory_allocator_N107_N130) {
    Uint ix_N86_N108;
    Uint d_N87_N109;
    Uint dn_N88_N110;
    Uint dc_N89_N111;
    Uint slot_N90_N112;
    Uint elems_N91_N113;
    Uint32 v_N92_N114;
    Uint32 vp_N93_N115;
    Uint32 vn_N94_N116;
    Uint32 hdr_N95_N117;
    Uint bp_N96_N118;
    Uint sz_N97_N119;
    Eterm res_N98_N120;
    Eterm *hp_N99_N121;
    Eterm *nhp_N100_N122;
    Eterm stack_default_estack_N101_N123[16];    ErtsEStack stack_N102_N124;
	    int wat_N85_N125;
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
     struct gen_ycf_trap_state_for_hashmap_from_chunked_array* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    ix_N86_N108 = ycf_my_trap_state->ix_N86_N108;
    d_N87_N109 = ycf_my_trap_state->d_N87_N109;
    dn_N88_N110 = ycf_my_trap_state->dn_N88_N110;
    dc_N89_N111 = ycf_my_trap_state->dc_N89_N111;
    slot_N90_N112 = ycf_my_trap_state->slot_N90_N112;
    elems_N91_N113 = ycf_my_trap_state->elems_N91_N113;
    v_N92_N114 = ycf_my_trap_state->v_N92_N114;
    vp_N93_N115 = ycf_my_trap_state->vp_N93_N115;
    vn_N94_N116 = ycf_my_trap_state->vn_N94_N116;
    hdr_N95_N117 = ycf_my_trap_state->hdr_N95_N117;
    bp_N96_N118 = ycf_my_trap_state->bp_N96_N118;
    sz_N97_N119 = ycf_my_trap_state->sz_N97_N119;
    res_N98_N120 = ycf_my_trap_state->res_N98_N120;
    hp_N99_N121 = ycf_my_trap_state->hp_N99_N121;
    nhp_N100_N122 = ycf_my_trap_state->nhp_N100_N122;
    memcpy(stack_default_estack_N101_N123, ycf_my_trap_state->stack_default_estack_N101_N123, 16 *  sizeof(
    Eterm));
    stack_N102_N124 = ycf_my_trap_state->stack_N102_N124;
    wat_N85_N125 = ycf_my_trap_state->wat_N85_N125;
    factory_N103_N126 = ycf_my_trap_state->factory_N103_N126;
    hxns_N104_N127 = ycf_my_trap_state->hxns_N104_N127;
    n_N105_N128 = ycf_my_trap_state->n_N105_N128;
    size_N106_N129 = ycf_my_trap_state->size_N106_N129;
    temp_memory_allocator_N107_N130 = ycf_my_trap_state->temp_memory_allocator_N107_N130;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     ycf_nr_of_reductions = *ycf_nr_of_reductions_param;
     switch(ycf_trap_location){
case 1: goto ycf_yield_location_label_1;
case 2: goto ycf_yield_location_label_2;
case 3: goto ycf_yield_location_label_3;
case 4: goto ycf_yield_location_label_4;
case 5: goto ycf_yield_location_label_5;
case 6: goto ycf_yield_location_label_6;
case 7: goto ycf_yield_location_label_7;
case 8: goto ycf_yield_location_label_8;
case 9: goto ycf_yield_location_label_9;
case 10: goto ycf_yield_location_label_10;
case 11: goto ycf_yield_location_label_11;
case 12: goto ycf_yield_location_label_12;
case 13: goto ycf_yield_location_label_13;
case 14: goto ycf_yield_location_label_14;
case 15: goto ycf_yield_location_label_15;
case 16: goto ycf_yield_location_label_16;
case 17: goto ycf_yield_location_label_17;
case 18: goto ycf_yield_location_label_18;
case 19: goto ycf_yield_location_label_19;

}
  }
}
{

}
    res_N98_N120 = NIL;
    hp_N99_N121 = NULL;
    nhp_N100_N122 = NULL;
#if DEF_ESTACK_SIZE != (16)
    #error "The macro DEF_ESTACK_SIZE has changed from 16 (need to change constant above)"
    /* We cannot use "Eterm stack_default_estack[DEF_ESTACK_SIZE];"
       because macros are not expanded before the code is passed to
       YCF, and YCF needs to know the size of the array */
#endif

{

/* moved declaration (stack)*/

}
    stack_N102_N124 = ESTACK_DEFAULT_VALUE(stack_default_estack_N101_N123, temp_memory_allocator_N107_N130);
/* YCF Replaced special code */

/* YCF Replaced special code */


    /* if we get here with only one element then
     * we have eight levels of collisions
     */

    if (n_N105_N128 == 1)
{
    {
	res_N98_N120 = hxns_N104_N127[0].val;
	v_N92_N114   = hxns_N104_N127[0].hx;
	for (d_N87_N109 = 7; d_N87_N109 > 0; d_N87_N109--)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 1;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_1:;
}

}
    {
	    slot_N90_N112  = maskval(v_N92_N114,d_N87_N109);
	    hp_N99_N121    = erts_produce_heap(factory_N103_N126, HAMT_NODE_BITMAP_SZ(1), HALLOC_EXTRA);
	    hp_N99_N121[0] = MAP_HEADER_HAMT_NODE_BITMAP(1 << slot_N90_N112);
	    hp_N99_N121[1] = res_N98_N120;
	    res_N98_N120   = make_hashmap(hp_N99_N121);
	}

}

	slot_N90_N112  = maskval(v_N92_N114,0);
	hp_N99_N121    = erts_produce_heap(factory_N103_N126, 3, 0);

        hp_N99_N121[0] = MAP_HEADER_HAMT_HEAD_BITMAP(1 << slot_N90_N112);
        hp_N99_N121[1] = size_N106_N129;
        hp_N99_N121[2] = res_N98_N120;
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

	return make_hashmap(hp_N99_N121);
}
    }

}

    /* push initial nodes on the stack,
     * this is the starting depth */

    ix_N86_N108 = 0;
    d_N87_N109  = 0;
    vp_N93_N115 = hxns_N104_N127[ix_N86_N108].hx;
    v_N92_N114  = hxns_N104_N127[ix_N86_N108 + hxns_N104_N127[ix_N86_N108].skip].hx;

    ASSERT(vp_N93_N115 > v_N92_N114);
    slot_N90_N112 = maskval(vp_N93_N115,d_N87_N109);

    while(slot_N90_N112 == maskval(v_N92_N114,d_N87_N109))
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 2;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_2:;
}

}
    {
	ESTACK_PUSH(stack_N102_N124, 1 << slot_N90_N112);
	d_N87_N109++;
	slot_N90_N112 = maskval(vp_N93_N115,d_N87_N109);
    }

}

    res_N98_N120 = hxns_N104_N127[ix_N86_N108].val;

    if (hxns_N104_N127[ix_N86_N108].skip > 1)
{
    {
	dc_N89_N111 = 7;
	/* build collision nodes */
	while (dc_N89_N111 > d_N87_N109)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 3;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_3:;
}

}
    {
	    hp_N99_N121    = erts_produce_heap(factory_N103_N126, HAMT_NODE_BITMAP_SZ(1), HALLOC_EXTRA);
	    hp_N99_N121[0] = MAP_HEADER_HAMT_NODE_BITMAP(1 << maskval(vp_N93_N115,dc_N89_N111));
	    hp_N99_N121[1] = res_N98_N120;
	    res_N98_N120   = make_hashmap(hp_N99_N121);
	    dc_N89_N111--;
	}

}
    }

}

    ESTACK_PUSH2(stack_N102_N124,res_N98_N120,1 << slot_N90_N112);

    /* all of the other nodes .. */
    elems_N91_N113 = n_N105_N128 - 2; /* remove first and last elements */
    while(elems_N91_N113--)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 4;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_4:;
}

}
    {
	hdr_N95_N117 = ESTACK_POP(stack_N102_N124);
	ix_N86_N108  = ix_N86_N108 + hxns_N104_N127[ix_N86_N108].skip;

	/* determine if node or subtree should be built by looking
	 * at the next value. */

	vn_N94_N116 = hxns_N104_N127[ix_N86_N108 + hxns_N104_N127[ix_N86_N108].skip].hx;
	dn_N88_N110 = cdepth(v_N92_N114,vn_N94_N116);
	ASSERT(v_N92_N114 > vn_N94_N116);

	res_N98_N120 = hxns_N104_N127[ix_N86_N108].val;

	if (hxns_N104_N127[ix_N86_N108].skip > 1)
{
    {
	    wat_N85_N125 = (d_N87_N109 > dn_N88_N110) ? d_N87_N109 : dn_N88_N110;
	    dc_N89_N111 = 7;
	    /* build collision nodes */
	    while (dc_N89_N111 > wat_N85_N125)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 5;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_5:;
}

}

{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 6;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_6:;
}

}
    {
		hp_N99_N121    = erts_produce_heap(factory_N103_N126, HAMT_NODE_BITMAP_SZ(1), HALLOC_EXTRA);
		hp_N99_N121[0] = MAP_HEADER_HAMT_NODE_BITMAP(1 << maskval(v_N92_N114,dc_N89_N111));
		hp_N99_N121[1] = res_N98_N120;
		res_N98_N120   = make_hashmap(hp_N99_N121);
		dc_N89_N111--;
	    }

}

}
	}

}

	/* next depth is higher (implies collision) */
	if (d_N87_N109 < dn_N88_N110)
{
    {
	    /* hdr is the popped one initially */
	    while(d_N87_N109 < dn_N88_N110)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 7;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_7:;
}

}

{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 8;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_8:;
}

}
    {
		slot_N90_N112 = maskval(v_N92_N114, d_N87_N109);
		bp_N96_N118   = 1 << slot_N90_N112;
		ESTACK_PUSH(stack_N102_N124, hdr_N95_N117 | bp_N96_N118);
		d_N87_N109++;
		hdr_N95_N117 = 0; /* clear hdr for all other collisions */
	    }

}

}

	    slot_N90_N112 = maskval(v_N92_N114, d_N87_N109);
	    bp_N96_N118   = 1 << slot_N90_N112;
	    /* no more collisions */
            ESTACK_PUSH2(stack_N102_N124,res_N98_N120,bp_N96_N118);
	}

} else
{
{
    if (d_N87_N109 == dn_N88_N110)
{
    {
	    /* no collisions at all */
	    slot_N90_N112 = maskval(v_N92_N114, d_N87_N109);
	    bp_N96_N118   = 1 << slot_N90_N112;
            ESTACK_PUSH2(stack_N102_N124,res_N98_N120,hdr_N95_N117 | bp_N96_N118);
	}

} else
{
    {
	    /* dn < n, we have a drop and we are done
	     * build nodes and subtree */
	    while (dn_N88_N110 != d_N87_N109)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 9;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_9:;
}

}

{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 10;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_10:;
}

}
    {
		slot_N90_N112  = maskval(v_N92_N114, d_N87_N109);
		bp_N96_N118    = 1 << slot_N90_N112;
		/* OR bitposition before sz calculation to handle
		 * redundant collisions */
		hdr_N95_N117  |= bp_N96_N118;
		sz_N97_N119    = hashmap_bitcount(hdr_N95_N117);
		hp_N99_N121    = erts_produce_heap(factory_N103_N126, HAMT_NODE_BITMAP_SZ(sz_N97_N119), HALLOC_EXTRA);
		nhp_N100_N122   = hp_N99_N121;
		*hp_N99_N121++ = MAP_HEADER_HAMT_NODE_BITMAP(hdr_N95_N117);
		*hp_N99_N121++ = res_N98_N120; sz_N97_N119--;
		while (sz_N97_N119--)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 11;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_11:;
}

}

{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 12;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_12:;
}

}

{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 13;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_13:;
}

}

{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 14;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_14:;
}

}
    { *hp_N99_N121++ = ESTACK_POP(stack_N102_N124); }

}

}

}

}
		ASSERT((hp_N99_N121 - nhp_N100_N122) < 18);
		res_N98_N120 = make_hashmap(nhp_N100_N122);

		/* we need to pop the next hdr and push if we don't need it */

		hdr_N95_N117 = ESTACK_POP(stack_N102_N124);
		d_N87_N109--;
	    }

}

}
            ESTACK_PUSH2(stack_N102_N124,res_N98_N120,hdr_N95_N117);
	}

}
}

}

	vp_N93_N115 = v_N92_N114;
	v_N92_N114  = vn_N94_N116;
	d_N87_N109  = dn_N88_N110;
	ERTS_FACTORY_HOLE_CHECK(factory_N103_N126);
    }

}

    /* v and vp are reused from above */
    dn_N88_N110  = cdepth(vp_N93_N115,v_N92_N114);
    ix_N86_N108  = ix_N86_N108 + hxns_N104_N127[ix_N86_N108].skip;
    res_N98_N120 = hxns_N104_N127[ix_N86_N108].val;

    if (hxns_N104_N127[ix_N86_N108].skip > 1)
{
    {
	dc_N89_N111 = 7;
	/* build collision nodes */
	while (dc_N89_N111 > dn_N88_N110)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 15;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_15:;
}

}
    {
	    hp_N99_N121    = erts_produce_heap(factory_N103_N126, HAMT_NODE_BITMAP_SZ(1), HALLOC_EXTRA);
	    hp_N99_N121[0] = MAP_HEADER_HAMT_NODE_BITMAP(1 << maskval(v_N92_N114,dc_N89_N111));
	    hp_N99_N121[1] = res_N98_N120;
	    res_N98_N120   = make_hashmap(hp_N99_N121);
	    dc_N89_N111--;
	}

}
    }

}

    hdr_N95_N117 = ESTACK_POP(stack_N102_N124);
    /* pop remaining subtree if any */
    while (dn_N88_N110)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 16;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_16:;
}

}
    {
	slot_N90_N112  = maskval(v_N92_N114, dn_N88_N110);
	bp_N96_N118    = 1 << slot_N90_N112;
	/* OR bitposition before sz calculation to handle
	 * redundant collisions */
	hdr_N95_N117  |= bp_N96_N118;
	sz_N97_N119    = hashmap_bitcount(hdr_N95_N117);
	hp_N99_N121    = erts_produce_heap(factory_N103_N126, HAMT_NODE_BITMAP_SZ(sz_N97_N119), HALLOC_EXTRA);
	nhp_N100_N122   = hp_N99_N121;
	*hp_N99_N121++ = MAP_HEADER_HAMT_NODE_BITMAP(hdr_N95_N117);
	*hp_N99_N121++ = res_N98_N120; sz_N97_N119--;

        ASSERT(ESTACK_COUNT(stack_N102_N124) > sz_N97_N119);

	while (sz_N97_N119--)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 17;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_17:;
}

}

{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 18;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_18:;
}

}
    { *hp_N99_N121++ = ESTACK_POP(stack_N102_N124); }

}

}
	res_N98_N120 = make_hashmap(nhp_N100_N122);
	hdr_N95_N117 = ESTACK_POP(stack_N102_N124);
	dn_N88_N110--;
    }

}

    /* and finally the root .. */

    slot_N90_N112  = maskval(v_N92_N114, dn_N88_N110);
    bp_N96_N118    = 1 << slot_N90_N112;
    hdr_N95_N117  |= bp_N96_N118;
    sz_N97_N119    = hashmap_bitcount(hdr_N95_N117);
    hp_N99_N121    = erts_produce_heap(factory_N103_N126, sz_N97_N119 + /* hdr + item */ 2, 0);
    nhp_N100_N122   = hp_N99_N121;

    *hp_N99_N121++ = (hdr_N95_N117 == 0xffff) ? MAP_HEADER_HAMT_HEAD_ARRAY : MAP_HEADER_HAMT_HEAD_BITMAP(hdr_N95_N117);
    *hp_N99_N121++ = size_N106_N129;

    *hp_N99_N121++ = res_N98_N120; sz_N97_N119--;
    while (sz_N97_N119--)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 19;
  goto ycf_do_yield_label_hashmap_from_chunked_array;
  ycf_yield_location_label_19:;
}

}
    { *hp_N99_N121++ = ESTACK_POP(stack_N102_N124); }

}

    res_N98_N120 = make_hashmap(nhp_N100_N122);

    ASSERT(ESTACK_COUNT(stack_N102_N124) == 0);
    DESTROY_ESTACK_EXPLICIT_DEFAULT_ARRAY(stack_N102_N124, stack_default_estack_N101_N123);
    ERTS_FACTORY_HOLE_CHECK(factory_N103_N126);
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

    return res_N98_N120;
}

{
  struct gen_ycf_trap_state_for_hashmap_from_chunked_array* ycf_my_trap_state;
  ycf_do_yield_label_hashmap_from_chunked_array:;

    {
        ENSURE_ESTACK_HEAP_STACK_ARRAY(stack_N102_N124, stack_default_estack_N101_N123);
    }

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_hashmap_from_chunked_array), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->ix_N86_N108 = ix_N86_N108;
    ycf_my_trap_state->d_N87_N109 = d_N87_N109;
    ycf_my_trap_state->dn_N88_N110 = dn_N88_N110;
    ycf_my_trap_state->dc_N89_N111 = dc_N89_N111;
    ycf_my_trap_state->slot_N90_N112 = slot_N90_N112;
    ycf_my_trap_state->elems_N91_N113 = elems_N91_N113;
    ycf_my_trap_state->v_N92_N114 = v_N92_N114;
    ycf_my_trap_state->vp_N93_N115 = vp_N93_N115;
    ycf_my_trap_state->vn_N94_N116 = vn_N94_N116;
    ycf_my_trap_state->hdr_N95_N117 = hdr_N95_N117;
    ycf_my_trap_state->bp_N96_N118 = bp_N96_N118;
    ycf_my_trap_state->sz_N97_N119 = sz_N97_N119;
    ycf_my_trap_state->res_N98_N120 = res_N98_N120;
    ycf_my_trap_state->hp_N99_N121 = hp_N99_N121;
    ycf_my_trap_state->nhp_N100_N122 = nhp_N100_N122;
    memcpy(ycf_my_trap_state->stack_default_estack_N101_N123, stack_default_estack_N101_N123, 16 *  sizeof(
    Eterm));
    ycf_my_trap_state->stack_N102_N124 = stack_N102_N124;
    ycf_my_trap_state->wat_N85_N125 = wat_N85_N125;
    ycf_my_trap_state->factory_N103_N126 = factory_N103_N126;
    ycf_my_trap_state->hxns_N104_N127 = hxns_N104_N127;
    ycf_my_trap_state->n_N105_N128 = n_N105_N128;
    ycf_my_trap_state->size_N106_N129 = size_N106_N129;
    ycf_my_trap_state->temp_memory_allocator_N107_N130 = temp_memory_allocator_N107_N130;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   Eterm  const ycf_unused_ret_value;
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



struct gen_ycf_trap_state_for_maps_keys_1_helper {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm map_N137_N141;
	Eterm *hp_N131_N142;
        Eterm *ks_N132_N143;
        Eterm res_N133_N144;
	flatmap_t *mp_N134_N145;
	Uint n_N135_N146;
        /* YCF cannot handle function calls as return expression */
        BIF_RETTYPE res_N136_N147;

void* ycf_sub_fun_trap_state_wb_N140;Process* p_N138_N148; Eterm* bif_args_N139_N149;
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

static void maps_keys_1_helper_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_maps_keys_1_helper* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm map_N137_N141;
	Eterm *hp_N131_N142;
        Eterm *ks_N132_N143;
        Eterm res_N133_N144;
	flatmap_t *mp_N134_N145;
	Uint n_N135_N146;
        /* YCF cannot handle function calls as return expression */
        BIF_RETTYPE res_N136_N147;

void* ycf_sub_fun_trap_state_wb_N140;Process* p_N138_N148; Eterm* bif_args_N139_N149;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    map_N137_N141 = ycf_my_trap_state->map_N137_N141;
    hp_N131_N142 = ycf_my_trap_state->hp_N131_N142;
    ks_N132_N143 = ycf_my_trap_state->ks_N132_N143;
    res_N133_N144 = ycf_my_trap_state->res_N133_N144;
    mp_N134_N145 = ycf_my_trap_state->mp_N134_N145;
    n_N135_N146 = ycf_my_trap_state->n_N135_N146;
    res_N136_N147 = ycf_my_trap_state->res_N136_N147;
    ycf_sub_fun_trap_state_wb_N140 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N140;
    p_N138_N148 = ycf_my_trap_state->p_N138_N148;
    bif_args_N139_N149 = ycf_my_trap_state->bif_args_N139_N149;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */
{
  if(ycf_sub_fun_trap_state_wb_N140 != NULL)
{     hashmap_keys_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N140);
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

   static  BIF_RETTYPE  maps_keys_1_helper_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_maps_keys_1_helper* ycf_my_trap_state = *ycf_trap_state;
return maps_keys_1_helper_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->p_N138_N148,ycf_my_trap_state->bif_args_N139_N149)
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
static BIF_RETTYPE maps_keys_1_helper_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process* p_N138_N148, Eterm* bif_args_N139_N149) {
    Eterm map_N137_N141;
	Eterm *hp_N131_N142;
        Eterm *ks_N132_N143;
        Eterm res_N133_N144;
	flatmap_t *mp_N134_N145;
	Uint n_N135_N146;
        /* YCF cannot handle function calls as return expression */
        BIF_RETTYPE res_N136_N147;

void* ycf_sub_fun_trap_state_wb_N140;
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
     struct gen_ycf_trap_state_for_maps_keys_1_helper* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    map_N137_N141 = ycf_my_trap_state->map_N137_N141;
    hp_N131_N142 = ycf_my_trap_state->hp_N131_N142;
    ks_N132_N143 = ycf_my_trap_state->ks_N132_N143;
    res_N133_N144 = ycf_my_trap_state->res_N133_N144;
    mp_N134_N145 = ycf_my_trap_state->mp_N134_N145;
    n_N135_N146 = ycf_my_trap_state->n_N135_N146;
    res_N136_N147 = ycf_my_trap_state->res_N136_N147;
    ycf_sub_fun_trap_state_wb_N140 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N140;
    p_N138_N148 = ycf_my_trap_state->p_N138_N148;
    bif_args_N139_N149 = ycf_my_trap_state->bif_args_N139_N149;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     ycf_nr_of_reductions = *ycf_nr_of_reductions_param;
     switch(ycf_trap_location){
case 1: goto ycf_yield_location_label_1;

}
  }
}
{

ycf_sub_fun_trap_state_wb_N140 = NULL;

}
    map_N137_N141 = bif_args_N139_N149[0];
    if (is_flatmap(map_N137_N141))
{
    {
        res_N133_N144 = NIL;

	mp_N134_N145  = (flatmap_t*)flatmap_val(map_N137_N141);
	n_N135_N146   = flatmap_get_size(mp_N134_N145);

	if (n_N135_N146 == 0)
{
{
   
	    BIF_RET(res_N133_N144);
}

}

	hp_N131_N142  = HAlloc(p_N138_N148, (2 * n_N135_N146));
	ks_N132_N143  = flatmap_get_keys(mp_N134_N145);

	while(n_N135_N146--)
{
    {
	    res_N133_N144 = CONS(hp_N131_N142, ks_N132_N143[n_N135_N146], res_N133_N144); hp_N131_N142 += 2;
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


	return res_N133_N144;
}
    }

} else
{
{
    if (is_hashmap(bif_args_N139_N149[0]))
{
    {
{


ycf_sub_fun_trap_state_wb_N140 = NULL;
{
  Eterm  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =  hashmap_keys_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N140,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,p_N138_N148, map_N137_N141);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N140)){
   ycf_trap_location = 1;
   goto ycf_do_yield_label_maps_keys_1_helper;
  ycf_yield_location_label_1:;
   ycf_tmp_fun_call_tmp_var =  hashmap_keys_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N140,
                            ycf_extra_context);
}

        /* YCF cannot handle function calls as return expression */
        res_N136_N147 = ycf_tmp_fun_call_tmp_var;


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


	return res_N136_N147;
}
    }

}
}

}
    p_N138_N148->fvalue = map_N137_N141;
    (p_N138_N148)->freason = BADMAP;
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

    return THE_NON_VALUE;
}

{
  struct gen_ycf_trap_state_for_maps_keys_1_helper* ycf_my_trap_state;
  ycf_do_yield_label_maps_keys_1_helper:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_maps_keys_1_helper), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->map_N137_N141 = map_N137_N141;
    ycf_my_trap_state->hp_N131_N142 = hp_N131_N142;
    ycf_my_trap_state->ks_N132_N143 = ks_N132_N143;
    ycf_my_trap_state->res_N133_N144 = res_N133_N144;
    ycf_my_trap_state->mp_N134_N145 = mp_N134_N145;
    ycf_my_trap_state->n_N135_N146 = n_N135_N146;
    ycf_my_trap_state->res_N136_N147 = res_N136_N147;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N140 = ycf_sub_fun_trap_state_wb_N140;
    ycf_my_trap_state->p_N138_N148 = p_N138_N148;
    ycf_my_trap_state->bif_args_N139_N149 = bif_args_N139_N149;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   BIF_RETTYPE  const ycf_unused_ret_value;
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



struct gen_ycf_trap_state_for_maps_values_1_helper {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm map_N156_N160;
        Eterm *hp_N150_N161;
        Eterm *vs_N151_N162;
        Eterm res_N152_N163;
	flatmap_t *mp_N153_N164;
	Uint n_N154_N165;
        /* YCF cannot handle function calls as return expression */
        BIF_RETTYPE res_N155_N166;

void* ycf_sub_fun_trap_state_wb_N159;Process* p_N157_N167; Eterm* bif_args_N158_N168;
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

static void maps_values_1_helper_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_maps_values_1_helper* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm map_N156_N160;
        Eterm *hp_N150_N161;
        Eterm *vs_N151_N162;
        Eterm res_N152_N163;
	flatmap_t *mp_N153_N164;
	Uint n_N154_N165;
        /* YCF cannot handle function calls as return expression */
        BIF_RETTYPE res_N155_N166;

void* ycf_sub_fun_trap_state_wb_N159;Process* p_N157_N167; Eterm* bif_args_N158_N168;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    map_N156_N160 = ycf_my_trap_state->map_N156_N160;
    hp_N150_N161 = ycf_my_trap_state->hp_N150_N161;
    vs_N151_N162 = ycf_my_trap_state->vs_N151_N162;
    res_N152_N163 = ycf_my_trap_state->res_N152_N163;
    mp_N153_N164 = ycf_my_trap_state->mp_N153_N164;
    n_N154_N165 = ycf_my_trap_state->n_N154_N165;
    res_N155_N166 = ycf_my_trap_state->res_N155_N166;
    ycf_sub_fun_trap_state_wb_N159 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N159;
    p_N157_N167 = ycf_my_trap_state->p_N157_N167;
    bif_args_N158_N168 = ycf_my_trap_state->bif_args_N158_N168;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */
{
  if(ycf_sub_fun_trap_state_wb_N159 != NULL)
{     hashmap_values_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N159);
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

   static  BIF_RETTYPE  maps_values_1_helper_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_maps_values_1_helper* ycf_my_trap_state = *ycf_trap_state;
return maps_values_1_helper_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->p_N157_N167,ycf_my_trap_state->bif_args_N158_N168)
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
static BIF_RETTYPE maps_values_1_helper_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process* p_N157_N167, Eterm* bif_args_N158_N168) {
    Eterm map_N156_N160;
        Eterm *hp_N150_N161;
        Eterm *vs_N151_N162;
        Eterm res_N152_N163;
	flatmap_t *mp_N153_N164;
	Uint n_N154_N165;
        /* YCF cannot handle function calls as return expression */
        BIF_RETTYPE res_N155_N166;

void* ycf_sub_fun_trap_state_wb_N159;
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
     struct gen_ycf_trap_state_for_maps_values_1_helper* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    map_N156_N160 = ycf_my_trap_state->map_N156_N160;
    hp_N150_N161 = ycf_my_trap_state->hp_N150_N161;
    vs_N151_N162 = ycf_my_trap_state->vs_N151_N162;
    res_N152_N163 = ycf_my_trap_state->res_N152_N163;
    mp_N153_N164 = ycf_my_trap_state->mp_N153_N164;
    n_N154_N165 = ycf_my_trap_state->n_N154_N165;
    res_N155_N166 = ycf_my_trap_state->res_N155_N166;
    ycf_sub_fun_trap_state_wb_N159 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N159;
    p_N157_N167 = ycf_my_trap_state->p_N157_N167;
    bif_args_N158_N168 = ycf_my_trap_state->bif_args_N158_N168;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     ycf_nr_of_reductions = *ycf_nr_of_reductions_param;
     switch(ycf_trap_location){
case 1: goto ycf_yield_location_label_1;

}
  }
}
{

ycf_sub_fun_trap_state_wb_N159 = NULL;

}
    map_N156_N160 = bif_args_N158_N168[0];
    if (is_flatmap(map_N156_N160))
{
    {
        res_N152_N163 = NIL;

	mp_N153_N164  = (flatmap_t*)flatmap_val(map_N156_N160);
	n_N154_N165   = flatmap_get_size(mp_N153_N164);

	if (n_N154_N165 == 0)
{
{
   
	    BIF_RET(res_N152_N163);
}

}

	hp_N150_N161  = HAlloc(p_N157_N167, (2 * n_N154_N165));
	vs_N151_N162  = flatmap_get_values(mp_N153_N164);

	while(n_N154_N165--)
{
    {
	    res_N152_N163 = CONS(hp_N150_N161, vs_N151_N162[n_N154_N165], res_N152_N163); hp_N150_N161 += 2;
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


	return res_N152_N163;
}
    }

} else
{
{
    if (is_hashmap(map_N156_N160))
{
    {
{


ycf_sub_fun_trap_state_wb_N159 = NULL;
{
  Eterm  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =  hashmap_values_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N159,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,p_N157_N167, map_N156_N160);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N159)){
   ycf_trap_location = 1;
   goto ycf_do_yield_label_maps_values_1_helper;
  ycf_yield_location_label_1:;
   ycf_tmp_fun_call_tmp_var =  hashmap_values_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N159,
                            ycf_extra_context);
}

        /* YCF cannot handle function calls as return expression */
        res_N155_N166 = ycf_tmp_fun_call_tmp_var;


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


	return res_N155_N166;
}
    }

}
}

}
    p_N157_N167->fvalue = map_N156_N160;
    (p_N157_N167)->freason = BADMAP;
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

    return THE_NON_VALUE;
}

{
  struct gen_ycf_trap_state_for_maps_values_1_helper* ycf_my_trap_state;
  ycf_do_yield_label_maps_values_1_helper:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_maps_values_1_helper), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->map_N156_N160 = map_N156_N160;
    ycf_my_trap_state->hp_N150_N161 = hp_N150_N161;
    ycf_my_trap_state->vs_N151_N162 = vs_N151_N162;
    ycf_my_trap_state->res_N152_N163 = res_N152_N163;
    ycf_my_trap_state->mp_N153_N164 = mp_N153_N164;
    ycf_my_trap_state->n_N154_N165 = n_N154_N165;
    ycf_my_trap_state->res_N155_N166 = res_N155_N166;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N159 = ycf_sub_fun_trap_state_wb_N159;
    ycf_my_trap_state->p_N157_N167 = p_N157_N167;
    ycf_my_trap_state->bif_args_N158_N168 = bif_args_N158_N168;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   BIF_RETTYPE  const ycf_unused_ret_value;
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



struct gen_ycf_trap_state_for_maps_from_keys_2_helper {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm list_N169_N177;
    Eterm value_N170_N178;
    Eterm item_N171_N179;
    Eterm res_N172_N180;
    Uint  size_N173_N181;

void* ycf_sub_fun_trap_state_wb_N176;Process* p_N174_N182; Eterm* bif_args_N175_N183;
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

static void maps_from_keys_2_helper_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_maps_from_keys_2_helper* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm list_N169_N177;
    Eterm value_N170_N178;
    Eterm item_N171_N179;
    Eterm res_N172_N180;
    Uint  size_N173_N181;

void* ycf_sub_fun_trap_state_wb_N176;Process* p_N174_N182; Eterm* bif_args_N175_N183;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    list_N169_N177 = ycf_my_trap_state->list_N169_N177;
    value_N170_N178 = ycf_my_trap_state->value_N170_N178;
    item_N171_N179 = ycf_my_trap_state->item_N171_N179;
    res_N172_N180 = ycf_my_trap_state->res_N172_N180;
    size_N173_N181 = ycf_my_trap_state->size_N173_N181;
    ycf_sub_fun_trap_state_wb_N176 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N176;
    p_N174_N182 = ycf_my_trap_state->p_N174_N182;
    bif_args_N175_N183 = ycf_my_trap_state->bif_args_N175_N183;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */
{
  if(ycf_sub_fun_trap_state_wb_N176 != NULL)
{     hashmap_from_validated_list_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N176);
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

   static  BIF_RETTYPE  maps_from_keys_2_helper_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_maps_from_keys_2_helper* ycf_my_trap_state = *ycf_trap_state;
return maps_from_keys_2_helper_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->p_N174_N182,ycf_my_trap_state->bif_args_N175_N183)
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
static BIF_RETTYPE maps_from_keys_2_helper_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process* p_N174_N182, Eterm* bif_args_N175_N183) {
    Eterm list_N169_N177;
    Eterm value_N170_N178;
    Eterm item_N171_N179;
    Eterm res_N172_N180;
    Uint  size_N173_N181;

void* ycf_sub_fun_trap_state_wb_N176;
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
     struct gen_ycf_trap_state_for_maps_from_keys_2_helper* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    list_N169_N177 = ycf_my_trap_state->list_N169_N177;
    value_N170_N178 = ycf_my_trap_state->value_N170_N178;
    item_N171_N179 = ycf_my_trap_state->item_N171_N179;
    res_N172_N180 = ycf_my_trap_state->res_N172_N180;
    size_N173_N181 = ycf_my_trap_state->size_N173_N181;
    ycf_sub_fun_trap_state_wb_N176 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N176;
    p_N174_N182 = ycf_my_trap_state->p_N174_N182;
    bif_args_N175_N183 = ycf_my_trap_state->bif_args_N175_N183;

     
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

ycf_sub_fun_trap_state_wb_N176 = NULL;

}
    list_N169_N177 = bif_args_N175_N183[0];
    value_N170_N178 = bif_args_N175_N183[1];
    item_N171_N179 = list_N169_N177;
    size_N173_N181 = 0;
    if (is_list(item_N171_N179) || is_nil(item_N171_N179))
{
    {
        /* Calculate size and check validity */
        while(is_list(item_N171_N179))
{
    {
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 2;
  goto ycf_do_yield_label_maps_from_keys_2_helper;
  ycf_yield_location_label_2:;
}

}
            size_N173_N181++;
            item_N171_N179 = CDR(list_val(item_N171_N179));
        }

}

        if (is_not_nil(item_N171_N179))
{
{
   
            goto error;
}

}

        if (size_N173_N181 > MAP_SMALL_MAP_LIMIT)
{
    {
{


ycf_sub_fun_trap_state_wb_N176 = NULL;
{
  Eterm  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =  hashmap_from_validated_list_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N176,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,p_N174_N182, list_N169_N177, value_N170_N178, size_N173_N181);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N176)){
   ycf_trap_location = 1;
   goto ycf_do_yield_label_maps_from_keys_2_helper;
  ycf_yield_location_label_1:;
   ycf_tmp_fun_call_tmp_var =  hashmap_from_validated_list_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N176,
                            ycf_extra_context);
}

            /* Cannot put call in return statement because
               YCF cannot handle that */
            res_N172_N180 = ycf_tmp_fun_call_tmp_var;


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


            return res_N172_N180;
}
        }

} else
{
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

            /* We don't yield while constructing flatmap because
               MAP_SMALL_MAP_LIMIT is small */
	    return flatmap_from_validated_list(p_N174_N182, list_N169_N177, value_N170_N178, size_N173_N181);
}

}
    }

}

error:

    BIF_ERROR(p_N174_N182, BADARG);

{
  struct gen_ycf_trap_state_for_maps_from_keys_2_helper* ycf_my_trap_state;
  ycf_do_yield_label_maps_from_keys_2_helper:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_maps_from_keys_2_helper), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->list_N169_N177 = list_N169_N177;
    ycf_my_trap_state->value_N170_N178 = value_N170_N178;
    ycf_my_trap_state->item_N171_N179 = item_N171_N179;
    ycf_my_trap_state->res_N172_N180 = res_N172_N180;
    ycf_my_trap_state->size_N173_N181 = size_N173_N181;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N176 = ycf_sub_fun_trap_state_wb_N176;
    ycf_my_trap_state->p_N174_N182 = p_N174_N182;
    ycf_my_trap_state->bif_args_N175_N183 = bif_args_N175_N183;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   BIF_RETTYPE  const ycf_unused_ret_value;
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



struct gen_ycf_trap_state_for_maps_from_list_1_helper {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm list_N184_N192;
    Eterm res_N185_N193;
    Eterm *kv_N186_N194;
    Uint  size_N187_N195;
    Eterm item_N188_N196;

void* ycf_sub_fun_trap_state_wb_N191;Process* p_N189_N197; Eterm* bif_args_N190_N198;
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

static void maps_from_list_1_helper_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_maps_from_list_1_helper* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm list_N184_N192;
    Eterm res_N185_N193;
    Eterm *kv_N186_N194;
    Uint  size_N187_N195;
    Eterm item_N188_N196;

void* ycf_sub_fun_trap_state_wb_N191;Process* p_N189_N197; Eterm* bif_args_N190_N198;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    list_N184_N192 = ycf_my_trap_state->list_N184_N192;
    res_N185_N193 = ycf_my_trap_state->res_N185_N193;
    kv_N186_N194 = ycf_my_trap_state->kv_N186_N194;
    size_N187_N195 = ycf_my_trap_state->size_N187_N195;
    item_N188_N196 = ycf_my_trap_state->item_N188_N196;
    ycf_sub_fun_trap_state_wb_N191 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N191;
    p_N189_N197 = ycf_my_trap_state->p_N189_N197;
    bif_args_N190_N198 = ycf_my_trap_state->bif_args_N190_N198;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */
{
  if(ycf_sub_fun_trap_state_wb_N191 != NULL)
{     hashmap_from_validated_list_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N191);
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

   static  BIF_RETTYPE  maps_from_list_1_helper_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_maps_from_list_1_helper* ycf_my_trap_state = *ycf_trap_state;
return maps_from_list_1_helper_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->p_N189_N197,ycf_my_trap_state->bif_args_N190_N198)
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
static BIF_RETTYPE maps_from_list_1_helper_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process* p_N189_N197, Eterm* bif_args_N190_N198) {
    Eterm list_N184_N192;
    Eterm res_N185_N193;
    Eterm *kv_N186_N194;
    Uint  size_N187_N195;
    Eterm item_N188_N196;

void* ycf_sub_fun_trap_state_wb_N191;
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
     struct gen_ycf_trap_state_for_maps_from_list_1_helper* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    list_N184_N192 = ycf_my_trap_state->list_N184_N192;
    res_N185_N193 = ycf_my_trap_state->res_N185_N193;
    kv_N186_N194 = ycf_my_trap_state->kv_N186_N194;
    size_N187_N195 = ycf_my_trap_state->size_N187_N195;
    item_N188_N196 = ycf_my_trap_state->item_N188_N196;
    ycf_sub_fun_trap_state_wb_N191 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N191;
    p_N189_N197 = ycf_my_trap_state->p_N189_N197;
    bif_args_N190_N198 = ycf_my_trap_state->bif_args_N190_N198;

     
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

ycf_sub_fun_trap_state_wb_N191 = NULL;

}
    list_N184_N192 = bif_args_N190_N198[0];
    size_N187_N195 = 0;
    item_N188_N196 = list_N184_N192;
    if (is_list(item_N188_N196) || is_nil(item_N188_N196))
{
    {

	/* Calculate size and check validity */

	while(is_list(item_N188_N196))
{
    {
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 2;
  goto ycf_do_yield_label_maps_from_list_1_helper;
  ycf_yield_location_label_2:;
}

}
	    res_N185_N193 = CAR(list_val(item_N188_N196));
	    if (is_not_tuple(res_N185_N193))
{
{
   
		goto error;
}

}

	    kv_N186_N194 = tuple_val(res_N185_N193);
	    if (*kv_N186_N194 != make_arityval(2))
{
{
   
		goto error;
}

}

	    size_N187_N195++;
	    item_N188_N196 = CDR(list_val(item_N188_N196));
	}

}

	if (is_not_nil(item_N188_N196))
{
{
   
	    goto error;
}

}

	if (size_N187_N195 > MAP_SMALL_MAP_LIMIT)
{
    {
{


ycf_sub_fun_trap_state_wb_N191 = NULL;
{
  Eterm  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =  hashmap_from_validated_list_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N191,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,p_N189_N197, list_N184_N192, THE_NON_VALUE, size_N187_N195);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N191)){
   ycf_trap_location = 1;
   goto ycf_do_yield_label_maps_from_list_1_helper;
  ycf_yield_location_label_1:;
   ycf_tmp_fun_call_tmp_var =  hashmap_from_validated_list_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N191,
                            ycf_extra_context);
}

            /* Cannot put call in return statement because
               YCF cannot handle that */
            res_N185_N193 = ycf_tmp_fun_call_tmp_var;


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


            return res_N185_N193;
}
	}

} else
{
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

            /* We don't yield while constructing flatmap because
               MAP_SMALL_MAP_LIMIT is small */
	    return flatmap_from_validated_list(p_N189_N197, list_N184_N192, THE_NON_VALUE, size_N187_N195);
}

}
    }

}

error:

    BIF_ERROR(p_N189_N197, BADARG);

{
  struct gen_ycf_trap_state_for_maps_from_list_1_helper* ycf_my_trap_state;
  ycf_do_yield_label_maps_from_list_1_helper:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_maps_from_list_1_helper), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->list_N184_N192 = list_N184_N192;
    ycf_my_trap_state->res_N185_N193 = res_N185_N193;
    ycf_my_trap_state->kv_N186_N194 = kv_N186_N194;
    ycf_my_trap_state->size_N187_N195 = size_N187_N195;
    ycf_my_trap_state->item_N188_N196 = item_N188_N196;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N191 = ycf_sub_fun_trap_state_wb_N191;
    ycf_my_trap_state->p_N189_N197 = p_N189_N197;
    ycf_my_trap_state->bif_args_N190_N198 = bif_args_N190_N198;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   BIF_RETTYPE  const ycf_unused_ret_value;
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



struct gen_ycf_trap_state_for_hashmap_from_validated_list {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm item_N205_N221;
    Eterm *hp_N206_N222;
    Eterm *kv_N207_N223;
    Eterm res_N208_N224;
    Eterm key_N209_N225;
    Eterm value_N210_N226;
    Uint32 sw_N211_N227;
    Uint32 hx_N212_N228;
    Uint ix_N213_N229;
    hxnode_t *hxns_N214_N230;
    ErtsHeapFactory *factory_N215_N231;
	Eterm *kv_N199_N232;
        Eterm *ks_N200_N233;
        Eterm *vs_N201_N234;
	flatmap_t *mp_N202_N235;
	Eterm keys_N203_N236;
        Uint n_N204_N237;
void* ycf_sub_fun_trap_state_wb_N220;Process *p_N216_N238;
                                         Eterm list_N217_N239;
                                         Eterm fill_value_N218_N240;
                                         Uint size_N219_N241;
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

static void hashmap_from_validated_list_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_hashmap_from_validated_list* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm item_N205_N221;
    Eterm *hp_N206_N222;
    Eterm *kv_N207_N223;
    Eterm res_N208_N224;
    Eterm key_N209_N225;
    Eterm value_N210_N226;
    Uint32 sw_N211_N227;
    Uint32 hx_N212_N228;
    Uint ix_N213_N229;
    hxnode_t *hxns_N214_N230;
    ErtsHeapFactory *factory_N215_N231;
	Eterm *kv_N199_N232;
        Eterm *ks_N200_N233;
        Eterm *vs_N201_N234;
	flatmap_t *mp_N202_N235;
	Eterm keys_N203_N236;
        Uint n_N204_N237;
void* ycf_sub_fun_trap_state_wb_N220;Process *p_N216_N238;
                                         Eterm list_N217_N239;
                                         Eterm fill_value_N218_N240;
                                         Uint size_N219_N241;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    item_N205_N221 = ycf_my_trap_state->item_N205_N221;
    hp_N206_N222 = ycf_my_trap_state->hp_N206_N222;
    kv_N207_N223 = ycf_my_trap_state->kv_N207_N223;
    res_N208_N224 = ycf_my_trap_state->res_N208_N224;
    key_N209_N225 = ycf_my_trap_state->key_N209_N225;
    value_N210_N226 = ycf_my_trap_state->value_N210_N226;
    sw_N211_N227 = ycf_my_trap_state->sw_N211_N227;
    hx_N212_N228 = ycf_my_trap_state->hx_N212_N228;
    ix_N213_N229 = ycf_my_trap_state->ix_N213_N229;
    hxns_N214_N230 = ycf_my_trap_state->hxns_N214_N230;
    factory_N215_N231 = ycf_my_trap_state->factory_N215_N231;
    kv_N199_N232 = ycf_my_trap_state->kv_N199_N232;
    ks_N200_N233 = ycf_my_trap_state->ks_N200_N233;
    vs_N201_N234 = ycf_my_trap_state->vs_N201_N234;
    mp_N202_N235 = ycf_my_trap_state->mp_N202_N235;
    keys_N203_N236 = ycf_my_trap_state->keys_N203_N236;
    n_N204_N237 = ycf_my_trap_state->n_N204_N237;
    ycf_sub_fun_trap_state_wb_N220 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N220;
    p_N216_N238 = ycf_my_trap_state->p_N216_N238;
    list_N217_N239 = ycf_my_trap_state->list_N217_N239;
    fill_value_N218_N240 = ycf_my_trap_state->fill_value_N218_N240;
    size_N219_N241 = ycf_my_trap_state->size_N219_N241;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */
{
  if(ycf_sub_fun_trap_state_wb_N220 != NULL)
{     hashmap_from_unsorted_array_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N220);
  }
}
{

    {
        if (hxns_N214_N230 != NULL) {
            /* Execution of this function got destroyed while yielding in
               the loop above */
            erts_free(ERTS_ALC_T_MAP_TRAP, (void *) hxns_N214_N230);
        }
    }}

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

   static  Eterm  hashmap_from_validated_list_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_hashmap_from_validated_list* ycf_my_trap_state = *ycf_trap_state;
return hashmap_from_validated_list_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->p_N216_N238,ycf_my_trap_state->list_N217_N239,ycf_my_trap_state->fill_value_N218_N240,ycf_my_trap_state->size_N219_N241)
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
static Eterm hashmap_from_validated_list_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process *p_N216_N238,
                                         Eterm list_N217_N239,
                                         Eterm fill_value_N218_N240,
                                         Uint size_N219_N241) {
    Eterm item_N205_N221;
    Eterm *hp_N206_N222;
    Eterm *kv_N207_N223;
    Eterm res_N208_N224;
    Eterm key_N209_N225;
    Eterm value_N210_N226;
    Uint32 sw_N211_N227;
    Uint32 hx_N212_N228;
    Uint ix_N213_N229;
    hxnode_t *hxns_N214_N230;
    ErtsHeapFactory *factory_N215_N231;
	Eterm *kv_N199_N232;
        Eterm *ks_N200_N233;
        Eterm *vs_N201_N234;
	flatmap_t *mp_N202_N235;
	Eterm keys_N203_N236;
        Uint n_N204_N237;
void* ycf_sub_fun_trap_state_wb_N220;
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
     struct gen_ycf_trap_state_for_hashmap_from_validated_list* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    item_N205_N221 = ycf_my_trap_state->item_N205_N221;
    hp_N206_N222 = ycf_my_trap_state->hp_N206_N222;
    kv_N207_N223 = ycf_my_trap_state->kv_N207_N223;
    res_N208_N224 = ycf_my_trap_state->res_N208_N224;
    key_N209_N225 = ycf_my_trap_state->key_N209_N225;
    value_N210_N226 = ycf_my_trap_state->value_N210_N226;
    sw_N211_N227 = ycf_my_trap_state->sw_N211_N227;
    hx_N212_N228 = ycf_my_trap_state->hx_N212_N228;
    ix_N213_N229 = ycf_my_trap_state->ix_N213_N229;
    hxns_N214_N230 = ycf_my_trap_state->hxns_N214_N230;
    factory_N215_N231 = ycf_my_trap_state->factory_N215_N231;
    kv_N199_N232 = ycf_my_trap_state->kv_N199_N232;
    ks_N200_N233 = ycf_my_trap_state->ks_N200_N233;
    vs_N201_N234 = ycf_my_trap_state->vs_N201_N234;
    mp_N202_N235 = ycf_my_trap_state->mp_N202_N235;
    keys_N203_N236 = ycf_my_trap_state->keys_N203_N236;
    n_N204_N237 = ycf_my_trap_state->n_N204_N237;
    ycf_sub_fun_trap_state_wb_N220 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N220;
    p_N216_N238 = ycf_my_trap_state->p_N216_N238;
    list_N217_N239 = ycf_my_trap_state->list_N217_N239;
    fill_value_N218_N240 = ycf_my_trap_state->fill_value_N218_N240;
    size_N219_N241 = ycf_my_trap_state->size_N219_N241;

     
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

ycf_sub_fun_trap_state_wb_N220 = NULL;

}
    item_N205_N221 = list_N217_N239;
    ix_N213_N229 = 0;
#ifdef NOT_YCF_YIELDING_VERSION
    /* Macro to make YCF ignore declarations */
#define YCF_IGNORE(X) X
    YCF_IGNORE(ErtsHeapFactory factory_instance;)
#undef YCF_IGNORE
    factory_N215_N231 = &factory_instance;
#else
    factory_N215_N231 = YCF_STACK_ALLOC(sizeof(ErtsHeapFactory));
#endif
    ASSERT(size_N219_N241 > 0);

    hp_N206_N222 = HAlloc(p_N216_N238, (2 * size_N219_N241));

    /* create tmp hx values and leaf ptrs */
    hxns_N214_N230 = (hxnode_t *)erts_alloc(ERTS_ALC_T_MAP_TRAP, size_N219_N241 * sizeof(hxnode_t));

    while(is_list(item_N205_N221))
{
    {
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 2;
  goto ycf_do_yield_label_hashmap_from_validated_list;
  ycf_yield_location_label_2:;
}

}
	res_N208_N224 = CAR(list_val(item_N205_N221));
	if(is_value(fill_value_N218_N240))
{
    {
	    key_N209_N225 = res_N208_N224;
	    value_N210_N226 = fill_value_N218_N240;
	}

} else
{
    {
	    kv_N207_N223 = tuple_val(res_N208_N224);
	    key_N209_N225 = kv_N207_N223[1];
	    value_N210_N226 = kv_N207_N223[2];
	}

}
	hx_N212_N228  = hashmap_restore_hash(0,key_N209_N225);
	swizzle32(sw_N211_N227,hx_N212_N228);
	hxns_N214_N230[ix_N213_N229].hx   = sw_N211_N227;
	hxns_N214_N230[ix_N213_N229].val  = CONS(hp_N206_N222, key_N209_N225, value_N210_N226); hp_N206_N222 += 2;
	hxns_N214_N230[ix_N213_N229].skip = 1; /* will be reassigned in from_array */
	hxns_N214_N230[ix_N213_N229].i    = ix_N213_N229;
	ix_N213_N229++;
	item_N205_N221 = CDR(list_val(item_N205_N221));
    }

}

    erts_factory_proc_init(factory_N215_N231, p_N216_N238);
{

ycf_sub_fun_trap_state_wb_N220 = NULL;
{
  Eterm  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =  hashmap_from_unsorted_array_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N220,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,factory_N215_N231, hxns_N214_N230, size_N219_N241, 0, ERTS_ALC_T_MAP_TRAP);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N220)){
   ycf_trap_location = 1;
   goto ycf_do_yield_label_hashmap_from_validated_list;
  ycf_yield_location_label_1:;
   ycf_tmp_fun_call_tmp_var =  hashmap_from_unsorted_array_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N220,
                            ycf_extra_context);
}

    res_N208_N224 = ycf_tmp_fun_call_tmp_var;


}
/* YCF Replaced special code */

}

    erts_factory_close(factory_N215_N231);
/* YCF Replaced special code */


    erts_free(ERTS_ALC_T_MAP_TRAP, (void *) hxns_N214_N230);
    /* Memory management depends on the line below */
    hxns_N214_N230 = NULL;
    ERTS_VERIFY_UNUSED_TEMP_ALLOC(p_N216_N238);
    
   /* No yielding in the loops below as the number of loop
      iterations must be small */

    if (hashmap_size(res_N208_N224) <= MAP_SMALL_MAP_LIMIT)
{
    {
        DECLARE_WSTACK(wstack);
{

/* moved declaration (kv)*/

}
{

/* moved declaration (ks)*/

}
{

/* moved declaration (vs)*/

}
{

/* moved declaration (mp)*/

}
{

/* moved declaration (keys)*/

}
        n_N204_N237 = hashmap_size(res_N208_N224);
        ASSERT(n_N204_N237 > 0);
	/* build flat structure */
	hp_N206_N222    = HAlloc(p_N216_N238, 3 + 1 + (2 * n_N204_N237));
	keys_N203_N236  = make_tuple(hp_N206_N222);
	*hp_N206_N222++ = make_arityval(n_N204_N237);
	ks_N200_N233    = hp_N206_N222;
	hp_N206_N222   += n_N204_N237;
	mp_N202_N235    = (flatmap_t*)hp_N206_N222;
	hp_N206_N222   += MAP_HEADER_FLATMAP_SZ;
	vs_N201_N234    = hp_N206_N222;

	mp_N202_N235->thing_word = MAP_HEADER_FLATMAP;
	mp_N202_N235->size = n_N204_N237;
	mp_N202_N235->keys = keys_N203_N236;

	hashmap_iterator_init(&wstack, res_N208_N224, 0);

	while ((kv_N199_N232=hashmap_iterator_next(&wstack)) != NULL)
{
    {
	    *ks_N200_N233++ = CAR(kv_N199_N232);
	    *vs_N201_N234++ = CDR(kv_N199_N232);
	}

}

	/* it cannot have multiple keys */
	erts_validate_and_sort_flatmap(mp_N202_N235);

	DESTROY_WSTACK(wstack);
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

	return make_flatmap(mp_N202_N235);
}
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


    return res_N208_N224;
}

{
  struct gen_ycf_trap_state_for_hashmap_from_validated_list* ycf_my_trap_state;
  ycf_do_yield_label_hashmap_from_validated_list:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_hashmap_from_validated_list), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->item_N205_N221 = item_N205_N221;
    ycf_my_trap_state->hp_N206_N222 = hp_N206_N222;
    ycf_my_trap_state->kv_N207_N223 = kv_N207_N223;
    ycf_my_trap_state->res_N208_N224 = res_N208_N224;
    ycf_my_trap_state->key_N209_N225 = key_N209_N225;
    ycf_my_trap_state->value_N210_N226 = value_N210_N226;
    ycf_my_trap_state->sw_N211_N227 = sw_N211_N227;
    ycf_my_trap_state->hx_N212_N228 = hx_N212_N228;
    ycf_my_trap_state->ix_N213_N229 = ix_N213_N229;
    ycf_my_trap_state->hxns_N214_N230 = hxns_N214_N230;
    ycf_my_trap_state->factory_N215_N231 = factory_N215_N231;
    ycf_my_trap_state->kv_N199_N232 = kv_N199_N232;
    ycf_my_trap_state->ks_N200_N233 = ks_N200_N233;
    ycf_my_trap_state->vs_N201_N234 = vs_N201_N234;
    ycf_my_trap_state->mp_N202_N235 = mp_N202_N235;
    ycf_my_trap_state->keys_N203_N236 = keys_N203_N236;
    ycf_my_trap_state->n_N204_N237 = n_N204_N237;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N220 = ycf_sub_fun_trap_state_wb_N220;
    ycf_my_trap_state->p_N216_N238 = p_N216_N238;
    ycf_my_trap_state->list_N217_N239 = list_N217_N239;
    ycf_my_trap_state->fill_value_N218_N240 = fill_value_N218_N240;
    ycf_my_trap_state->size_N219_N241 = size_N219_N241;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   Eterm  const ycf_unused_ret_value;
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
