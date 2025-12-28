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



struct gen_ycf_trap_state_for_ets_insert_2_list_lock_tbl;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  int  ets_insert_2_list_lock_tbl_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void ets_insert_2_list_lock_tbl_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */



static int ets_insert_2_list_lock_tbl_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Binary *btid_N136_N141,
                                      Process* p_N137_N142,
                                      Uint bif_ix_N138_N143,
                                      ets_insert_2_list_status on_success_status_N139_N144);



struct gen_ycf_trap_state_for_ets_insert_2_list;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  BIF_RETTYPE  ets_insert_2_list_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void ets_insert_2_list_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

static BIF_RETTYPE ets_insert_2_list_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process* p_N93_N129,
                                     Eterm table_id_N94_N130,
                                     Binary* btid_N95_N131,
                                     DbTable *tb_N96_N132,
                                     Eterm list_N97_N133,
                                     int is_insert_new_N98_N134);



struct gen_ycf_trap_state_for_ets_insert_2_list_insert_db_term_list;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  void  ets_insert_2_list_insert_db_term_list_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void ets_insert_2_list_insert_db_term_list_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */



static void ets_insert_2_list_insert_db_term_list_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,DbTable* tb_N73_N79,
                                                 void* db_term_list_N74_N80);



struct gen_ycf_trap_state_for_ets_insert_new_2_dbterm_list_has_member;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  int  ets_insert_new_2_dbterm_list_has_member_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void ets_insert_new_2_dbterm_list_has_member_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */



static int ets_insert_new_2_dbterm_list_has_member_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,DbTable* tb_N60_N67, void* db_term_list_N61_N68);



struct gen_ycf_trap_state_for_ets_insert_2_list_copy_term_list;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

    static  void  *  ets_insert_2_list_copy_term_list_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void ets_insert_2_list_copy_term_list_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

static void* ets_insert_2_list_copy_term_list_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,DbTableMethod* meth_N43_N51,
                                              int compress_N44_N52,
                                              int keypos_N45_N53,
                                              Eterm list_N46_N54);



struct gen_ycf_trap_state_for_ets_insert_2_list_destroy_copied_dbterms;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  void  ets_insert_2_list_destroy_copied_dbterms_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void ets_insert_2_list_destroy_copied_dbterms_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* This function is called both as is, and as YCF transformed. */
static void ets_insert_2_list_destroy_copied_dbterms_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,DbTableMethod* meth_N31_N36,
                                                     int compressed_N32_N37,
                                                     void* db_term_list_N33_N38);



struct gen_ycf_trap_state_for_ets_insert_2_list_from_p_heap;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  int  ets_insert_2_list_from_p_heap_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void ets_insert_2_list_from_p_heap_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */



static int ets_insert_2_list_from_p_heap_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,DbTable* tb_N22_N27, Eterm list_N23_N28);



struct gen_ycf_trap_state_for_ets_insert_new_2_list_has_member;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  int  ets_insert_new_2_list_has_member_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void ets_insert_new_2_list_has_member_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */



static int ets_insert_new_2_list_has_member_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,DbTable* tb_N12_N17, Eterm list_N13_N18);



struct gen_ycf_trap_state_for_ets_insert_2_list_check;

/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

   static  long  ets_insert_2_list_check_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */


/* clang-format off */
YCF_GCC_DIAG_OFF(unused-function)
/* clang-format on */

static void ets_insert_2_list_check_ycf_gen_destroy(void* ycf_my_trap_state_param);
/* clang-format off */
YCF_GCC_DIAG_ON(unused-function)
/* clang-format on */

static long ets_insert_2_list_check_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,int keypos_N3_N7, Eterm list_N4_N8);



struct gen_ycf_trap_state_for_ets_insert_2_list_check {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm lst_N1_N5;
    long i_N2_N6;int keypos_N3_N7; Eterm list_N4_N8;
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

static void ets_insert_2_list_check_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_ets_insert_2_list_check* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm lst_N1_N5;
    long i_N2_N6;int keypos_N3_N7; Eterm list_N4_N8;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    lst_N1_N5 = ycf_my_trap_state->lst_N1_N5;
    i_N2_N6 = ycf_my_trap_state->i_N2_N6;
    keypos_N3_N7 = ycf_my_trap_state->keypos_N3_N7;
    list_N4_N8 = ycf_my_trap_state->list_N4_N8;

     
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

   static  long  ets_insert_2_list_check_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_ets_insert_2_list_check* ycf_my_trap_state = *ycf_trap_state;
return ets_insert_2_list_check_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->keypos_N3_N7,ycf_my_trap_state->list_N4_N8)
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
static long ets_insert_2_list_check_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,int keypos_N3_N7, Eterm list_N4_N8)
{
    Eterm lst_N1_N5;
    long i_N2_N6;
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
     struct gen_ycf_trap_state_for_ets_insert_2_list_check* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    lst_N1_N5 = ycf_my_trap_state->lst_N1_N5;
    i_N2_N6 = ycf_my_trap_state->i_N2_N6;
    keypos_N3_N7 = ycf_my_trap_state->keypos_N3_N7;
    list_N4_N8 = ycf_my_trap_state->list_N4_N8;

     
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
    lst_N1_N5 = THE_NON_VALUE;
    i_N2_N6 = 0;
    for (lst_N1_N5 = list_N4_N8; is_list(lst_N1_N5); lst_N1_N5 = CDR(list_val(lst_N1_N5)))
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 1;
  goto ycf_do_yield_label_ets_insert_2_list_check;
  ycf_yield_location_label_1:;
}

}
    {
        i_N2_N6++;
        if (is_not_tuple(CAR(list_val(lst_N1_N5))) ||
            (arityval(*tuple_val(CAR(list_val(lst_N1_N5)))) < keypos_N3_N7))
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

            return -1;
}

}
    }

}
    if (lst_N1_N5 != NIL)
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

        return -1;
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

    return i_N2_N6;
}

{
  struct gen_ycf_trap_state_for_ets_insert_2_list_check* ycf_my_trap_state;
  ycf_do_yield_label_ets_insert_2_list_check:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_ets_insert_2_list_check), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->lst_N1_N5 = lst_N1_N5;
    ycf_my_trap_state->i_N2_N6 = i_N2_N6;
    ycf_my_trap_state->keypos_N3_N7 = keypos_N3_N7;
    ycf_my_trap_state->list_N4_N8 = list_N4_N8;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   long  const ycf_unused_ret_value;
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



struct gen_ycf_trap_state_for_ets_insert_new_2_list_has_member {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm lst_N9_N14;
    Eterm lookup_ret_N10_N15;
    DbTableMethod* meth_N11_N16;DbTable* tb_N12_N17; Eterm list_N13_N18;
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

static void ets_insert_new_2_list_has_member_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_ets_insert_new_2_list_has_member* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm lst_N9_N14;
    Eterm lookup_ret_N10_N15;
    DbTableMethod* meth_N11_N16;DbTable* tb_N12_N17; Eterm list_N13_N18;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    lst_N9_N14 = ycf_my_trap_state->lst_N9_N14;
    lookup_ret_N10_N15 = ycf_my_trap_state->lookup_ret_N10_N15;
    meth_N11_N16 = ycf_my_trap_state->meth_N11_N16;
    tb_N12_N17 = ycf_my_trap_state->tb_N12_N17;
    list_N13_N18 = ycf_my_trap_state->list_N13_N18;

     
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

   static  int  ets_insert_new_2_list_has_member_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_ets_insert_new_2_list_has_member* ycf_my_trap_state = *ycf_trap_state;
return ets_insert_new_2_list_has_member_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->tb_N12_N17,ycf_my_trap_state->list_N13_N18)
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


static int ets_insert_new_2_list_has_member_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,DbTable* tb_N12_N17, Eterm list_N13_N18)
{
    Eterm lst_N9_N14;
    Eterm lookup_ret_N10_N15;
    DbTableMethod* meth_N11_N16;
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
     struct gen_ycf_trap_state_for_ets_insert_new_2_list_has_member* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    lst_N9_N14 = ycf_my_trap_state->lst_N9_N14;
    lookup_ret_N10_N15 = ycf_my_trap_state->lookup_ret_N10_N15;
    meth_N11_N16 = ycf_my_trap_state->meth_N11_N16;
    tb_N12_N17 = ycf_my_trap_state->tb_N12_N17;
    list_N13_N18 = ycf_my_trap_state->list_N13_N18;

     
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
    meth_N11_N16 = tb_N12_N17->common.meth;
    for (lst_N9_N14 = list_N13_N18; is_list(lst_N9_N14); lst_N9_N14 = CDR(list_val(lst_N9_N14)))
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 1;
  goto ycf_do_yield_label_ets_insert_new_2_list_has_member;
  ycf_yield_location_label_1:;
}

}
    {
        meth_N11_N16->db_member(tb_N12_N17,
                        TERM_GETKEY(tb_N12_N17,CAR(list_val(lst_N9_N14))),
                        &lookup_ret_N10_N15);
        if (lookup_ret_N10_N15 != am_false)
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

            return 1;
}

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

    return 0;
}

