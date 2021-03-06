#ifndef __OPENJPEG_MANGLED_H__
#define __OPENJPEG_MANGLED_H__

// list is made using command 'dumpbin.exe /LINKERMEMBER:1 libopenjpeg.lib'

#define	tgt_create	OPENJPEGLIBRARY_tgt_create
#define	tgt_decode	OPENJPEGLIBRARY_tgt_decode
#define	tgt_destroy	OPENJPEGLIBRARY_tgt_destroy
#define	tgt_encode	OPENJPEGLIBRARY_tgt_encode
#define	tgt_reset	OPENJPEGLIBRARY_tgt_reset
#define	tgt_setvalue	OPENJPEGLIBRARY_tgt_setvalue
#define	tcd_create	OPENJPEGLIBRARY_tcd_create
#define	tcd_decode_tile	OPENJPEGLIBRARY_tcd_decode_tile
#define	tcd_destroy	OPENJPEGLIBRARY_tcd_destroy
#define	tcd_dump	OPENJPEGLIBRARY_tcd_dump
#define	tcd_encode_tile	OPENJPEGLIBRARY_tcd_encode_tile
#define	tcd_free_decode	OPENJPEGLIBRARY_tcd_free_decode
#define	tcd_free_decode_tile	OPENJPEGLIBRARY_tcd_free_decode_tile
#define	tcd_free_encode	OPENJPEGLIBRARY_tcd_free_encode
#define	tcd_init_encode	OPENJPEGLIBRARY_tcd_init_encode
#define	tcd_makelayer	OPENJPEGLIBRARY_tcd_makelayer
#define	tcd_makelayer_fixed	OPENJPEGLIBRARY_tcd_makelayer_fixed
#define	tcd_malloc_decode	OPENJPEGLIBRARY_tcd_malloc_decode
#define	tcd_malloc_decode_tile	OPENJPEGLIBRARY_tcd_malloc_decode_tile
#define	tcd_malloc_encode	OPENJPEGLIBRARY_tcd_malloc_encode
#define	tcd_rateallocate	OPENJPEGLIBRARY_tcd_rateallocate
#define	tcd_rateallocate_fixed	OPENJPEGLIBRARY_tcd_rateallocate_fixed
#define	t2_create	OPENJPEGLIBRARY_t2_create
#define	t2_decode_packets	OPENJPEGLIBRARY_t2_decode_packets
#define	t2_destroy	OPENJPEGLIBRARY_t2_destroy
#define	t2_encode_packets	OPENJPEGLIBRARY_t2_encode_packets
#define	t1_create	OPENJPEGLIBRARY_t1_create
#define	t1_decode_cblks	OPENJPEGLIBRARY_t1_decode_cblks
#define	t1_destroy	OPENJPEGLIBRARY_t1_destroy
#define	t1_encode_cblks	OPENJPEGLIBRARY_t1_encode_cblks
#define	raw_create	OPENJPEGLIBRARY_raw_create
#define	raw_decode	OPENJPEGLIBRARY_raw_decode
#define	raw_destroy	OPENJPEGLIBRARY_raw_destroy
#define	raw_init_dec	OPENJPEGLIBRARY_raw_init_dec
#define	raw_numbytes	OPENJPEGLIBRARY_raw_numbytes
#define	pi_create_decode	OPENJPEGLIBRARY_pi_create_decode
#define	pi_create_encode	OPENJPEGLIBRARY_pi_create_encode
#define	pi_destroy	OPENJPEGLIBRARY_pi_destroy
#define	pi_initialise_encode	OPENJPEGLIBRARY_pi_initialise_encode
#define	pi_next	OPENJPEGLIBRARY_pi_next
#define	opj_clock_secs	OPENJPEGLIBRARY_opj_clock_secs
#define	opj_create_compress	OPENJPEGLIBRARY_opj_create_compress
#define	opj_create_decompress	OPENJPEGLIBRARY_opj_create_decompress
#define	opj_decode	OPENJPEGLIBRARY_opj_decode
#define	opj_decode_with_info	OPENJPEGLIBRARY_opj_decode_with_info
#define	opj_destroy_compress	OPENJPEGLIBRARY_opj_destroy_compress
#define	opj_destroy_cstr_info	OPENJPEGLIBRARY_opj_destroy_cstr_info
#define	opj_destroy_decompress	OPENJPEGLIBRARY_opj_destroy_decompress
#define	opj_encode	OPENJPEGLIBRARY_opj_encode
#define	opj_encode_with_info	OPENJPEGLIBRARY_opj_encode_with_info
#define	opj_j2k_create_compress	OPENJPEGLIBRARY_opj_j2k_create_compress
#define	opj_j2k_create_decompress	OPENJPEGLIBRARY_opj_j2k_create_decompress
#define	opj_j2k_destroy_compress	OPENJPEGLIBRARY_opj_j2k_destroy_compress
#define	opj_j2k_setup_decoder	OPENJPEGLIBRARY_opj_j2k_setup_decoder
#define	opj_read_jp2h	OPENJPEGLIBRARY_opj_read_jp2h
#define	opj_set_default_decoder_parameters	OPENJPEGLIBRARY_opj_set_default_decoder_parameters
#define	opj_set_default_encoder_parameters	OPENJPEGLIBRARY_opj_set_default_encoder_parameters
#define	opj_setup_decoder	OPENJPEGLIBRARY_opj_setup_decoder
#define	opj_setup_encoder	OPENJPEGLIBRARY_opj_setup_encoder
#define	opj_version	OPENJPEGLIBRARY_opj_version
#define	opj_write_jp2h	OPENJPEGLIBRARY_opj_write_jp2h
#define	mqc_bypass_enc	OPENJPEGLIBRARY_mqc_bypass_enc
#define	mqc_bypass_flush_enc	OPENJPEGLIBRARY_mqc_bypass_flush_enc
#define	mqc_bypass_init_enc	OPENJPEGLIBRARY_mqc_bypass_init_enc
#define	mqc_create	OPENJPEGLIBRARY_mqc_create
#define	mqc_decode	OPENJPEGLIBRARY_mqc_decode
#define	mqc_destroy	OPENJPEGLIBRARY_mqc_destroy
#define	mqc_encode	OPENJPEGLIBRARY_mqc_encode
#define	mqc_erterm_enc	OPENJPEGLIBRARY_mqc_erterm_enc
#define	mqc_flush	OPENJPEGLIBRARY_mqc_flush
#define	mqc_init_dec	OPENJPEGLIBRARY_mqc_init_dec
#define	mqc_init_enc	OPENJPEGLIBRARY_mqc_init_enc
#define	mqc_numbytes	OPENJPEGLIBRARY_mqc_numbytes
#define	mqc_reset_enc	OPENJPEGLIBRARY_mqc_reset_enc
#define	mqc_resetstates	OPENJPEGLIBRARY_mqc_resetstates
#define	mqc_restart_enc	OPENJPEGLIBRARY_mqc_restart_enc
#define	mqc_restart_init_enc	OPENJPEGLIBRARY_mqc_restart_init_enc
#define	mqc_segmark_enc	OPENJPEGLIBRARY_mqc_segmark_enc
#define	mqc_setstate	OPENJPEGLIBRARY_mqc_setstate
#define	mct_decode	OPENJPEGLIBRARY_mct_decode
#define	mct_decode_real	OPENJPEGLIBRARY_mct_decode_real
#define	mct_encode	OPENJPEGLIBRARY_mct_encode
#define	mct_encode_real	OPENJPEGLIBRARY_mct_encode_real
#define	mct_getnorm	OPENJPEGLIBRARY_mct_getnorm
#define	mct_getnorm_real	OPENJPEGLIBRARY_mct_getnorm_real
#define	jpt_init_msg_header	OPENJPEGLIBRARY_jpt_init_msg_header
#define	jpt_read_VBAS_info	OPENJPEGLIBRARY_jpt_read_VBAS_info
#define	jpt_read_msg_header	OPENJPEGLIBRARY_jpt_read_msg_header
#define	jpt_reinit_msg_header	OPENJPEGLIBRARY_jpt_reinit_msg_header
#define	jp2_create_compress	OPENJPEGLIBRARY_jp2_create_compress
#define	jp2_create_decompress	OPENJPEGLIBRARY_jp2_create_decompress
#define	jp2_decode	OPENJPEGLIBRARY_jp2_decode
#define	jp2_destroy_compress	OPENJPEGLIBRARY_jp2_destroy_compress
#define	jp2_destroy_decompress	OPENJPEGLIBRARY_jp2_destroy_decompress
#define	jp2_encode	OPENJPEGLIBRARY_jp2_encode
#define	jp2_read_jp2h	OPENJPEGLIBRARY_jp2_read_jp2h
#define	jp2_setup_decoder	OPENJPEGLIBRARY_jp2_setup_decoder
#define	jp2_setup_encoder	OPENJPEGLIBRARY_jp2_setup_encoder
#define	jp2_write_jp2h	OPENJPEGLIBRARY_jp2_write_jp2h
#define	opj_jp2_free_color_data	OPENJPEGLIBRARY_opj_jp2_free_color_data
#define	opj_clock	OPENJPEGLIBRARY_opj_clock
#define	j2k_calculate_tp	OPENJPEGLIBRARY_j2k_calculate_tp
#define	j2k_convert_progression_order	OPENJPEGLIBRARY_j2k_convert_progression_order
#define	j2k_create_compress	OPENJPEGLIBRARY_j2k_create_compress
#define	j2k_create_decompress	OPENJPEGLIBRARY_j2k_create_decompress
#define	j2k_dec_mstab	OPENJPEGLIBRARY_j2k_dec_mstab
#define	j2k_decode	OPENJPEGLIBRARY_j2k_decode
#define	j2k_decode_jpt_stream	OPENJPEGLIBRARY_j2k_decode_jpt_stream
#define	j2k_destroy_compress	OPENJPEGLIBRARY_j2k_destroy_compress
#define	j2k_destroy_decompress	OPENJPEGLIBRARY_j2k_destroy_decompress
#define	j2k_encode	OPENJPEGLIBRARY_j2k_encode
#define	j2k_prog_order_list	OPENJPEGLIBRARY_j2k_prog_order_list
#define	j2k_setup_decoder	OPENJPEGLIBRARY_j2k_setup_decoder
#define	j2k_setup_encoder	OPENJPEGLIBRARY_j2k_setup_encoder
#define	opj_image_create	OPENJPEGLIBRARY_opj_image_create
#define	opj_image_create0	OPENJPEGLIBRARY_opj_image_create0
#define	opj_image_destroy	OPENJPEGLIBRARY_opj_image_destroy
#define	opj_event_msg	OPENJPEGLIBRARY_opj_event_msg
#define	opj_set_event_mgr	OPENJPEGLIBRARY_opj_set_event_mgr
#define	dwt_calc_explicit_stepsizes	OPENJPEGLIBRARY_dwt_calc_explicit_stepsizes
#define	dwt_decode	OPENJPEGLIBRARY_dwt_decode
#define	dwt_decode_real	OPENJPEGLIBRARY_dwt_decode_real
#define	dwt_encode	OPENJPEGLIBRARY_dwt_encode
#define	dwt_encode_real	OPENJPEGLIBRARY_dwt_encode_real
#define	dwt_getgain	OPENJPEGLIBRARY_dwt_getgain
#define	dwt_getgain_real	OPENJPEGLIBRARY_dwt_getgain_real
#define	dwt_getnorm	OPENJPEGLIBRARY_dwt_getnorm
#define	dwt_getnorm_real	OPENJPEGLIBRARY_dwt_getnorm_real
#define	opj_cio_close	OPENJPEGLIBRARY_opj_cio_close
#define	opj_cio_getbp	OPENJPEGLIBRARY_opj_cio_getbp
#define	opj_cio_numbytesleft	OPENJPEGLIBRARY_opj_cio_numbytesleft
#define	opj_cio_open	OPENJPEGLIBRARY_opj_cio_open
#define	opj_cio_read	OPENJPEGLIBRARY_opj_cio_read
#define	opj_cio_seek	OPENJPEGLIBRARY_opj_cio_seek
#define	opj_cio_skip	OPENJPEGLIBRARY_opj_cio_skip
#define	opj_cio_tell	OPENJPEGLIBRARY_opj_cio_tell
#define	opj_cio_write	OPENJPEGLIBRARY_opj_cio_write
#define	bio_create	OPENJPEGLIBRARY_bio_create
#define	bio_destroy	OPENJPEGLIBRARY_bio_destroy
#define	bio_flush	OPENJPEGLIBRARY_bio_flush
#define	bio_inalign	OPENJPEGLIBRARY_bio_inalign
#define	bio_init_dec	OPENJPEGLIBRARY_bio_init_dec
#define	bio_init_enc	OPENJPEGLIBRARY_bio_init_enc
#define	bio_numbytes	OPENJPEGLIBRARY_bio_numbytes
#define	bio_read	OPENJPEGLIBRARY_bio_read
#define	bio_write	OPENJPEGLIBRARY_bio_write

#endif __OPENJPEG_MANGLED_H__
