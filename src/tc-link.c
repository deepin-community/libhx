#include <stdlib.h>
#include <libHX.h>
#include "internal.h"

static void *funcs[] = {
	HXdeque_init,
	HXdeque_push,
	HXdeque_pop,
	HXdeque_unshift,
	HXdeque_shift,
	HXdeque_move,
	HXdeque_del,
	HXdeque_free,
	HXdeque_find,
	HXdeque_get,
	HXdeque_genocide2,
	HXdeque_to_vec,
	HX_dlopen,
	HX_dlsym,
	HX_dlclose,
	HX_dlerror,
	HXformat_init,
	HXformat_free,
	HXformat_add,
	HXformat_aprintf,
	HXformat_fprintf,
	HXformat_sprintf,
	HXdir_open,
	HXdir_read,
	HXdir_close,
	HX_copy_file,
	HX_copy_dir,
	HX_mkdir,
	HX_readlink,
	HX_realpath,
	HX_rrmdir,
	HXio_fullread,
	HXio_fullwrite,
	HXmap_free,
	HXhash_jlookup3,
	HXhash_jlookup3s,
	HXhash_djb2,
	HXmap_init5,
	HXmap_init,
	HXmap_find,
	HXmap_get,
	HXmap_add,
	HXmap_del,
	HXmap_keysvalues,
	HXmap_travinit,
	HXmap_traverse,
	HXmap_travfree,
	HXmap_qfe,
	HXmc_strinit,
	HXmc_meminit,
	HXmc_strcpy,
	HXmc_memcpy,
	HXmc_length,
	HXmc_setlen,
	HXmc_trunc,
	HXmc_strcat,
	HXmc_memcat,
	HXmc_strpcat,
	HXmc_mempcat,
	HXmc_strins,
	HXmc_memins,
	HXmc_memdel,
	HXmc_free,
	HXmc_zvecfree,
	HX_ffs,
	HX_fls,
	HX_hexdump,
	HX_zvecfree,
	HX_getopt,
	HX_getopt_help,
	HX_getopt_help_cb,
	HX_getopt_usage,
	HX_getopt_usage_cb,
	HX_shconfig,
	HX_shconfig_map,
	HX_shconfig_pv,
	HX_shconfig_free,
	HXproc_run_async,
	HXproc_run_sync,
	HXproc_wait,
	HX_init,
	HX_exit,
	HX_rand,
	HX_drand,
	HX_irand,
	HX_basename,
	HX_basename_exact,
	HX_chomp,
	HX_dirname,
	HX_getl,
	HX_memmem,
	HX_split,
	HX_split_fixed,
	HX_split_inplace,
	HX_stpltrim,
	HX_strbchr,
	HX_strchr2,
	HX_strclone,
	HX_strdup,
	HX_strlcat,
	HX_strlcpy,
	HX_strlncat,
	HX_strlower,
	HX_strltrim,
	HX_strmid,
	HX_strndup,
	HX_strnlen,
	HX_strrcspn,
	HX_strrev,
	HX_strrtrim,
	HX_strsep,
	HX_strsep2,
	HX_strquote,
	HX_strupper,
	HX_time_compare,
#ifdef HAVE_STRUCT_TIMESPEC_TV_NSEC
	HX_timespec_add,
	HX_timespec_isneg,
	HX_timespec_mul,
	HX_timespec_mulf,
	HX_timespec_neg,
	HX_timespec_sub,
#endif
#ifdef HAVE_STRUCT_TIMEVAL_TV_USEC
	HX_timeval_sub,
#endif
#ifdef _WIN32
	chown,
	fchmod,
	fchown,
	lchown,
	lstat,
	mkfifo,
	mknod,
	readlink,
	symlink,
	mmap,
	munmap,
#endif
};

int main(void)
{
	unsigned int i;

	for (i = 0; i < ARRAY_SIZE(funcs); ++i)
		printf("%p ", funcs[i]);
	printf("\n");
	printf("There are %" HX_SIZET_FMT "u exported functions\n", ARRAY_SIZE(funcs));
	return EXIT_SUCCESS;
}