{
  struct gen_ycf_trap_state_for_ets_insert_new_2_list_has_member* ycf_my_trap_state;
  ycf_do_yield_label_ets_insert_new_2_list_has_member:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_ets_insert_new_2_list_has_member), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->lst_N9_N14 = lst_N9_N14;
    ycf_my_trap_state->lookup_ret_N10_N15 = lookup_ret_N10_N15;
    ycf_my_trap_state->meth_N11_N16 = meth_N11_N16;
    ycf_my_trap_state->tb_N12_N17 = tb_N12_N17;
    ycf_my_trap_state->list_N13_N18 = list_N13_N18;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   int  const ycf_unused_ret_value;
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



struct gen_ycf_trap_state_for_ets_insert_2_list_from_p_heap {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm lst_N19_N24;
    DbTableMethod* meth_N20_N25;
    int cret_N21_N26;DbTable* tb_N22_N27; Eterm list_N23_N28;
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

static void ets_insert_2_list_from_p_heap_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_ets_insert_2_list_from_p_heap* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm lst_N19_N24;
    DbTableMethod* meth_N20_N25;
    int cret_N21_N26;DbTable* tb_N22_N27; Eterm list_N23_N28;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    lst_N19_N24 = ycf_my_trap_state->lst_N19_N24;
    meth_N20_N25 = ycf_my_trap_state->meth_N20_N25;
    cret_N21_N26 = ycf_my_trap_state->cret_N21_N26;
    tb_N22_N27 = ycf_my_trap_state->tb_N22_N27;
    list_N23_N28 = ycf_my_trap_state->list_N23_N28;

     
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

   static  int  ets_insert_2_list_from_p_heap_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_ets_insert_2_list_from_p_heap* ycf_my_trap_state = *ycf_trap_state;
return ets_insert_2_list_from_p_heap_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->tb_N22_N27,ycf_my_trap_state->list_N23_N28)
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


static int ets_insert_2_list_from_p_heap_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,DbTable* tb_N22_N27, Eterm list_N23_N28)
{
    Eterm lst_N19_N24;
    DbTableMethod* meth_N20_N25;
    int cret_N21_N26;
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
     struct gen_ycf_trap_state_for_ets_insert_2_list_from_p_heap* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    lst_N19_N24 = ycf_my_trap_state->lst_N19_N24;
    meth_N20_N25 = ycf_my_trap_state->meth_N20_N25;
    cret_N21_N26 = ycf_my_trap_state->cret_N21_N26;
    tb_N22_N27 = ycf_my_trap_state->tb_N22_N27;
    list_N23_N28 = ycf_my_trap_state->list_N23_N28;

     
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
    meth_N20_N25 = tb_N22_N27->common.meth;
    cret_N21_N26 = DB_ERROR_NONE;
    for (lst_N19_N24 = list_N23_N28; is_list(lst_N19_N24); lst_N19_N24 = CDR(list_val(lst_N19_N24)))
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 1;
  goto ycf_do_yield_label_ets_insert_2_list_from_p_heap;
  ycf_yield_location_label_1:;
}

}
    {
        LOCAL_VARIABLE(SWord, consumed_reds);
        consumed_reds = 1;
        cret_N21_N26 = meth_N20_N25->db_put(tb_N22_N27, CAR(list_val(lst_N19_N24)), 0, &consumed_reds);
        if (cret_N21_N26 != DB_ERROR_NONE)
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

   
            return cret_N21_N26;
}

}
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (consumed_reds);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 2;
  goto ycf_do_yield_label_ets_insert_2_list_from_p_heap;
  ycf_yield_location_label_2:;
}

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

    return DB_ERROR_NONE;
}

{
  struct gen_ycf_trap_state_for_ets_insert_2_list_from_p_heap* ycf_my_trap_state;
  ycf_do_yield_label_ets_insert_2_list_from_p_heap:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_ets_insert_2_list_from_p_heap), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->lst_N19_N24 = lst_N19_N24;
    ycf_my_trap_state->meth_N20_N25 = meth_N20_N25;
    ycf_my_trap_state->cret_N21_N26 = cret_N21_N26;
    ycf_my_trap_state->tb_N22_N27 = tb_N22_N27;
    ycf_my_trap_state->list_N23_N28 = list_N23_N28;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   int  const ycf_unused_ret_value;
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



struct gen_ycf_trap_state_for_ets_insert_2_list_destroy_copied_dbterms {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    void* lst_N29_N34;
    void* term_N30_N35;DbTableMethod* meth_N31_N36;
                                                     int compressed_N32_N37;
                                                     void* db_term_list_N33_N38;
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

static void ets_insert_2_list_destroy_copied_dbterms_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_ets_insert_2_list_destroy_copied_dbterms* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    void* lst_N29_N34;
    void* term_N30_N35;DbTableMethod* meth_N31_N36;
                                                     int compressed_N32_N37;
                                                     void* db_term_list_N33_N38;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    lst_N29_N34 = ycf_my_trap_state->lst_N29_N34;
    term_N30_N35 = ycf_my_trap_state->term_N30_N35;
    meth_N31_N36 = ycf_my_trap_state->meth_N31_N36;
    compressed_N32_N37 = ycf_my_trap_state->compressed_N32_N37;
    db_term_list_N33_N38 = ycf_my_trap_state->db_term_list_N33_N38;

     
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

   static  void  ets_insert_2_list_destroy_copied_dbterms_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_ets_insert_2_list_destroy_copied_dbterms* ycf_my_trap_state = *ycf_trap_state;
ets_insert_2_list_destroy_copied_dbterms_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->meth_N31_N36,ycf_my_trap_state->compressed_N32_N37,ycf_my_trap_state->db_term_list_N33_N38)
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

/* This function is called both as is, and as YCF transformed. */
static void ets_insert_2_list_destroy_copied_dbterms_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,DbTableMethod* meth_N31_N36,
                                                     int compressed_N32_N37,
                                                     void* db_term_list_N33_N38)
{
    void* lst_N29_N34;
    void* term_N30_N35;
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
     struct gen_ycf_trap_state_for_ets_insert_2_list_destroy_copied_dbterms* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    lst_N29_N34 = ycf_my_trap_state->lst_N29_N34;
    term_N30_N35 = ycf_my_trap_state->term_N30_N35;
    meth_N31_N36 = ycf_my_trap_state->meth_N31_N36;
    compressed_N32_N37 = ycf_my_trap_state->compressed_N32_N37;
    db_term_list_N33_N38 = ycf_my_trap_state->db_term_list_N33_N38;

     
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
    lst_N29_N34 = db_term_list_N33_N38;
    term_N30_N35 = NULL;
    while (lst_N29_N34 != NULL)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 1;
  goto ycf_do_yield_label_ets_insert_2_list_destroy_copied_dbterms;
  ycf_yield_location_label_1:;
}

}
    {
        term_N30_N35 = meth_N31_N36->db_dbterm_list_remove_first(&lst_N29_N34);
        meth_N31_N36->db_free_dbterm(compressed_N32_N37, term_N30_N35);
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
  struct gen_ycf_trap_state_for_ets_insert_2_list_destroy_copied_dbterms* ycf_my_trap_state;
  ycf_do_yield_label_ets_insert_2_list_destroy_copied_dbterms:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_ets_insert_2_list_destroy_copied_dbterms), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->lst_N29_N34 = lst_N29_N34;
    ycf_my_trap_state->term_N30_N35 = term_N30_N35;
    ycf_my_trap_state->meth_N31_N36 = meth_N31_N36;
    ycf_my_trap_state->compressed_N32_N37 = compressed_N32_N37;
    ycf_my_trap_state->db_term_list_N33_N38 = db_term_list_N33_N38;

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



struct gen_ycf_trap_state_for_ets_insert_2_list_copy_term_list {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    void* db_term_list_N39_N47;
    void *term_N40_N48;
    void *last_term_N41_N49;
    Eterm lst_N42_N50;DbTableMethod* meth_N43_N51;
                                              int compress_N44_N52;
                                              int keypos_N45_N53;
                                              Eterm list_N46_N54;
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

static void ets_insert_2_list_copy_term_list_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_ets_insert_2_list_copy_term_list* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    void* db_term_list_N39_N47;
    void *term_N40_N48;
    void *last_term_N41_N49;
    Eterm lst_N42_N50;DbTableMethod* meth_N43_N51;
                                              int compress_N44_N52;
                                              int keypos_N45_N53;
                                              Eterm list_N46_N54;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    db_term_list_N39_N47 = ycf_my_trap_state->db_term_list_N39_N47;
    term_N40_N48 = ycf_my_trap_state->term_N40_N48;
    last_term_N41_N49 = ycf_my_trap_state->last_term_N41_N49;
    lst_N42_N50 = ycf_my_trap_state->lst_N42_N50;
    meth_N43_N51 = ycf_my_trap_state->meth_N43_N51;
    compress_N44_N52 = ycf_my_trap_state->compress_N44_N52;
    keypos_N45_N53 = ycf_my_trap_state->keypos_N45_N53;
    list_N46_N54 = ycf_my_trap_state->list_N46_N54;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */
{
 {
        ets_insert_2_list_destroy_copied_dbterms(meth_N43_N51,
                                                 compress_N44_N52,
                                                 db_term_list_N39_N47);
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

    static  void  *  ets_insert_2_list_copy_term_list_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_ets_insert_2_list_copy_term_list* ycf_my_trap_state = *ycf_trap_state;
return ets_insert_2_list_copy_term_list_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->meth_N43_N51,ycf_my_trap_state->compress_N44_N52,ycf_my_trap_state->keypos_N45_N53,ycf_my_trap_state->list_N46_N54)
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
static void* ets_insert_2_list_copy_term_list_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,DbTableMethod* meth_N43_N51,
                                              int compress_N44_N52,
                                              int keypos_N45_N53,
                                              Eterm list_N46_N54)
{
    void* db_term_list_N39_N47;
    void *term_N40_N48;
    void *last_term_N41_N49;
    Eterm lst_N42_N50;
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
     struct gen_ycf_trap_state_for_ets_insert_2_list_copy_term_list* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    db_term_list_N39_N47 = ycf_my_trap_state->db_term_list_N39_N47;
    term_N40_N48 = ycf_my_trap_state->term_N40_N48;
    last_term_N41_N49 = ycf_my_trap_state->last_term_N41_N49;
    lst_N42_N50 = ycf_my_trap_state->lst_N42_N50;
    meth_N43_N51 = ycf_my_trap_state->meth_N43_N51;
    compress_N44_N52 = ycf_my_trap_state->compress_N44_N52;
    keypos_N45_N53 = ycf_my_trap_state->keypos_N45_N53;
    list_N46_N54 = ycf_my_trap_state->list_N46_N54;

     
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
    db_term_list_N39_N47 = NULL;
    for (lst_N42_N50 = list_N46_N54; is_list(lst_N42_N50); lst_N42_N50 = CDR(list_val(lst_N42_N50)))
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 1;
  goto ycf_do_yield_label_ets_insert_2_list_copy_term_list;
  ycf_yield_location_label_1:;
}

}
    {
        term_N40_N48 = meth_N43_N51->db_eterm_to_dbterm(compress_N44_N52,
                                        keypos_N45_N53,
                                        CAR(list_val(lst_N42_N50)));
        if (db_term_list_N39_N47 != NULL)
{
    {
            last_term_N41_N49 =
                meth_N43_N51->db_dbterm_list_append(last_term_N41_N49, term_N40_N48);
        }

} else
{
    {
            db_term_list_N39_N47 = term_N40_N48;
            last_term_N41_N49 = term_N40_N48;
        }

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


    return db_term_list_N39_N47;
}
/* YCF Replaced special code */


{
  struct gen_ycf_trap_state_for_ets_insert_2_list_copy_term_list* ycf_my_trap_state;
  ycf_do_yield_label_ets_insert_2_list_copy_term_list:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_ets_insert_2_list_copy_term_list), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->db_term_list_N39_N47 = db_term_list_N39_N47;
    ycf_my_trap_state->term_N40_N48 = term_N40_N48;
    ycf_my_trap_state->last_term_N41_N49 = last_term_N41_N49;
    ycf_my_trap_state->lst_N42_N50 = lst_N42_N50;
    ycf_my_trap_state->meth_N43_N51 = meth_N43_N51;
    ycf_my_trap_state->compress_N44_N52 = compress_N44_N52;
    ycf_my_trap_state->keypos_N45_N53 = keypos_N45_N53;
    ycf_my_trap_state->list_N46_N54 = list_N46_N54;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static    void  *  const ycf_unused_ret_value;
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



struct gen_ycf_trap_state_for_ets_insert_new_2_dbterm_list_has_member {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm lookup_ret_N55_N62;
    DbTableMethod* meth_N56_N63;
    void* lst_N57_N64;
    void* term_N58_N65;
    Eterm key_N59_N66;DbTable* tb_N60_N67; void* db_term_list_N61_N68;
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

static void ets_insert_new_2_dbterm_list_has_member_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_ets_insert_new_2_dbterm_list_has_member* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    Eterm lookup_ret_N55_N62;
    DbTableMethod* meth_N56_N63;
    void* lst_N57_N64;
    void* term_N58_N65;
    Eterm key_N59_N66;DbTable* tb_N60_N67; void* db_term_list_N61_N68;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    lookup_ret_N55_N62 = ycf_my_trap_state->lookup_ret_N55_N62;
    meth_N56_N63 = ycf_my_trap_state->meth_N56_N63;
    lst_N57_N64 = ycf_my_trap_state->lst_N57_N64;
    term_N58_N65 = ycf_my_trap_state->term_N58_N65;
    key_N59_N66 = ycf_my_trap_state->key_N59_N66;
    tb_N60_N67 = ycf_my_trap_state->tb_N60_N67;
    db_term_list_N61_N68 = ycf_my_trap_state->db_term_list_N61_N68;

     
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

   static  int  ets_insert_new_2_dbterm_list_has_member_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_ets_insert_new_2_dbterm_list_has_member* ycf_my_trap_state = *ycf_trap_state;
return ets_insert_new_2_dbterm_list_has_member_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->tb_N60_N67,ycf_my_trap_state->db_term_list_N61_N68)
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


static int ets_insert_new_2_dbterm_list_has_member_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,DbTable* tb_N60_N67, void* db_term_list_N61_N68)
{
    Eterm lookup_ret_N55_N62;
    DbTableMethod* meth_N56_N63;
    void* lst_N57_N64;
    void* term_N58_N65;
    Eterm key_N59_N66;
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
     struct gen_ycf_trap_state_for_ets_insert_new_2_dbterm_list_has_member* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    lookup_ret_N55_N62 = ycf_my_trap_state->lookup_ret_N55_N62;
    meth_N56_N63 = ycf_my_trap_state->meth_N56_N63;
    lst_N57_N64 = ycf_my_trap_state->lst_N57_N64;
    term_N58_N65 = ycf_my_trap_state->term_N58_N65;
    key_N59_N66 = ycf_my_trap_state->key_N59_N66;
    tb_N60_N67 = ycf_my_trap_state->tb_N60_N67;
    db_term_list_N61_N68 = ycf_my_trap_state->db_term_list_N61_N68;

     
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
    meth_N56_N63 = tb_N60_N67->common.meth;
    lst_N57_N64 = db_term_list_N61_N68;
    term_N58_N65 = NULL;
    while (lst_N57_N64 != NULL)
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 1;
  goto ycf_do_yield_label_ets_insert_new_2_dbterm_list_has_member;
  ycf_yield_location_label_1:;
}

}
    {
        term_N58_N65 = meth_N56_N63->db_dbterm_list_remove_first(&lst_N57_N64);
        key_N59_N66 = meth_N56_N63->db_get_dbterm_key(tb_N60_N67, term_N58_N65);
        meth_N56_N63->db_member(tb_N60_N67, key_N59_N66, &lookup_ret_N55_N62);
        if (lookup_ret_N55_N62 != am_false)
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

            return 1;
}

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

    return 0;
}

{
  struct gen_ycf_trap_state_for_ets_insert_new_2_dbterm_list_has_member* ycf_my_trap_state;
  ycf_do_yield_label_ets_insert_new_2_dbterm_list_has_member:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_ets_insert_new_2_dbterm_list_has_member), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->lookup_ret_N55_N62 = lookup_ret_N55_N62;
    ycf_my_trap_state->meth_N56_N63 = meth_N56_N63;
    ycf_my_trap_state->lst_N57_N64 = lst_N57_N64;
    ycf_my_trap_state->term_N58_N65 = term_N58_N65;
    ycf_my_trap_state->key_N59_N66 = key_N59_N66;
    ycf_my_trap_state->tb_N60_N67 = tb_N60_N67;
    ycf_my_trap_state->db_term_list_N61_N68 = db_term_list_N61_N68;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   int  const ycf_unused_ret_value;
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



struct gen_ycf_trap_state_for_ets_insert_2_list_insert_db_term_list {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    void* tail_N69_N75;
    void* term_N70_N76;
    DbTableMethod* meth_N71_N77;
    int compress_N72_N78;DbTable* tb_N73_N79;
                                                 void* db_term_list_N74_N80;
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

static void ets_insert_2_list_insert_db_term_list_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_ets_insert_2_list_insert_db_term_list* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    void* tail_N69_N75;
    void* term_N70_N76;
    DbTableMethod* meth_N71_N77;
    int compress_N72_N78;DbTable* tb_N73_N79;
                                                 void* db_term_list_N74_N80;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    tail_N69_N75 = ycf_my_trap_state->tail_N69_N75;
    term_N70_N76 = ycf_my_trap_state->term_N70_N76;
    meth_N71_N77 = ycf_my_trap_state->meth_N71_N77;
    compress_N72_N78 = ycf_my_trap_state->compress_N72_N78;
    tb_N73_N79 = ycf_my_trap_state->tb_N73_N79;
    db_term_list_N74_N80 = ycf_my_trap_state->db_term_list_N74_N80;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */
{
 {
        ets_insert_2_list_destroy_copied_dbterms(meth_N71_N77,
                                                 compress_N72_N78,
                                                 tail_N69_N75);
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

   static  void  ets_insert_2_list_insert_db_term_list_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_ets_insert_2_list_insert_db_term_list* ycf_my_trap_state = *ycf_trap_state;
ets_insert_2_list_insert_db_term_list_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->tb_N73_N79,ycf_my_trap_state->db_term_list_N74_N80)
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


static void ets_insert_2_list_insert_db_term_list_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,DbTable* tb_N73_N79,
                                                 void* db_term_list_N74_N80)
{
    void* tail_N69_N75;
    void* term_N70_N76;
    DbTableMethod* meth_N71_N77;
    int compress_N72_N78;
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
     struct gen_ycf_trap_state_for_ets_insert_2_list_insert_db_term_list* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    tail_N69_N75 = ycf_my_trap_state->tail_N69_N75;
    term_N70_N76 = ycf_my_trap_state->term_N70_N76;
    meth_N71_N77 = ycf_my_trap_state->meth_N71_N77;
    compress_N72_N78 = ycf_my_trap_state->compress_N72_N78;
    tb_N73_N79 = ycf_my_trap_state->tb_N73_N79;
    db_term_list_N74_N80 = ycf_my_trap_state->db_term_list_N74_N80;

     
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
    tail_N69_N75 = db_term_list_N74_N80;
    term_N70_N76 = NULL;
    meth_N71_N77 = tb_N73_N79->common.meth;
    compress_N72_N78 = tb_N73_N79->common.compress;
    do
{
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (1);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 1;
  goto ycf_do_yield_label_ets_insert_2_list_insert_db_term_list;
  ycf_yield_location_label_1:;
}

}
    {
        LOCAL_VARIABLE(SWord, consumed_reds);
        consumed_reds = 1;
        term_N70_N76 = meth_N71_N77->db_dbterm_list_remove_first(&tail_N69_N75);
        meth_N71_N77->db_put_dbterm(tb_N73_N79, term_N70_N76, 0, &consumed_reds);
{
ycf_nr_of_reductions = ycf_nr_of_reductions - (consumed_reds);
if (ycf_nr_of_reductions <= 0) {
  ycf_trap_location = 2;
  goto ycf_do_yield_label_ets_insert_2_list_insert_db_term_list;
  ycf_yield_location_label_2:;
}

}
    }

} while (tail_N69_N75 != NULL);
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
/* YCF Replaced special code */

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
  struct gen_ycf_trap_state_for_ets_insert_2_list_insert_db_term_list* ycf_my_trap_state;
  ycf_do_yield_label_ets_insert_2_list_insert_db_term_list:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_ets_insert_2_list_insert_db_term_list), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->tail_N69_N75 = tail_N69_N75;
    ycf_my_trap_state->term_N70_N76 = term_N70_N76;
    ycf_my_trap_state->meth_N71_N77 = meth_N71_N77;
    ycf_my_trap_state->compress_N72_N78 = compress_N72_N78;
    ycf_my_trap_state->tb_N73_N79 = tb_N73_N79;
    ycf_my_trap_state->db_term_list_N74_N80 = db_term_list_N74_N80;

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



struct gen_ycf_trap_state_for_ets_insert_2_list {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    int cret_N84_N117;
    void* db_term_list_N85_N118;
    void* destroy_list_N86_N119;
    DbTableMethod* meth_N87_N120;
    int compressed_N88_N121;
    int keypos_N89_N122;
    Uint32 tb_type_N90_N123;
    Uint bif_ix_N91_N124;
    long list_len_N92_N125;
        Eterm ret_N81_N126;
        long reds_boost_N82_N127; Eterm fvalue_N83_N128;
void* ycf_sub_fun_trap_state_wb_N99;
int ycf_gen_control_tmp_N101;

void* ycf_sub_fun_trap_state_wb_N100;
int ycf_gen_control_tmp_N103;

void* ycf_sub_fun_trap_state_wb_N102;
int ycf_gen_control_tmp_N106;

void* ycf_sub_fun_trap_state_wb_N104;

void* ycf_sub_fun_trap_state_wb_N105;

void* ycf_sub_fun_trap_state_wb_N107;
void* ycf_sub_fun_trap_state_wb_N108;
int ycf_gen_control_tmp_N111;
void* ycf_sub_fun_trap_state_wb_N109;

void* ycf_sub_fun_trap_state_wb_N110;
int ycf_gen_control_tmp_N115;

void* ycf_sub_fun_trap_state_wb_N112;

void* ycf_sub_fun_trap_state_wb_N113;

void* ycf_sub_fun_trap_state_wb_N114;

void* ycf_sub_fun_trap_state_wb_N116;Process* p_N93_N129;
                                     Eterm table_id_N94_N130;
                                     Binary* btid_N95_N131;
                                     DbTable *tb_N96_N132;
                                     Eterm list_N97_N133;
                                     int is_insert_new_N98_N134;
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

static void ets_insert_2_list_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_ets_insert_2_list* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    int cret_N84_N117;
    void* db_term_list_N85_N118;
    void* destroy_list_N86_N119;
    DbTableMethod* meth_N87_N120;
    int compressed_N88_N121;
    int keypos_N89_N122;
    Uint32 tb_type_N90_N123;
    Uint bif_ix_N91_N124;
    long list_len_N92_N125;
        Eterm ret_N81_N126;
        long reds_boost_N82_N127; Eterm fvalue_N83_N128;
void* ycf_sub_fun_trap_state_wb_N99;
int ycf_gen_control_tmp_N101;

void* ycf_sub_fun_trap_state_wb_N100;
int ycf_gen_control_tmp_N103;

void* ycf_sub_fun_trap_state_wb_N102;
int ycf_gen_control_tmp_N106;

void* ycf_sub_fun_trap_state_wb_N104;

void* ycf_sub_fun_trap_state_wb_N105;

void* ycf_sub_fun_trap_state_wb_N107;
void* ycf_sub_fun_trap_state_wb_N108;
int ycf_gen_control_tmp_N111;
void* ycf_sub_fun_trap_state_wb_N109;

void* ycf_sub_fun_trap_state_wb_N110;
int ycf_gen_control_tmp_N115;

void* ycf_sub_fun_trap_state_wb_N112;

void* ycf_sub_fun_trap_state_wb_N113;

void* ycf_sub_fun_trap_state_wb_N114;

void* ycf_sub_fun_trap_state_wb_N116;Process* p_N93_N129;
                                     Eterm table_id_N94_N130;
                                     Binary* btid_N95_N131;
                                     DbTable *tb_N96_N132;
                                     Eterm list_N97_N133;
                                     int is_insert_new_N98_N134;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    cret_N84_N117 = ycf_my_trap_state->cret_N84_N117;
    db_term_list_N85_N118 = ycf_my_trap_state->db_term_list_N85_N118;
    destroy_list_N86_N119 = ycf_my_trap_state->destroy_list_N86_N119;
    meth_N87_N120 = ycf_my_trap_state->meth_N87_N120;
    compressed_N88_N121 = ycf_my_trap_state->compressed_N88_N121;
    keypos_N89_N122 = ycf_my_trap_state->keypos_N89_N122;
    tb_type_N90_N123 = ycf_my_trap_state->tb_type_N90_N123;
    bif_ix_N91_N124 = ycf_my_trap_state->bif_ix_N91_N124;
    list_len_N92_N125 = ycf_my_trap_state->list_len_N92_N125;
    ret_N81_N126 = ycf_my_trap_state->ret_N81_N126;
    reds_boost_N82_N127 = ycf_my_trap_state->reds_boost_N82_N127;
    fvalue_N83_N128 = ycf_my_trap_state->fvalue_N83_N128;
    ycf_sub_fun_trap_state_wb_N99 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N99;
    ycf_gen_control_tmp_N101 = ycf_my_trap_state->ycf_gen_control_tmp_N101;
    ycf_sub_fun_trap_state_wb_N100 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N100;
    ycf_gen_control_tmp_N103 = ycf_my_trap_state->ycf_gen_control_tmp_N103;
    ycf_sub_fun_trap_state_wb_N102 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N102;
    ycf_gen_control_tmp_N106 = ycf_my_trap_state->ycf_gen_control_tmp_N106;
    ycf_sub_fun_trap_state_wb_N104 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N104;
    ycf_sub_fun_trap_state_wb_N105 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N105;
    ycf_sub_fun_trap_state_wb_N107 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N107;
    ycf_sub_fun_trap_state_wb_N108 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N108;
    ycf_gen_control_tmp_N111 = ycf_my_trap_state->ycf_gen_control_tmp_N111;
    ycf_sub_fun_trap_state_wb_N109 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N109;
    ycf_sub_fun_trap_state_wb_N110 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N110;
    ycf_gen_control_tmp_N115 = ycf_my_trap_state->ycf_gen_control_tmp_N115;
    ycf_sub_fun_trap_state_wb_N112 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N112;
    ycf_sub_fun_trap_state_wb_N113 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N113;
    ycf_sub_fun_trap_state_wb_N114 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N114;
    ycf_sub_fun_trap_state_wb_N116 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N116;
    p_N93_N129 = ycf_my_trap_state->p_N93_N129;
    table_id_N94_N130 = ycf_my_trap_state->table_id_N94_N130;
    btid_N95_N131 = ycf_my_trap_state->btid_N95_N131;
    tb_N96_N132 = ycf_my_trap_state->tb_N96_N132;
    list_N97_N133 = ycf_my_trap_state->list_N97_N133;
    is_insert_new_N98_N134 = ycf_my_trap_state->is_insert_new_N98_N134;

     
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */

     
/* YCF SPECIAL CUSTOM CODE START */
{
  if(ycf_sub_fun_trap_state_wb_N99 != NULL)
{     ets_insert_2_list_check_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N99);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N100 != NULL)
{     ets_insert_2_list_lock_tbl_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N100);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N102 != NULL)
{     ets_insert_2_list_lock_tbl_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N102);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N104 != NULL)
{     ets_insert_new_2_list_has_member_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N104);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N105 != NULL)
{     ets_insert_2_list_from_p_heap_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N105);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N107 != NULL)
{     ets_insert_2_list_from_p_heap_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N107);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N108 != NULL)
{     ets_insert_2_list_copy_term_list_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N108);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N109 != NULL)
{     ets_insert_2_list_lock_tbl_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N109);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N110 != NULL)
{     ets_insert_2_list_destroy_copied_dbterms_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N110);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N112 != NULL)
{     ets_insert_new_2_dbterm_list_has_member_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N112);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N113 != NULL)
{     ets_insert_2_list_destroy_copied_dbterms_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N113);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N114 != NULL)
{     ets_insert_2_list_insert_db_term_list_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N114);
  }
}
{
  if(ycf_sub_fun_trap_state_wb_N116 != NULL)
{     ets_insert_2_list_insert_db_term_list_ycf_gen_destroy(ycf_sub_fun_trap_state_wb_N116);
  }
}
{
 {
        ets_insert_2_list_destroy_copied_dbterms(meth_N87_N120,
                                                 compressed_N88_N121,
                                                 destroy_list_N86_N119);
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

   static  BIF_RETTYPE  ets_insert_2_list_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_ets_insert_2_list* ycf_my_trap_state = *ycf_trap_state;
return ets_insert_2_list_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->p_N93_N129,ycf_my_trap_state->table_id_N94_N130,ycf_my_trap_state->btid_N95_N131,ycf_my_trap_state->tb_N96_N132,ycf_my_trap_state->list_N97_N133,ycf_my_trap_state->is_insert_new_N98_N134)
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
static BIF_RETTYPE ets_insert_2_list_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Process* p_N93_N129,
                                     Eterm table_id_N94_N130,
                                     Binary* btid_N95_N131,
                                     DbTable *tb_N96_N132,
                                     Eterm list_N97_N133,
                                     int is_insert_new_N98_N134)
{
    int cret_N84_N117;
    void* db_term_list_N85_N118;
    void* destroy_list_N86_N119;
    DbTableMethod* meth_N87_N120;
    int compressed_N88_N121;
    int keypos_N89_N122;
    Uint32 tb_type_N90_N123;
    Uint bif_ix_N91_N124;
    long list_len_N92_N125;
        Eterm ret_N81_N126;
        long reds_boost_N82_N127; Eterm fvalue_N83_N128;
void* ycf_sub_fun_trap_state_wb_N99;
int ycf_gen_control_tmp_N101;

void* ycf_sub_fun_trap_state_wb_N100;
int ycf_gen_control_tmp_N103;

void* ycf_sub_fun_trap_state_wb_N102;
int ycf_gen_control_tmp_N106;

void* ycf_sub_fun_trap_state_wb_N104;

void* ycf_sub_fun_trap_state_wb_N105;

void* ycf_sub_fun_trap_state_wb_N107;
void* ycf_sub_fun_trap_state_wb_N108;
int ycf_gen_control_tmp_N111;
void* ycf_sub_fun_trap_state_wb_N109;

void* ycf_sub_fun_trap_state_wb_N110;
int ycf_gen_control_tmp_N115;

void* ycf_sub_fun_trap_state_wb_N112;

void* ycf_sub_fun_trap_state_wb_N113;

void* ycf_sub_fun_trap_state_wb_N114;

void* ycf_sub_fun_trap_state_wb_N116;
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
     struct gen_ycf_trap_state_for_ets_insert_2_list* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    cret_N84_N117 = ycf_my_trap_state->cret_N84_N117;
    db_term_list_N85_N118 = ycf_my_trap_state->db_term_list_N85_N118;
    destroy_list_N86_N119 = ycf_my_trap_state->destroy_list_N86_N119;
    meth_N87_N120 = ycf_my_trap_state->meth_N87_N120;
    compressed_N88_N121 = ycf_my_trap_state->compressed_N88_N121;
    keypos_N89_N122 = ycf_my_trap_state->keypos_N89_N122;
    tb_type_N90_N123 = ycf_my_trap_state->tb_type_N90_N123;
    bif_ix_N91_N124 = ycf_my_trap_state->bif_ix_N91_N124;
    list_len_N92_N125 = ycf_my_trap_state->list_len_N92_N125;
    ret_N81_N126 = ycf_my_trap_state->ret_N81_N126;
    reds_boost_N82_N127 = ycf_my_trap_state->reds_boost_N82_N127;
    fvalue_N83_N128 = ycf_my_trap_state->fvalue_N83_N128;
    ycf_sub_fun_trap_state_wb_N99 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N99;
    ycf_gen_control_tmp_N101 = ycf_my_trap_state->ycf_gen_control_tmp_N101;
    ycf_sub_fun_trap_state_wb_N100 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N100;
    ycf_gen_control_tmp_N103 = ycf_my_trap_state->ycf_gen_control_tmp_N103;
    ycf_sub_fun_trap_state_wb_N102 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N102;
    ycf_gen_control_tmp_N106 = ycf_my_trap_state->ycf_gen_control_tmp_N106;
    ycf_sub_fun_trap_state_wb_N104 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N104;
    ycf_sub_fun_trap_state_wb_N105 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N105;
    ycf_sub_fun_trap_state_wb_N107 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N107;
    ycf_sub_fun_trap_state_wb_N108 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N108;
    ycf_gen_control_tmp_N111 = ycf_my_trap_state->ycf_gen_control_tmp_N111;
    ycf_sub_fun_trap_state_wb_N109 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N109;
    ycf_sub_fun_trap_state_wb_N110 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N110;
    ycf_gen_control_tmp_N115 = ycf_my_trap_state->ycf_gen_control_tmp_N115;
    ycf_sub_fun_trap_state_wb_N112 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N112;
    ycf_sub_fun_trap_state_wb_N113 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N113;
    ycf_sub_fun_trap_state_wb_N114 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N114;
    ycf_sub_fun_trap_state_wb_N116 = ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N116;
    p_N93_N129 = ycf_my_trap_state->p_N93_N129;
    table_id_N94_N130 = ycf_my_trap_state->table_id_N94_N130;
    btid_N95_N131 = ycf_my_trap_state->btid_N95_N131;
    tb_N96_N132 = ycf_my_trap_state->tb_N96_N132;
    list_N97_N133 = ycf_my_trap_state->list_N97_N133;
    is_insert_new_N98_N134 = ycf_my_trap_state->is_insert_new_N98_N134;

     
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

}
  }
}
{

ycf_sub_fun_trap_state_wb_N99 = NULL;

ycf_sub_fun_trap_state_wb_N100 = NULL;

ycf_sub_fun_trap_state_wb_N102 = NULL;

ycf_sub_fun_trap_state_wb_N104 = NULL;

ycf_sub_fun_trap_state_wb_N105 = NULL;

ycf_sub_fun_trap_state_wb_N107 = NULL;

ycf_sub_fun_trap_state_wb_N108 = NULL;

ycf_sub_fun_trap_state_wb_N109 = NULL;

ycf_sub_fun_trap_state_wb_N110 = NULL;

ycf_sub_fun_trap_state_wb_N112 = NULL;

ycf_sub_fun_trap_state_wb_N113 = NULL;

ycf_sub_fun_trap_state_wb_N114 = NULL;

ycf_sub_fun_trap_state_wb_N116 = NULL;

}
    cret_N84_N117 = DB_ERROR_NONE;
    db_term_list_N85_N118 = NULL;
    destroy_list_N86_N119 = NULL;
    meth_N87_N120 = tb_N96_N132->common.meth;
    compressed_N88_N121 = tb_N96_N132->common.compress;
    keypos_N89_N122 = tb_N96_N132->common.keypos;
    tb_type_N90_N123 = tb_N96_N132->common.type;
    bif_ix_N91_N124 = (is_insert_new_N98_N134 ? BIF_ets_insert_new_2 : BIF_ets_insert_2);
{

ycf_sub_fun_trap_state_wb_N99 = NULL;
{
  long  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =  ets_insert_2_list_check_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N99,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,keypos_N89_N122, list_N97_N133);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N99)){
   ycf_trap_location = 1;
   goto ycf_do_yield_label_ets_insert_2_list;
  ycf_yield_location_label_1:;
   ycf_tmp_fun_call_tmp_var =  ets_insert_2_list_check_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N99,
                            ycf_extra_context);
}

    /* tb should not be accessed after this point unless the table
       lock is held as the table can get deleted while the function is
       yielding */
    list_len_N92_N125 = ycf_tmp_fun_call_tmp_var;


}
/* YCF Replaced special code */

}

    if (list_len_N92_N125 < 0)
{
    {
{
{


ycf_sub_fun_trap_state_wb_N100 = NULL;
{
  int  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =     !  ! ets_insert_2_list_lock_tbl_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N100,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,btid_N95_N131, p_N93_N129, bif_ix_N91_N124, ETS_INSERT_2_LIST_PROCESS_LOCAL);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N100)){
   ycf_trap_location = 2;
   goto ycf_do_yield_label_ets_insert_2_list;
  ycf_yield_location_label_2:;
   ycf_tmp_fun_call_tmp_var =     !  ! ets_insert_2_list_lock_tbl_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N100,
                            ycf_extra_context);
}

ycf_gen_control_tmp_N101 = ycf_tmp_fun_call_tmp_var;


}
/* YCF Replaced special code */

}


if(ycf_gen_control_tmp_N101)
{
    {
            db_unlock(tb_N96_N132, LCK_WRITE);
            p_N93_N129->freason = BADARG;
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

        return THE_NON_VALUE;
}
    }

}
    if (can_insert_without_yield(tb_type_N90_N123, list_len_N92_N125, YCF_NR_OF_REDS_LEFT()))
{
    {
{
{


ycf_sub_fun_trap_state_wb_N102 = NULL;
{
  int  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =      !  !  ! ets_insert_2_list_lock_tbl_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N102,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,btid_N95_N131, p_N93_N129, bif_ix_N91_N124, ETS_INSERT_2_LIST_PROCESS_LOCAL);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N102)){
   ycf_trap_location = 3;
   goto ycf_do_yield_label_ets_insert_2_list;
  ycf_yield_location_label_3:;
   ycf_tmp_fun_call_tmp_var =      !  !  ! ets_insert_2_list_lock_tbl_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N102,
                            ycf_extra_context);
}

ycf_gen_control_tmp_N103 = ycf_tmp_fun_call_tmp_var;


}
/* YCF Replaced special code */

}


if(ycf_gen_control_tmp_N103)
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
}
        /* Ensure that we will not yield while inserting from heap */
        reds_boost_N82_N127 = YCF_MAX_NR_OF_REDS - YCF_NR_OF_REDS_LEFT();
        YCF_SET_NR_OF_REDS_LEFT(YCF_MAX_NR_OF_REDS);
        if (is_insert_new_N98_N134)
{
{
{


ycf_sub_fun_trap_state_wb_N104 = NULL;
{
  int  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =     !  ! ets_insert_new_2_list_has_member_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N104,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,tb_N96_N132, list_N97_N133);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N104)){
   ycf_trap_location = 4;
   goto ycf_do_yield_label_ets_insert_2_list;
  ycf_yield_location_label_4:;
   ycf_tmp_fun_call_tmp_var =     !  ! ets_insert_new_2_list_has_member_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N104,
                            ycf_extra_context);
}

ycf_gen_control_tmp_N106 = ycf_tmp_fun_call_tmp_var;


}
/* YCF Replaced special code */

}


if(ycf_gen_control_tmp_N106)
{
    {
                cret_N84_N117 = DB_ERROR_NONE_FALSE;
            }

}
else
{
{


ycf_sub_fun_trap_state_wb_N105 = NULL;
{
  int  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =  ets_insert_2_list_from_p_heap_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N105,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,tb_N96_N132, list_N97_N133);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N105)){
   ycf_trap_location = 5;
   goto ycf_do_yield_label_ets_insert_2_list;
  ycf_yield_location_label_5:;
   ycf_tmp_fun_call_tmp_var =  ets_insert_2_list_from_p_heap_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N105,
                            ycf_extra_context);
}

                cret_N84_N117 = ycf_tmp_fun_call_tmp_var;


}
/* YCF Replaced special code */

}


}

}

} else
{
{


ycf_sub_fun_trap_state_wb_N107 = NULL;
{
  int  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =  ets_insert_2_list_from_p_heap_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N107,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,tb_N96_N132, list_N97_N133);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N107)){
   ycf_trap_location = 6;
   goto ycf_do_yield_label_ets_insert_2_list;
  ycf_yield_location_label_6:;
   ycf_tmp_fun_call_tmp_var =  ets_insert_2_list_from_p_heap_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N107,
                            ycf_extra_context);
}

            cret_N84_N117 = ycf_tmp_fun_call_tmp_var;


}
/* YCF Replaced special code */

}


}
        db_unlock(tb_N96_N132, LCK_WRITE);
        YCF_SET_NR_OF_REDS_LEFT(YCF_NR_OF_REDS_LEFT() - reds_boost_N82_N127);
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

        return ets_cret_to_return_value(p_N93_N129, cret_N84_N117);
}
    }

}
{

ycf_sub_fun_trap_state_wb_N108 = NULL;
{
   void  *  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =  ets_insert_2_list_copy_term_list_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N108,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,meth_N87_N120, compressed_N88_N121, keypos_N89_N122, list_N97_N133);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N108)){
   ycf_trap_location = 7;
   goto ycf_do_yield_label_ets_insert_2_list;
  ycf_yield_location_label_7:;
   ycf_tmp_fun_call_tmp_var =  ets_insert_2_list_copy_term_list_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N108,
                            ycf_extra_context);
}

    /* Copy term list from heap so that other processes can help */
    db_term_list_N85_N118 = ycf_tmp_fun_call_tmp_var;


}
/* YCF Replaced special code */

}

    destroy_list_N86_N119 = db_term_list_N85_N118;
{
{

ycf_sub_fun_trap_state_wb_N109 = NULL;
{
  int  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =      !  !  ! ets_insert_2_list_lock_tbl_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N109,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,btid_N95_N131, p_N93_N129, bif_ix_N91_N124, ETS_INSERT_2_LIST_GLOBAL);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N109)){
   ycf_trap_location = 8;
   goto ycf_do_yield_label_ets_insert_2_list;
  ycf_yield_location_label_8:;
   ycf_tmp_fun_call_tmp_var =      !  !  ! ets_insert_2_list_lock_tbl_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N109,
                            ycf_extra_context);
}

ycf_gen_control_tmp_N111 = ycf_tmp_fun_call_tmp_var;


}
/* YCF Replaced special code */

}

if(ycf_gen_control_tmp_N111)
{
    {
        fvalue_N83_N128 = p_N93_N129->fvalue;
        ASSERT(p_N93_N129->freason == (BADARG | EXF_HAS_EXT_INFO));

        destroy_list_N86_N119 = NULL;
{


ycf_sub_fun_trap_state_wb_N110 = NULL;
{
 ets_insert_2_list_destroy_copied_dbterms_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N110,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,meth_N87_N120,
                                                 compressed_N88_N121,
                                                 db_term_list_N85_N118);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N110)){
   ycf_trap_location = 9;
   goto ycf_do_yield_label_ets_insert_2_list;
  ycf_yield_location_label_9:;
    ets_insert_2_list_destroy_copied_dbterms_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N110,
                            ycf_extra_context);
}


}
/* YCF Replaced special code */

}


        /* Restore failure reason as we may have trapped during destroy */
        p_N93_N129->freason = BADARG | EXF_HAS_EXT_INFO;
        p_N93_N129->fvalue = fvalue_N83_N128;
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

}
}

    if (is_insert_new_N98_N134)
{
{
{


ycf_sub_fun_trap_state_wb_N112 = NULL;
{
  int  ycf_tmp_fun_call_tmp_var;
ycf_tmp_fun_call_tmp_var =     !  ! ets_insert_new_2_dbterm_list_has_member_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N112,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,tb_N96_N132, db_term_list_N85_N118);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N112)){
   ycf_trap_location = 10;
   goto ycf_do_yield_label_ets_insert_2_list;
  ycf_yield_location_label_10:;
   ycf_tmp_fun_call_tmp_var =     !  ! ets_insert_new_2_dbterm_list_has_member_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N112,
                            ycf_extra_context);
}

ycf_gen_control_tmp_N115 = ycf_tmp_fun_call_tmp_var;


}
/* YCF Replaced special code */

}


if(ycf_gen_control_tmp_N115)
{
    {
            destroy_list_N86_N119 = NULL;
{


ycf_sub_fun_trap_state_wb_N113 = NULL;
{
 ets_insert_2_list_destroy_copied_dbterms_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N113,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,meth_N87_N120,
                                                     compressed_N88_N121,
                                                     db_term_list_N85_N118);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N113)){
   ycf_trap_location = 11;
   goto ycf_do_yield_label_ets_insert_2_list;
  ycf_yield_location_label_11:;
    ets_insert_2_list_destroy_copied_dbterms_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N113,
                            ycf_extra_context);
}


}
/* YCF Replaced special code */

}


            cret_N84_N117 = DB_ERROR_NONE_FALSE;
        }

}
else
{
    {
            destroy_list_N86_N119 = NULL;
{


ycf_sub_fun_trap_state_wb_N114 = NULL;
{
 ets_insert_2_list_insert_db_term_list_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N114,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,tb_N96_N132, db_term_list_N85_N118);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N114)){
   ycf_trap_location = 12;
   goto ycf_do_yield_label_ets_insert_2_list;
  ycf_yield_location_label_12:;
    ets_insert_2_list_insert_db_term_list_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N114,
                            ycf_extra_context);
}


}
/* YCF Replaced special code */

}


        }

}

}

}
    else
{
    {
        destroy_list_N86_N119 = NULL;
{


ycf_sub_fun_trap_state_wb_N116 = NULL;
{
 ets_insert_2_list_insert_db_term_list_ycf_gen_yielding(&ycf_nr_of_reductions,
                         &ycf_sub_fun_trap_state_wb_N116,ycf_extra_context,
                         ycf_yield_alloc,ycf_yield_free,
                         ycf_yield_alloc_free_context,
                         YCF_ALLOC_NEXT_MAX_SIZE(),
                         YCF_ALLOC_NEXT_BLOCK()
                         ,tb_N96_N132, db_term_list_N85_N118);
while(YCF_IS_YIELDED(ycf_sub_fun_trap_state_wb_N116)){
   ycf_trap_location = 13;
   goto ycf_do_yield_label_ets_insert_2_list;
  ycf_yield_location_label_13:;
    ets_insert_2_list_insert_db_term_list_ycf_gen_continue(&ycf_nr_of_reductions,
                            &ycf_sub_fun_trap_state_wb_N116,
                            ycf_extra_context);
}


}
/* YCF Replaced special code */

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

    
    return ets_cret_to_return_value(NULL, cret_N84_N117);
}
/* YCF Replaced special code */


{
  struct gen_ycf_trap_state_for_ets_insert_2_list* ycf_my_trap_state;
  ycf_do_yield_label_ets_insert_2_list:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_ets_insert_2_list), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->cret_N84_N117 = cret_N84_N117;
    ycf_my_trap_state->db_term_list_N85_N118 = db_term_list_N85_N118;
    ycf_my_trap_state->destroy_list_N86_N119 = destroy_list_N86_N119;
    ycf_my_trap_state->meth_N87_N120 = meth_N87_N120;
    ycf_my_trap_state->compressed_N88_N121 = compressed_N88_N121;
    ycf_my_trap_state->keypos_N89_N122 = keypos_N89_N122;
    ycf_my_trap_state->tb_type_N90_N123 = tb_type_N90_N123;
    ycf_my_trap_state->bif_ix_N91_N124 = bif_ix_N91_N124;
    ycf_my_trap_state->list_len_N92_N125 = list_len_N92_N125;
    ycf_my_trap_state->ret_N81_N126 = ret_N81_N126;
    ycf_my_trap_state->reds_boost_N82_N127 = reds_boost_N82_N127;
    ycf_my_trap_state->fvalue_N83_N128 = fvalue_N83_N128;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N99 = ycf_sub_fun_trap_state_wb_N99;
    ycf_my_trap_state->ycf_gen_control_tmp_N101 = ycf_gen_control_tmp_N101;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N100 = ycf_sub_fun_trap_state_wb_N100;
    ycf_my_trap_state->ycf_gen_control_tmp_N103 = ycf_gen_control_tmp_N103;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N102 = ycf_sub_fun_trap_state_wb_N102;
    ycf_my_trap_state->ycf_gen_control_tmp_N106 = ycf_gen_control_tmp_N106;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N104 = ycf_sub_fun_trap_state_wb_N104;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N105 = ycf_sub_fun_trap_state_wb_N105;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N107 = ycf_sub_fun_trap_state_wb_N107;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N108 = ycf_sub_fun_trap_state_wb_N108;
    ycf_my_trap_state->ycf_gen_control_tmp_N111 = ycf_gen_control_tmp_N111;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N109 = ycf_sub_fun_trap_state_wb_N109;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N110 = ycf_sub_fun_trap_state_wb_N110;
    ycf_my_trap_state->ycf_gen_control_tmp_N115 = ycf_gen_control_tmp_N115;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N112 = ycf_sub_fun_trap_state_wb_N112;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N113 = ycf_sub_fun_trap_state_wb_N113;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N114 = ycf_sub_fun_trap_state_wb_N114;
    ycf_my_trap_state->ycf_sub_fun_trap_state_wb_N116 = ycf_sub_fun_trap_state_wb_N116;
    ycf_my_trap_state->p_N93_N129 = p_N93_N129;
    ycf_my_trap_state->table_id_N94_N130 = table_id_N94_N130;
    ycf_my_trap_state->btid_N95_N131 = btid_N95_N131;
    ycf_my_trap_state->tb_N96_N132 = tb_N96_N132;
    ycf_my_trap_state->list_N97_N133 = list_N97_N133;
    ycf_my_trap_state->is_insert_new_N98_N134 = is_insert_new_N98_N134;

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



struct gen_ycf_trap_state_for_ets_insert_2_list_lock_tbl {
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    DbTable* tb_N135_N140;Binary *btid_N136_N141;
                                      Process* p_N137_N142;
                                      Uint bif_ix_N138_N143;
                                      ets_insert_2_list_status on_success_status_N139_N144;
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

static void ets_insert_2_list_lock_tbl_ycf_gen_destroy(void* ycf_my_trap_state_param){
     {
     struct gen_ycf_trap_state_for_ets_insert_2_list_lock_tbl* ycf_my_trap_state = ycf_my_trap_state_param;
     
ycf_yield_alloc_type ycf_yield_alloc;
ycf_yield_free_type ycf_yield_free;
void* ycf_yield_alloc_free_context;
size_t ycf_stack_alloc_size_or_max_size;
void* ycf_stack_alloc_data;
int ycf_trap_location;
long ycf_nr_of_reductions;
struct ycf_alloc_data ycf_frame_alloc_data;
    DbTable* tb_N135_N140;Binary *btid_N136_N141;
                                      Process* p_N137_N142;
                                      Uint bif_ix_N138_N143;
                                      ets_insert_2_list_status on_success_status_N139_N144;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    tb_N135_N140 = ycf_my_trap_state->tb_N135_N140;
    btid_N136_N141 = ycf_my_trap_state->btid_N136_N141;
    p_N137_N142 = ycf_my_trap_state->p_N137_N142;
    bif_ix_N138_N143 = ycf_my_trap_state->bif_ix_N138_N143;
    on_success_status_N139_N144 = ycf_my_trap_state->on_success_status_N139_N144;

     
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

   static  int  ets_insert_2_list_lock_tbl_ycf_gen_continue(long* ycf_number_of_reduction_param,
                       void** ycf_trap_state,
                       void* ycf_extra_context){
     struct gen_ycf_trap_state_for_ets_insert_2_list_lock_tbl* ycf_my_trap_state = *ycf_trap_state;
return ets_insert_2_list_lock_tbl_ycf_gen_yielding(ycf_number_of_reduction_param,
                    ycf_trap_state,
                    ycf_extra_context,
                    ycf_my_trap_state->ycf_yield_alloc,
                    ycf_my_trap_state->ycf_yield_free,
                    ycf_my_trap_state->ycf_yield_alloc_free_context,
                    ycf_my_trap_state->ycf_stack_alloc_size_or_max_size,
                    ycf_my_trap_state->ycf_stack_alloc_data
                    ,ycf_my_trap_state->btid_N136_N141,ycf_my_trap_state->p_N137_N142,ycf_my_trap_state->bif_ix_N138_N143,ycf_my_trap_state->on_success_status_N139_N144)
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


static int ets_insert_2_list_lock_tbl_ycf_gen_yielding(
long* ycf_nr_of_reductions_param,
void** ycf_trap_state,
void* ycf_extra_context,
ycf_yield_alloc_type ycf_yield_alloc,
ycf_yield_free_type ycf_yield_free,
void* ycf_yield_alloc_free_context,
size_t ycf_stack_alloc_size_or_max_size,
void* ycf_stack_alloc_data,Binary *btid_N136_N141,
                                      Process* p_N137_N142,
                                      Uint bif_ix_N138_N143,
                                      ets_insert_2_list_status on_success_status_N139_N144)
{
    DbTable* tb_N135_N140;
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
     struct gen_ycf_trap_state_for_ets_insert_2_list_lock_tbl* ycf_my_trap_state = *ycf_trap_state;
     
    ycf_yield_alloc = ycf_my_trap_state->ycf_yield_alloc;
    ycf_yield_free = ycf_my_trap_state->ycf_yield_free;
    ycf_yield_alloc_free_context = ycf_my_trap_state->ycf_yield_alloc_free_context;
    ycf_stack_alloc_size_or_max_size = ycf_my_trap_state->ycf_stack_alloc_size_or_max_size;
    ycf_stack_alloc_data = ycf_my_trap_state->ycf_stack_alloc_data;
    ycf_trap_location = ycf_my_trap_state->ycf_trap_location;
    ycf_nr_of_reductions = ycf_my_trap_state->ycf_nr_of_reductions;
    ycf_frame_alloc_data = ycf_my_trap_state->ycf_frame_alloc_data;
    tb_N135_N140 = ycf_my_trap_state->tb_N135_N140;
    btid_N136_N141 = ycf_my_trap_state->btid_N136_N141;
    p_N137_N142 = ycf_my_trap_state->p_N137_N142;
    bif_ix_N138_N143 = ycf_my_trap_state->bif_ix_N138_N143;
    on_success_status_N139_N144 = ycf_my_trap_state->on_success_status_N139_N144;

     
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

    do
{
    {
        LOCAL_VARIABLE(ets_insert_2_list_info*,ctx);
        ctx = YCF_GET_EXTRA_CONTEXT();
        ASSERT(ctx->status != ETS_INSERT_2_LIST_GLOBAL);

        tb_N135_N140 = db_get_table_or_fail_return(btid_N136_N141,
                                         DB_WRITE,
                                         LCK_WRITE,
                                         bif_ix_N138_N143,
                                         p_N137_N142);
        ASSERT(ctx->status != ETS_INSERT_2_LIST_GLOBAL);

        if (tb_N135_N140 == NULL)
{
    {
            if (p_N137_N142->freason == TRAP)
{

{
  ycf_nr_of_reductions = 0;
  ycf_trap_location = 1;
  goto ycf_do_yield_label_ets_insert_2_list_lock_tbl;
  ycf_yield_location_label_1:;
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

                return 0;
}

}
        }

}
        else
{
{
    if (is_atom(ctx->tid) && tb_N135_N140->common.the_name != ctx->tid)
{
    {
            /*
             * The table has been renamed. We have to fail. This named
             * insert op might otherwise be observable as if it happened
             * AFTER the table was renamed.
             *
             * Note that we are allowed to fail here as long as there is no
             * atomic name change op from one table to another.
             */
            p_N137_N142->freason = BADARG | EXF_HAS_EXT_INFO;
            p_N137_N142->fvalue = EXI_ID;
            db_unlock(tb_N135_N140, LCK_WRITE);
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

            return 0;
}
        }

}
        else
{
    {
            ctx->status = on_success_status_N139_N144;
        }

}
}

}
    }

} while (tb_N135_N140 == NULL);

    ERTS_LC_ASSERT(DB_LOCK_FREE(tb_N135_N140) || erts_lc_rwmtx_is_rwlocked(&tb_N135_N140->common.rwlock));
    ASSERT(!(tb_N135_N140->common.status & (DB_DELETE|DB_BUSY)));
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

    return 1;
}

{
  struct gen_ycf_trap_state_for_ets_insert_2_list_lock_tbl* ycf_my_trap_state;
  ycf_do_yield_label_ets_insert_2_list_lock_tbl:;
  
/* YCF SPECIAL CUSTOM CODE START */

/* YCF SPECIAL CUSTOM CODE END */
  if (*ycf_trap_state == NULL) {
    ycf_my_trap_state = ycf_yield_alloc(sizeof(struct gen_ycf_trap_state_for_ets_insert_2_list_lock_tbl), ycf_yield_alloc_free_context);
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
    ycf_my_trap_state->tb_N135_N140 = tb_N135_N140;
    ycf_my_trap_state->btid_N136_N141 = btid_N136_N141;
    ycf_my_trap_state->p_N137_N142 = p_N137_N142;
    ycf_my_trap_state->bif_ix_N138_N143 = bif_ix_N138_N143;
    ycf_my_trap_state->on_success_status_N139_N144 = on_success_status_N139_N144;

  *ycf_nr_of_reductions_param = ycf_nr_of_reductions;
  *ycf_trap_state = ycf_my_trap_state;
      {
    static   int  const ycf_unused_ret_value;
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
