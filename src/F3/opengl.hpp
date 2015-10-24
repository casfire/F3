#ifndef _GL_CORE_3_3_
#define _GL_CORE_3_3_

//#define GL_3DFX_multisample 1
//#define GL_3DFX_tbuffer 1
//#define GL_3DFX_texture_compression_FXT1 1
//#define GL_AMD_blend_minmax_factor 1
//#define GL_AMD_debug_output 1
//#define GL_AMD_depth_clamp_separate 1
//#define GL_AMD_draw_buffers_blend 1
//#define GL_AMD_gpu_shader_int64 1
//#define GL_AMD_interleaved_elements 1
//#define GL_AMD_multi_draw_indirect 1
//#define GL_AMD_name_gen_delete 1
//#define GL_AMD_occlusion_query_event 1
//#define GL_AMD_performance_monitor 1
//#define GL_AMD_pinned_memory 1
//#define GL_AMD_query_buffer_object 1
//#define GL_AMD_sample_positions 1
//#define GL_AMD_sparse_texture 1
//#define GL_AMD_stencil_operation_extended 1
//#define GL_AMD_transform_feedback4 1
//#define GL_AMD_vertex_shader_tessellator 1
//#define GL_APPLE_aux_depth_stencil 1
//#define GL_APPLE_client_storage 1
//#define GL_APPLE_element_array 1
//#define GL_APPLE_fence 1
//#define GL_APPLE_float_pixels 1
//#define GL_APPLE_flush_buffer_range 1
//#define GL_APPLE_object_purgeable 1
//#define GL_APPLE_rgb_422 1
//#define GL_APPLE_row_bytes 1
//#define GL_APPLE_specular_vector 1
//#define GL_APPLE_texture_range 1
//#define GL_APPLE_transform_hint 1
//#define GL_APPLE_vertex_array_object 1
//#define GL_APPLE_vertex_array_range 1
//#define GL_APPLE_vertex_program_evaluators 1
//#define GL_APPLE_ycbcr_422 1
//#define GL_ARB_ES2_compatibility 1
//#define GL_ARB_ES3_1_compatibility 1
//#define GL_ARB_ES3_2_compatibility 1
//#define GL_ARB_ES3_compatibility 1
//#define GL_ARB_base_instance 1
//#define GL_ARB_bindless_texture 1
//#define GL_ARB_buffer_storage 1
//#define GL_ARB_cl_event 1
//#define GL_ARB_clear_buffer_object 1
//#define GL_ARB_clear_texture 1
//#define GL_ARB_clip_control 1
//#define GL_ARB_color_buffer_float 1
//#define GL_ARB_compressed_texture_pixel_storage 1
//#define GL_ARB_compute_shader 1
//#define GL_ARB_compute_variable_group_size 1
//#define GL_ARB_conditional_render_inverted 1
//#define GL_ARB_copy_image 1
//#define GL_ARB_cull_distance 1
//#define GL_ARB_debug_output 1
//#define GL_ARB_depth_texture 1
//#define GL_ARB_direct_state_access 1
//#define GL_ARB_draw_buffers 1
//#define GL_ARB_draw_buffers_blend 1
//#define GL_ARB_draw_indirect 1
//#define GL_ARB_draw_instanced 1
//#define GL_ARB_enhanced_layouts 1
//#define GL_ARB_explicit_uniform_location 1
//#define GL_ARB_fragment_program 1
//#define GL_ARB_fragment_shader 1
//#define GL_ARB_framebuffer_no_attachments 1
//#define GL_ARB_framebuffer_object 1
//#define GL_ARB_geometry_shader4 1
//#define GL_ARB_get_program_binary 1
//#define GL_ARB_get_texture_sub_image 1
//#define GL_ARB_gpu_shader5 1
//#define GL_ARB_gpu_shader_fp64 1
//#define GL_ARB_gpu_shader_int64 1
//#define GL_ARB_half_float_pixel 1
//#define GL_ARB_imaging 1
//#define GL_ARB_indirect_parameters 1
//#define GL_ARB_instanced_arrays 1
//#define GL_ARB_internalformat_query 1
//#define GL_ARB_internalformat_query2 1
//#define GL_ARB_invalidate_subdata 1
//#define GL_ARB_map_buffer_alignment 1
//#define GL_ARB_matrix_palette 1
//#define GL_ARB_multi_bind 1
//#define GL_ARB_multi_draw_indirect 1
//#define GL_ARB_multisample 1
//#define GL_ARB_multitexture 1
//#define GL_ARB_occlusion_query 1
//#define GL_ARB_parallel_shader_compile 1
//#define GL_ARB_pipeline_statistics_query 1
//#define GL_ARB_pixel_buffer_object 1
//#define GL_ARB_point_parameters 1
//#define GL_ARB_point_sprite 1
//#define GL_ARB_program_interface_query 1
//#define GL_ARB_query_buffer_object 1
//#define GL_ARB_robustness 1
//#define GL_ARB_sample_locations 1
//#define GL_ARB_sample_shading 1
//#define GL_ARB_separate_shader_objects 1
//#define GL_ARB_shader_atomic_counters 1
//#define GL_ARB_shader_image_load_store 1
//#define GL_ARB_shader_objects 1
//#define GL_ARB_shader_storage_buffer_object 1
//#define GL_ARB_shader_subroutine 1
//#define GL_ARB_shading_language_100 1
//#define GL_ARB_shading_language_include 1
//#define GL_ARB_shadow 1
//#define GL_ARB_shadow_ambient 1
//#define GL_ARB_sparse_buffer 1
//#define GL_ARB_sparse_texture 1
//#define GL_ARB_stencil_texturing 1
//#define GL_ARB_tessellation_shader 1
//#define GL_ARB_texture_barrier 1
//#define GL_ARB_texture_border_clamp 1
//#define GL_ARB_texture_buffer_object 1
//#define GL_ARB_texture_buffer_range 1
//#define GL_ARB_texture_compression 1
//#define GL_ARB_texture_compression_bptc 1
//#define GL_ARB_texture_cube_map 1
//#define GL_ARB_texture_cube_map_array 1
//#define GL_ARB_texture_env_combine 1
//#define GL_ARB_texture_env_dot3 1
//#define GL_ARB_texture_filter_minmax 1
//#define GL_ARB_texture_float 1
//#define GL_ARB_texture_gather 1
//#define GL_ARB_texture_mirror_clamp_to_edge 1
//#define GL_ARB_texture_mirrored_repeat 1
//#define GL_ARB_texture_rectangle 1
//#define GL_ARB_texture_storage 1
//#define GL_ARB_texture_storage_multisample 1
//#define GL_ARB_texture_view 1
//#define GL_ARB_transform_feedback2 1
//#define GL_ARB_transform_feedback3 1
//#define GL_ARB_transform_feedback_instanced 1
//#define GL_ARB_transform_feedback_overflow_query 1
//#define GL_ARB_transpose_matrix 1
//#define GL_ARB_vertex_attrib_64bit 1
//#define GL_ARB_vertex_attrib_binding 1
//#define GL_ARB_vertex_blend 1
//#define GL_ARB_vertex_buffer_object 1
//#define GL_ARB_vertex_program 1
//#define GL_ARB_vertex_shader 1
//#define GL_ARB_vertex_type_2_10_10_10_rev 1
//#define GL_ARB_viewport_array 1
//#define GL_ARB_window_pos 1
//#define GL_ATI_draw_buffers 1
//#define GL_ATI_element_array 1
//#define GL_ATI_envmap_bumpmap 1
//#define GL_ATI_fragment_shader 1
//#define GL_ATI_map_object_buffer 1
//#define GL_ATI_meminfo 1
//#define GL_ATI_pixel_format_float 1
//#define GL_ATI_pn_triangles 1
//#define GL_ATI_separate_stencil 1
//#define GL_ATI_text_fragment_shader 1
//#define GL_ATI_texture_env_combine3 1
//#define GL_ATI_texture_float 1
//#define GL_ATI_texture_mirror_once 1
//#define GL_ATI_vertex_array_object 1
//#define GL_ATI_vertex_attrib_array_object 1
//#define GL_ATI_vertex_streams 1
//#define GL_EXT_422_pixels 1
//#define GL_EXT_abgr 1
//#define GL_EXT_bgra 1
//#define GL_EXT_bindable_uniform 1
//#define GL_EXT_blend_color 1
//#define GL_EXT_blend_equation_separate 1
//#define GL_EXT_blend_func_separate 1
//#define GL_EXT_blend_minmax 1
//#define GL_EXT_blend_subtract 1
//#define GL_EXT_clip_volume_hint 1
//#define GL_EXT_cmyka 1
//#define GL_EXT_color_subtable 1
//#define GL_EXT_compiled_vertex_array 1
//#define GL_EXT_convolution 1
//#define GL_EXT_coordinate_frame 1
//#define GL_EXT_copy_texture 1
//#define GL_EXT_cull_vertex 1
//#define GL_EXT_debug_label 1
//#define GL_EXT_debug_marker 1
//#define GL_EXT_depth_bounds_test 1
//#define GL_EXT_direct_state_access 1
//#define GL_EXT_draw_buffers2 1
//#define GL_EXT_draw_instanced 1
//#define GL_EXT_draw_range_elements 1
//#define GL_EXT_fog_coord 1
//#define GL_EXT_framebuffer_blit 1
//#define GL_EXT_framebuffer_multisample 1
//#define GL_EXT_framebuffer_multisample_blit_scaled 1
//#define GL_EXT_framebuffer_object 1
//#define GL_EXT_framebuffer_sRGB 1
//#define GL_EXT_geometry_shader4 1
//#define GL_EXT_gpu_program_parameters 1
//#define GL_EXT_gpu_shader4 1
//#define GL_EXT_histogram 1
//#define GL_EXT_index_array_formats 1
//#define GL_EXT_index_func 1
//#define GL_EXT_index_material 1
//#define GL_EXT_light_texture 1
//#define GL_EXT_multi_draw_arrays 1
//#define GL_EXT_multisample 1
//#define GL_EXT_packed_depth_stencil 1
//#define GL_EXT_packed_float 1
//#define GL_EXT_packed_pixels 1
//#define GL_EXT_paletted_texture 1
//#define GL_EXT_pixel_buffer_object 1
//#define GL_EXT_pixel_transform 1
//#define GL_EXT_point_parameters 1
//#define GL_EXT_polygon_offset 1
//#define GL_EXT_polygon_offset_clamp 1
//#define GL_EXT_provoking_vertex 1
//#define GL_EXT_raster_multisample 1
//#define GL_EXT_rescale_normal 1
//#define GL_EXT_secondary_color 1
//#define GL_EXT_separate_shader_objects 1
//#define GL_EXT_separate_specular_color 1
//#define GL_EXT_shader_image_load_store 1
//#define GL_EXT_shared_texture_palette 1
//#define GL_EXT_stencil_clear_tag 1
//#define GL_EXT_stencil_two_side 1
//#define GL_EXT_stencil_wrap 1
//#define GL_EXT_subtexture 1
//#define GL_EXT_texture 1
//#define GL_EXT_texture3D 1
//#define GL_EXT_texture_array 1
//#define GL_EXT_texture_buffer_object 1
//#define GL_EXT_texture_compression_latc 1
//#define GL_EXT_texture_compression_rgtc 1
//#define GL_EXT_texture_compression_s3tc 1
//#define GL_EXT_texture_cube_map 1
//#define GL_EXT_texture_env_combine 1
//#define GL_EXT_texture_env_dot3 1
#define GL_EXT_texture_filter_anisotropic 1
//#define GL_EXT_texture_filter_minmax 1
//#define GL_EXT_texture_integer 1
//#define GL_EXT_texture_lod_bias 1
//#define GL_EXT_texture_mirror_clamp 1
//#define GL_EXT_texture_object 1
//#define GL_EXT_texture_perturb_normal 1
//#define GL_EXT_texture_sRGB 1
//#define GL_EXT_texture_sRGB_decode 1
//#define GL_EXT_texture_shared_exponent 1
//#define GL_EXT_texture_snorm 1
//#define GL_EXT_texture_swizzle 1
//#define GL_EXT_timer_query 1
//#define GL_EXT_transform_feedback 1
//#define GL_EXT_vertex_array 1
//#define GL_EXT_vertex_attrib_64bit 1
//#define GL_EXT_vertex_shader 1
//#define GL_EXT_vertex_weighting 1
//#define GL_EXT_x11_sync_object 1
//#define GL_GREMEDY_frame_terminator 1
//#define GL_GREMEDY_string_marker 1
//#define GL_HP_convolution_border_modes 1
//#define GL_HP_image_transform 1
//#define GL_HP_occlusion_test 1
//#define GL_HP_texture_lighting 1
//#define GL_IBM_cull_vertex 1
//#define GL_IBM_multimode_draw_arrays 1
//#define GL_IBM_rasterpos_clip 1
//#define GL_IBM_static_data 1
//#define GL_IBM_texture_mirrored_repeat 1
//#define GL_IBM_vertex_array_lists 1
//#define GL_INGR_blend_func_separate 1
//#define GL_INGR_color_clamp 1
//#define GL_INGR_interlace_read 1
//#define GL_INTEL_framebuffer_CMAA 1
//#define GL_INTEL_map_texture 1
//#define GL_INTEL_parallel_arrays 1
//#define GL_INTEL_performance_query 1
//#define GL_KHR_blend_equation_advanced 1
//#define GL_KHR_blend_equation_advanced_coherent 1
//#define GL_KHR_context_flush_control 1
//#define GL_KHR_debug 1
//#define GL_KHR_no_error 1
//#define GL_KHR_robustness 1
//#define GL_KHR_texture_compression_astc_hdr 1
//#define GL_KHR_texture_compression_astc_ldr 1
//#define GL_MESAX_texture_stack 1
//#define GL_MESA_pack_invert 1
//#define GL_MESA_resize_buffers 1
//#define GL_MESA_window_pos 1
//#define GL_MESA_ycbcr_texture 1
//#define GL_NVX_conditional_render 1
//#define GL_NVX_gpu_memory_info 1
//#define GL_NV_bindless_multi_draw_indirect 1
//#define GL_NV_bindless_multi_draw_indirect_count 1
//#define GL_NV_bindless_texture 1
//#define GL_NV_blend_equation_advanced 1
//#define GL_NV_blend_equation_advanced_coherent 1
//#define GL_NV_command_list 1
//#define GL_NV_compute_program5 1
//#define GL_NV_conditional_render 1
//#define GL_NV_conservative_raster 1
//#define GL_NV_conservative_raster_dilate 1
//#define GL_NV_copy_depth_to_color 1
//#define GL_NV_copy_image 1
//#define GL_NV_deep_texture3D 1
//#define GL_NV_depth_buffer_float 1
//#define GL_NV_depth_clamp 1
//#define GL_NV_draw_texture 1
//#define GL_NV_evaluators 1
//#define GL_NV_explicit_multisample 1
//#define GL_NV_fence 1
//#define GL_NV_fill_rectangle 1
//#define GL_NV_float_buffer 1
//#define GL_NV_fog_distance 1
//#define GL_NV_fragment_coverage_to_color 1
//#define GL_NV_fragment_program 1
//#define GL_NV_fragment_program2 1
//#define GL_NV_framebuffer_mixed_samples 1
//#define GL_NV_framebuffer_multisample_coverage 1
//#define GL_NV_geometry_program4 1
//#define GL_NV_gpu_program4 1
//#define GL_NV_gpu_program5 1
//#define GL_NV_gpu_shader5 1
//#define GL_NV_half_float 1
//#define GL_NV_internalformat_sample_query 1
//#define GL_NV_light_max_exponent 1
//#define GL_NV_multisample_coverage 1
//#define GL_NV_multisample_filter_hint 1
//#define GL_NV_occlusion_query 1
//#define GL_NV_packed_depth_stencil 1
//#define GL_NV_parameter_buffer_object 1
//#define GL_NV_path_rendering 1
//#define GL_NV_path_rendering_shared_edge 1
//#define GL_NV_pixel_data_range 1
//#define GL_NV_point_sprite 1
//#define GL_NV_present_video 1
//#define GL_NV_primitive_restart 1
//#define GL_NV_register_combiners 1
//#define GL_NV_register_combiners2 1
//#define GL_NV_sample_locations 1
//#define GL_NV_shader_buffer_load 1
//#define GL_NV_shader_buffer_store 1
//#define GL_NV_shader_thread_group 1
//#define GL_NV_tessellation_program5 1
//#define GL_NV_texgen_emboss 1
//#define GL_NV_texgen_reflection 1
//#define GL_NV_texture_barrier 1
//#define GL_NV_texture_env_combine4 1
//#define GL_NV_texture_expand_normal 1
//#define GL_NV_texture_multisample 1
//#define GL_NV_texture_rectangle 1
//#define GL_NV_texture_shader 1
//#define GL_NV_texture_shader2 1
//#define GL_NV_texture_shader3 1
//#define GL_NV_transform_feedback 1
//#define GL_NV_transform_feedback2 1
//#define GL_NV_uniform_buffer_unified_memory 1
//#define GL_NV_vdpau_interop 1
//#define GL_NV_vertex_array_range 1
//#define GL_NV_vertex_array_range2 1
//#define GL_NV_vertex_attrib_integer_64bit 1
//#define GL_NV_vertex_buffer_unified_memory 1
//#define GL_NV_vertex_program 1
//#define GL_NV_vertex_program2_option 1
//#define GL_NV_vertex_program3 1
//#define GL_NV_vertex_program4 1
//#define GL_NV_video_capture 1
//#define GL_OES_byte_coordinates 1
//#define GL_OES_compressed_paletted_texture 1
//#define GL_OES_fixed_point 1
//#define GL_OES_query_matrix 1
//#define GL_OES_read_format 1
//#define GL_OES_single_precision 1
//#define GL_OML_interlace 1
//#define GL_OML_resample 1
//#define GL_OML_subsample 1
//#define GL_OVR_multiview 1
//#define GL_PGI_misc_hints 1
//#define GL_PGI_vertex_hints 1
//#define GL_REND_screen_coordinates 1
//#define GL_S3_s3tc 1
//#define GL_SGIS_detail_texture 1
//#define GL_SGIS_fog_function 1
//#define GL_SGIS_generate_mipmap 1
//#define GL_SGIS_multisample 1
//#define GL_SGIS_pixel_texture 1
//#define GL_SGIS_point_line_texgen 1
//#define GL_SGIS_point_parameters 1
//#define GL_SGIS_sharpen_texture 1
//#define GL_SGIS_texture4D 1
//#define GL_SGIS_texture_border_clamp 1
//#define GL_SGIS_texture_color_mask 1
//#define GL_SGIS_texture_edge_clamp 1
//#define GL_SGIS_texture_filter4 1
//#define GL_SGIS_texture_lod 1
//#define GL_SGIS_texture_select 1
//#define GL_SGIX_async 1
//#define GL_SGIX_async_histogram 1
//#define GL_SGIX_async_pixel 1
//#define GL_SGIX_blend_alpha_minmax 1
//#define GL_SGIX_calligraphic_fragment 1
//#define GL_SGIX_clipmap 1
//#define GL_SGIX_convolution_accuracy 1
//#define GL_SGIX_depth_texture 1
//#define GL_SGIX_flush_raster 1
//#define GL_SGIX_fog_offset 1
//#define GL_SGIX_fragment_lighting 1
//#define GL_SGIX_framezoom 1
//#define GL_SGIX_igloo_interface 1
//#define GL_SGIX_instruments 1
//#define GL_SGIX_interlace 1
//#define GL_SGIX_ir_instrument1 1
//#define GL_SGIX_list_priority 1
//#define GL_SGIX_pixel_texture 1
//#define GL_SGIX_pixel_tiles 1
//#define GL_SGIX_polynomial_ffd 1
//#define GL_SGIX_reference_plane 1
//#define GL_SGIX_resample 1
//#define GL_SGIX_scalebias_hint 1
//#define GL_SGIX_shadow 1
//#define GL_SGIX_shadow_ambient 1
//#define GL_SGIX_sprite 1
//#define GL_SGIX_subsample 1
//#define GL_SGIX_tag_sample_buffer 1
//#define GL_SGIX_texture_add_env 1
//#define GL_SGIX_texture_coordinate_clamp 1
//#define GL_SGIX_texture_lod_bias 1
//#define GL_SGIX_texture_multi_buffer 1
//#define GL_SGIX_texture_scale_bias 1
//#define GL_SGIX_vertex_preclip 1
//#define GL_SGIX_ycrcb 1
//#define GL_SGIX_ycrcba 1
//#define GL_SGI_color_matrix 1
//#define GL_SGI_color_table 1
//#define GL_SGI_texture_color_table 1
//#define GL_SUNX_constant_data 1
//#define GL_SUN_convolution_border_modes 1
//#define GL_SUN_global_alpha 1
//#define GL_SUN_mesh_array 1
//#define GL_SUN_slice_accum 1
//#define GL_SUN_triangle_list 1
//#define GL_SUN_vertex 1
//#define GL_WIN_phong_shading 1
//#define GL_WIN_specular_fog 1

#include <stddef.h>
#ifndef GLEXT_64_TYPES_DEFINED
	/* This code block is duplicated in glxext.h, so must be protected */
	#define GLEXT_64_TYPES_DEFINED
	/* Define int32_t, int64_t, and uint64_t types for UST/MSC */
	/* (as used in the GL_EXT_timer_query extension). */
	#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
		#include <inttypes.h>
	#elif defined(__sun__) || defined(__digital__)
		#include <inttypes.h>
		#if defined(__STDC__)
			#if defined(__arch64__) || defined(_LP64)
				typedef long int int64_t;
				typedef unsigned long int uint64_t;
			#else
				typedef long long int int64_t;
				typedef unsigned long long int uint64_t;
			#endif /* __arch64__ */
		#endif /* __STDC__ */
	#elif defined( __VMS ) || defined(__sgi)
		#include <inttypes.h>
	#elif defined(__SCO__) || defined(__USLC__)
		#include <stdint.h>
	#elif defined(__UNIXOS2__) || defined(__SOL64__)
		typedef long int int32_t;
		typedef long long int int64_t;
		typedef unsigned long long int uint64_t;
	#elif defined(_WIN32) && defined(__GNUC__)
		#include <stdint.h>
	#elif defined(_WIN32)
		typedef __int32 int32_t;
		typedef __int64 int64_t;
		typedef unsigned __int64 uint64_t;
	#else
		/* Fallback if nothing above works */
		#include <inttypes.h>
	#endif
#endif

#define GL_VERSION_1_0 1
#define GL_VERSION_1_1 1
#define GL_VERSION_1_2 1
#define GL_VERSION_1_3 1
#define GL_VERSION_1_4 1
#define GL_VERSION_1_5 1
#define GL_VERSION_2_0 1
#define GL_VERSION_2_1 1
#define GL_VERSION_3_0 1
#define GL_VERSION_3_1 1
#define GL_VERSION_3_2 1
#define GL_VERSION_3_3 1

namespace GL {
	
	typedef void* (*GLFunctionLoader)(const char*);
	extern void glLoadFunctions(const GLFunctionLoader &load);
	extern void glLoadFunctions();
	
	typedef unsigned int GLenum;
	typedef float GLfloat;
	typedef int GLint;
	typedef int GLsizei;
	typedef unsigned int GLbitfield;
	typedef double GLdouble;
	typedef unsigned int GLuint;
	typedef unsigned char GLboolean;
	typedef unsigned char GLubyte;
	typedef ptrdiff_t GLsizeiptr;
	typedef ptrdiff_t GLintptr;
	typedef char GLchar;
	typedef short GLshort;
	typedef signed char GLbyte;
	typedef unsigned short GLushort;
	typedef struct __GLsync *GLsync;
	typedef uint64_t GLuint64;
	typedef int64_t GLint64;
	typedef void GLvoid;
	typedef float GLclampf;
	typedef double GLclampd;
	typedef unsigned short GLhalf;
	
	enum {
		GL_COLOR_BUFFER_BIT = 0x00004000,
		GL_DEPTH_BUFFER_BIT = 0x00000100,
		GL_STENCIL_BUFFER_BIT = 0x00000400,
		GL_ALWAYS = 0x0207,
		GL_EQUAL = 0x0202,
		GL_GEQUAL = 0x0206,
		GL_GREATER = 0x0204,
		GL_LEQUAL = 0x0203,
		GL_LESS = 0x0201,
		GL_NEVER = 0x0200,
		GL_NOTEQUAL = 0x0205,
		GL_DST_ALPHA = 0x0304,
		GL_ONE = 1,
		GL_ONE_MINUS_DST_ALPHA = 0x0305,
		GL_ONE_MINUS_SRC_ALPHA = 0x0303,
		GL_ONE_MINUS_SRC_COLOR = 0x0301,
		GL_SRC_ALPHA = 0x0302,
		GL_SRC_COLOR = 0x0300,
		GL_ZERO = 0,
		GL_DST_COLOR = 0x0306,
		GL_ONE_MINUS_DST_COLOR = 0x0307,
		GL_SRC_ALPHA_SATURATE = 0x0308,
		GL_FALSE = 0,
		GL_TRUE = 1,
		GL_CLIP_DISTANCE0 = 0x3000,
		GL_CLIP_DISTANCE1 = 0x3001,
		GL_CLIP_DISTANCE2 = 0x3002,
		GL_CLIP_DISTANCE3 = 0x3003,
		GL_CLIP_DISTANCE4 = 0x3004,
		GL_CLIP_DISTANCE5 = 0x3005,
		GL_CLIP_DISTANCE6 = 0x3006,
		GL_CLIP_DISTANCE7 = 0x3007,
		GL_BACK = 0x0405,
		GL_FRONT = 0x0404,
		GL_FRONT_AND_BACK = 0x0408,
		GL_BYTE = 0x1400,
		GL_DOUBLE = 0x140A,
		GL_FLOAT = 0x1406,
		GL_INT = 0x1404,
		GL_SHORT = 0x1402,
		GL_UNSIGNED_BYTE = 0x1401,
		GL_UNSIGNED_INT = 0x1405,
		GL_UNSIGNED_SHORT = 0x1403,
		GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001,
		GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002,
		GL_CONTEXT_CORE_PROFILE_BIT = 0x00000001,
		GL_BACK_LEFT = 0x0402,
		GL_BACK_RIGHT = 0x0403,
		GL_FRONT_LEFT = 0x0400,
		GL_FRONT_RIGHT = 0x0401,
		GL_LEFT = 0x0406,
		GL_NONE = 0,
		GL_RIGHT = 0x0407,
		GL_BLEND = 0x0BE2,
		GL_COLOR_LOGIC_OP = 0x0BF2,
		GL_CULL_FACE = 0x0B44,
		GL_DEPTH_TEST = 0x0B71,
		GL_DITHER = 0x0BD0,
		GL_LINE_SMOOTH = 0x0B20,
		GL_POLYGON_OFFSET_FILL = 0x8037,
		GL_POLYGON_OFFSET_LINE = 0x2A02,
		GL_POLYGON_OFFSET_POINT = 0x2A01,
		GL_POLYGON_SMOOTH = 0x0B41,
		GL_SCISSOR_TEST = 0x0C11,
		GL_STENCIL_TEST = 0x0B90,
		GL_TEXTURE_1D = 0x0DE0,
		GL_TEXTURE_2D = 0x0DE1,
		GL_INVALID_ENUM = 0x0500,
		GL_INVALID_FRAMEBUFFER_OPERATION = 0x0506,
		GL_INVALID_OPERATION = 0x0502,
		GL_INVALID_VALUE = 0x0501,
		GL_NO_ERROR = 0,
		GL_OUT_OF_MEMORY = 0x0505,
		GL_LINEAR = 0x2601,
		GL_CCW = 0x0901,
		GL_CW = 0x0900,
		GL_ALIASED_LINE_WIDTH_RANGE = 0x846E,
		GL_BLEND_DST = 0x0BE0,
		GL_BLEND_SRC = 0x0BE1,
		GL_COLOR_CLEAR_VALUE = 0x0C22,
		GL_COLOR_WRITEMASK = 0x0C23,
		GL_CULL_FACE_MODE = 0x0B45,
		GL_DEPTH_CLEAR_VALUE = 0x0B73,
		GL_DEPTH_FUNC = 0x0B74,
		GL_DEPTH_RANGE = 0x0B70,
		GL_DEPTH_WRITEMASK = 0x0B72,
		GL_DOUBLEBUFFER = 0x0C32,
		GL_DRAW_BUFFER = 0x0C01,
		GL_FRONT_FACE = 0x0B46,
		GL_LINE_SMOOTH_HINT = 0x0C52,
		GL_LINE_WIDTH = 0x0B21,
		GL_LINE_WIDTH_GRANULARITY = 0x0B23,
		GL_LINE_WIDTH_RANGE = 0x0B22,
		GL_LOGIC_OP_MODE = 0x0BF0,
		GL_MAX_CLIP_DISTANCES = 0x0D32,
		GL_MAX_TEXTURE_SIZE = 0x0D33,
		GL_MAX_VIEWPORT_DIMS = 0x0D3A,
		GL_PACK_ALIGNMENT = 0x0D05,
		GL_PACK_LSB_FIRST = 0x0D01,
		GL_PACK_ROW_LENGTH = 0x0D02,
		GL_PACK_SKIP_PIXELS = 0x0D04,
		GL_PACK_SKIP_ROWS = 0x0D03,
		GL_PACK_SWAP_BYTES = 0x0D00,
		GL_POINT_SIZE = 0x0B11,
		GL_POINT_SIZE_GRANULARITY = 0x0B13,
		GL_POINT_SIZE_RANGE = 0x0B12,
		GL_POLYGON_MODE = 0x0B40,
		GL_POLYGON_OFFSET_FACTOR = 0x8038,
		GL_POLYGON_OFFSET_UNITS = 0x2A00,
		GL_POLYGON_SMOOTH_HINT = 0x0C53,
		GL_READ_BUFFER = 0x0C02,
		GL_SCISSOR_BOX = 0x0C10,
		GL_SMOOTH_LINE_WIDTH_GRANULARITY = 0x0B23,
		GL_SMOOTH_LINE_WIDTH_RANGE = 0x0B22,
		GL_SMOOTH_POINT_SIZE_GRANULARITY = 0x0B13,
		GL_SMOOTH_POINT_SIZE_RANGE = 0x0B12,
		GL_STENCIL_CLEAR_VALUE = 0x0B91,
		GL_STENCIL_FAIL = 0x0B94,
		GL_STENCIL_FUNC = 0x0B92,
		GL_STENCIL_PASS_DEPTH_FAIL = 0x0B95,
		GL_STENCIL_PASS_DEPTH_PASS = 0x0B96,
		GL_STENCIL_REF = 0x0B97,
		GL_STENCIL_VALUE_MASK = 0x0B93,
		GL_STENCIL_WRITEMASK = 0x0B98,
		GL_STEREO = 0x0C33,
		GL_SUBPIXEL_BITS = 0x0D50,
		GL_TEXTURE_BINDING_1D = 0x8068,
		GL_TEXTURE_BINDING_2D = 0x8069,
		GL_TEXTURE_BINDING_3D = 0x806A,
		GL_UNPACK_ALIGNMENT = 0x0CF5,
		GL_UNPACK_LSB_FIRST = 0x0CF1,
		GL_UNPACK_ROW_LENGTH = 0x0CF2,
		GL_UNPACK_SKIP_PIXELS = 0x0CF4,
		GL_UNPACK_SKIP_ROWS = 0x0CF3,
		GL_UNPACK_SWAP_BYTES = 0x0CF0,
		GL_VIEWPORT = 0x0BA2,
		GL_TEXTURE_ALPHA_SIZE = 0x805F,
		GL_TEXTURE_BLUE_SIZE = 0x805E,
		GL_TEXTURE_BORDER_COLOR = 0x1004,
		GL_TEXTURE_GREEN_SIZE = 0x805D,
		GL_TEXTURE_HEIGHT = 0x1001,
		GL_TEXTURE_INTERNAL_FORMAT = 0x1003,
		GL_TEXTURE_MAG_FILTER = 0x2800,
		GL_TEXTURE_MIN_FILTER = 0x2801,
		GL_TEXTURE_RED_SIZE = 0x805C,
		GL_TEXTURE_WIDTH = 0x1000,
		GL_TEXTURE_WRAP_S = 0x2802,
		GL_TEXTURE_WRAP_T = 0x2803,
		GL_DONT_CARE = 0x1100,
		GL_FASTEST = 0x1101,
		GL_NICEST = 0x1102,
		GL_FRAGMENT_SHADER_DERIVATIVE_HINT = 0x8B8B,
		GL_TEXTURE_COMPRESSION_HINT = 0x84EF,
		GL_REPLACE = 0x1E01,
		GL_AND = 0x1501,
		GL_AND_INVERTED = 0x1504,
		GL_AND_REVERSE = 0x1502,
		GL_CLEAR = 0x1500,
		GL_COPY = 0x1503,
		GL_COPY_INVERTED = 0x150C,
		GL_EQUIV = 0x1509,
		GL_INVERT = 0x150A,
		GL_NAND = 0x150E,
		GL_NOOP = 0x1505,
		GL_NOR = 0x1508,
		GL_OR = 0x1507,
		GL_OR_INVERTED = 0x150D,
		GL_OR_REVERSE = 0x150B,
		GL_SET = 0x150F,
		GL_XOR = 0x1506,
		GL_MAP_FLUSH_EXPLICIT_BIT = 0x0010,
		GL_MAP_INVALIDATE_BUFFER_BIT = 0x0008,
		GL_MAP_INVALIDATE_RANGE_BIT = 0x0004,
		GL_MAP_READ_BIT = 0x0001,
		GL_MAP_UNSYNCHRONIZED_BIT = 0x0020,
		GL_MAP_WRITE_BIT = 0x0002,
		GL_TEXTURE = 0x1702,
		GL_LINE = 0x1B01,
		GL_POINT = 0x1B00,
		GL_FILL = 0x1B02,
		GL_COLOR = 0x1800,
		GL_DEPTH = 0x1801,
		GL_STENCIL = 0x1802,
		GL_ALPHA = 0x1906,
		GL_BLUE = 0x1905,
		GL_DEPTH_COMPONENT = 0x1902,
		GL_GREEN = 0x1904,
		GL_RED = 0x1903,
		GL_RGB = 0x1907,
		GL_RGBA = 0x1908,
		GL_STENCIL_INDEX = 0x1901,
		GL_R3_G3_B2 = 0x2A10,
		GL_RGB10 = 0x8052,
		GL_RGB10_A2 = 0x8059,
		GL_RGB12 = 0x8053,
		GL_RGB16 = 0x8054,
		GL_RGB4 = 0x804F,
		GL_RGB5 = 0x8050,
		GL_RGB5_A1 = 0x8057,
		GL_RGB8 = 0x8051,
		GL_RGBA12 = 0x805A,
		GL_RGBA16 = 0x805B,
		GL_RGBA2 = 0x8055,
		GL_RGBA4 = 0x8056,
		GL_RGBA8 = 0x8058,
		GL_PACK_IMAGE_HEIGHT = 0x806C,
		GL_PACK_SKIP_IMAGES = 0x806B,
		GL_UNPACK_IMAGE_HEIGHT = 0x806E,
		GL_UNPACK_SKIP_IMAGES = 0x806D,
		GL_UNSIGNED_BYTE_3_3_2 = 0x8032,
		GL_UNSIGNED_INT_10_10_10_2 = 0x8036,
		GL_UNSIGNED_INT_8_8_8_8 = 0x8035,
		GL_UNSIGNED_SHORT_4_4_4_4 = 0x8033,
		GL_UNSIGNED_SHORT_5_5_5_1 = 0x8034,
		GL_POINT_FADE_THRESHOLD_SIZE = 0x8128,
		GL_LINES = 0x0001,
		GL_LINES_ADJACENCY = 0x000A,
		GL_LINE_LOOP = 0x0002,
		GL_LINE_STRIP = 0x0003,
		GL_LINE_STRIP_ADJACENCY = 0x000B,
		GL_POINTS = 0x0000,
		GL_TRIANGLES = 0x0004,
		GL_TRIANGLES_ADJACENCY = 0x000C,
		GL_TRIANGLE_FAN = 0x0006,
		GL_TRIANGLE_STRIP = 0x0005,
		GL_TRIANGLE_STRIP_ADJACENCY = 0x000D,
		GL_DECR = 0x1E03,
		GL_INCR = 0x1E02,
		GL_KEEP = 0x1E00,
		GL_EXTENSIONS = 0x1F03,
		GL_RENDERER = 0x1F01,
		GL_VENDOR = 0x1F00,
		GL_VERSION = 0x1F02,
		GL_NEAREST = 0x2600,
		GL_LINEAR_MIPMAP_LINEAR = 0x2703,
		GL_LINEAR_MIPMAP_NEAREST = 0x2701,
		GL_NEAREST_MIPMAP_LINEAR = 0x2702,
		GL_NEAREST_MIPMAP_NEAREST = 0x2700,
		GL_TEXTURE_WRAP_R = 0x8072,
		GL_PROXY_TEXTURE_1D = 0x8063,
		GL_PROXY_TEXTURE_2D = 0x8064,
		GL_PROXY_TEXTURE_3D = 0x8070,
		GL_TEXTURE_3D = 0x806F,
		GL_TEXTURE_BASE_LEVEL = 0x813C,
		GL_TEXTURE_MAX_LEVEL = 0x813D,
		GL_TEXTURE_MAX_LOD = 0x813B,
		GL_TEXTURE_MIN_LOD = 0x813A,
		GL_CLAMP_TO_BORDER = 0x812D,
		GL_CLAMP_TO_EDGE = 0x812F,
		GL_REPEAT = 0x2901,
		GL_TEXTURE_DEPTH = 0x8071,
		GL_MAX_3D_TEXTURE_SIZE = 0x8073,
		GL_UNSIGNED_BYTE_2_3_3_REV = 0x8362,
		GL_UNSIGNED_SHORT_5_6_5 = 0x8363,
		GL_UNSIGNED_SHORT_5_6_5_REV = 0x8364,
		GL_UNSIGNED_SHORT_4_4_4_4_REV = 0x8365,
		GL_UNSIGNED_SHORT_1_5_5_5_REV = 0x8366,
		GL_UNSIGNED_INT_8_8_8_8_REV = 0x8367,
		GL_UNSIGNED_INT_2_10_10_10_REV = 0x8368,
		GL_BGR = 0x80E0,
		GL_BGRA = 0x80E1,
		GL_MAX_ELEMENTS_VERTICES = 0x80E8,
		GL_MAX_ELEMENTS_INDICES = 0x80E9,
		GL_TEXTURE0 = 0x84C0,
		GL_TEXTURE1 = 0x84C1,
		GL_TEXTURE2 = 0x84C2,
		GL_TEXTURE3 = 0x84C3,
		GL_TEXTURE4 = 0x84C4,
		GL_TEXTURE5 = 0x84C5,
		GL_TEXTURE6 = 0x84C6,
		GL_TEXTURE7 = 0x84C7,
		GL_TEXTURE8 = 0x84C8,
		GL_TEXTURE9 = 0x84C9,
		GL_TEXTURE10 = 0x84CA,
		GL_TEXTURE11 = 0x84CB,
		GL_TEXTURE12 = 0x84CC,
		GL_TEXTURE13 = 0x84CD,
		GL_TEXTURE14 = 0x84CE,
		GL_TEXTURE15 = 0x84CF,
		GL_TEXTURE16 = 0x84D0,
		GL_TEXTURE17 = 0x84D1,
		GL_TEXTURE18 = 0x84D2,
		GL_TEXTURE19 = 0x84D3,
		GL_TEXTURE20 = 0x84D4,
		GL_TEXTURE21 = 0x84D5,
		GL_TEXTURE22 = 0x84D6,
		GL_TEXTURE23 = 0x84D7,
		GL_TEXTURE24 = 0x84D8,
		GL_TEXTURE25 = 0x84D9,
		GL_TEXTURE26 = 0x84DA,
		GL_TEXTURE27 = 0x84DB,
		GL_TEXTURE28 = 0x84DC,
		GL_TEXTURE29 = 0x84DD,
		GL_TEXTURE30 = 0x84DE,
		GL_TEXTURE31 = 0x84DF,
		GL_ACTIVE_TEXTURE = 0x84E0,
		GL_MULTISAMPLE = 0x809D,
		GL_SAMPLE_ALPHA_TO_COVERAGE = 0x809E,
		GL_SAMPLE_ALPHA_TO_ONE = 0x809F,
		GL_SAMPLE_COVERAGE = 0x80A0,
		GL_SAMPLE_BUFFERS = 0x80A8,
		GL_SAMPLES = 0x80A9,
		GL_SAMPLE_COVERAGE_VALUE = 0x80AA,
		GL_SAMPLE_COVERAGE_INVERT = 0x80AB,
		GL_TEXTURE_CUBE_MAP = 0x8513,
		GL_TEXTURE_BINDING_CUBE_MAP = 0x8514,
		GL_TEXTURE_CUBE_MAP_POSITIVE_X = 0x8515,
		GL_TEXTURE_CUBE_MAP_NEGATIVE_X = 0x8516,
		GL_TEXTURE_CUBE_MAP_POSITIVE_Y = 0x8517,
		GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x8518,
		GL_TEXTURE_CUBE_MAP_POSITIVE_Z = 0x8519,
		GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x851A,
		GL_PROXY_TEXTURE_CUBE_MAP = 0x851B,
		GL_MAX_CUBE_MAP_TEXTURE_SIZE = 0x851C,
		GL_COMPRESSED_RGB = 0x84ED,
		GL_COMPRESSED_RGBA = 0x84EE,
		GL_TEXTURE_COMPRESSED_IMAGE_SIZE = 0x86A0,
		GL_TEXTURE_COMPRESSED = 0x86A1,
		GL_NUM_COMPRESSED_TEXTURE_FORMATS = 0x86A2,
		GL_COMPRESSED_TEXTURE_FORMATS = 0x86A3,
		GL_BLEND_DST_RGB = 0x80C8,
		GL_BLEND_SRC_RGB = 0x80C9,
		GL_BLEND_DST_ALPHA = 0x80CA,
		GL_BLEND_SRC_ALPHA = 0x80CB,
		GL_DEPTH_COMPONENT16 = 0x81A5,
		GL_DEPTH_COMPONENT24 = 0x81A6,
		GL_DEPTH_COMPONENT32 = 0x81A7,
		GL_MIRRORED_REPEAT = 0x8370,
		GL_MAX_TEXTURE_LOD_BIAS = 0x84FD,
		GL_TEXTURE_LOD_BIAS = 0x8501,
		GL_INCR_WRAP = 0x8507,
		GL_DECR_WRAP = 0x8508,
		GL_TEXTURE_DEPTH_SIZE = 0x884A,
		GL_TEXTURE_COMPARE_MODE = 0x884C,
		GL_TEXTURE_COMPARE_FUNC = 0x884D,
		GL_FUNC_ADD = 0x8006,
		GL_FUNC_SUBTRACT = 0x800A,
		GL_FUNC_REVERSE_SUBTRACT = 0x800B,
		GL_MIN = 0x8007,
		GL_MAX = 0x8008,
		GL_CONSTANT_COLOR = 0x8001,
		GL_ONE_MINUS_CONSTANT_COLOR = 0x8002,
		GL_CONSTANT_ALPHA = 0x8003,
		GL_ONE_MINUS_CONSTANT_ALPHA = 0x8004,
		GL_BUFFER_SIZE = 0x8764,
		GL_BUFFER_USAGE = 0x8765,
		GL_QUERY_COUNTER_BITS = 0x8864,
		GL_CURRENT_QUERY = 0x8865,
		GL_QUERY_RESULT = 0x8866,
		GL_QUERY_RESULT_AVAILABLE = 0x8867,
		GL_ARRAY_BUFFER = 0x8892,
		GL_ELEMENT_ARRAY_BUFFER = 0x8893,
		GL_ARRAY_BUFFER_BINDING = 0x8894,
		GL_ELEMENT_ARRAY_BUFFER_BINDING = 0x8895,
		GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = 0x889F,
		GL_READ_ONLY = 0x88B8,
		GL_WRITE_ONLY = 0x88B9,
		GL_READ_WRITE = 0x88BA,
		GL_BUFFER_ACCESS = 0x88BB,
		GL_BUFFER_MAPPED = 0x88BC,
		GL_BUFFER_MAP_POINTER = 0x88BD,
		GL_STREAM_DRAW = 0x88E0,
		GL_STREAM_READ = 0x88E1,
		GL_STREAM_COPY = 0x88E2,
		GL_STATIC_DRAW = 0x88E4,
		GL_STATIC_READ = 0x88E5,
		GL_STATIC_COPY = 0x88E6,
		GL_DYNAMIC_DRAW = 0x88E8,
		GL_DYNAMIC_READ = 0x88E9,
		GL_DYNAMIC_COPY = 0x88EA,
		GL_SAMPLES_PASSED = 0x8914,
		GL_SRC1_ALPHA = 0x8589,
		GL_BLEND_EQUATION_RGB = 0x8009,
		GL_VERTEX_ATTRIB_ARRAY_ENABLED = 0x8622,
		GL_VERTEX_ATTRIB_ARRAY_SIZE = 0x8623,
		GL_VERTEX_ATTRIB_ARRAY_STRIDE = 0x8624,
		GL_VERTEX_ATTRIB_ARRAY_TYPE = 0x8625,
		GL_CURRENT_VERTEX_ATTRIB = 0x8626,
		GL_VERTEX_PROGRAM_POINT_SIZE = 0x8642,
		GL_VERTEX_ATTRIB_ARRAY_POINTER = 0x8645,
		GL_STENCIL_BACK_FUNC = 0x8800,
		GL_STENCIL_BACK_FAIL = 0x8801,
		GL_STENCIL_BACK_PASS_DEPTH_FAIL = 0x8802,
		GL_STENCIL_BACK_PASS_DEPTH_PASS = 0x8803,
		GL_MAX_DRAW_BUFFERS = 0x8824,
		GL_DRAW_BUFFER0 = 0x8825,
		GL_DRAW_BUFFER1 = 0x8826,
		GL_DRAW_BUFFER2 = 0x8827,
		GL_DRAW_BUFFER3 = 0x8828,
		GL_DRAW_BUFFER4 = 0x8829,
		GL_DRAW_BUFFER5 = 0x882A,
		GL_DRAW_BUFFER6 = 0x882B,
		GL_DRAW_BUFFER7 = 0x882C,
		GL_DRAW_BUFFER8 = 0x882D,
		GL_DRAW_BUFFER9 = 0x882E,
		GL_DRAW_BUFFER10 = 0x882F,
		GL_DRAW_BUFFER11 = 0x8830,
		GL_DRAW_BUFFER12 = 0x8831,
		GL_DRAW_BUFFER13 = 0x8832,
		GL_DRAW_BUFFER14 = 0x8833,
		GL_DRAW_BUFFER15 = 0x8834,
		GL_BLEND_EQUATION_ALPHA = 0x883D,
		GL_MAX_VERTEX_ATTRIBS = 0x8869,
		GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = 0x886A,
		GL_MAX_TEXTURE_IMAGE_UNITS = 0x8872,
		GL_FRAGMENT_SHADER = 0x8B30,
		GL_VERTEX_SHADER = 0x8B31,
		GL_MAX_FRAGMENT_UNIFORM_COMPONENTS = 0x8B49,
		GL_MAX_VERTEX_UNIFORM_COMPONENTS = 0x8B4A,
		GL_MAX_VARYING_FLOATS = 0x8B4B,
		GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = 0x8B4C,
		GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = 0x8B4D,
		GL_SHADER_TYPE = 0x8B4F,
		GL_FLOAT_VEC2 = 0x8B50,
		GL_FLOAT_VEC3 = 0x8B51,
		GL_FLOAT_VEC4 = 0x8B52,
		GL_INT_VEC2 = 0x8B53,
		GL_INT_VEC3 = 0x8B54,
		GL_INT_VEC4 = 0x8B55,
		GL_BOOL = 0x8B56,
		GL_BOOL_VEC2 = 0x8B57,
		GL_BOOL_VEC3 = 0x8B58,
		GL_BOOL_VEC4 = 0x8B59,
		GL_FLOAT_MAT2 = 0x8B5A,
		GL_FLOAT_MAT3 = 0x8B5B,
		GL_FLOAT_MAT4 = 0x8B5C,
		GL_SAMPLER_1D = 0x8B5D,
		GL_SAMPLER_2D = 0x8B5E,
		GL_SAMPLER_3D = 0x8B5F,
		GL_SAMPLER_CUBE = 0x8B60,
		GL_SAMPLER_1D_SHADOW = 0x8B61,
		GL_SAMPLER_2D_SHADOW = 0x8B62,
		GL_DELETE_STATUS = 0x8B80,
		GL_COMPILE_STATUS = 0x8B81,
		GL_LINK_STATUS = 0x8B82,
		GL_VALIDATE_STATUS = 0x8B83,
		GL_INFO_LOG_LENGTH = 0x8B84,
		GL_ATTACHED_SHADERS = 0x8B85,
		GL_ACTIVE_UNIFORMS = 0x8B86,
		GL_ACTIVE_UNIFORM_MAX_LENGTH = 0x8B87,
		GL_SHADER_SOURCE_LENGTH = 0x8B88,
		GL_ACTIVE_ATTRIBUTES = 0x8B89,
		GL_ACTIVE_ATTRIBUTE_MAX_LENGTH = 0x8B8A,
		GL_SHADING_LANGUAGE_VERSION = 0x8B8C,
		GL_CURRENT_PROGRAM = 0x8B8D,
		GL_POINT_SPRITE_COORD_ORIGIN = 0x8CA0,
		GL_LOWER_LEFT = 0x8CA1,
		GL_UPPER_LEFT = 0x8CA2,
		GL_STENCIL_BACK_REF = 0x8CA3,
		GL_STENCIL_BACK_VALUE_MASK = 0x8CA4,
		GL_STENCIL_BACK_WRITEMASK = 0x8CA5,
		GL_PIXEL_PACK_BUFFER = 0x88EB,
		GL_PIXEL_UNPACK_BUFFER = 0x88EC,
		GL_PIXEL_PACK_BUFFER_BINDING = 0x88ED,
		GL_PIXEL_UNPACK_BUFFER_BINDING = 0x88EF,
		GL_FLOAT_MAT2x3 = 0x8B65,
		GL_FLOAT_MAT2x4 = 0x8B66,
		GL_FLOAT_MAT3x2 = 0x8B67,
		GL_FLOAT_MAT3x4 = 0x8B68,
		GL_FLOAT_MAT4x2 = 0x8B69,
		GL_FLOAT_MAT4x3 = 0x8B6A,
		GL_SRGB = 0x8C40,
		GL_SRGB8 = 0x8C41,
		GL_SRGB_ALPHA = 0x8C42,
		GL_SRGB8_ALPHA8 = 0x8C43,
		GL_COMPRESSED_SRGB = 0x8C48,
		GL_COMPRESSED_SRGB_ALPHA = 0x8C49,
		GL_COMPARE_REF_TO_TEXTURE = 0x884E,
		GL_MAJOR_VERSION = 0x821B,
		GL_MINOR_VERSION = 0x821C,
		GL_NUM_EXTENSIONS = 0x821D,
		GL_CONTEXT_FLAGS = 0x821E,
		GL_COMPRESSED_RED = 0x8225,
		GL_COMPRESSED_RG = 0x8226,
		GL_RGBA32F = 0x8814,
		GL_RGB32F = 0x8815,
		GL_RGBA16F = 0x881A,
		GL_RGB16F = 0x881B,
		GL_VERTEX_ATTRIB_ARRAY_INTEGER = 0x88FD,
		GL_MAX_ARRAY_TEXTURE_LAYERS = 0x88FF,
		GL_MIN_PROGRAM_TEXEL_OFFSET = 0x8904,
		GL_MAX_PROGRAM_TEXEL_OFFSET = 0x8905,
		GL_CLAMP_READ_COLOR = 0x891C,
		GL_FIXED_ONLY = 0x891D,
		GL_MAX_VARYING_COMPONENTS = 0x8B4B,
		GL_TEXTURE_1D_ARRAY = 0x8C18,
		GL_PROXY_TEXTURE_1D_ARRAY = 0x8C19,
		GL_TEXTURE_2D_ARRAY = 0x8C1A,
		GL_PROXY_TEXTURE_2D_ARRAY = 0x8C1B,
		GL_TEXTURE_BINDING_1D_ARRAY = 0x8C1C,
		GL_TEXTURE_BINDING_2D_ARRAY = 0x8C1D,
		GL_R11F_G11F_B10F = 0x8C3A,
		GL_UNSIGNED_INT_10F_11F_11F_REV = 0x8C3B,
		GL_RGB9_E5 = 0x8C3D,
		GL_UNSIGNED_INT_5_9_9_9_REV = 0x8C3E,
		GL_TEXTURE_SHARED_SIZE = 0x8C3F,
		GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = 0x8C76,
		GL_TRANSFORM_FEEDBACK_BUFFER_MODE = 0x8C7F,
		GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = 0x8C80,
		GL_TRANSFORM_FEEDBACK_VARYINGS = 0x8C83,
		GL_TRANSFORM_FEEDBACK_BUFFER_START = 0x8C84,
		GL_TRANSFORM_FEEDBACK_BUFFER_SIZE = 0x8C85,
		GL_PRIMITIVES_GENERATED = 0x8C87,
		GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = 0x8C88,
		GL_RASTERIZER_DISCARD = 0x8C89,
		GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = 0x8C8A,
		GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = 0x8C8B,
		GL_INTERLEAVED_ATTRIBS = 0x8C8C,
		GL_SEPARATE_ATTRIBS = 0x8C8D,
		GL_TRANSFORM_FEEDBACK_BUFFER = 0x8C8E,
		GL_TRANSFORM_FEEDBACK_BUFFER_BINDING = 0x8C8F,
		GL_RGBA32UI = 0x8D70,
		GL_RGB32UI = 0x8D71,
		GL_RGBA16UI = 0x8D76,
		GL_RGB16UI = 0x8D77,
		GL_RGBA8UI = 0x8D7C,
		GL_RGB8UI = 0x8D7D,
		GL_RGBA32I = 0x8D82,
		GL_RGB32I = 0x8D83,
		GL_RGBA16I = 0x8D88,
		GL_RGB16I = 0x8D89,
		GL_RGBA8I = 0x8D8E,
		GL_RGB8I = 0x8D8F,
		GL_RED_INTEGER = 0x8D94,
		GL_GREEN_INTEGER = 0x8D95,
		GL_BLUE_INTEGER = 0x8D96,
		GL_RGB_INTEGER = 0x8D98,
		GL_RGBA_INTEGER = 0x8D99,
		GL_BGR_INTEGER = 0x8D9A,
		GL_BGRA_INTEGER = 0x8D9B,
		GL_SAMPLER_1D_ARRAY = 0x8DC0,
		GL_SAMPLER_2D_ARRAY = 0x8DC1,
		GL_SAMPLER_1D_ARRAY_SHADOW = 0x8DC3,
		GL_SAMPLER_2D_ARRAY_SHADOW = 0x8DC4,
		GL_SAMPLER_CUBE_SHADOW = 0x8DC5,
		GL_UNSIGNED_INT_VEC2 = 0x8DC6,
		GL_UNSIGNED_INT_VEC3 = 0x8DC7,
		GL_UNSIGNED_INT_VEC4 = 0x8DC8,
		GL_INT_SAMPLER_1D = 0x8DC9,
		GL_INT_SAMPLER_2D = 0x8DCA,
		GL_INT_SAMPLER_3D = 0x8DCB,
		GL_INT_SAMPLER_CUBE = 0x8DCC,
		GL_INT_SAMPLER_1D_ARRAY = 0x8DCE,
		GL_INT_SAMPLER_2D_ARRAY = 0x8DCF,
		GL_UNSIGNED_INT_SAMPLER_1D = 0x8DD1,
		GL_UNSIGNED_INT_SAMPLER_2D = 0x8DD2,
		GL_UNSIGNED_INT_SAMPLER_3D = 0x8DD3,
		GL_UNSIGNED_INT_SAMPLER_CUBE = 0x8DD4,
		GL_UNSIGNED_INT_SAMPLER_1D_ARRAY = 0x8DD6,
		GL_UNSIGNED_INT_SAMPLER_2D_ARRAY = 0x8DD7,
		GL_QUERY_WAIT = 0x8E13,
		GL_QUERY_NO_WAIT = 0x8E14,
		GL_QUERY_BY_REGION_WAIT = 0x8E15,
		GL_QUERY_BY_REGION_NO_WAIT = 0x8E16,
		GL_BUFFER_ACCESS_FLAGS = 0x911F,
		GL_BUFFER_MAP_LENGTH = 0x9120,
		GL_BUFFER_MAP_OFFSET = 0x9121,
		GL_DEPTH_COMPONENT32F = 0x8CAC,
		GL_DEPTH32F_STENCIL8 = 0x8CAD,
		GL_FLOAT_32_UNSIGNED_INT_24_8_REV = 0x8DAD,
		GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = 0x8210,
		GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = 0x8211,
		GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE = 0x8212,
		GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = 0x8213,
		GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = 0x8214,
		GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = 0x8215,
		GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = 0x8216,
		GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = 0x8217,
		GL_FRAMEBUFFER_DEFAULT = 0x8218,
		GL_FRAMEBUFFER_UNDEFINED = 0x8219,
		GL_DEPTH_STENCIL_ATTACHMENT = 0x821A,
		GL_MAX_RENDERBUFFER_SIZE = 0x84E8,
		GL_DEPTH_STENCIL = 0x84F9,
		GL_UNSIGNED_INT_24_8 = 0x84FA,
		GL_DEPTH24_STENCIL8 = 0x88F0,
		GL_TEXTURE_STENCIL_SIZE = 0x88F1,
		GL_TEXTURE_RED_TYPE = 0x8C10,
		GL_TEXTURE_GREEN_TYPE = 0x8C11,
		GL_TEXTURE_BLUE_TYPE = 0x8C12,
		GL_TEXTURE_ALPHA_TYPE = 0x8C13,
		GL_TEXTURE_DEPTH_TYPE = 0x8C16,
		GL_UNSIGNED_NORMALIZED = 0x8C17,
		GL_FRAMEBUFFER_BINDING = 0x8CA6,
		GL_DRAW_FRAMEBUFFER_BINDING = 0x8CA6,
		GL_RENDERBUFFER_BINDING = 0x8CA7,
		GL_READ_FRAMEBUFFER = 0x8CA8,
		GL_DRAW_FRAMEBUFFER = 0x8CA9,
		GL_READ_FRAMEBUFFER_BINDING = 0x8CAA,
		GL_RENDERBUFFER_SAMPLES = 0x8CAB,
		GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = 0x8CD0,
		GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = 0x8CD1,
		GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = 0x8CD2,
		GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = 0x8CD3,
		GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = 0x8CD4,
		GL_FRAMEBUFFER_COMPLETE = 0x8CD5,
		GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = 0x8CD6,
		GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 0x8CD7,
		GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER = 0x8CDB,
		GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER = 0x8CDC,
		GL_FRAMEBUFFER_UNSUPPORTED = 0x8CDD,
		GL_MAX_COLOR_ATTACHMENTS = 0x8CDF,
		GL_COLOR_ATTACHMENT0 = 0x8CE0,
		GL_COLOR_ATTACHMENT1 = 0x8CE1,
		GL_COLOR_ATTACHMENT2 = 0x8CE2,
		GL_COLOR_ATTACHMENT3 = 0x8CE3,
		GL_COLOR_ATTACHMENT4 = 0x8CE4,
		GL_COLOR_ATTACHMENT5 = 0x8CE5,
		GL_COLOR_ATTACHMENT6 = 0x8CE6,
		GL_COLOR_ATTACHMENT7 = 0x8CE7,
		GL_COLOR_ATTACHMENT8 = 0x8CE8,
		GL_COLOR_ATTACHMENT9 = 0x8CE9,
		GL_COLOR_ATTACHMENT10 = 0x8CEA,
		GL_COLOR_ATTACHMENT11 = 0x8CEB,
		GL_COLOR_ATTACHMENT12 = 0x8CEC,
		GL_COLOR_ATTACHMENT13 = 0x8CED,
		GL_COLOR_ATTACHMENT14 = 0x8CEE,
		GL_COLOR_ATTACHMENT15 = 0x8CEF,
		GL_COLOR_ATTACHMENT16 = 0x8CF0,
		GL_COLOR_ATTACHMENT17 = 0x8CF1,
		GL_COLOR_ATTACHMENT18 = 0x8CF2,
		GL_COLOR_ATTACHMENT19 = 0x8CF3,
		GL_COLOR_ATTACHMENT20 = 0x8CF4,
		GL_COLOR_ATTACHMENT21 = 0x8CF5,
		GL_COLOR_ATTACHMENT22 = 0x8CF6,
		GL_COLOR_ATTACHMENT23 = 0x8CF7,
		GL_COLOR_ATTACHMENT24 = 0x8CF8,
		GL_COLOR_ATTACHMENT25 = 0x8CF9,
		GL_COLOR_ATTACHMENT26 = 0x8CFA,
		GL_COLOR_ATTACHMENT27 = 0x8CFB,
		GL_COLOR_ATTACHMENT28 = 0x8CFC,
		GL_COLOR_ATTACHMENT29 = 0x8CFD,
		GL_COLOR_ATTACHMENT30 = 0x8CFE,
		GL_COLOR_ATTACHMENT31 = 0x8CFF,
		GL_DEPTH_ATTACHMENT = 0x8D00,
		GL_STENCIL_ATTACHMENT = 0x8D20,
		GL_FRAMEBUFFER = 0x8D40,
		GL_RENDERBUFFER = 0x8D41,
		GL_RENDERBUFFER_WIDTH = 0x8D42,
		GL_RENDERBUFFER_HEIGHT = 0x8D43,
		GL_RENDERBUFFER_INTERNAL_FORMAT = 0x8D44,
		GL_STENCIL_INDEX1 = 0x8D46,
		GL_STENCIL_INDEX4 = 0x8D47,
		GL_STENCIL_INDEX8 = 0x8D48,
		GL_STENCIL_INDEX16 = 0x8D49,
		GL_RENDERBUFFER_RED_SIZE = 0x8D50,
		GL_RENDERBUFFER_GREEN_SIZE = 0x8D51,
		GL_RENDERBUFFER_BLUE_SIZE = 0x8D52,
		GL_RENDERBUFFER_ALPHA_SIZE = 0x8D53,
		GL_RENDERBUFFER_DEPTH_SIZE = 0x8D54,
		GL_RENDERBUFFER_STENCIL_SIZE = 0x8D55,
		GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = 0x8D56,
		GL_MAX_SAMPLES = 0x8D57,
		GL_FRAMEBUFFER_SRGB = 0x8DB9,
		GL_HALF_FLOAT = 0x140B,
		GL_COMPRESSED_RED_RGTC1 = 0x8DBB,
		GL_COMPRESSED_SIGNED_RED_RGTC1 = 0x8DBC,
		GL_COMPRESSED_RG_RGTC2 = 0x8DBD,
		GL_COMPRESSED_SIGNED_RG_RGTC2 = 0x8DBE,
		GL_RG = 0x8227,
		GL_RG_INTEGER = 0x8228,
		GL_R8 = 0x8229,
		GL_R16 = 0x822A,
		GL_RG8 = 0x822B,
		GL_RG16 = 0x822C,
		GL_R16F = 0x822D,
		GL_R32F = 0x822E,
		GL_RG16F = 0x822F,
		GL_RG32F = 0x8230,
		GL_R8I = 0x8231,
		GL_R8UI = 0x8232,
		GL_R16I = 0x8233,
		GL_R16UI = 0x8234,
		GL_R32I = 0x8235,
		GL_R32UI = 0x8236,
		GL_RG8I = 0x8237,
		GL_RG8UI = 0x8238,
		GL_RG16I = 0x8239,
		GL_RG16UI = 0x823A,
		GL_RG32I = 0x823B,
		GL_RG32UI = 0x823C,
		GL_VERTEX_ARRAY_BINDING = 0x85B5,
		GL_SAMPLER_2D_RECT = 0x8B63,
		GL_SAMPLER_2D_RECT_SHADOW = 0x8B64,
		GL_SAMPLER_BUFFER = 0x8DC2,
		GL_INT_SAMPLER_2D_RECT = 0x8DCD,
		GL_INT_SAMPLER_BUFFER = 0x8DD0,
		GL_UNSIGNED_INT_SAMPLER_2D_RECT = 0x8DD5,
		GL_UNSIGNED_INT_SAMPLER_BUFFER = 0x8DD8,
		GL_TEXTURE_BUFFER = 0x8C2A,
		GL_MAX_TEXTURE_BUFFER_SIZE = 0x8C2B,
		GL_TEXTURE_BINDING_BUFFER = 0x8C2C,
		GL_TEXTURE_BUFFER_DATA_STORE_BINDING = 0x8C2D,
		GL_TEXTURE_RECTANGLE = 0x84F5,
		GL_TEXTURE_BINDING_RECTANGLE = 0x84F6,
		GL_PROXY_TEXTURE_RECTANGLE = 0x84F7,
		GL_MAX_RECTANGLE_TEXTURE_SIZE = 0x84F8,
		GL_R8_SNORM = 0x8F94,
		GL_RG8_SNORM = 0x8F95,
		GL_RGB8_SNORM = 0x8F96,
		GL_RGBA8_SNORM = 0x8F97,
		GL_R16_SNORM = 0x8F98,
		GL_RG16_SNORM = 0x8F99,
		GL_RGB16_SNORM = 0x8F9A,
		GL_RGBA16_SNORM = 0x8F9B,
		GL_SIGNED_NORMALIZED = 0x8F9C,
		GL_PRIMITIVE_RESTART = 0x8F9D,
		GL_PRIMITIVE_RESTART_INDEX = 0x8F9E,
		GL_COPY_READ_BUFFER = 0x8F36,
		GL_COPY_WRITE_BUFFER = 0x8F37,
		GL_UNIFORM_BUFFER = 0x8A11,
		GL_UNIFORM_BUFFER_BINDING = 0x8A28,
		GL_UNIFORM_BUFFER_START = 0x8A29,
		GL_UNIFORM_BUFFER_SIZE = 0x8A2A,
		GL_MAX_VERTEX_UNIFORM_BLOCKS = 0x8A2B,
		GL_MAX_GEOMETRY_UNIFORM_BLOCKS = 0x8A2C,
		GL_MAX_FRAGMENT_UNIFORM_BLOCKS = 0x8A2D,
		GL_MAX_COMBINED_UNIFORM_BLOCKS = 0x8A2E,
		GL_MAX_UNIFORM_BUFFER_BINDINGS = 0x8A2F,
		GL_MAX_UNIFORM_BLOCK_SIZE = 0x8A30,
		GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = 0x8A31,
		GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS = 0x8A32,
		GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = 0x8A33,
		GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT = 0x8A34,
		GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = 0x8A35,
		GL_ACTIVE_UNIFORM_BLOCKS = 0x8A36,
		GL_UNIFORM_TYPE = 0x8A37,
		GL_UNIFORM_SIZE = 0x8A38,
		GL_UNIFORM_NAME_LENGTH = 0x8A39,
		GL_UNIFORM_BLOCK_INDEX = 0x8A3A,
		GL_UNIFORM_OFFSET = 0x8A3B,
		GL_UNIFORM_ARRAY_STRIDE = 0x8A3C,
		GL_UNIFORM_MATRIX_STRIDE = 0x8A3D,
		GL_UNIFORM_IS_ROW_MAJOR = 0x8A3E,
		GL_UNIFORM_BLOCK_BINDING = 0x8A3F,
		GL_UNIFORM_BLOCK_DATA_SIZE = 0x8A40,
		GL_UNIFORM_BLOCK_NAME_LENGTH = 0x8A41,
		GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS = 0x8A42,
		GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = 0x8A43,
		GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = 0x8A44,
		GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER = 0x8A45,
		GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = 0x8A46,
		GL_INVALID_INDEX = 0xFFFFFFFFu,
		GL_PROGRAM_POINT_SIZE = 0x8642,
		GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS = 0x8C29,
		GL_FRAMEBUFFER_ATTACHMENT_LAYERED = 0x8DA7,
		GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS = 0x8DA8,
		GL_GEOMETRY_SHADER = 0x8DD9,
		GL_GEOMETRY_VERTICES_OUT = 0x8916,
		GL_GEOMETRY_INPUT_TYPE = 0x8917,
		GL_GEOMETRY_OUTPUT_TYPE = 0x8918,
		GL_MAX_GEOMETRY_UNIFORM_COMPONENTS = 0x8DDF,
		GL_MAX_GEOMETRY_OUTPUT_VERTICES = 0x8DE0,
		GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS = 0x8DE1,
		GL_MAX_VERTEX_OUTPUT_COMPONENTS = 0x9122,
		GL_MAX_GEOMETRY_INPUT_COMPONENTS = 0x9123,
		GL_MAX_GEOMETRY_OUTPUT_COMPONENTS = 0x9124,
		GL_MAX_FRAGMENT_INPUT_COMPONENTS = 0x9125,
		GL_CONTEXT_PROFILE_MASK = 0x9126,
		GL_DEPTH_CLAMP = 0x864F,
		GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION = 0x8E4C,
		GL_FIRST_VERTEX_CONVENTION = 0x8E4D,
		GL_LAST_VERTEX_CONVENTION = 0x8E4E,
		GL_PROVOKING_VERTEX = 0x8E4F,
		GL_TEXTURE_CUBE_MAP_SEAMLESS = 0x884F,
		GL_MAX_SERVER_WAIT_TIMEOUT = 0x9111,
		GL_OBJECT_TYPE = 0x9112,
		GL_SYNC_CONDITION = 0x9113,
		GL_SYNC_STATUS = 0x9114,
		GL_SYNC_FLAGS = 0x9115,
		GL_SYNC_FENCE = 0x9116,
		GL_SYNC_GPU_COMMANDS_COMPLETE = 0x9117,
		GL_UNSIGNALED = 0x9118,
		GL_SIGNALED = 0x9119,
		GL_ALREADY_SIGNALED = 0x911A,
		GL_TIMEOUT_EXPIRED = 0x911B,
		GL_CONDITION_SATISFIED = 0x911C,
		GL_WAIT_FAILED = 0x911D,
		GL_TIMEOUT_IGNORED = 0xFFFFFFFFFFFFFFFFull,
		GL_SYNC_FLUSH_COMMANDS_BIT = 0x00000001,
		GL_SAMPLE_POSITION = 0x8E50,
		GL_SAMPLE_MASK = 0x8E51,
		GL_SAMPLE_MASK_VALUE = 0x8E52,
		GL_MAX_SAMPLE_MASK_WORDS = 0x8E59,
		GL_TEXTURE_2D_MULTISAMPLE = 0x9100,
		GL_PROXY_TEXTURE_2D_MULTISAMPLE = 0x9101,
		GL_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9102,
		GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9103,
		GL_TEXTURE_BINDING_2D_MULTISAMPLE = 0x9104,
		GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY = 0x9105,
		GL_TEXTURE_SAMPLES = 0x9106,
		GL_TEXTURE_FIXED_SAMPLE_LOCATIONS = 0x9107,
		GL_SAMPLER_2D_MULTISAMPLE = 0x9108,
		GL_INT_SAMPLER_2D_MULTISAMPLE = 0x9109,
		GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = 0x910A,
		GL_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910B,
		GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910C,
		GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = 0x910D,
		GL_MAX_COLOR_TEXTURE_SAMPLES = 0x910E,
		GL_MAX_DEPTH_TEXTURE_SAMPLES = 0x910F,
		GL_MAX_INTEGER_SAMPLES = 0x9110,
		GL_VERTEX_ATTRIB_ARRAY_DIVISOR = 0x88FE,
		GL_SRC1_COLOR = 0x88F9,
		GL_ONE_MINUS_SRC1_COLOR = 0x88FA,
		GL_ONE_MINUS_SRC1_ALPHA = 0x88FB,
		GL_MAX_DUAL_SOURCE_DRAW_BUFFERS = 0x88FC,
		GL_ANY_SAMPLES_PASSED = 0x8C2F,
		GL_SAMPLER_BINDING = 0x8919,
		GL_RGB10_A2UI = 0x906F,
		GL_TEXTURE_SWIZZLE_R = 0x8E42,
		GL_TEXTURE_SWIZZLE_G = 0x8E43,
		GL_TEXTURE_SWIZZLE_B = 0x8E44,
		GL_TEXTURE_SWIZZLE_A = 0x8E45,
		GL_TEXTURE_SWIZZLE_RGBA = 0x8E46,
		GL_TIME_ELAPSED = 0x88BF,
		GL_TIMESTAMP = 0x8E28,
		GL_INT_2_10_10_10_REV = 0x8D9F,
	};
	
	extern void (*glActiveTexture)(GLenum texture);
	extern void (*glAttachShader)(GLuint program, GLuint shader);
	extern void (*glBeginConditionalRender)(GLuint id, GLenum mode);
	extern void (*glBeginQuery)(GLenum target, GLuint id);
	extern void (*glBeginTransformFeedback)(GLenum primitiveMode);
	extern void (*glBindAttribLocation)(GLuint program, GLuint index, const GLchar *name);
	extern void (*glBindBuffer)(GLenum target, GLuint buffer);
	extern void (*glBindBufferBase)(GLenum target, GLuint index, GLuint buffer);
	extern void (*glBindBufferRange)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
	extern void (*glBindFragDataLocation)(GLuint program, GLuint color, const GLchar *name);
	extern void (*glBindFragDataLocationIndexed)(GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
	extern void (*glBindFramebuffer)(GLenum target, GLuint framebuffer);
	extern void (*glBindRenderbuffer)(GLenum target, GLuint renderbuffer);
	extern void (*glBindSampler)(GLuint unit, GLuint sampler);
	extern void (*glBindTexture)(GLenum target, GLuint texture);
	extern void (*glBindVertexArray)(GLuint array);
	extern void (*glBlendColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	extern void (*glBlendEquation)(GLenum mode);
	extern void (*glBlendEquationSeparate)(GLenum modeRGB, GLenum modeAlpha);
	extern void (*glBlendFunc)(GLenum sfactor, GLenum dfactor);
	extern void (*glBlendFuncSeparate)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
	extern void (*glBlitFramebuffer)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
	extern void (*glBufferData)(GLenum target, GLsizeiptr size, const void *data, GLenum usage);
	extern void (*glBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
	extern GLenum (*glCheckFramebufferStatus)(GLenum target);
	extern void (*glClampColor)(GLenum target, GLenum clamp);
	extern void (*glClear)(GLbitfield mask);
	extern void (*glClearBufferfi)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
	extern void (*glClearBufferfv)(GLenum buffer, GLint drawbuffer, const GLfloat *value);
	extern void (*glClearBufferiv)(GLenum buffer, GLint drawbuffer, const GLint *value);
	extern void (*glClearBufferuiv)(GLenum buffer, GLint drawbuffer, const GLuint *value);
	extern void (*glClearColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	extern void (*glClearDepth)(GLdouble depth);
	extern void (*glClearStencil)(GLint s);
	extern GLenum (*glClientWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout);
	extern void (*glColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
	extern void (*glColorMaski)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
	extern void (*glCompileShader)(GLuint shader);
	extern void (*glCompressedTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
	extern void (*glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
	extern void (*glCompressedTexImage3D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
	extern void (*glCompressedTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
	extern void (*glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
	extern void (*glCompressedTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
	extern void (*glCopyBufferSubData)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
	extern void (*glCopyTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
	extern void (*glCopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
	extern void (*glCopyTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
	extern void (*glCopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glCopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	extern GLuint (*glCreateProgram)();
	extern GLuint (*glCreateShader)(GLenum type);
	extern void (*glCullFace)(GLenum mode);
	extern void (*glDeleteBuffers)(GLsizei n, const GLuint *buffers);
	extern void (*glDeleteFramebuffers)(GLsizei n, const GLuint *framebuffers);
	extern void (*glDeleteProgram)(GLuint program);
	extern void (*glDeleteQueries)(GLsizei n, const GLuint *ids);
	extern void (*glDeleteRenderbuffers)(GLsizei n, const GLuint *renderbuffers);
	extern void (*glDeleteSamplers)(GLsizei count, const GLuint *samplers);
	extern void (*glDeleteShader)(GLuint shader);
	extern void (*glDeleteSync)(GLsync sync);
	extern void (*glDeleteTextures)(GLsizei n, const GLuint *textures);
	extern void (*glDeleteVertexArrays)(GLsizei n, const GLuint *arrays);
	extern void (*glDepthFunc)(GLenum func);
	extern void (*glDepthMask)(GLboolean flag);
	extern void (*glDepthRange)(GLdouble near, GLdouble far);
	extern void (*glDetachShader)(GLuint program, GLuint shader);
	extern void (*glDisable)(GLenum cap);
	extern void (*glDisableVertexAttribArray)(GLuint index);
	extern void (*glDisablei)(GLenum target, GLuint index);
	extern void (*glDrawArrays)(GLenum mode, GLint first, GLsizei count);
	extern void (*glDrawArraysInstanced)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
	extern void (*glDrawBuffer)(GLenum buf);
	extern void (*glDrawBuffers)(GLsizei n, const GLenum *bufs);
	extern void (*glDrawElements)(GLenum mode, GLsizei count, GLenum type, const void *indices);
	extern void (*glDrawElementsBaseVertex)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
	extern void (*glDrawElementsInstanced)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
	extern void (*glDrawElementsInstancedBaseVertex)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
	extern void (*glDrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
	extern void (*glDrawRangeElementsBaseVertex)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
	extern void (*glEnable)(GLenum cap);
	extern void (*glEnableVertexAttribArray)(GLuint index);
	extern void (*glEnablei)(GLenum target, GLuint index);
	extern void (*glEndConditionalRender)();
	extern void (*glEndQuery)(GLenum target);
	extern void (*glEndTransformFeedback)();
	extern GLsync (*glFenceSync)(GLenum condition, GLbitfield flags);
	extern void (*glFinish)();
	extern void (*glFlush)();
	extern void (*glFlushMappedBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length);
	extern void (*glFramebufferRenderbuffer)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
	extern void (*glFramebufferTexture)(GLenum target, GLenum attachment, GLuint texture, GLint level);
	extern void (*glFramebufferTexture1D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	extern void (*glFramebufferTexture2D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	extern void (*glFramebufferTexture3D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
	extern void (*glFramebufferTextureLayer)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
	extern void (*glFrontFace)(GLenum mode);
	extern void (*glGenBuffers)(GLsizei n, GLuint *buffers);
	extern void (*glGenFramebuffers)(GLsizei n, GLuint *framebuffers);
	extern void (*glGenQueries)(GLsizei n, GLuint *ids);
	extern void (*glGenRenderbuffers)(GLsizei n, GLuint *renderbuffers);
	extern void (*glGenSamplers)(GLsizei count, GLuint *samplers);
	extern void (*glGenTextures)(GLsizei n, GLuint *textures);
	extern void (*glGenVertexArrays)(GLsizei n, GLuint *arrays);
	extern void (*glGenerateMipmap)(GLenum target);
	extern void (*glGetActiveAttrib)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
	extern void (*glGetActiveUniform)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
	extern void (*glGetActiveUniformBlockName)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
	extern void (*glGetActiveUniformBlockiv)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
	extern void (*glGetActiveUniformName)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
	extern void (*glGetActiveUniformsiv)(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
	extern void (*glGetAttachedShaders)(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
	extern GLint (*glGetAttribLocation)(GLuint program, const GLchar *name);
	extern void (*glGetBooleani_v)(GLenum target, GLuint index, GLboolean *data);
	extern void (*glGetBooleanv)(GLenum pname, GLboolean *data);
	extern void (*glGetBufferParameteri64v)(GLenum target, GLenum pname, GLint64 *params);
	extern void (*glGetBufferParameteriv)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetBufferPointerv)(GLenum target, GLenum pname, void **params);
	extern void (*glGetBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, void *data);
	extern void (*glGetCompressedTexImage)(GLenum target, GLint level, void *img);
	extern void (*glGetDoublev)(GLenum pname, GLdouble *data);
	extern GLenum (*glGetError)();
	extern void (*glGetFloatv)(GLenum pname, GLfloat *data);
	extern GLint (*glGetFragDataIndex)(GLuint program, const GLchar *name);
	extern GLint (*glGetFragDataLocation)(GLuint program, const GLchar *name);
	extern void (*glGetFramebufferAttachmentParameteriv)(GLenum target, GLenum attachment, GLenum pname, GLint *params);
	extern void (*glGetInteger64i_v)(GLenum target, GLuint index, GLint64 *data);
	extern void (*glGetInteger64v)(GLenum pname, GLint64 *data);
	extern void (*glGetIntegeri_v)(GLenum target, GLuint index, GLint *data);
	extern void (*glGetIntegerv)(GLenum pname, GLint *data);
	extern void (*glGetMultisamplefv)(GLenum pname, GLuint index, GLfloat *val);
	extern void (*glGetProgramInfoLog)(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
	extern void (*glGetProgramiv)(GLuint program, GLenum pname, GLint *params);
	extern void (*glGetQueryObjecti64v)(GLuint id, GLenum pname, GLint64 *params);
	extern void (*glGetQueryObjectiv)(GLuint id, GLenum pname, GLint *params);
	extern void (*glGetQueryObjectui64v)(GLuint id, GLenum pname, GLuint64 *params);
	extern void (*glGetQueryObjectuiv)(GLuint id, GLenum pname, GLuint *params);
	extern void (*glGetQueryiv)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetRenderbufferParameteriv)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetSamplerParameterIiv)(GLuint sampler, GLenum pname, GLint *params);
	extern void (*glGetSamplerParameterIuiv)(GLuint sampler, GLenum pname, GLuint *params);
	extern void (*glGetSamplerParameterfv)(GLuint sampler, GLenum pname, GLfloat *params);
	extern void (*glGetSamplerParameteriv)(GLuint sampler, GLenum pname, GLint *params);
	extern void (*glGetShaderInfoLog)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
	extern void (*glGetShaderSource)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
	extern void (*glGetShaderiv)(GLuint shader, GLenum pname, GLint *params);
	extern const GLubyte *(*glGetString)(GLenum name);
	extern const GLubyte *(*glGetStringi)(GLenum name, GLuint index);
	extern void (*glGetSynciv)(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
	extern void (*glGetTexImage)(GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
	extern void (*glGetTexLevelParameterfv)(GLenum target, GLint level, GLenum pname, GLfloat *params);
	extern void (*glGetTexLevelParameteriv)(GLenum target, GLint level, GLenum pname, GLint *params);
	extern void (*glGetTexParameterIiv)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetTexParameterIuiv)(GLenum target, GLenum pname, GLuint *params);
	extern void (*glGetTexParameterfv)(GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetTexParameteriv)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetTransformFeedbackVarying)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
	extern GLuint (*glGetUniformBlockIndex)(GLuint program, const GLchar *uniformBlockName);
	extern void (*glGetUniformIndices)(GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
	extern GLint (*glGetUniformLocation)(GLuint program, const GLchar *name);
	extern void (*glGetUniformfv)(GLuint program, GLint location, GLfloat *params);
	extern void (*glGetUniformiv)(GLuint program, GLint location, GLint *params);
	extern void (*glGetUniformuiv)(GLuint program, GLint location, GLuint *params);
	extern void (*glGetVertexAttribIiv)(GLuint index, GLenum pname, GLint *params);
	extern void (*glGetVertexAttribIuiv)(GLuint index, GLenum pname, GLuint *params);
	extern void (*glGetVertexAttribPointerv)(GLuint index, GLenum pname, void **pointer);
	extern void (*glGetVertexAttribdv)(GLuint index, GLenum pname, GLdouble *params);
	extern void (*glGetVertexAttribfv)(GLuint index, GLenum pname, GLfloat *params);
	extern void (*glGetVertexAttribiv)(GLuint index, GLenum pname, GLint *params);
	extern void (*glHint)(GLenum target, GLenum mode);
	extern GLboolean (*glIsBuffer)(GLuint buffer);
	extern GLboolean (*glIsEnabled)(GLenum cap);
	extern GLboolean (*glIsEnabledi)(GLenum target, GLuint index);
	extern GLboolean (*glIsFramebuffer)(GLuint framebuffer);
	extern GLboolean (*glIsProgram)(GLuint program);
	extern GLboolean (*glIsQuery)(GLuint id);
	extern GLboolean (*glIsRenderbuffer)(GLuint renderbuffer);
	extern GLboolean (*glIsSampler)(GLuint sampler);
	extern GLboolean (*glIsShader)(GLuint shader);
	extern GLboolean (*glIsSync)(GLsync sync);
	extern GLboolean (*glIsTexture)(GLuint texture);
	extern GLboolean (*glIsVertexArray)(GLuint array);
	extern void (*glLineWidth)(GLfloat width);
	extern void (*glLinkProgram)(GLuint program);
	extern void (*glLogicOp)(GLenum opcode);
	extern void *(*glMapBuffer)(GLenum target, GLenum access);
	extern void *(*glMapBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
	extern void (*glMultiDrawArrays)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
	extern void (*glMultiDrawElements)(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount);
	extern void (*glMultiDrawElementsBaseVertex)(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex);
	extern void (*glPixelStoref)(GLenum pname, GLfloat param);
	extern void (*glPixelStorei)(GLenum pname, GLint param);
	extern void (*glPointParameterf)(GLenum pname, GLfloat param);
	extern void (*glPointParameterfv)(GLenum pname, const GLfloat *params);
	extern void (*glPointParameteri)(GLenum pname, GLint param);
	extern void (*glPointParameteriv)(GLenum pname, const GLint *params);
	extern void (*glPointSize)(GLfloat size);
	extern void (*glPolygonMode)(GLenum face, GLenum mode);
	extern void (*glPolygonOffset)(GLfloat factor, GLfloat units);
	extern void (*glPrimitiveRestartIndex)(GLuint index);
	extern void (*glProvokingVertex)(GLenum mode);
	extern void (*glQueryCounter)(GLuint id, GLenum target);
	extern void (*glReadBuffer)(GLenum src);
	extern void (*glReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
	extern void (*glRenderbufferStorage)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
	extern void (*glRenderbufferStorageMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
	extern void (*glSampleCoverage)(GLfloat value, GLboolean invert);
	extern void (*glSampleMaski)(GLuint maskNumber, GLbitfield mask);
	extern void (*glSamplerParameterIiv)(GLuint sampler, GLenum pname, const GLint *param);
	extern void (*glSamplerParameterIuiv)(GLuint sampler, GLenum pname, const GLuint *param);
	extern void (*glSamplerParameterf)(GLuint sampler, GLenum pname, GLfloat param);
	extern void (*glSamplerParameterfv)(GLuint sampler, GLenum pname, const GLfloat *param);
	extern void (*glSamplerParameteri)(GLuint sampler, GLenum pname, GLint param);
	extern void (*glSamplerParameteriv)(GLuint sampler, GLenum pname, const GLint *param);
	extern void (*glScissor)(GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glShaderSource)(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
	extern void (*glStencilFunc)(GLenum func, GLint ref, GLuint mask);
	extern void (*glStencilFuncSeparate)(GLenum face, GLenum func, GLint ref, GLuint mask);
	extern void (*glStencilMask)(GLuint mask);
	extern void (*glStencilMaskSeparate)(GLenum face, GLuint mask);
	extern void (*glStencilOp)(GLenum fail, GLenum zfail, GLenum zpass);
	extern void (*glStencilOpSeparate)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
	extern void (*glTexBuffer)(GLenum target, GLenum internalformat, GLuint buffer);
	extern void (*glTexImage1D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
	extern void (*glTexImage2D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
	extern void (*glTexImage2DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
	extern void (*glTexImage3D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
	extern void (*glTexImage3DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
	extern void (*glTexParameterIiv)(GLenum target, GLenum pname, const GLint *params);
	extern void (*glTexParameterIuiv)(GLenum target, GLenum pname, const GLuint *params);
	extern void (*glTexParameterf)(GLenum target, GLenum pname, GLfloat param);
	extern void (*glTexParameterfv)(GLenum target, GLenum pname, const GLfloat *params);
	extern void (*glTexParameteri)(GLenum target, GLenum pname, GLint param);
	extern void (*glTexParameteriv)(GLenum target, GLenum pname, const GLint *params);
	extern void (*glTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
	extern void (*glTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
	extern void (*glTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
	extern void (*glTransformFeedbackVaryings)(GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
	extern void (*glUniform1f)(GLint location, GLfloat v0);
	extern void (*glUniform1fv)(GLint location, GLsizei count, const GLfloat *value);
	extern void (*glUniform1i)(GLint location, GLint v0);
	extern void (*glUniform1iv)(GLint location, GLsizei count, const GLint *value);
	extern void (*glUniform1ui)(GLint location, GLuint v0);
	extern void (*glUniform1uiv)(GLint location, GLsizei count, const GLuint *value);
	extern void (*glUniform2f)(GLint location, GLfloat v0, GLfloat v1);
	extern void (*glUniform2fv)(GLint location, GLsizei count, const GLfloat *value);
	extern void (*glUniform2i)(GLint location, GLint v0, GLint v1);
	extern void (*glUniform2iv)(GLint location, GLsizei count, const GLint *value);
	extern void (*glUniform2ui)(GLint location, GLuint v0, GLuint v1);
	extern void (*glUniform2uiv)(GLint location, GLsizei count, const GLuint *value);
	extern void (*glUniform3f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
	extern void (*glUniform3fv)(GLint location, GLsizei count, const GLfloat *value);
	extern void (*glUniform3i)(GLint location, GLint v0, GLint v1, GLint v2);
	extern void (*glUniform3iv)(GLint location, GLsizei count, const GLint *value);
	extern void (*glUniform3ui)(GLint location, GLuint v0, GLuint v1, GLuint v2);
	extern void (*glUniform3uiv)(GLint location, GLsizei count, const GLuint *value);
	extern void (*glUniform4f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
	extern void (*glUniform4fv)(GLint location, GLsizei count, const GLfloat *value);
	extern void (*glUniform4i)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
	extern void (*glUniform4iv)(GLint location, GLsizei count, const GLint *value);
	extern void (*glUniform4ui)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
	extern void (*glUniform4uiv)(GLint location, GLsizei count, const GLuint *value);
	extern void (*glUniformBlockBinding)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
	extern void (*glUniformMatrix2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix2x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix2x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix3x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix3x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix4x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix4x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern GLboolean (*glUnmapBuffer)(GLenum target);
	extern void (*glUseProgram)(GLuint program);
	extern void (*glValidateProgram)(GLuint program);
	extern void (*glVertexAttrib1d)(GLuint index, GLdouble x);
	extern void (*glVertexAttrib1dv)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib1f)(GLuint index, GLfloat x);
	extern void (*glVertexAttrib1fv)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib1s)(GLuint index, GLshort x);
	extern void (*glVertexAttrib1sv)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib2d)(GLuint index, GLdouble x, GLdouble y);
	extern void (*glVertexAttrib2dv)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib2f)(GLuint index, GLfloat x, GLfloat y);
	extern void (*glVertexAttrib2fv)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib2s)(GLuint index, GLshort x, GLshort y);
	extern void (*glVertexAttrib2sv)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
	extern void (*glVertexAttrib3dv)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib3f)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glVertexAttrib3fv)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib3s)(GLuint index, GLshort x, GLshort y, GLshort z);
	extern void (*glVertexAttrib3sv)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib4Nbv)(GLuint index, const GLbyte *v);
	extern void (*glVertexAttrib4Niv)(GLuint index, const GLint *v);
	extern void (*glVertexAttrib4Nsv)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib4Nub)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
	extern void (*glVertexAttrib4Nubv)(GLuint index, const GLubyte *v);
	extern void (*glVertexAttrib4Nuiv)(GLuint index, const GLuint *v);
	extern void (*glVertexAttrib4Nusv)(GLuint index, const GLushort *v);
	extern void (*glVertexAttrib4bv)(GLuint index, const GLbyte *v);
	extern void (*glVertexAttrib4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glVertexAttrib4dv)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib4f)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glVertexAttrib4fv)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib4iv)(GLuint index, const GLint *v);
	extern void (*glVertexAttrib4s)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
	extern void (*glVertexAttrib4sv)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib4ubv)(GLuint index, const GLubyte *v);
	extern void (*glVertexAttrib4uiv)(GLuint index, const GLuint *v);
	extern void (*glVertexAttrib4usv)(GLuint index, const GLushort *v);
	extern void (*glVertexAttribDivisor)(GLuint index, GLuint divisor);
	extern void (*glVertexAttribI1i)(GLuint index, GLint x);
	extern void (*glVertexAttribI1iv)(GLuint index, const GLint *v);
	extern void (*glVertexAttribI1ui)(GLuint index, GLuint x);
	extern void (*glVertexAttribI1uiv)(GLuint index, const GLuint *v);
	extern void (*glVertexAttribI2i)(GLuint index, GLint x, GLint y);
	extern void (*glVertexAttribI2iv)(GLuint index, const GLint *v);
	extern void (*glVertexAttribI2ui)(GLuint index, GLuint x, GLuint y);
	extern void (*glVertexAttribI2uiv)(GLuint index, const GLuint *v);
	extern void (*glVertexAttribI3i)(GLuint index, GLint x, GLint y, GLint z);
	extern void (*glVertexAttribI3iv)(GLuint index, const GLint *v);
	extern void (*glVertexAttribI3ui)(GLuint index, GLuint x, GLuint y, GLuint z);
	extern void (*glVertexAttribI3uiv)(GLuint index, const GLuint *v);
	extern void (*glVertexAttribI4bv)(GLuint index, const GLbyte *v);
	extern void (*glVertexAttribI4i)(GLuint index, GLint x, GLint y, GLint z, GLint w);
	extern void (*glVertexAttribI4iv)(GLuint index, const GLint *v);
	extern void (*glVertexAttribI4sv)(GLuint index, const GLshort *v);
	extern void (*glVertexAttribI4ubv)(GLuint index, const GLubyte *v);
	extern void (*glVertexAttribI4ui)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
	extern void (*glVertexAttribI4uiv)(GLuint index, const GLuint *v);
	extern void (*glVertexAttribI4usv)(GLuint index, const GLushort *v);
	extern void (*glVertexAttribIPointer)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
	extern void (*glVertexAttribP1ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	extern void (*glVertexAttribP1uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
	extern void (*glVertexAttribP2ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	extern void (*glVertexAttribP2uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
	extern void (*glVertexAttribP3ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	extern void (*glVertexAttribP3uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
	extern void (*glVertexAttribP4ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	extern void (*glVertexAttribP4uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
	extern void (*glVertexAttribPointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
	extern void (*glViewport)(GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout);
	
	#if defined(GL_AMD_debug_output)
		typedef void ( *GLDEBUGPROCAMD)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
	#endif
	#if defined(GL_AMD_gpu_shader_int64) || defined(GL_NV_gpu_shader5) || defined(GL_NV_present_video) || defined(GL_NV_vertex_attrib_integer_64bit)
		typedef int64_t GLint64EXT;
	#endif
	#if defined(GL_AMD_gpu_shader_int64) || defined(GL_ARB_bindless_texture) || defined(GL_NV_gpu_shader5) || defined(GL_NV_present_video) || defined(GL_NV_shader_buffer_load) || defined(GL_NV_vertex_attrib_integer_64bit) || defined(GL_NV_vertex_buffer_unified_memory) || defined(GL_NV_video_capture)
		typedef uint64_t GLuint64EXT;
	#endif
	#if defined(GL_ARB_cl_event)
		struct _cl_context;
	#endif
	#if defined(GL_ARB_cl_event)
		struct _cl_event;
	#endif
	#if defined(GL_ARB_debug_output)
		typedef void ( *GLDEBUGPROCARB)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
	#endif
	#if defined(GL_ARB_half_float_pixel)
		typedef unsigned short GLhalfARB;
	#endif
	#if defined(GL_ARB_shader_objects) || defined(GL_ARB_vertex_shader)
		#ifdef __APPLE__
		typedef void *GLhandleARB;
		#else
		typedef unsigned int GLhandleARB;
		#endif
	#endif
	#if defined(GL_ARB_shader_objects) || defined(GL_ARB_vertex_shader)
		typedef char GLcharARB;
	#endif
	#if defined(GL_ARB_vertex_buffer_object)
		typedef ptrdiff_t GLsizeiptrARB;
	#endif
	#if defined(GL_ARB_vertex_buffer_object) || defined(GL_NV_video_capture)
		typedef ptrdiff_t GLintptrARB;
	#endif
	#if defined(GL_KHR_debug)
		typedef void ( *GLDEBUGPROC)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
	#endif
	#if defined(GL_KHR_debug)
		typedef void ( *GLDEBUGPROCKHR)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
	#endif
	#if defined(GL_NV_half_float)
		typedef unsigned short GLhalfNV;
	#endif
	#if defined(GL_NV_vdpau_interop)
		typedef GLintptr GLvdpauSurfaceNV;
	#endif
	#if defined(GL_OES_fixed_point) || defined(GL_OES_query_matrix)
		typedef GLint GLfixed;
	#endif
	#if defined(GL_OES_fixed_point)
		typedef int GLclampx;
	#endif
	
	#ifdef GL_3DFX_multisample
	extern bool ext_GL_3DFX_multisample;
	enum {
		GL_MULTISAMPLE_BIT_3DFX = 0x20000000,
		GL_MULTISAMPLE_3DFX = 0x86B2,
		GL_SAMPLE_BUFFERS_3DFX = 0x86B3,
		GL_SAMPLES_3DFX = 0x86B4,
	};
	#endif // GL_3DFX_multisample
	
	#ifdef GL_3DFX_tbuffer
	extern bool ext_GL_3DFX_tbuffer;
	extern void (*glTbufferMask3DFX)(GLuint mask);
	#endif // GL_3DFX_tbuffer
	
	#ifdef GL_3DFX_texture_compression_FXT1
	extern bool ext_GL_3DFX_texture_compression_FXT1;
	enum {
		GL_COMPRESSED_RGB_FXT1_3DFX = 0x86B0,
		GL_COMPRESSED_RGBA_FXT1_3DFX = 0x86B1,
	};
	#endif // GL_3DFX_texture_compression_FXT1
	
	#ifdef GL_AMD_blend_minmax_factor
	extern bool ext_GL_AMD_blend_minmax_factor;
	enum {
		GL_FACTOR_MIN_AMD = 0x901C,
		GL_FACTOR_MAX_AMD = 0x901D,
	};
	#endif // GL_AMD_blend_minmax_factor
	
	#ifdef GL_AMD_debug_output
	extern bool ext_GL_AMD_debug_output;
	enum {
		GL_MAX_DEBUG_MESSAGE_LENGTH_AMD = 0x9143,
		GL_MAX_DEBUG_LOGGED_MESSAGES_AMD = 0x9144,
		GL_DEBUG_LOGGED_MESSAGES_AMD = 0x9145,
		GL_DEBUG_SEVERITY_HIGH_AMD = 0x9146,
		GL_DEBUG_SEVERITY_MEDIUM_AMD = 0x9147,
		GL_DEBUG_SEVERITY_LOW_AMD = 0x9148,
		GL_DEBUG_CATEGORY_API_ERROR_AMD = 0x9149,
		GL_DEBUG_CATEGORY_WINDOW_SYSTEM_AMD = 0x914A,
		GL_DEBUG_CATEGORY_DEPRECATION_AMD = 0x914B,
		GL_DEBUG_CATEGORY_UNDEFINED_BEHAVIOR_AMD = 0x914C,
		GL_DEBUG_CATEGORY_PERFORMANCE_AMD = 0x914D,
		GL_DEBUG_CATEGORY_SHADER_COMPILER_AMD = 0x914E,
		GL_DEBUG_CATEGORY_APPLICATION_AMD = 0x914F,
		GL_DEBUG_CATEGORY_OTHER_AMD = 0x9150,
	};
	extern void (*glDebugMessageCallbackAMD)(GLDEBUGPROCAMD callback, void *userParam);
	extern void (*glDebugMessageEnableAMD)(GLenum category, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
	extern void (*glDebugMessageInsertAMD)(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar *buf);
	extern GLuint (*glGetDebugMessageLogAMD)(GLuint count, GLsizei bufsize, GLenum *categories, GLuint *severities, GLuint *ids, GLsizei *lengths, GLchar *message);
	#endif // GL_AMD_debug_output
	
	#ifdef GL_AMD_depth_clamp_separate
	extern bool ext_GL_AMD_depth_clamp_separate;
	enum {
		GL_DEPTH_CLAMP_NEAR_AMD = 0x901E,
		GL_DEPTH_CLAMP_FAR_AMD = 0x901F,
	};
	#endif // GL_AMD_depth_clamp_separate
	
	#ifdef GL_AMD_draw_buffers_blend
	extern bool ext_GL_AMD_draw_buffers_blend;
	extern void (*glBlendEquationIndexedAMD)(GLuint buf, GLenum mode);
	extern void (*glBlendEquationSeparateIndexedAMD)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
	extern void (*glBlendFuncIndexedAMD)(GLuint buf, GLenum src, GLenum dst);
	extern void (*glBlendFuncSeparateIndexedAMD)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
	#endif // GL_AMD_draw_buffers_blend
	
	#ifdef GL_AMD_gpu_shader_int64
	extern bool ext_GL_AMD_gpu_shader_int64;
	enum {
		GL_INT64_NV = 0x140E,
		GL_UNSIGNED_INT64_NV = 0x140F,
		GL_INT8_NV = 0x8FE0,
		GL_INT8_VEC2_NV = 0x8FE1,
		GL_INT8_VEC3_NV = 0x8FE2,
		GL_INT8_VEC4_NV = 0x8FE3,
		GL_INT16_NV = 0x8FE4,
		GL_INT16_VEC2_NV = 0x8FE5,
		GL_INT16_VEC3_NV = 0x8FE6,
		GL_INT16_VEC4_NV = 0x8FE7,
		GL_INT64_VEC2_NV = 0x8FE9,
		GL_INT64_VEC3_NV = 0x8FEA,
		GL_INT64_VEC4_NV = 0x8FEB,
		GL_UNSIGNED_INT8_NV = 0x8FEC,
		GL_UNSIGNED_INT8_VEC2_NV = 0x8FED,
		GL_UNSIGNED_INT8_VEC3_NV = 0x8FEE,
		GL_UNSIGNED_INT8_VEC4_NV = 0x8FEF,
		GL_UNSIGNED_INT16_NV = 0x8FF0,
		GL_UNSIGNED_INT16_VEC2_NV = 0x8FF1,
		GL_UNSIGNED_INT16_VEC3_NV = 0x8FF2,
		GL_UNSIGNED_INT16_VEC4_NV = 0x8FF3,
		GL_UNSIGNED_INT64_VEC2_NV = 0x8FF5,
		GL_UNSIGNED_INT64_VEC3_NV = 0x8FF6,
		GL_UNSIGNED_INT64_VEC4_NV = 0x8FF7,
		GL_FLOAT16_NV = 0x8FF8,
		GL_FLOAT16_VEC2_NV = 0x8FF9,
		GL_FLOAT16_VEC3_NV = 0x8FFA,
		GL_FLOAT16_VEC4_NV = 0x8FFB,
	};
	extern void (*glGetUniformi64vNV)(GLuint program, GLint location, GLint64EXT *params);
	extern void (*glGetUniformui64vNV)(GLuint program, GLint location, GLuint64EXT *params);
	extern void (*glProgramUniform1i64NV)(GLuint program, GLint location, GLint64EXT x);
	extern void (*glProgramUniform1i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glProgramUniform1ui64NV)(GLuint program, GLint location, GLuint64EXT x);
	extern void (*glProgramUniform1ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
	extern void (*glProgramUniform2i64NV)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
	extern void (*glProgramUniform2i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glProgramUniform2ui64NV)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
	extern void (*glProgramUniform2ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
	extern void (*glProgramUniform3i64NV)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
	extern void (*glProgramUniform3i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glProgramUniform3ui64NV)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
	extern void (*glProgramUniform3ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
	extern void (*glProgramUniform4i64NV)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
	extern void (*glProgramUniform4i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glProgramUniform4ui64NV)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
	extern void (*glProgramUniform4ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
	extern void (*glUniform1i64NV)(GLint location, GLint64EXT x);
	extern void (*glUniform1i64vNV)(GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glUniform1ui64NV)(GLint location, GLuint64EXT x);
	extern void (*glUniform1ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value);
	extern void (*glUniform2i64NV)(GLint location, GLint64EXT x, GLint64EXT y);
	extern void (*glUniform2i64vNV)(GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glUniform2ui64NV)(GLint location, GLuint64EXT x, GLuint64EXT y);
	extern void (*glUniform2ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value);
	extern void (*glUniform3i64NV)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
	extern void (*glUniform3i64vNV)(GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glUniform3ui64NV)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
	extern void (*glUniform3ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value);
	extern void (*glUniform4i64NV)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
	extern void (*glUniform4i64vNV)(GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glUniform4ui64NV)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
	extern void (*glUniform4ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value);
	#endif // GL_AMD_gpu_shader_int64
	
	#ifdef GL_AMD_interleaved_elements
	extern bool ext_GL_AMD_interleaved_elements;
	enum {
		GL_VERTEX_ELEMENT_SWIZZLE_AMD = 0x91A4,
		GL_VERTEX_ID_SWIZZLE_AMD = 0x91A5,
	};
	extern void (*glVertexAttribParameteriAMD)(GLuint index, GLenum pname, GLint param);
	#endif // GL_AMD_interleaved_elements
	
	#ifdef GL_AMD_multi_draw_indirect
	extern bool ext_GL_AMD_multi_draw_indirect;
	extern void (*glMultiDrawArraysIndirectAMD)(GLenum mode, const void *indirect, GLsizei primcount, GLsizei stride);
	extern void (*glMultiDrawElementsIndirectAMD)(GLenum mode, GLenum type, const void *indirect, GLsizei primcount, GLsizei stride);
	#endif // GL_AMD_multi_draw_indirect
	
	#ifdef GL_AMD_name_gen_delete
	extern bool ext_GL_AMD_name_gen_delete;
	enum {
		GL_DATA_BUFFER_AMD = 0x9151,
		GL_PERFORMANCE_MONITOR_AMD = 0x9152,
		GL_QUERY_OBJECT_AMD = 0x9153,
		GL_VERTEX_ARRAY_OBJECT_AMD = 0x9154,
		GL_SAMPLER_OBJECT_AMD = 0x9155,
	};
	extern void (*glDeleteNamesAMD)(GLenum identifier, GLuint num, const GLuint *names);
	extern void (*glGenNamesAMD)(GLenum identifier, GLuint num, GLuint *names);
	extern GLboolean (*glIsNameAMD)(GLenum identifier, GLuint name);
	#endif // GL_AMD_name_gen_delete
	
	#ifdef GL_AMD_occlusion_query_event
	extern bool ext_GL_AMD_occlusion_query_event;
	enum {
		GL_QUERY_DEPTH_PASS_EVENT_BIT_AMD = 0x00000001,
		GL_QUERY_DEPTH_FAIL_EVENT_BIT_AMD = 0x00000002,
		GL_QUERY_STENCIL_FAIL_EVENT_BIT_AMD = 0x00000004,
		GL_QUERY_DEPTH_BOUNDS_FAIL_EVENT_BIT_AMD = 0x00000008,
		GL_QUERY_ALL_EVENT_BITS_AMD = 0xFFFFFFFF,
		GL_OCCLUSION_QUERY_EVENT_MASK_AMD = 0x874F,
	};
	extern void (*glQueryObjectParameteruiAMD)(GLenum target, GLuint id, GLenum pname, GLuint param);
	#endif // GL_AMD_occlusion_query_event
	
	#ifdef GL_AMD_performance_monitor
	extern bool ext_GL_AMD_performance_monitor;
	enum {
		GL_COUNTER_TYPE_AMD = 0x8BC0,
		GL_COUNTER_RANGE_AMD = 0x8BC1,
		GL_UNSIGNED_INT64_AMD = 0x8BC2,
		GL_PERCENTAGE_AMD = 0x8BC3,
		GL_PERFMON_RESULT_AVAILABLE_AMD = 0x8BC4,
		GL_PERFMON_RESULT_SIZE_AMD = 0x8BC5,
		GL_PERFMON_RESULT_AMD = 0x8BC6,
	};
	extern void (*glBeginPerfMonitorAMD)(GLuint monitor);
	extern void (*glDeletePerfMonitorsAMD)(GLsizei n, GLuint *monitors);
	extern void (*glEndPerfMonitorAMD)(GLuint monitor);
	extern void (*glGenPerfMonitorsAMD)(GLsizei n, GLuint *monitors);
	extern void (*glGetPerfMonitorCounterDataAMD)(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);
	extern void (*glGetPerfMonitorCounterInfoAMD)(GLuint group, GLuint counter, GLenum pname, void *data);
	extern void (*glGetPerfMonitorCounterStringAMD)(GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
	extern void (*glGetPerfMonitorCountersAMD)(GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters);
	extern void (*glGetPerfMonitorGroupStringAMD)(GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString);
	extern void (*glGetPerfMonitorGroupsAMD)(GLint *numGroups, GLsizei groupsSize, GLuint *groups);
	extern void (*glSelectPerfMonitorCountersAMD)(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList);
	#endif // GL_AMD_performance_monitor
	
	#ifdef GL_AMD_pinned_memory
	extern bool ext_GL_AMD_pinned_memory;
	enum {
		GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD = 0x9160,
	};
	#endif // GL_AMD_pinned_memory
	
	#ifdef GL_AMD_query_buffer_object
	extern bool ext_GL_AMD_query_buffer_object;
	enum {
		GL_QUERY_BUFFER_AMD = 0x9192,
		GL_QUERY_BUFFER_BINDING_AMD = 0x9193,
		GL_QUERY_RESULT_NO_WAIT_AMD = 0x9194,
	};
	#endif // GL_AMD_query_buffer_object
	
	#ifdef GL_AMD_sample_positions
	extern bool ext_GL_AMD_sample_positions;
	enum {
		GL_SUBSAMPLE_DISTANCE_AMD = 0x883F,
	};
	extern void (*glSetMultisamplefvAMD)(GLenum pname, GLuint index, const GLfloat *val);
	#endif // GL_AMD_sample_positions
	
	#ifdef GL_AMD_sparse_texture
	extern bool ext_GL_AMD_sparse_texture;
	enum {
		GL_VIRTUAL_PAGE_SIZE_X_AMD = 0x9195,
		GL_VIRTUAL_PAGE_SIZE_Y_AMD = 0x9196,
		GL_VIRTUAL_PAGE_SIZE_Z_AMD = 0x9197,
		GL_MAX_SPARSE_TEXTURE_SIZE_AMD = 0x9198,
		GL_MAX_SPARSE_3D_TEXTURE_SIZE_AMD = 0x9199,
		GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS = 0x919A,
		GL_MIN_SPARSE_LEVEL_AMD = 0x919B,
		GL_MIN_LOD_WARNING_AMD = 0x919C,
		GL_TEXTURE_STORAGE_SPARSE_BIT_AMD = 0x00000001,
	};
	extern void (*glTexStorageSparseAMD)(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags);
	extern void (*glTextureStorageSparseAMD)(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags);
	#endif // GL_AMD_sparse_texture
	
	#ifdef GL_AMD_stencil_operation_extended
	extern bool ext_GL_AMD_stencil_operation_extended;
	enum {
		GL_SET_AMD = 0x874A,
		GL_REPLACE_VALUE_AMD = 0x874B,
		GL_STENCIL_OP_VALUE_AMD = 0x874C,
		GL_STENCIL_BACK_OP_VALUE_AMD = 0x874D,
	};
	extern void (*glStencilOpValueAMD)(GLenum face, GLuint value);
	#endif // GL_AMD_stencil_operation_extended
	
	#ifdef GL_AMD_transform_feedback4
	extern bool ext_GL_AMD_transform_feedback4;
	enum {
		GL_STREAM_RASTERIZATION_AMD = 0x91A0,
	};
	#endif // GL_AMD_transform_feedback4
	
	#ifdef GL_AMD_vertex_shader_tessellator
	extern bool ext_GL_AMD_vertex_shader_tessellator;
	enum {
		GL_SAMPLER_BUFFER_AMD = 0x9001,
		GL_INT_SAMPLER_BUFFER_AMD = 0x9002,
		GL_UNSIGNED_INT_SAMPLER_BUFFER_AMD = 0x9003,
		GL_TESSELLATION_MODE_AMD = 0x9004,
		GL_TESSELLATION_FACTOR_AMD = 0x9005,
		GL_DISCRETE_AMD = 0x9006,
		GL_CONTINUOUS_AMD = 0x9007,
	};
	extern void (*glTessellationFactorAMD)(GLfloat factor);
	extern void (*glTessellationModeAMD)(GLenum mode);
	#endif // GL_AMD_vertex_shader_tessellator
	
	#ifdef GL_APPLE_aux_depth_stencil
	extern bool ext_GL_APPLE_aux_depth_stencil;
	enum {
		GL_AUX_DEPTH_STENCIL_APPLE = 0x8A14,
	};
	#endif // GL_APPLE_aux_depth_stencil
	
	#ifdef GL_APPLE_client_storage
	extern bool ext_GL_APPLE_client_storage;
	enum {
		GL_UNPACK_CLIENT_STORAGE_APPLE = 0x85B2,
	};
	#endif // GL_APPLE_client_storage
	
	#ifdef GL_APPLE_element_array
	extern bool ext_GL_APPLE_element_array;
	enum {
		GL_ELEMENT_ARRAY_APPLE = 0x8A0C,
		GL_ELEMENT_ARRAY_TYPE_APPLE = 0x8A0D,
		GL_ELEMENT_ARRAY_POINTER_APPLE = 0x8A0E,
	};
	extern void (*glDrawElementArrayAPPLE)(GLenum mode, GLint first, GLsizei count);
	extern void (*glDrawRangeElementArrayAPPLE)(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count);
	extern void (*glElementPointerAPPLE)(GLenum type, const void *pointer);
	extern void (*glMultiDrawElementArrayAPPLE)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
	extern void (*glMultiDrawRangeElementArrayAPPLE)(GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount);
	#endif // GL_APPLE_element_array
	
	#ifdef GL_APPLE_fence
	extern bool ext_GL_APPLE_fence;
	enum {
		GL_DRAW_PIXELS_APPLE = 0x8A0A,
		GL_FENCE_APPLE = 0x8A0B,
	};
	extern void (*glDeleteFencesAPPLE)(GLsizei n, const GLuint *fences);
	extern void (*glFinishFenceAPPLE)(GLuint fence);
	extern void (*glFinishObjectAPPLE)(GLenum object, GLint name);
	extern void (*glGenFencesAPPLE)(GLsizei n, GLuint *fences);
	extern GLboolean (*glIsFenceAPPLE)(GLuint fence);
	extern void (*glSetFenceAPPLE)(GLuint fence);
	extern GLboolean (*glTestFenceAPPLE)(GLuint fence);
	extern GLboolean (*glTestObjectAPPLE)(GLenum object, GLuint name);
	#endif // GL_APPLE_fence
	
	#ifdef GL_APPLE_float_pixels
	extern bool ext_GL_APPLE_float_pixels;
	enum {
		GL_HALF_APPLE = 0x140B,
		GL_RGBA_FLOAT32_APPLE = 0x8814,
		GL_RGB_FLOAT32_APPLE = 0x8815,
		GL_ALPHA_FLOAT32_APPLE = 0x8816,
		GL_INTENSITY_FLOAT32_APPLE = 0x8817,
		GL_LUMINANCE_FLOAT32_APPLE = 0x8818,
		GL_LUMINANCE_ALPHA_FLOAT32_APPLE = 0x8819,
		GL_RGBA_FLOAT16_APPLE = 0x881A,
		GL_RGB_FLOAT16_APPLE = 0x881B,
		GL_ALPHA_FLOAT16_APPLE = 0x881C,
		GL_INTENSITY_FLOAT16_APPLE = 0x881D,
		GL_LUMINANCE_FLOAT16_APPLE = 0x881E,
		GL_LUMINANCE_ALPHA_FLOAT16_APPLE = 0x881F,
		GL_COLOR_FLOAT_APPLE = 0x8A0F,
	};
	#endif // GL_APPLE_float_pixels
	
	#ifdef GL_APPLE_flush_buffer_range
	extern bool ext_GL_APPLE_flush_buffer_range;
	enum {
		GL_BUFFER_SERIALIZED_MODIFY_APPLE = 0x8A12,
		GL_BUFFER_FLUSHING_UNMAP_APPLE = 0x8A13,
	};
	extern void (*glBufferParameteriAPPLE)(GLenum target, GLenum pname, GLint param);
	extern void (*glFlushMappedBufferRangeAPPLE)(GLenum target, GLintptr offset, GLsizeiptr size);
	#endif // GL_APPLE_flush_buffer_range
	
	#ifdef GL_APPLE_object_purgeable
	extern bool ext_GL_APPLE_object_purgeable;
	enum {
		GL_BUFFER_OBJECT_APPLE = 0x85B3,
		GL_RELEASED_APPLE = 0x8A19,
		GL_VOLATILE_APPLE = 0x8A1A,
		GL_RETAINED_APPLE = 0x8A1B,
		GL_UNDEFINED_APPLE = 0x8A1C,
		GL_PURGEABLE_APPLE = 0x8A1D,
	};
	extern void (*glGetObjectParameterivAPPLE)(GLenum objectType, GLuint name, GLenum pname, GLint *params);
	extern GLenum (*glObjectPurgeableAPPLE)(GLenum objectType, GLuint name, GLenum option);
	extern GLenum (*glObjectUnpurgeableAPPLE)(GLenum objectType, GLuint name, GLenum option);
	#endif // GL_APPLE_object_purgeable
	
	#ifdef GL_APPLE_rgb_422
	extern bool ext_GL_APPLE_rgb_422;
	enum {
		GL_RGB_422_APPLE = 0x8A1F,
		GL_UNSIGNED_SHORT_8_8_APPLE = 0x85BA,
		GL_UNSIGNED_SHORT_8_8_REV_APPLE = 0x85BB,
		GL_RGB_RAW_422_APPLE = 0x8A51,
	};
	#endif // GL_APPLE_rgb_422
	
	#ifdef GL_APPLE_row_bytes
	extern bool ext_GL_APPLE_row_bytes;
	enum {
		GL_PACK_ROW_BYTES_APPLE = 0x8A15,
		GL_UNPACK_ROW_BYTES_APPLE = 0x8A16,
	};
	#endif // GL_APPLE_row_bytes
	
	#ifdef GL_APPLE_specular_vector
	extern bool ext_GL_APPLE_specular_vector;
	enum {
		GL_LIGHT_MODEL_SPECULAR_VECTOR_APPLE = 0x85B0,
	};
	#endif // GL_APPLE_specular_vector
	
	#ifdef GL_APPLE_texture_range
	extern bool ext_GL_APPLE_texture_range;
	enum {
		GL_TEXTURE_STORAGE_HINT_APPLE = 0x85BC,
		GL_TEXTURE_RANGE_LENGTH_APPLE = 0x85B7,
		GL_TEXTURE_RANGE_POINTER_APPLE = 0x85B8,
		GL_STORAGE_PRIVATE_APPLE = 0x85BD,
		GL_STORAGE_CACHED_APPLE = 0x85BE,
		GL_STORAGE_SHARED_APPLE = 0x85BF,
	};
	extern void (*glGetTexParameterPointervAPPLE)(GLenum target, GLenum pname, void **params);
	extern void (*glTextureRangeAPPLE)(GLenum target, GLsizei length, const void *pointer);
	#endif // GL_APPLE_texture_range
	
	#ifdef GL_APPLE_transform_hint
	extern bool ext_GL_APPLE_transform_hint;
	enum {
		GL_TRANSFORM_HINT_APPLE = 0x85B1,
	};
	#endif // GL_APPLE_transform_hint
	
	#ifdef GL_APPLE_vertex_array_object
	extern bool ext_GL_APPLE_vertex_array_object;
	enum {
		GL_VERTEX_ARRAY_BINDING_APPLE = 0x85B5,
	};
	extern void (*glBindVertexArrayAPPLE)(GLuint array);
	extern void (*glDeleteVertexArraysAPPLE)(GLsizei n, const GLuint *arrays);
	extern void (*glGenVertexArraysAPPLE)(GLsizei n, GLuint *arrays);
	extern GLboolean (*glIsVertexArrayAPPLE)(GLuint array);
	#endif // GL_APPLE_vertex_array_object
	
	#ifdef GL_APPLE_vertex_array_range
	extern bool ext_GL_APPLE_vertex_array_range;
	enum {
		GL_VERTEX_ARRAY_STORAGE_HINT_APPLE = 0x851F,
		GL_VERTEX_ARRAY_RANGE_APPLE = 0x851D,
		GL_VERTEX_ARRAY_RANGE_LENGTH_APPLE = 0x851E,
		GL_VERTEX_ARRAY_RANGE_POINTER_APPLE = 0x8521,
		GL_STORAGE_CLIENT_APPLE = 0x85B4,
		#if !defined(GL_APPLE_texture_range)
		GL_STORAGE_CACHED_APPLE = 0x85BE,
		GL_STORAGE_SHARED_APPLE = 0x85BF,
		#endif
	};
	extern void (*glFlushVertexArrayRangeAPPLE)(GLsizei length, void *pointer);
	extern void (*glVertexArrayParameteriAPPLE)(GLenum pname, GLint param);
	extern void (*glVertexArrayRangeAPPLE)(GLsizei length, void *pointer);
	#endif // GL_APPLE_vertex_array_range
	
	#ifdef GL_APPLE_vertex_program_evaluators
	extern bool ext_GL_APPLE_vertex_program_evaluators;
	enum {
		GL_VERTEX_ATTRIB_MAP1_APPLE = 0x8A00,
		GL_VERTEX_ATTRIB_MAP2_APPLE = 0x8A01,
		GL_VERTEX_ATTRIB_MAP1_SIZE_APPLE = 0x8A02,
		GL_VERTEX_ATTRIB_MAP1_COEFF_APPLE = 0x8A03,
		GL_VERTEX_ATTRIB_MAP1_ORDER_APPLE = 0x8A04,
		GL_VERTEX_ATTRIB_MAP1_DOMAIN_APPLE = 0x8A05,
		GL_VERTEX_ATTRIB_MAP2_SIZE_APPLE = 0x8A06,
		GL_VERTEX_ATTRIB_MAP2_COEFF_APPLE = 0x8A07,
		GL_VERTEX_ATTRIB_MAP2_ORDER_APPLE = 0x8A08,
		GL_VERTEX_ATTRIB_MAP2_DOMAIN_APPLE = 0x8A09,
	};
	extern void (*glDisableVertexAttribAPPLE)(GLuint index, GLenum pname);
	extern void (*glEnableVertexAttribAPPLE)(GLuint index, GLenum pname);
	extern GLboolean (*glIsVertexAttribEnabledAPPLE)(GLuint index, GLenum pname);
	extern void (*glMapVertexAttrib1dAPPLE)(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
	extern void (*glMapVertexAttrib1fAPPLE)(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
	extern void (*glMapVertexAttrib2dAPPLE)(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);
	extern void (*glMapVertexAttrib2fAPPLE)(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);
	#endif // GL_APPLE_vertex_program_evaluators
	
	#ifdef GL_APPLE_ycbcr_422
	extern bool ext_GL_APPLE_ycbcr_422;
	enum {
		GL_YCBCR_422_APPLE = 0x85B9,
		#if !defined(GL_APPLE_rgb_422)
		GL_UNSIGNED_SHORT_8_8_APPLE = 0x85BA,
		GL_UNSIGNED_SHORT_8_8_REV_APPLE = 0x85BB,
		#endif
	};
	#endif // GL_APPLE_ycbcr_422
	
	#ifdef GL_ARB_ES2_compatibility
	extern bool ext_GL_ARB_ES2_compatibility;
	enum {
		GL_FIXED = 0x140C,
		GL_IMPLEMENTATION_COLOR_READ_TYPE = 0x8B9A,
		GL_IMPLEMENTATION_COLOR_READ_FORMAT = 0x8B9B,
		GL_LOW_FLOAT = 0x8DF0,
		GL_MEDIUM_FLOAT = 0x8DF1,
		GL_HIGH_FLOAT = 0x8DF2,
		GL_LOW_INT = 0x8DF3,
		GL_MEDIUM_INT = 0x8DF4,
		GL_HIGH_INT = 0x8DF5,
		GL_SHADER_COMPILER = 0x8DFA,
		GL_SHADER_BINARY_FORMATS = 0x8DF8,
		GL_NUM_SHADER_BINARY_FORMATS = 0x8DF9,
		GL_MAX_VERTEX_UNIFORM_VECTORS = 0x8DFB,
		GL_MAX_VARYING_VECTORS = 0x8DFC,
		GL_MAX_FRAGMENT_UNIFORM_VECTORS = 0x8DFD,
		GL_RGB565 = 0x8D62,
	};
	extern void (*glClearDepthf)(GLfloat d);
	extern void (*glDepthRangef)(GLfloat n, GLfloat f);
	extern void (*glGetShaderPrecisionFormat)(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
	extern void (*glReleaseShaderCompiler)();
	extern void (*glShaderBinary)(GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length);
	#endif // GL_ARB_ES2_compatibility
	
	#ifdef GL_ARB_ES3_1_compatibility
	extern bool ext_GL_ARB_ES3_1_compatibility;
	extern void (*glMemoryBarrierByRegion)(GLbitfield barriers);
	#endif // GL_ARB_ES3_1_compatibility
	
	#ifdef GL_ARB_ES3_2_compatibility
	extern bool ext_GL_ARB_ES3_2_compatibility;
	enum {
		GL_PRIMITIVE_BOUNDING_BOX_ARB = 0x92BE,
		GL_MULTISAMPLE_LINE_WIDTH_RANGE_ARB = 0x9381,
		GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY_ARB = 0x9382,
	};
	extern void (*glPrimitiveBoundingBoxARB)(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
	#endif // GL_ARB_ES3_2_compatibility
	
	#ifdef GL_ARB_ES3_compatibility
	extern bool ext_GL_ARB_ES3_compatibility;
	enum {
		GL_COMPRESSED_RGB8_ETC2 = 0x9274,
		GL_COMPRESSED_SRGB8_ETC2 = 0x9275,
		GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9276,
		GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9277,
		GL_COMPRESSED_RGBA8_ETC2_EAC = 0x9278,
		GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = 0x9279,
		GL_COMPRESSED_R11_EAC = 0x9270,
		GL_COMPRESSED_SIGNED_R11_EAC = 0x9271,
		GL_COMPRESSED_RG11_EAC = 0x9272,
		GL_COMPRESSED_SIGNED_RG11_EAC = 0x9273,
		GL_PRIMITIVE_RESTART_FIXED_INDEX = 0x8D69,
		GL_ANY_SAMPLES_PASSED_CONSERVATIVE = 0x8D6A,
		GL_MAX_ELEMENT_INDEX = 0x8D6B,
	};
	#endif // GL_ARB_ES3_compatibility
	
	#ifdef GL_ARB_base_instance
	extern bool ext_GL_ARB_base_instance;
	extern void (*glDrawArraysInstancedBaseInstance)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
	extern void (*glDrawElementsInstancedBaseInstance)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
	extern void (*glDrawElementsInstancedBaseVertexBaseInstance)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
	#endif // GL_ARB_base_instance
	
	#ifdef GL_ARB_bindless_texture
	extern bool ext_GL_ARB_bindless_texture;
	enum {
		GL_UNSIGNED_INT64_ARB = 0x140F,
	};
	extern GLuint64 (*glGetImageHandleARB)(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
	extern GLuint64 (*glGetTextureHandleARB)(GLuint texture);
	extern GLuint64 (*glGetTextureSamplerHandleARB)(GLuint texture, GLuint sampler);
	extern void (*glGetVertexAttribLui64vARB)(GLuint index, GLenum pname, GLuint64EXT *params);
	extern GLboolean (*glIsImageHandleResidentARB)(GLuint64 handle);
	extern GLboolean (*glIsTextureHandleResidentARB)(GLuint64 handle);
	extern void (*glMakeImageHandleNonResidentARB)(GLuint64 handle);
	extern void (*glMakeImageHandleResidentARB)(GLuint64 handle, GLenum access);
	extern void (*glMakeTextureHandleNonResidentARB)(GLuint64 handle);
	extern void (*glMakeTextureHandleResidentARB)(GLuint64 handle);
	extern void (*glProgramUniformHandleui64ARB)(GLuint program, GLint location, GLuint64 value);
	extern void (*glProgramUniformHandleui64vARB)(GLuint program, GLint location, GLsizei count, const GLuint64 *values);
	extern void (*glUniformHandleui64ARB)(GLint location, GLuint64 value);
	extern void (*glUniformHandleui64vARB)(GLint location, GLsizei count, const GLuint64 *value);
	extern void (*glVertexAttribL1ui64ARB)(GLuint index, GLuint64EXT x);
	extern void (*glVertexAttribL1ui64vARB)(GLuint index, const GLuint64EXT *v);
	#endif // GL_ARB_bindless_texture
	
	#ifdef GL_ARB_buffer_storage
	extern bool ext_GL_ARB_buffer_storage;
	enum {
		GL_CLIENT_STORAGE_BIT = 0x0200,
		GL_DYNAMIC_STORAGE_BIT = 0x0100,
		GL_MAP_COHERENT_BIT = 0x0080,
		GL_MAP_PERSISTENT_BIT = 0x0040,
		GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT = 0x00004000,
		GL_BUFFER_IMMUTABLE_STORAGE = 0x821F,
		GL_BUFFER_STORAGE_FLAGS = 0x8220,
	};
	extern void (*glBufferStorage)(GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
	#endif // GL_ARB_buffer_storage
	
	#ifdef GL_ARB_cl_event
	extern bool ext_GL_ARB_cl_event;
	enum {
		GL_SYNC_CL_EVENT_ARB = 0x8240,
		GL_SYNC_CL_EVENT_COMPLETE_ARB = 0x8241,
	};
	extern GLsync (*glCreateSyncFromCLeventARB)(struct _cl_context *context, struct _cl_event *event, GLbitfield flags);
	#endif // GL_ARB_cl_event
	
	#ifdef GL_ARB_clear_buffer_object
	extern bool ext_GL_ARB_clear_buffer_object;
	extern void (*glClearBufferData)(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data);
	extern void (*glClearBufferSubData)(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
	#endif // GL_ARB_clear_buffer_object
	
	#ifdef GL_ARB_clear_texture
	extern bool ext_GL_ARB_clear_texture;
	enum {
		GL_CLEAR_TEXTURE = 0x9365,
	};
	extern void (*glClearTexImage)(GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
	extern void (*glClearTexSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
	#endif // GL_ARB_clear_texture
	
	#ifdef GL_ARB_clip_control
	extern bool ext_GL_ARB_clip_control;
	enum {
		GL_NEGATIVE_ONE_TO_ONE = 0x935E,
		GL_ZERO_TO_ONE = 0x935F,
		GL_CLIP_ORIGIN = 0x935C,
		GL_CLIP_DEPTH_MODE = 0x935D,
	};
	extern void (*glClipControl)(GLenum origin, GLenum depth);
	#endif // GL_ARB_clip_control
	
	#ifdef GL_ARB_color_buffer_float
	extern bool ext_GL_ARB_color_buffer_float;
	enum {
		GL_RGBA_FLOAT_MODE_ARB = 0x8820,
		GL_CLAMP_VERTEX_COLOR_ARB = 0x891A,
		GL_CLAMP_FRAGMENT_COLOR_ARB = 0x891B,
		GL_CLAMP_READ_COLOR_ARB = 0x891C,
		GL_FIXED_ONLY_ARB = 0x891D,
	};
	extern void (*glClampColorARB)(GLenum target, GLenum clamp);
	#endif // GL_ARB_color_buffer_float
	
	#ifdef GL_ARB_compressed_texture_pixel_storage
	extern bool ext_GL_ARB_compressed_texture_pixel_storage;
	enum {
		GL_UNPACK_COMPRESSED_BLOCK_WIDTH = 0x9127,
		GL_UNPACK_COMPRESSED_BLOCK_HEIGHT = 0x9128,
		GL_UNPACK_COMPRESSED_BLOCK_DEPTH = 0x9129,
		GL_UNPACK_COMPRESSED_BLOCK_SIZE = 0x912A,
		GL_PACK_COMPRESSED_BLOCK_WIDTH = 0x912B,
		GL_PACK_COMPRESSED_BLOCK_HEIGHT = 0x912C,
		GL_PACK_COMPRESSED_BLOCK_DEPTH = 0x912D,
		GL_PACK_COMPRESSED_BLOCK_SIZE = 0x912E,
	};
	#endif // GL_ARB_compressed_texture_pixel_storage
	
	#ifdef GL_ARB_compute_shader
	extern bool ext_GL_ARB_compute_shader;
	enum {
		GL_COMPUTE_SHADER_BIT = 0x00000020,
		GL_COMPUTE_SHADER = 0x91B9,
		GL_MAX_COMPUTE_UNIFORM_BLOCKS = 0x91BB,
		GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS = 0x91BC,
		GL_MAX_COMPUTE_IMAGE_UNIFORMS = 0x91BD,
		GL_MAX_COMPUTE_SHARED_MEMORY_SIZE = 0x8262,
		GL_MAX_COMPUTE_UNIFORM_COMPONENTS = 0x8263,
		GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS = 0x8264,
		GL_MAX_COMPUTE_ATOMIC_COUNTERS = 0x8265,
		GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS = 0x8266,
		GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS = 0x90EB,
		GL_MAX_COMPUTE_WORK_GROUP_COUNT = 0x91BE,
		GL_MAX_COMPUTE_WORK_GROUP_SIZE = 0x91BF,
		GL_COMPUTE_WORK_GROUP_SIZE = 0x8267,
		GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER = 0x90EC,
		GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER = 0x90ED,
		GL_DISPATCH_INDIRECT_BUFFER = 0x90EE,
		GL_DISPATCH_INDIRECT_BUFFER_BINDING = 0x90EF,
	};
	extern void (*glDispatchCompute)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
	extern void (*glDispatchComputeIndirect)(GLintptr indirect);
	#endif // GL_ARB_compute_shader
	
	#ifdef GL_ARB_compute_variable_group_size
	extern bool ext_GL_ARB_compute_variable_group_size;
	enum {
		GL_MAX_COMPUTE_VARIABLE_GROUP_INVOCATIONS_ARB = 0x9344,
		GL_MAX_COMPUTE_FIXED_GROUP_INVOCATIONS_ARB = 0x90EB,
		GL_MAX_COMPUTE_VARIABLE_GROUP_SIZE_ARB = 0x9345,
		GL_MAX_COMPUTE_FIXED_GROUP_SIZE_ARB = 0x91BF,
	};
	extern void (*glDispatchComputeGroupSizeARB)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);
	#endif // GL_ARB_compute_variable_group_size
	
	#ifdef GL_ARB_conditional_render_inverted
	extern bool ext_GL_ARB_conditional_render_inverted;
	enum {
		GL_QUERY_WAIT_INVERTED = 0x8E17,
		GL_QUERY_NO_WAIT_INVERTED = 0x8E18,
		GL_QUERY_BY_REGION_WAIT_INVERTED = 0x8E19,
		GL_QUERY_BY_REGION_NO_WAIT_INVERTED = 0x8E1A,
	};
	#endif // GL_ARB_conditional_render_inverted
	
	#ifdef GL_ARB_copy_image
	extern bool ext_GL_ARB_copy_image;
	extern void (*glCopyImageSubData)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
	#endif // GL_ARB_copy_image
	
	#ifdef GL_ARB_cull_distance
	extern bool ext_GL_ARB_cull_distance;
	enum {
		GL_MAX_CULL_DISTANCES = 0x82F9,
		GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES = 0x82FA,
	};
	#endif // GL_ARB_cull_distance
	
	#ifdef GL_ARB_debug_output
	extern bool ext_GL_ARB_debug_output;
	enum {
		GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB = 0x8242,
		GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB = 0x8243,
		GL_DEBUG_CALLBACK_FUNCTION_ARB = 0x8244,
		GL_DEBUG_CALLBACK_USER_PARAM_ARB = 0x8245,
		GL_DEBUG_SOURCE_API_ARB = 0x8246,
		GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB = 0x8247,
		GL_DEBUG_SOURCE_SHADER_COMPILER_ARB = 0x8248,
		GL_DEBUG_SOURCE_THIRD_PARTY_ARB = 0x8249,
		GL_DEBUG_SOURCE_APPLICATION_ARB = 0x824A,
		GL_DEBUG_SOURCE_OTHER_ARB = 0x824B,
		GL_DEBUG_TYPE_ERROR_ARB = 0x824C,
		GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB = 0x824D,
		GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB = 0x824E,
		GL_DEBUG_TYPE_PORTABILITY_ARB = 0x824F,
		GL_DEBUG_TYPE_PERFORMANCE_ARB = 0x8250,
		GL_DEBUG_TYPE_OTHER_ARB = 0x8251,
		GL_MAX_DEBUG_MESSAGE_LENGTH_ARB = 0x9143,
		GL_MAX_DEBUG_LOGGED_MESSAGES_ARB = 0x9144,
		GL_DEBUG_LOGGED_MESSAGES_ARB = 0x9145,
		GL_DEBUG_SEVERITY_HIGH_ARB = 0x9146,
		GL_DEBUG_SEVERITY_MEDIUM_ARB = 0x9147,
		GL_DEBUG_SEVERITY_LOW_ARB = 0x9148,
	};
	extern void (*glDebugMessageCallbackARB)(GLDEBUGPROCARB callback, const void *userParam);
	extern void (*glDebugMessageControlARB)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
	extern void (*glDebugMessageInsertARB)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
	extern GLuint (*glGetDebugMessageLogARB)(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
	#endif // GL_ARB_debug_output
	
	#ifdef GL_ARB_depth_texture
	extern bool ext_GL_ARB_depth_texture;
	enum {
		GL_DEPTH_COMPONENT16_ARB = 0x81A5,
		GL_DEPTH_COMPONENT24_ARB = 0x81A6,
		GL_DEPTH_COMPONENT32_ARB = 0x81A7,
		GL_TEXTURE_DEPTH_SIZE_ARB = 0x884A,
		GL_DEPTH_TEXTURE_MODE_ARB = 0x884B,
	};
	#endif // GL_ARB_depth_texture
	
	#ifdef GL_ARB_direct_state_access
	extern bool ext_GL_ARB_direct_state_access;
	enum {
		GL_TEXTURE_TARGET = 0x1006,
		GL_QUERY_TARGET = 0x82EA,
		GL_TEXTURE_BINDING_CUBE_MAP_ARRAY = 0x900A,
	};
	extern void (*glBindTextureUnit)(GLuint unit, GLuint texture);
	extern void (*glBlitNamedFramebuffer)(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
	extern GLenum (*glCheckNamedFramebufferStatus)(GLuint framebuffer, GLenum target);
	extern void (*glClearNamedBufferData)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
	extern void (*glClearNamedBufferSubData)(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
	extern void (*glClearNamedFramebufferfi)(GLuint framebuffer, GLenum buffer, const GLfloat depth, GLint stencil);
	extern void (*glClearNamedFramebufferfv)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value);
	extern void (*glClearNamedFramebufferiv)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value);
	extern void (*glClearNamedFramebufferuiv)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value);
	extern void (*glCompressedTextureSubImage1D)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
	extern void (*glCompressedTextureSubImage2D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
	extern void (*glCompressedTextureSubImage3D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
	extern void (*glCopyNamedBufferSubData)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
	extern void (*glCopyTextureSubImage1D)(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
	extern void (*glCopyTextureSubImage2D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glCopyTextureSubImage3D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glCreateBuffers)(GLsizei n, GLuint *buffers);
	extern void (*glCreateFramebuffers)(GLsizei n, GLuint *framebuffers);
	extern void (*glCreateProgramPipelines)(GLsizei n, GLuint *pipelines);
	extern void (*glCreateQueries)(GLenum target, GLsizei n, GLuint *ids);
	extern void (*glCreateRenderbuffers)(GLsizei n, GLuint *renderbuffers);
	extern void (*glCreateSamplers)(GLsizei n, GLuint *samplers);
	extern void (*glCreateTextures)(GLenum target, GLsizei n, GLuint *textures);
	extern void (*glCreateTransformFeedbacks)(GLsizei n, GLuint *ids);
	extern void (*glCreateVertexArrays)(GLsizei n, GLuint *arrays);
	extern void (*glDisableVertexArrayAttrib)(GLuint vaobj, GLuint index);
	extern void (*glEnableVertexArrayAttrib)(GLuint vaobj, GLuint index);
	extern void (*glFlushMappedNamedBufferRange)(GLuint buffer, GLintptr offset, GLsizeiptr length);
	extern void (*glGenerateTextureMipmap)(GLuint texture);
	extern void (*glGetCompressedTextureImage)(GLuint texture, GLint level, GLsizei bufSize, void *pixels);
	extern void (*glGetNamedBufferParameteri64v)(GLuint buffer, GLenum pname, GLint64 *params);
	extern void (*glGetNamedBufferParameteriv)(GLuint buffer, GLenum pname, GLint *params);
	extern void (*glGetNamedBufferPointerv)(GLuint buffer, GLenum pname, void **params);
	extern void (*glGetNamedBufferSubData)(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
	extern void (*glGetNamedFramebufferAttachmentParameteriv)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
	extern void (*glGetNamedFramebufferParameteriv)(GLuint framebuffer, GLenum pname, GLint *param);
	extern void (*glGetNamedRenderbufferParameteriv)(GLuint renderbuffer, GLenum pname, GLint *params);
	extern void (*glGetQueryBufferObjecti64v)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
	extern void (*glGetQueryBufferObjectiv)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
	extern void (*glGetQueryBufferObjectui64v)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
	extern void (*glGetQueryBufferObjectuiv)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
	extern void (*glGetTextureImage)(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
	extern void (*glGetTextureLevelParameterfv)(GLuint texture, GLint level, GLenum pname, GLfloat *params);
	extern void (*glGetTextureLevelParameteriv)(GLuint texture, GLint level, GLenum pname, GLint *params);
	extern void (*glGetTextureParameterIiv)(GLuint texture, GLenum pname, GLint *params);
	extern void (*glGetTextureParameterIuiv)(GLuint texture, GLenum pname, GLuint *params);
	extern void (*glGetTextureParameterfv)(GLuint texture, GLenum pname, GLfloat *params);
	extern void (*glGetTextureParameteriv)(GLuint texture, GLenum pname, GLint *params);
	extern void (*glGetTransformFeedbacki64_v)(GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
	extern void (*glGetTransformFeedbacki_v)(GLuint xfb, GLenum pname, GLuint index, GLint *param);
	extern void (*glGetTransformFeedbackiv)(GLuint xfb, GLenum pname, GLint *param);
	extern void (*glGetVertexArrayIndexed64iv)(GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
	extern void (*glGetVertexArrayIndexediv)(GLuint vaobj, GLuint index, GLenum pname, GLint *param);
	extern void (*glGetVertexArrayiv)(GLuint vaobj, GLenum pname, GLint *param);
	extern void (*glInvalidateNamedFramebufferData)(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments);
	extern void (*glInvalidateNamedFramebufferSubData)(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
	extern void *(*glMapNamedBuffer)(GLuint buffer, GLenum access);
	extern void *(*glMapNamedBufferRange)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
	extern void (*glNamedBufferData)(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
	extern void (*glNamedBufferStorage)(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
	extern void (*glNamedBufferSubData)(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
	extern void (*glNamedFramebufferDrawBuffer)(GLuint framebuffer, GLenum buf);
	extern void (*glNamedFramebufferDrawBuffers)(GLuint framebuffer, GLsizei n, const GLenum *bufs);
	extern void (*glNamedFramebufferParameteri)(GLuint framebuffer, GLenum pname, GLint param);
	extern void (*glNamedFramebufferReadBuffer)(GLuint framebuffer, GLenum src);
	extern void (*glNamedFramebufferRenderbuffer)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
	extern void (*glNamedFramebufferTexture)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
	extern void (*glNamedFramebufferTextureLayer)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
	extern void (*glNamedRenderbufferStorage)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
	extern void (*glNamedRenderbufferStorageMultisample)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
	extern void (*glTextureBuffer)(GLuint texture, GLenum internalformat, GLuint buffer);
	extern void (*glTextureBufferRange)(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
	extern void (*glTextureParameterIiv)(GLuint texture, GLenum pname, const GLint *params);
	extern void (*glTextureParameterIuiv)(GLuint texture, GLenum pname, const GLuint *params);
	extern void (*glTextureParameterf)(GLuint texture, GLenum pname, GLfloat param);
	extern void (*glTextureParameterfv)(GLuint texture, GLenum pname, const GLfloat *param);
	extern void (*glTextureParameteri)(GLuint texture, GLenum pname, GLint param);
	extern void (*glTextureParameteriv)(GLuint texture, GLenum pname, const GLint *param);
	extern void (*glTextureStorage1D)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
	extern void (*glTextureStorage2D)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
	extern void (*glTextureStorage2DMultisample)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
	extern void (*glTextureStorage3D)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
	extern void (*glTextureStorage3DMultisample)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
	extern void (*glTextureSubImage1D)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
	extern void (*glTextureSubImage2D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
	extern void (*glTextureSubImage3D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
	extern void (*glTransformFeedbackBufferBase)(GLuint xfb, GLuint index, GLuint buffer);
	extern void (*glTransformFeedbackBufferRange)(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
	extern GLboolean (*glUnmapNamedBuffer)(GLuint buffer);
	extern void (*glVertexArrayAttribBinding)(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
	extern void (*glVertexArrayAttribFormat)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
	extern void (*glVertexArrayAttribIFormat)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
	extern void (*glVertexArrayAttribLFormat)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
	extern void (*glVertexArrayBindingDivisor)(GLuint vaobj, GLuint bindingindex, GLuint divisor);
	extern void (*glVertexArrayElementBuffer)(GLuint vaobj, GLuint buffer);
	extern void (*glVertexArrayVertexBuffer)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
	extern void (*glVertexArrayVertexBuffers)(GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
	#endif // GL_ARB_direct_state_access
	
	#ifdef GL_ARB_draw_buffers
	extern bool ext_GL_ARB_draw_buffers;
	enum {
		GL_MAX_DRAW_BUFFERS_ARB = 0x8824,
		GL_DRAW_BUFFER0_ARB = 0x8825,
		GL_DRAW_BUFFER1_ARB = 0x8826,
		GL_DRAW_BUFFER2_ARB = 0x8827,
		GL_DRAW_BUFFER3_ARB = 0x8828,
		GL_DRAW_BUFFER4_ARB = 0x8829,
		GL_DRAW_BUFFER5_ARB = 0x882A,
		GL_DRAW_BUFFER6_ARB = 0x882B,
		GL_DRAW_BUFFER7_ARB = 0x882C,
		GL_DRAW_BUFFER8_ARB = 0x882D,
		GL_DRAW_BUFFER9_ARB = 0x882E,
		GL_DRAW_BUFFER10_ARB = 0x882F,
		GL_DRAW_BUFFER11_ARB = 0x8830,
		GL_DRAW_BUFFER12_ARB = 0x8831,
		GL_DRAW_BUFFER13_ARB = 0x8832,
		GL_DRAW_BUFFER14_ARB = 0x8833,
		GL_DRAW_BUFFER15_ARB = 0x8834,
	};
	extern void (*glDrawBuffersARB)(GLsizei n, const GLenum *bufs);
	#endif // GL_ARB_draw_buffers
	
	#ifdef GL_ARB_draw_buffers_blend
	extern bool ext_GL_ARB_draw_buffers_blend;
	extern void (*glBlendEquationSeparateiARB)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
	extern void (*glBlendEquationiARB)(GLuint buf, GLenum mode);
	extern void (*glBlendFuncSeparateiARB)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
	extern void (*glBlendFunciARB)(GLuint buf, GLenum src, GLenum dst);
	#endif // GL_ARB_draw_buffers_blend
	
	#ifdef GL_ARB_draw_indirect
	extern bool ext_GL_ARB_draw_indirect;
	enum {
		GL_DRAW_INDIRECT_BUFFER = 0x8F3F,
		GL_DRAW_INDIRECT_BUFFER_BINDING = 0x8F43,
	};
	extern void (*glDrawArraysIndirect)(GLenum mode, const void *indirect);
	extern void (*glDrawElementsIndirect)(GLenum mode, GLenum type, const void *indirect);
	#endif // GL_ARB_draw_indirect
	
	#ifdef GL_ARB_draw_instanced
	extern bool ext_GL_ARB_draw_instanced;
	extern void (*glDrawArraysInstancedARB)(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
	extern void (*glDrawElementsInstancedARB)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
	#endif // GL_ARB_draw_instanced
	
	#ifdef GL_ARB_enhanced_layouts
	extern bool ext_GL_ARB_enhanced_layouts;
	enum {
		GL_LOCATION_COMPONENT = 0x934A,
		GL_TRANSFORM_FEEDBACK_BUFFER_INDEX = 0x934B,
		GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE = 0x934C,
	};
	#endif // GL_ARB_enhanced_layouts
	
	#ifdef GL_ARB_explicit_uniform_location
	extern bool ext_GL_ARB_explicit_uniform_location;
	enum {
		GL_MAX_UNIFORM_LOCATIONS = 0x826E,
	};
	#endif // GL_ARB_explicit_uniform_location
	
	#ifdef GL_ARB_fragment_program
	extern bool ext_GL_ARB_fragment_program;
	enum {
		GL_FRAGMENT_PROGRAM_ARB = 0x8804,
		GL_PROGRAM_FORMAT_ASCII_ARB = 0x8875,
		GL_PROGRAM_LENGTH_ARB = 0x8627,
		GL_PROGRAM_FORMAT_ARB = 0x8876,
		GL_PROGRAM_BINDING_ARB = 0x8677,
		GL_PROGRAM_INSTRUCTIONS_ARB = 0x88A0,
		GL_MAX_PROGRAM_INSTRUCTIONS_ARB = 0x88A1,
		GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB = 0x88A2,
		GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB = 0x88A3,
		GL_PROGRAM_TEMPORARIES_ARB = 0x88A4,
		GL_MAX_PROGRAM_TEMPORARIES_ARB = 0x88A5,
		GL_PROGRAM_NATIVE_TEMPORARIES_ARB = 0x88A6,
		GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB = 0x88A7,
		GL_PROGRAM_PARAMETERS_ARB = 0x88A8,
		GL_MAX_PROGRAM_PARAMETERS_ARB = 0x88A9,
		GL_PROGRAM_NATIVE_PARAMETERS_ARB = 0x88AA,
		GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB = 0x88AB,
		GL_PROGRAM_ATTRIBS_ARB = 0x88AC,
		GL_MAX_PROGRAM_ATTRIBS_ARB = 0x88AD,
		GL_PROGRAM_NATIVE_ATTRIBS_ARB = 0x88AE,
		GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB = 0x88AF,
		GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB = 0x88B4,
		GL_MAX_PROGRAM_ENV_PARAMETERS_ARB = 0x88B5,
		GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB = 0x88B6,
		GL_PROGRAM_ALU_INSTRUCTIONS_ARB = 0x8805,
		GL_PROGRAM_TEX_INSTRUCTIONS_ARB = 0x8806,
		GL_PROGRAM_TEX_INDIRECTIONS_ARB = 0x8807,
		GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB = 0x8808,
		GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB = 0x8809,
		GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB = 0x880A,
		GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB = 0x880B,
		GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB = 0x880C,
		GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB = 0x880D,
		GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB = 0x880E,
		GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB = 0x880F,
		GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB = 0x8810,
		GL_PROGRAM_STRING_ARB = 0x8628,
		GL_PROGRAM_ERROR_POSITION_ARB = 0x864B,
		GL_CURRENT_MATRIX_ARB = 0x8641,
		GL_TRANSPOSE_CURRENT_MATRIX_ARB = 0x88B7,
		GL_CURRENT_MATRIX_STACK_DEPTH_ARB = 0x8640,
		GL_MAX_PROGRAM_MATRICES_ARB = 0x862F,
		GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB = 0x862E,
		GL_MAX_TEXTURE_COORDS_ARB = 0x8871,
		GL_MAX_TEXTURE_IMAGE_UNITS_ARB = 0x8872,
		GL_PROGRAM_ERROR_STRING_ARB = 0x8874,
		GL_MATRIX0_ARB = 0x88C0,
		GL_MATRIX1_ARB = 0x88C1,
		GL_MATRIX2_ARB = 0x88C2,
		GL_MATRIX3_ARB = 0x88C3,
		GL_MATRIX4_ARB = 0x88C4,
		GL_MATRIX5_ARB = 0x88C5,
		GL_MATRIX6_ARB = 0x88C6,
		GL_MATRIX7_ARB = 0x88C7,
		GL_MATRIX8_ARB = 0x88C8,
		GL_MATRIX9_ARB = 0x88C9,
		GL_MATRIX10_ARB = 0x88CA,
		GL_MATRIX11_ARB = 0x88CB,
		GL_MATRIX12_ARB = 0x88CC,
		GL_MATRIX13_ARB = 0x88CD,
		GL_MATRIX14_ARB = 0x88CE,
		GL_MATRIX15_ARB = 0x88CF,
		GL_MATRIX16_ARB = 0x88D0,
		GL_MATRIX17_ARB = 0x88D1,
		GL_MATRIX18_ARB = 0x88D2,
		GL_MATRIX19_ARB = 0x88D3,
		GL_MATRIX20_ARB = 0x88D4,
		GL_MATRIX21_ARB = 0x88D5,
		GL_MATRIX22_ARB = 0x88D6,
		GL_MATRIX23_ARB = 0x88D7,
		GL_MATRIX24_ARB = 0x88D8,
		GL_MATRIX25_ARB = 0x88D9,
		GL_MATRIX26_ARB = 0x88DA,
		GL_MATRIX27_ARB = 0x88DB,
		GL_MATRIX28_ARB = 0x88DC,
		GL_MATRIX29_ARB = 0x88DD,
		GL_MATRIX30_ARB = 0x88DE,
		GL_MATRIX31_ARB = 0x88DF,
	};
	extern void (*glBindProgramARB)(GLenum target, GLuint program);
	extern void (*glDeleteProgramsARB)(GLsizei n, const GLuint *programs);
	extern void (*glGenProgramsARB)(GLsizei n, GLuint *programs);
	extern void (*glGetProgramEnvParameterdvARB)(GLenum target, GLuint index, GLdouble *params);
	extern void (*glGetProgramEnvParameterfvARB)(GLenum target, GLuint index, GLfloat *params);
	extern void (*glGetProgramLocalParameterdvARB)(GLenum target, GLuint index, GLdouble *params);
	extern void (*glGetProgramLocalParameterfvARB)(GLenum target, GLuint index, GLfloat *params);
	extern void (*glGetProgramStringARB)(GLenum target, GLenum pname, void *string);
	extern void (*glGetProgramivARB)(GLenum target, GLenum pname, GLint *params);
	extern GLboolean (*glIsProgramARB)(GLuint program);
	extern void (*glProgramEnvParameter4dARB)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glProgramEnvParameter4dvARB)(GLenum target, GLuint index, const GLdouble *params);
	extern void (*glProgramEnvParameter4fARB)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glProgramEnvParameter4fvARB)(GLenum target, GLuint index, const GLfloat *params);
	extern void (*glProgramLocalParameter4dARB)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glProgramLocalParameter4dvARB)(GLenum target, GLuint index, const GLdouble *params);
	extern void (*glProgramLocalParameter4fARB)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glProgramLocalParameter4fvARB)(GLenum target, GLuint index, const GLfloat *params);
	extern void (*glProgramStringARB)(GLenum target, GLenum format, GLsizei len, const void *string);
	#endif // GL_ARB_fragment_program
	
	#ifdef GL_ARB_fragment_shader
	extern bool ext_GL_ARB_fragment_shader;
	enum {
		GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB = 0x8B8B,
		GL_FRAGMENT_SHADER_ARB = 0x8B30,
		GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB = 0x8B49,
	};
	#endif // GL_ARB_fragment_shader
	
	#ifdef GL_ARB_framebuffer_no_attachments
	extern bool ext_GL_ARB_framebuffer_no_attachments;
	enum {
		GL_FRAMEBUFFER_DEFAULT_WIDTH = 0x9310,
		GL_FRAMEBUFFER_DEFAULT_HEIGHT = 0x9311,
		GL_FRAMEBUFFER_DEFAULT_LAYERS = 0x9312,
		GL_FRAMEBUFFER_DEFAULT_SAMPLES = 0x9313,
		GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = 0x9314,
		GL_MAX_FRAMEBUFFER_WIDTH = 0x9315,
		GL_MAX_FRAMEBUFFER_HEIGHT = 0x9316,
		GL_MAX_FRAMEBUFFER_LAYERS = 0x9317,
		GL_MAX_FRAMEBUFFER_SAMPLES = 0x9318,
	};
	extern void (*glFramebufferParameteri)(GLenum target, GLenum pname, GLint param);
	extern void (*glGetFramebufferParameteriv)(GLenum target, GLenum pname, GLint *params);
	#endif // GL_ARB_framebuffer_no_attachments
	
	#ifdef GL_ARB_framebuffer_object
	extern bool ext_GL_ARB_framebuffer_object;
	enum {
		GL_INDEX = 0x8222,
	};
	#endif // GL_ARB_framebuffer_object
	
	#ifdef GL_ARB_geometry_shader4
	extern bool ext_GL_ARB_geometry_shader4;
	enum {
		GL_LINES_ADJACENCY_ARB = 0x000A,
		GL_LINE_STRIP_ADJACENCY_ARB = 0x000B,
		GL_TRIANGLES_ADJACENCY_ARB = 0x000C,
		GL_TRIANGLE_STRIP_ADJACENCY_ARB = 0x000D,
		GL_PROGRAM_POINT_SIZE_ARB = 0x8642,
		GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_ARB = 0x8C29,
		GL_FRAMEBUFFER_ATTACHMENT_LAYERED_ARB = 0x8DA7,
		GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_ARB = 0x8DA8,
		GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_ARB = 0x8DA9,
		GL_GEOMETRY_SHADER_ARB = 0x8DD9,
		GL_GEOMETRY_VERTICES_OUT_ARB = 0x8DDA,
		GL_GEOMETRY_INPUT_TYPE_ARB = 0x8DDB,
		GL_GEOMETRY_OUTPUT_TYPE_ARB = 0x8DDC,
		GL_MAX_GEOMETRY_VARYING_COMPONENTS_ARB = 0x8DDD,
		GL_MAX_VERTEX_VARYING_COMPONENTS_ARB = 0x8DDE,
		GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_ARB = 0x8DDF,
		GL_MAX_GEOMETRY_OUTPUT_VERTICES_ARB = 0x8DE0,
		GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_ARB = 0x8DE1,
	};
	extern void (*glFramebufferTextureARB)(GLenum target, GLenum attachment, GLuint texture, GLint level);
	extern void (*glFramebufferTextureFaceARB)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
	extern void (*glFramebufferTextureLayerARB)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
	extern void (*glProgramParameteriARB)(GLuint program, GLenum pname, GLint value);
	#endif // GL_ARB_geometry_shader4
	
	#ifdef GL_ARB_get_program_binary
	extern bool ext_GL_ARB_get_program_binary;
	enum {
		GL_PROGRAM_BINARY_RETRIEVABLE_HINT = 0x8257,
		GL_PROGRAM_BINARY_LENGTH = 0x8741,
		GL_NUM_PROGRAM_BINARY_FORMATS = 0x87FE,
		GL_PROGRAM_BINARY_FORMATS = 0x87FF,
	};
	extern void (*glGetProgramBinary)(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
	extern void (*glProgramBinary)(GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
	extern void (*glProgramParameteri)(GLuint program, GLenum pname, GLint value);
	#endif // GL_ARB_get_program_binary
	
	#ifdef GL_ARB_get_texture_sub_image
	extern bool ext_GL_ARB_get_texture_sub_image;
	extern void (*glGetCompressedTextureSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels);
	extern void (*glGetTextureSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
	#endif // GL_ARB_get_texture_sub_image
	
	#ifdef GL_ARB_gpu_shader5
	extern bool ext_GL_ARB_gpu_shader5;
	enum {
		GL_GEOMETRY_SHADER_INVOCATIONS = 0x887F,
		GL_MAX_GEOMETRY_SHADER_INVOCATIONS = 0x8E5A,
		GL_MIN_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5B,
		GL_MAX_FRAGMENT_INTERPOLATION_OFFSET = 0x8E5C,
		GL_FRAGMENT_INTERPOLATION_OFFSET_BITS = 0x8E5D,
		GL_MAX_VERTEX_STREAMS = 0x8E71,
	};
	#endif // GL_ARB_gpu_shader5
	
	#ifdef GL_ARB_gpu_shader_fp64
	extern bool ext_GL_ARB_gpu_shader_fp64;
	enum {
		GL_DOUBLE_VEC2 = 0x8FFC,
		GL_DOUBLE_VEC3 = 0x8FFD,
		GL_DOUBLE_VEC4 = 0x8FFE,
		GL_DOUBLE_MAT2 = 0x8F46,
		GL_DOUBLE_MAT3 = 0x8F47,
		GL_DOUBLE_MAT4 = 0x8F48,
		GL_DOUBLE_MAT2x3 = 0x8F49,
		GL_DOUBLE_MAT2x4 = 0x8F4A,
		GL_DOUBLE_MAT3x2 = 0x8F4B,
		GL_DOUBLE_MAT3x4 = 0x8F4C,
		GL_DOUBLE_MAT4x2 = 0x8F4D,
		GL_DOUBLE_MAT4x3 = 0x8F4E,
	};
	extern void (*glGetUniformdv)(GLuint program, GLint location, GLdouble *params);
	extern void (*glUniform1d)(GLint location, GLdouble x);
	extern void (*glUniform1dv)(GLint location, GLsizei count, const GLdouble *value);
	extern void (*glUniform2d)(GLint location, GLdouble x, GLdouble y);
	extern void (*glUniform2dv)(GLint location, GLsizei count, const GLdouble *value);
	extern void (*glUniform3d)(GLint location, GLdouble x, GLdouble y, GLdouble z);
	extern void (*glUniform3dv)(GLint location, GLsizei count, const GLdouble *value);
	extern void (*glUniform4d)(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glUniform4dv)(GLint location, GLsizei count, const GLdouble *value);
	extern void (*glUniformMatrix2dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glUniformMatrix2x3dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glUniformMatrix2x4dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glUniformMatrix3dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glUniformMatrix3x2dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glUniformMatrix3x4dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glUniformMatrix4dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glUniformMatrix4x2dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glUniformMatrix4x3dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	#endif // GL_ARB_gpu_shader_fp64
	
	#ifdef GL_ARB_gpu_shader_int64
	extern bool ext_GL_ARB_gpu_shader_int64;
	enum {
		GL_INT64_ARB = 0x140E,
		#if !defined(GL_ARB_bindless_texture)
		GL_UNSIGNED_INT64_ARB = 0x140F,
		#endif
		GL_INT64_VEC2_ARB = 0x8FE9,
		GL_INT64_VEC3_ARB = 0x8FEA,
		GL_INT64_VEC4_ARB = 0x8FEB,
		GL_UNSIGNED_INT64_VEC2_ARB = 0x8FF5,
		GL_UNSIGNED_INT64_VEC3_ARB = 0x8FF6,
		GL_UNSIGNED_INT64_VEC4_ARB = 0x8FF7,
	};
	extern void (*glGetUniformi64vARB)(GLuint program, GLint location, GLint64 *params);
	extern void (*glGetUniformui64vARB)(GLuint program, GLint location, GLuint64 *params);
	extern void (*glGetnUniformi64vARB)(GLuint program, GLint location, GLsizei bufSize, GLint64 *params);
	extern void (*glGetnUniformui64vARB)(GLuint program, GLint location, GLsizei bufSize, GLuint64 *params);
	extern void (*glProgramUniform1i64ARB)(GLuint program, GLint location, GLint64 x);
	extern void (*glProgramUniform1i64vARB)(GLuint program, GLint location, GLsizei count, const GLint64 *value);
	extern void (*glProgramUniform1ui64ARB)(GLuint program, GLint location, GLuint64 x);
	extern void (*glProgramUniform1ui64vARB)(GLuint program, GLint location, GLsizei count, const GLuint64 *value);
	extern void (*glProgramUniform2i64ARB)(GLuint program, GLint location, GLint64 x, GLint64 y);
	extern void (*glProgramUniform2i64vARB)(GLuint program, GLint location, GLsizei count, const GLint64 *value);
	extern void (*glProgramUniform2ui64ARB)(GLuint program, GLint location, GLuint64 x, GLuint64 y);
	extern void (*glProgramUniform2ui64vARB)(GLuint program, GLint location, GLsizei count, const GLuint64 *value);
	extern void (*glProgramUniform3i64ARB)(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z);
	extern void (*glProgramUniform3i64vARB)(GLuint program, GLint location, GLsizei count, const GLint64 *value);
	extern void (*glProgramUniform3ui64ARB)(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
	extern void (*glProgramUniform3ui64vARB)(GLuint program, GLint location, GLsizei count, const GLuint64 *value);
	extern void (*glProgramUniform4i64ARB)(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
	extern void (*glProgramUniform4i64vARB)(GLuint program, GLint location, GLsizei count, const GLint64 *value);
	extern void (*glProgramUniform4ui64ARB)(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
	extern void (*glProgramUniform4ui64vARB)(GLuint program, GLint location, GLsizei count, const GLuint64 *value);
	extern void (*glUniform1i64ARB)(GLint location, GLint64 x);
	extern void (*glUniform1i64vARB)(GLint location, GLsizei count, const GLint64 *value);
	extern void (*glUniform1ui64ARB)(GLint location, GLuint64 x);
	extern void (*glUniform1ui64vARB)(GLint location, GLsizei count, const GLuint64 *value);
	extern void (*glUniform2i64ARB)(GLint location, GLint64 x, GLint64 y);
	extern void (*glUniform2i64vARB)(GLint location, GLsizei count, const GLint64 *value);
	extern void (*glUniform2ui64ARB)(GLint location, GLuint64 x, GLuint64 y);
	extern void (*glUniform2ui64vARB)(GLint location, GLsizei count, const GLuint64 *value);
	extern void (*glUniform3i64ARB)(GLint location, GLint64 x, GLint64 y, GLint64 z);
	extern void (*glUniform3i64vARB)(GLint location, GLsizei count, const GLint64 *value);
	extern void (*glUniform3ui64ARB)(GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
	extern void (*glUniform3ui64vARB)(GLint location, GLsizei count, const GLuint64 *value);
	extern void (*glUniform4i64ARB)(GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
	extern void (*glUniform4i64vARB)(GLint location, GLsizei count, const GLint64 *value);
	extern void (*glUniform4ui64ARB)(GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
	extern void (*glUniform4ui64vARB)(GLint location, GLsizei count, const GLuint64 *value);
	#endif // GL_ARB_gpu_shader_int64
	
	#ifdef GL_ARB_half_float_pixel
	extern bool ext_GL_ARB_half_float_pixel;
	enum {
		GL_HALF_FLOAT_ARB = 0x140B,
	};
	#endif // GL_ARB_half_float_pixel
	
	#ifdef GL_ARB_imaging
	extern bool ext_GL_ARB_imaging;
	enum {
		GL_COLOR_TABLE_BIAS = 0x80D7,
		GL_COLOR_TABLE_SCALE = 0x80D6,
		GL_COLOR_TABLE = 0x80D0,
		GL_POST_COLOR_MATRIX_COLOR_TABLE = 0x80D2,
		GL_POST_CONVOLUTION_COLOR_TABLE = 0x80D1,
		GL_PROXY_COLOR_TABLE = 0x80D3,
		GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE = 0x80D5,
		GL_PROXY_POST_CONVOLUTION_COLOR_TABLE = 0x80D4,
		GL_REDUCE = 0x8016,
		GL_CONVOLUTION_BORDER_MODE = 0x8013,
		GL_CONVOLUTION_FILTER_BIAS = 0x8015,
		GL_CONVOLUTION_FILTER_SCALE = 0x8014,
		GL_CONVOLUTION_1D = 0x8010,
		GL_CONVOLUTION_2D = 0x8011,
		GL_TABLE_TOO_LARGE = 0x8031,
		GL_MINMAX_FORMAT = 0x802F,
		GL_MINMAX_SINK = 0x8030,
		GL_HISTOGRAM = 0x8024,
		GL_PROXY_HISTOGRAM = 0x8025,
		GL_MINMAX = 0x802E,
		GL_POST_COLOR_MATRIX_ALPHA_BIAS = 0x80BB,
		GL_POST_COLOR_MATRIX_ALPHA_SCALE = 0x80B7,
		GL_POST_COLOR_MATRIX_BLUE_BIAS = 0x80BA,
		GL_POST_COLOR_MATRIX_BLUE_SCALE = 0x80B6,
		GL_POST_COLOR_MATRIX_GREEN_BIAS = 0x80B9,
		GL_POST_COLOR_MATRIX_GREEN_SCALE = 0x80B5,
		GL_POST_COLOR_MATRIX_RED_BIAS = 0x80B8,
		GL_POST_COLOR_MATRIX_RED_SCALE = 0x80B4,
		GL_POST_CONVOLUTION_ALPHA_BIAS = 0x8023,
		GL_POST_CONVOLUTION_ALPHA_SCALE = 0x801F,
		GL_POST_CONVOLUTION_BLUE_BIAS = 0x8022,
		GL_POST_CONVOLUTION_BLUE_SCALE = 0x801E,
		GL_POST_CONVOLUTION_GREEN_BIAS = 0x8021,
		GL_POST_CONVOLUTION_GREEN_SCALE = 0x801D,
		GL_POST_CONVOLUTION_RED_BIAS = 0x8020,
		GL_POST_CONVOLUTION_RED_SCALE = 0x801C,
		GL_SEPARABLE_2D = 0x8012,
		GL_BLEND_COLOR = 0x8005,
		GL_BLEND_EQUATION = 0x8009,
		GL_CONVOLUTION_FORMAT = 0x8017,
		GL_CONVOLUTION_WIDTH = 0x8018,
		GL_CONVOLUTION_HEIGHT = 0x8019,
		GL_MAX_CONVOLUTION_WIDTH = 0x801A,
		GL_MAX_CONVOLUTION_HEIGHT = 0x801B,
		GL_HISTOGRAM_WIDTH = 0x8026,
		GL_HISTOGRAM_FORMAT = 0x8027,
		GL_HISTOGRAM_RED_SIZE = 0x8028,
		GL_HISTOGRAM_GREEN_SIZE = 0x8029,
		GL_HISTOGRAM_BLUE_SIZE = 0x802A,
		GL_HISTOGRAM_ALPHA_SIZE = 0x802B,
		GL_HISTOGRAM_LUMINANCE_SIZE = 0x802C,
		GL_HISTOGRAM_SINK = 0x802D,
		GL_COLOR_MATRIX = 0x80B1,
		GL_COLOR_MATRIX_STACK_DEPTH = 0x80B2,
		GL_MAX_COLOR_MATRIX_STACK_DEPTH = 0x80B3,
		GL_COLOR_TABLE_FORMAT = 0x80D8,
		GL_COLOR_TABLE_WIDTH = 0x80D9,
		GL_COLOR_TABLE_RED_SIZE = 0x80DA,
		GL_COLOR_TABLE_GREEN_SIZE = 0x80DB,
		GL_COLOR_TABLE_BLUE_SIZE = 0x80DC,
		GL_COLOR_TABLE_ALPHA_SIZE = 0x80DD,
		GL_COLOR_TABLE_LUMINANCE_SIZE = 0x80DE,
		GL_COLOR_TABLE_INTENSITY_SIZE = 0x80DF,
		GL_CONSTANT_BORDER = 0x8151,
		GL_REPLICATE_BORDER = 0x8153,
		GL_CONVOLUTION_BORDER_COLOR = 0x8154,
	};
	extern void (*glColorSubTable)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void *data);
	extern void (*glColorTable)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *table);
	extern void (*glColorTableParameterfv)(GLenum target, GLenum pname, const GLfloat *params);
	extern void (*glColorTableParameteriv)(GLenum target, GLenum pname, const GLint *params);
	extern void (*glConvolutionFilter1D)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *image);
	extern void (*glConvolutionFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *image);
	extern void (*glConvolutionParameterf)(GLenum target, GLenum pname, GLfloat params);
	extern void (*glConvolutionParameterfv)(GLenum target, GLenum pname, const GLfloat *params);
	extern void (*glConvolutionParameteri)(GLenum target, GLenum pname, GLint params);
	extern void (*glConvolutionParameteriv)(GLenum target, GLenum pname, const GLint *params);
	extern void (*glCopyColorSubTable)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
	extern void (*glCopyColorTable)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
	extern void (*glCopyConvolutionFilter1D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
	extern void (*glCopyConvolutionFilter2D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glGetColorTable)(GLenum target, GLenum format, GLenum type, void *table);
	extern void (*glGetColorTableParameterfv)(GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetColorTableParameteriv)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetConvolutionFilter)(GLenum target, GLenum format, GLenum type, void *image);
	extern void (*glGetConvolutionParameterfv)(GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetConvolutionParameteriv)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetHistogram)(GLenum target, GLboolean reset, GLenum format, GLenum type, void *values);
	extern void (*glGetHistogramParameterfv)(GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetHistogramParameteriv)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetMinmax)(GLenum target, GLboolean reset, GLenum format, GLenum type, void *values);
	extern void (*glGetMinmaxParameterfv)(GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetMinmaxParameteriv)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetSeparableFilter)(GLenum target, GLenum format, GLenum type, void *row, void *column, void *span);
	extern void (*glHistogram)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
	extern void (*glMinmax)(GLenum target, GLenum internalformat, GLboolean sink);
	extern void (*glResetHistogram)(GLenum target);
	extern void (*glResetMinmax)(GLenum target);
	extern void (*glSeparableFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *row, const void *column);
	#endif // GL_ARB_imaging
	
	#ifdef GL_ARB_indirect_parameters
	extern bool ext_GL_ARB_indirect_parameters;
	enum {
		GL_PARAMETER_BUFFER_ARB = 0x80EE,
		GL_PARAMETER_BUFFER_BINDING_ARB = 0x80EF,
	};
	extern void (*glMultiDrawArraysIndirectCountARB)(GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
	extern void (*glMultiDrawElementsIndirectCountARB)(GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
	#endif // GL_ARB_indirect_parameters
	
	#ifdef GL_ARB_instanced_arrays
	extern bool ext_GL_ARB_instanced_arrays;
	enum {
		GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ARB = 0x88FE,
	};
	extern void (*glVertexAttribDivisorARB)(GLuint index, GLuint divisor);
	#endif // GL_ARB_instanced_arrays
	
	#ifdef GL_ARB_internalformat_query
	extern bool ext_GL_ARB_internalformat_query;
	enum {
		GL_NUM_SAMPLE_COUNTS = 0x9380,
	};
	extern void (*glGetInternalformativ)(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params);
	#endif // GL_ARB_internalformat_query
	
	#ifdef GL_ARB_internalformat_query2
	extern bool ext_GL_ARB_internalformat_query2;
	enum {
		GL_IMAGE_FORMAT_COMPATIBILITY_TYPE = 0x90C7,
		#if !defined(GL_ARB_internalformat_query)
		GL_NUM_SAMPLE_COUNTS = 0x9380,
		#endif
		GL_TEXTURE_CUBE_MAP_ARRAY = 0x9009,
		GL_INTERNALFORMAT_SUPPORTED = 0x826F,
		GL_INTERNALFORMAT_PREFERRED = 0x8270,
		GL_INTERNALFORMAT_RED_SIZE = 0x8271,
		GL_INTERNALFORMAT_GREEN_SIZE = 0x8272,
		GL_INTERNALFORMAT_BLUE_SIZE = 0x8273,
		GL_INTERNALFORMAT_ALPHA_SIZE = 0x8274,
		GL_INTERNALFORMAT_DEPTH_SIZE = 0x8275,
		GL_INTERNALFORMAT_STENCIL_SIZE = 0x8276,
		GL_INTERNALFORMAT_SHARED_SIZE = 0x8277,
		GL_INTERNALFORMAT_RED_TYPE = 0x8278,
		GL_INTERNALFORMAT_GREEN_TYPE = 0x8279,
		GL_INTERNALFORMAT_BLUE_TYPE = 0x827A,
		GL_INTERNALFORMAT_ALPHA_TYPE = 0x827B,
		GL_INTERNALFORMAT_DEPTH_TYPE = 0x827C,
		GL_INTERNALFORMAT_STENCIL_TYPE = 0x827D,
		GL_MAX_WIDTH = 0x827E,
		GL_MAX_HEIGHT = 0x827F,
		GL_MAX_DEPTH = 0x8280,
		GL_MAX_LAYERS = 0x8281,
		GL_MAX_COMBINED_DIMENSIONS = 0x8282,
		GL_COLOR_COMPONENTS = 0x8283,
		GL_DEPTH_COMPONENTS = 0x8284,
		GL_STENCIL_COMPONENTS = 0x8285,
		GL_COLOR_RENDERABLE = 0x8286,
		GL_DEPTH_RENDERABLE = 0x8287,
		GL_STENCIL_RENDERABLE = 0x8288,
		GL_FRAMEBUFFER_RENDERABLE = 0x8289,
		GL_FRAMEBUFFER_RENDERABLE_LAYERED = 0x828A,
		GL_FRAMEBUFFER_BLEND = 0x828B,
		GL_READ_PIXELS = 0x828C,
		GL_READ_PIXELS_FORMAT = 0x828D,
		GL_READ_PIXELS_TYPE = 0x828E,
		GL_TEXTURE_IMAGE_FORMAT = 0x828F,
		GL_TEXTURE_IMAGE_TYPE = 0x8290,
		GL_GET_TEXTURE_IMAGE_FORMAT = 0x8291,
		GL_GET_TEXTURE_IMAGE_TYPE = 0x8292,
		GL_MIPMAP = 0x8293,
		GL_MANUAL_GENERATE_MIPMAP = 0x8294,
		GL_AUTO_GENERATE_MIPMAP = 0x8295,
		GL_COLOR_ENCODING = 0x8296,
		GL_SRGB_READ = 0x8297,
		GL_SRGB_WRITE = 0x8298,
		GL_SRGB_DECODE_ARB = 0x8299,
		GL_FILTER = 0x829A,
		GL_VERTEX_TEXTURE = 0x829B,
		GL_TESS_CONTROL_TEXTURE = 0x829C,
		GL_TESS_EVALUATION_TEXTURE = 0x829D,
		GL_GEOMETRY_TEXTURE = 0x829E,
		GL_FRAGMENT_TEXTURE = 0x829F,
		GL_COMPUTE_TEXTURE = 0x82A0,
		GL_TEXTURE_SHADOW = 0x82A1,
		GL_TEXTURE_GATHER = 0x82A2,
		GL_TEXTURE_GATHER_SHADOW = 0x82A3,
		GL_SHADER_IMAGE_LOAD = 0x82A4,
		GL_SHADER_IMAGE_STORE = 0x82A5,
		GL_SHADER_IMAGE_ATOMIC = 0x82A6,
		GL_IMAGE_TEXEL_SIZE = 0x82A7,
		GL_IMAGE_COMPATIBILITY_CLASS = 0x82A8,
		GL_IMAGE_PIXEL_FORMAT = 0x82A9,
		GL_IMAGE_PIXEL_TYPE = 0x82AA,
		GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST = 0x82AC,
		GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST = 0x82AD,
		GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE = 0x82AE,
		GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE = 0x82AF,
		GL_TEXTURE_COMPRESSED_BLOCK_WIDTH = 0x82B1,
		GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT = 0x82B2,
		GL_TEXTURE_COMPRESSED_BLOCK_SIZE = 0x82B3,
		GL_CLEAR_BUFFER = 0x82B4,
		GL_TEXTURE_VIEW = 0x82B5,
		GL_VIEW_COMPATIBILITY_CLASS = 0x82B6,
		GL_FULL_SUPPORT = 0x82B7,
		GL_CAVEAT_SUPPORT = 0x82B8,
		GL_IMAGE_CLASS_4_X_32 = 0x82B9,
		GL_IMAGE_CLASS_2_X_32 = 0x82BA,
		GL_IMAGE_CLASS_1_X_32 = 0x82BB,
		GL_IMAGE_CLASS_4_X_16 = 0x82BC,
		GL_IMAGE_CLASS_2_X_16 = 0x82BD,
		GL_IMAGE_CLASS_1_X_16 = 0x82BE,
		GL_IMAGE_CLASS_4_X_8 = 0x82BF,
		GL_IMAGE_CLASS_2_X_8 = 0x82C0,
		GL_IMAGE_CLASS_1_X_8 = 0x82C1,
		GL_IMAGE_CLASS_11_11_10 = 0x82C2,
		GL_IMAGE_CLASS_10_10_10_2 = 0x82C3,
		GL_VIEW_CLASS_128_BITS = 0x82C4,
		GL_VIEW_CLASS_96_BITS = 0x82C5,
		GL_VIEW_CLASS_64_BITS = 0x82C6,
		GL_VIEW_CLASS_48_BITS = 0x82C7,
		GL_VIEW_CLASS_32_BITS = 0x82C8,
		GL_VIEW_CLASS_24_BITS = 0x82C9,
		GL_VIEW_CLASS_16_BITS = 0x82CA,
		GL_VIEW_CLASS_8_BITS = 0x82CB,
		GL_VIEW_CLASS_S3TC_DXT1_RGB = 0x82CC,
		GL_VIEW_CLASS_S3TC_DXT1_RGBA = 0x82CD,
		GL_VIEW_CLASS_S3TC_DXT3_RGBA = 0x82CE,
		GL_VIEW_CLASS_S3TC_DXT5_RGBA = 0x82CF,
		GL_VIEW_CLASS_RGTC1_RED = 0x82D0,
		GL_VIEW_CLASS_RGTC2_RG = 0x82D1,
		GL_VIEW_CLASS_BPTC_UNORM = 0x82D2,
		GL_VIEW_CLASS_BPTC_FLOAT = 0x82D3,
	};
	extern void (*glGetInternalformati64v)(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params);
	#endif // GL_ARB_internalformat_query2
	
	#ifdef GL_ARB_invalidate_subdata
	extern bool ext_GL_ARB_invalidate_subdata;
	extern void (*glInvalidateBufferData)(GLuint buffer);
	extern void (*glInvalidateBufferSubData)(GLuint buffer, GLintptr offset, GLsizeiptr length);
	extern void (*glInvalidateFramebuffer)(GLenum target, GLsizei numAttachments, const GLenum *attachments);
	extern void (*glInvalidateSubFramebuffer)(GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glInvalidateTexImage)(GLuint texture, GLint level);
	extern void (*glInvalidateTexSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
	#endif // GL_ARB_invalidate_subdata
	
	#ifdef GL_ARB_map_buffer_alignment
	extern bool ext_GL_ARB_map_buffer_alignment;
	enum {
		GL_MIN_MAP_BUFFER_ALIGNMENT = 0x90BC,
	};
	#endif // GL_ARB_map_buffer_alignment
	
	#ifdef GL_ARB_matrix_palette
	extern bool ext_GL_ARB_matrix_palette;
	enum {
		GL_MATRIX_PALETTE_ARB = 0x8840,
		GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB = 0x8841,
		GL_MAX_PALETTE_MATRICES_ARB = 0x8842,
		GL_CURRENT_PALETTE_MATRIX_ARB = 0x8843,
		GL_MATRIX_INDEX_ARRAY_ARB = 0x8844,
		GL_CURRENT_MATRIX_INDEX_ARB = 0x8845,
		GL_MATRIX_INDEX_ARRAY_SIZE_ARB = 0x8846,
		GL_MATRIX_INDEX_ARRAY_TYPE_ARB = 0x8847,
		GL_MATRIX_INDEX_ARRAY_STRIDE_ARB = 0x8848,
		GL_MATRIX_INDEX_ARRAY_POINTER_ARB = 0x8849,
	};
	extern void (*glCurrentPaletteMatrixARB)(GLint index);
	extern void (*glMatrixIndexPointerARB)(GLint size, GLenum type, GLsizei stride, const void *pointer);
	extern void (*glMatrixIndexubvARB)(GLint size, const GLubyte *indices);
	extern void (*glMatrixIndexuivARB)(GLint size, const GLuint *indices);
	extern void (*glMatrixIndexusvARB)(GLint size, const GLushort *indices);
	#endif // GL_ARB_matrix_palette
	
	#ifdef GL_ARB_multi_bind
	extern bool ext_GL_ARB_multi_bind;
	extern void (*glBindBuffersBase)(GLenum target, GLuint first, GLsizei count, const GLuint *buffers);
	extern void (*glBindBuffersRange)(GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes);
	extern void (*glBindImageTextures)(GLuint first, GLsizei count, const GLuint *textures);
	extern void (*glBindSamplers)(GLuint first, GLsizei count, const GLuint *samplers);
	extern void (*glBindTextures)(GLuint first, GLsizei count, const GLuint *textures);
	extern void (*glBindVertexBuffers)(GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
	#endif // GL_ARB_multi_bind
	
	#ifdef GL_ARB_multi_draw_indirect
	extern bool ext_GL_ARB_multi_draw_indirect;
	extern void (*glMultiDrawArraysIndirect)(GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
	extern void (*glMultiDrawElementsIndirect)(GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);
	#endif // GL_ARB_multi_draw_indirect
	
	#ifdef GL_ARB_multisample
	extern bool ext_GL_ARB_multisample;
	enum {
		GL_MULTISAMPLE_BIT_ARB = 0x20000000,
		GL_MULTISAMPLE_ARB = 0x809D,
		GL_SAMPLE_ALPHA_TO_COVERAGE_ARB = 0x809E,
		GL_SAMPLE_ALPHA_TO_ONE_ARB = 0x809F,
		GL_SAMPLE_COVERAGE_ARB = 0x80A0,
		GL_SAMPLE_BUFFERS_ARB = 0x80A8,
		GL_SAMPLES_ARB = 0x80A9,
		GL_SAMPLE_COVERAGE_VALUE_ARB = 0x80AA,
		GL_SAMPLE_COVERAGE_INVERT_ARB = 0x80AB,
	};
	extern void (*glSampleCoverageARB)(GLfloat value, GLboolean invert);
	#endif // GL_ARB_multisample
	
	#ifdef GL_ARB_multitexture
	extern bool ext_GL_ARB_multitexture;
	enum {
		GL_TEXTURE0_ARB = 0x84C0,
		GL_TEXTURE1_ARB = 0x84C1,
		GL_TEXTURE2_ARB = 0x84C2,
		GL_TEXTURE3_ARB = 0x84C3,
		GL_TEXTURE4_ARB = 0x84C4,
		GL_TEXTURE5_ARB = 0x84C5,
		GL_TEXTURE6_ARB = 0x84C6,
		GL_TEXTURE7_ARB = 0x84C7,
		GL_TEXTURE8_ARB = 0x84C8,
		GL_TEXTURE9_ARB = 0x84C9,
		GL_TEXTURE10_ARB = 0x84CA,
		GL_TEXTURE11_ARB = 0x84CB,
		GL_TEXTURE12_ARB = 0x84CC,
		GL_TEXTURE13_ARB = 0x84CD,
		GL_TEXTURE14_ARB = 0x84CE,
		GL_TEXTURE15_ARB = 0x84CF,
		GL_TEXTURE16_ARB = 0x84D0,
		GL_TEXTURE17_ARB = 0x84D1,
		GL_TEXTURE18_ARB = 0x84D2,
		GL_TEXTURE19_ARB = 0x84D3,
		GL_TEXTURE20_ARB = 0x84D4,
		GL_TEXTURE21_ARB = 0x84D5,
		GL_TEXTURE22_ARB = 0x84D6,
		GL_TEXTURE23_ARB = 0x84D7,
		GL_TEXTURE24_ARB = 0x84D8,
		GL_TEXTURE25_ARB = 0x84D9,
		GL_TEXTURE26_ARB = 0x84DA,
		GL_TEXTURE27_ARB = 0x84DB,
		GL_TEXTURE28_ARB = 0x84DC,
		GL_TEXTURE29_ARB = 0x84DD,
		GL_TEXTURE30_ARB = 0x84DE,
		GL_TEXTURE31_ARB = 0x84DF,
		GL_ACTIVE_TEXTURE_ARB = 0x84E0,
		GL_CLIENT_ACTIVE_TEXTURE_ARB = 0x84E1,
		GL_MAX_TEXTURE_UNITS_ARB = 0x84E2,
	};
	extern void (*glActiveTextureARB)(GLenum texture);
	extern void (*glClientActiveTextureARB)(GLenum texture);
	extern void (*glMultiTexCoord1dARB)(GLenum target, GLdouble s);
	extern void (*glMultiTexCoord1dvARB)(GLenum target, const GLdouble *v);
	extern void (*glMultiTexCoord1fARB)(GLenum target, GLfloat s);
	extern void (*glMultiTexCoord1fvARB)(GLenum target, const GLfloat *v);
	extern void (*glMultiTexCoord1iARB)(GLenum target, GLint s);
	extern void (*glMultiTexCoord1ivARB)(GLenum target, const GLint *v);
	extern void (*glMultiTexCoord1sARB)(GLenum target, GLshort s);
	extern void (*glMultiTexCoord1svARB)(GLenum target, const GLshort *v);
	extern void (*glMultiTexCoord2dARB)(GLenum target, GLdouble s, GLdouble t);
	extern void (*glMultiTexCoord2dvARB)(GLenum target, const GLdouble *v);
	extern void (*glMultiTexCoord2fARB)(GLenum target, GLfloat s, GLfloat t);
	extern void (*glMultiTexCoord2fvARB)(GLenum target, const GLfloat *v);
	extern void (*glMultiTexCoord2iARB)(GLenum target, GLint s, GLint t);
	extern void (*glMultiTexCoord2ivARB)(GLenum target, const GLint *v);
	extern void (*glMultiTexCoord2sARB)(GLenum target, GLshort s, GLshort t);
	extern void (*glMultiTexCoord2svARB)(GLenum target, const GLshort *v);
	extern void (*glMultiTexCoord3dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
	extern void (*glMultiTexCoord3dvARB)(GLenum target, const GLdouble *v);
	extern void (*glMultiTexCoord3fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
	extern void (*glMultiTexCoord3fvARB)(GLenum target, const GLfloat *v);
	extern void (*glMultiTexCoord3iARB)(GLenum target, GLint s, GLint t, GLint r);
	extern void (*glMultiTexCoord3ivARB)(GLenum target, const GLint *v);
	extern void (*glMultiTexCoord3sARB)(GLenum target, GLshort s, GLshort t, GLshort r);
	extern void (*glMultiTexCoord3svARB)(GLenum target, const GLshort *v);
	extern void (*glMultiTexCoord4dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
	extern void (*glMultiTexCoord4dvARB)(GLenum target, const GLdouble *v);
	extern void (*glMultiTexCoord4fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
	extern void (*glMultiTexCoord4fvARB)(GLenum target, const GLfloat *v);
	extern void (*glMultiTexCoord4iARB)(GLenum target, GLint s, GLint t, GLint r, GLint q);
	extern void (*glMultiTexCoord4ivARB)(GLenum target, const GLint *v);
	extern void (*glMultiTexCoord4sARB)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
	extern void (*glMultiTexCoord4svARB)(GLenum target, const GLshort *v);
	#endif // GL_ARB_multitexture
	
	#ifdef GL_ARB_occlusion_query
	extern bool ext_GL_ARB_occlusion_query;
	enum {
		GL_QUERY_COUNTER_BITS_ARB = 0x8864,
		GL_CURRENT_QUERY_ARB = 0x8865,
		GL_QUERY_RESULT_ARB = 0x8866,
		GL_QUERY_RESULT_AVAILABLE_ARB = 0x8867,
		GL_SAMPLES_PASSED_ARB = 0x8914,
	};
	extern void (*glBeginQueryARB)(GLenum target, GLuint id);
	extern void (*glDeleteQueriesARB)(GLsizei n, const GLuint *ids);
	extern void (*glEndQueryARB)(GLenum target);
	extern void (*glGenQueriesARB)(GLsizei n, GLuint *ids);
	extern void (*glGetQueryObjectivARB)(GLuint id, GLenum pname, GLint *params);
	extern void (*glGetQueryObjectuivARB)(GLuint id, GLenum pname, GLuint *params);
	extern void (*glGetQueryivARB)(GLenum target, GLenum pname, GLint *params);
	extern GLboolean (*glIsQueryARB)(GLuint id);
	#endif // GL_ARB_occlusion_query
	
	#ifdef GL_ARB_parallel_shader_compile
	extern bool ext_GL_ARB_parallel_shader_compile;
	enum {
		GL_MAX_SHADER_COMPILER_THREADS_ARB = 0x91B0,
		GL_COMPLETION_STATUS_ARB = 0x91B1,
	};
	extern void (*glMaxShaderCompilerThreadsARB)(GLuint count);
	#endif // GL_ARB_parallel_shader_compile
	
	#ifdef GL_ARB_pipeline_statistics_query
	extern bool ext_GL_ARB_pipeline_statistics_query;
	enum {
		GL_VERTICES_SUBMITTED_ARB = 0x82EE,
		GL_PRIMITIVES_SUBMITTED_ARB = 0x82EF,
		GL_VERTEX_SHADER_INVOCATIONS_ARB = 0x82F0,
		GL_TESS_CONTROL_SHADER_PATCHES_ARB = 0x82F1,
		GL_TESS_EVALUATION_SHADER_INVOCATIONS_ARB = 0x82F2,
		#if !defined(GL_ARB_gpu_shader5)
		GL_GEOMETRY_SHADER_INVOCATIONS = 0x887F,
		#endif
		GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED_ARB = 0x82F3,
		GL_FRAGMENT_SHADER_INVOCATIONS_ARB = 0x82F4,
		GL_COMPUTE_SHADER_INVOCATIONS_ARB = 0x82F5,
		GL_CLIPPING_INPUT_PRIMITIVES_ARB = 0x82F6,
		GL_CLIPPING_OUTPUT_PRIMITIVES_ARB = 0x82F7,
	};
	#endif // GL_ARB_pipeline_statistics_query
	
	#ifdef GL_ARB_pixel_buffer_object
	extern bool ext_GL_ARB_pixel_buffer_object;
	enum {
		GL_PIXEL_PACK_BUFFER_ARB = 0x88EB,
		GL_PIXEL_UNPACK_BUFFER_ARB = 0x88EC,
		GL_PIXEL_PACK_BUFFER_BINDING_ARB = 0x88ED,
		GL_PIXEL_UNPACK_BUFFER_BINDING_ARB = 0x88EF,
	};
	#endif // GL_ARB_pixel_buffer_object
	
	#ifdef GL_ARB_point_parameters
	extern bool ext_GL_ARB_point_parameters;
	enum {
		GL_POINT_DISTANCE_ATTENUATION_ARB = 0x8129,
		GL_POINT_FADE_THRESHOLD_SIZE_ARB = 0x8128,
		GL_POINT_SIZE_MAX_ARB = 0x8127,
		GL_POINT_SIZE_MIN_ARB = 0x8126,
	};
	extern void (*glPointParameterfARB)(GLenum pname, GLfloat param);
	extern void (*glPointParameterfvARB)(GLenum pname, const GLfloat *params);
	#endif // GL_ARB_point_parameters
	
	#ifdef GL_ARB_point_sprite
	extern bool ext_GL_ARB_point_sprite;
	enum {
		GL_POINT_SPRITE_ARB = 0x8861,
		GL_COORD_REPLACE_ARB = 0x8862,
	};
	#endif // GL_ARB_point_sprite
	
	#ifdef GL_ARB_program_interface_query
	extern bool ext_GL_ARB_program_interface_query;
	enum {
		GL_UNIFORM = 0x92E1,
		GL_UNIFORM_BLOCK = 0x92E2,
		GL_PROGRAM_INPUT = 0x92E3,
		GL_PROGRAM_OUTPUT = 0x92E4,
		GL_BUFFER_VARIABLE = 0x92E5,
		GL_SHADER_STORAGE_BLOCK = 0x92E6,
		GL_ATOMIC_COUNTER_BUFFER = 0x92C0,
		GL_VERTEX_SUBROUTINE = 0x92E8,
		GL_TESS_CONTROL_SUBROUTINE = 0x92E9,
		GL_TESS_EVALUATION_SUBROUTINE = 0x92EA,
		GL_GEOMETRY_SUBROUTINE = 0x92EB,
		GL_FRAGMENT_SUBROUTINE = 0x92EC,
		GL_COMPUTE_SUBROUTINE = 0x92ED,
		GL_VERTEX_SUBROUTINE_UNIFORM = 0x92EE,
		GL_TESS_CONTROL_SUBROUTINE_UNIFORM = 0x92EF,
		GL_TESS_EVALUATION_SUBROUTINE_UNIFORM = 0x92F0,
		GL_GEOMETRY_SUBROUTINE_UNIFORM = 0x92F1,
		GL_FRAGMENT_SUBROUTINE_UNIFORM = 0x92F2,
		GL_COMPUTE_SUBROUTINE_UNIFORM = 0x92F3,
		GL_TRANSFORM_FEEDBACK_VARYING = 0x92F4,
		GL_ACTIVE_RESOURCES = 0x92F5,
		GL_MAX_NAME_LENGTH = 0x92F6,
		GL_MAX_NUM_ACTIVE_VARIABLES = 0x92F7,
		GL_MAX_NUM_COMPATIBLE_SUBROUTINES = 0x92F8,
		GL_NAME_LENGTH = 0x92F9,
		GL_TYPE = 0x92FA,
		GL_ARRAY_SIZE = 0x92FB,
		GL_OFFSET = 0x92FC,
		GL_BLOCK_INDEX = 0x92FD,
		GL_ARRAY_STRIDE = 0x92FE,
		GL_MATRIX_STRIDE = 0x92FF,
		GL_IS_ROW_MAJOR = 0x9300,
		GL_ATOMIC_COUNTER_BUFFER_INDEX = 0x9301,
		GL_BUFFER_BINDING = 0x9302,
		GL_BUFFER_DATA_SIZE = 0x9303,
		GL_NUM_ACTIVE_VARIABLES = 0x9304,
		GL_ACTIVE_VARIABLES = 0x9305,
		GL_REFERENCED_BY_VERTEX_SHADER = 0x9306,
		GL_REFERENCED_BY_TESS_CONTROL_SHADER = 0x9307,
		GL_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x9308,
		GL_REFERENCED_BY_GEOMETRY_SHADER = 0x9309,
		GL_REFERENCED_BY_FRAGMENT_SHADER = 0x930A,
		GL_REFERENCED_BY_COMPUTE_SHADER = 0x930B,
		GL_TOP_LEVEL_ARRAY_SIZE = 0x930C,
		GL_TOP_LEVEL_ARRAY_STRIDE = 0x930D,
		GL_LOCATION = 0x930E,
		GL_LOCATION_INDEX = 0x930F,
		GL_IS_PER_PATCH = 0x92E7,
		GL_NUM_COMPATIBLE_SUBROUTINES = 0x8E4A,
		GL_COMPATIBLE_SUBROUTINES = 0x8E4B,
	};
	extern void (*glGetProgramInterfaceiv)(GLuint program, GLenum programInterface, GLenum pname, GLint *params);
	extern GLuint (*glGetProgramResourceIndex)(GLuint program, GLenum programInterface, const GLchar *name);
	extern GLint (*glGetProgramResourceLocation)(GLuint program, GLenum programInterface, const GLchar *name);
	extern GLint (*glGetProgramResourceLocationIndex)(GLuint program, GLenum programInterface, const GLchar *name);
	extern void (*glGetProgramResourceName)(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
	extern void (*glGetProgramResourceiv)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params);
	#endif // GL_ARB_program_interface_query
	
	#ifdef GL_ARB_query_buffer_object
	extern bool ext_GL_ARB_query_buffer_object;
	enum {
		GL_QUERY_BUFFER_BARRIER_BIT = 0x00008000,
		GL_QUERY_BUFFER = 0x9192,
		GL_QUERY_BUFFER_BINDING = 0x9193,
		GL_QUERY_RESULT_NO_WAIT = 0x9194,
	};
	#endif // GL_ARB_query_buffer_object
	
	#ifdef GL_ARB_robustness
	extern bool ext_GL_ARB_robustness;
	enum {
		GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB = 0x00000004,
		GL_LOSE_CONTEXT_ON_RESET_ARB = 0x8252,
		GL_GUILTY_CONTEXT_RESET_ARB = 0x8253,
		GL_INNOCENT_CONTEXT_RESET_ARB = 0x8254,
		GL_UNKNOWN_CONTEXT_RESET_ARB = 0x8255,
		GL_RESET_NOTIFICATION_STRATEGY_ARB = 0x8256,
		GL_NO_RESET_NOTIFICATION_ARB = 0x8261,
	};
	extern GLenum (*glGetGraphicsResetStatusARB)();
	extern void (*glGetnColorTableARB)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table);
	extern void (*glGetnCompressedTexImageARB)(GLenum target, GLint lod, GLsizei bufSize, void *img);
	extern void (*glGetnConvolutionFilterARB)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image);
	extern void (*glGetnHistogramARB)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values);
	extern void (*glGetnMapdvARB)(GLenum target, GLenum query, GLsizei bufSize, GLdouble *v);
	extern void (*glGetnMapfvARB)(GLenum target, GLenum query, GLsizei bufSize, GLfloat *v);
	extern void (*glGetnMapivARB)(GLenum target, GLenum query, GLsizei bufSize, GLint *v);
	extern void (*glGetnMinmaxARB)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values);
	extern void (*glGetnPixelMapfvARB)(GLenum map, GLsizei bufSize, GLfloat *values);
	extern void (*glGetnPixelMapuivARB)(GLenum map, GLsizei bufSize, GLuint *values);
	extern void (*glGetnPixelMapusvARB)(GLenum map, GLsizei bufSize, GLushort *values);
	extern void (*glGetnPolygonStippleARB)(GLsizei bufSize, GLubyte *pattern);
	extern void (*glGetnSeparableFilterARB)(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void *column, void *span);
	extern void (*glGetnTexImageARB)(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *img);
	extern void (*glGetnUniformdvARB)(GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
	extern void (*glGetnUniformfvARB)(GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
	extern void (*glGetnUniformivARB)(GLuint program, GLint location, GLsizei bufSize, GLint *params);
	extern void (*glGetnUniformuivARB)(GLuint program, GLint location, GLsizei bufSize, GLuint *params);
	extern void (*glReadnPixelsARB)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
	#endif // GL_ARB_robustness
	
	#ifdef GL_ARB_sample_locations
	extern bool ext_GL_ARB_sample_locations;
	enum {
		GL_SAMPLE_LOCATION_SUBPIXEL_BITS_ARB = 0x933D,
		GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_ARB = 0x933E,
		GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_ARB = 0x933F,
		GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_ARB = 0x9340,
		GL_SAMPLE_LOCATION_ARB = 0x8E50,
		GL_PROGRAMMABLE_SAMPLE_LOCATION_ARB = 0x9341,
		GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_ARB = 0x9342,
		GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_ARB = 0x9343,
	};
	extern void (*glEvaluateDepthValuesARB)();
	extern void (*glFramebufferSampleLocationsfvARB)(GLenum target, GLuint start, GLsizei count, const GLfloat *v);
	extern void (*glNamedFramebufferSampleLocationsfvARB)(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v);
	#endif // GL_ARB_sample_locations
	
	#ifdef GL_ARB_sample_shading
	extern bool ext_GL_ARB_sample_shading;
	enum {
		GL_SAMPLE_SHADING_ARB = 0x8C36,
		GL_MIN_SAMPLE_SHADING_VALUE_ARB = 0x8C37,
	};
	extern void (*glMinSampleShadingARB)(GLfloat value);
	#endif // GL_ARB_sample_shading
	
	#ifdef GL_ARB_separate_shader_objects
	extern bool ext_GL_ARB_separate_shader_objects;
	enum {
		GL_VERTEX_SHADER_BIT = 0x00000001,
		GL_FRAGMENT_SHADER_BIT = 0x00000002,
		GL_GEOMETRY_SHADER_BIT = 0x00000004,
		GL_TESS_CONTROL_SHADER_BIT = 0x00000008,
		GL_TESS_EVALUATION_SHADER_BIT = 0x00000010,
		GL_ALL_SHADER_BITS = 0xFFFFFFFF,
		GL_PROGRAM_SEPARABLE = 0x8258,
		GL_ACTIVE_PROGRAM = 0x8259,
		GL_PROGRAM_PIPELINE_BINDING = 0x825A,
	};
	extern void (*glActiveShaderProgram)(GLuint pipeline, GLuint program);
	extern void (*glBindProgramPipeline)(GLuint pipeline);
	extern GLuint (*glCreateShaderProgramv)(GLenum type, GLsizei count, const GLchar *const*strings);
	extern void (*glDeleteProgramPipelines)(GLsizei n, const GLuint *pipelines);
	extern void (*glGenProgramPipelines)(GLsizei n, GLuint *pipelines);
	extern void (*glGetProgramPipelineInfoLog)(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
	extern void (*glGetProgramPipelineiv)(GLuint pipeline, GLenum pname, GLint *params);
	extern GLboolean (*glIsProgramPipeline)(GLuint pipeline);
	extern void (*glProgramUniform1d)(GLuint program, GLint location, GLdouble v0);
	extern void (*glProgramUniform1dv)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
	extern void (*glProgramUniform1f)(GLuint program, GLint location, GLfloat v0);
	extern void (*glProgramUniform1fv)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
	extern void (*glProgramUniform1i)(GLuint program, GLint location, GLint v0);
	extern void (*glProgramUniform1iv)(GLuint program, GLint location, GLsizei count, const GLint *value);
	extern void (*glProgramUniform1ui)(GLuint program, GLint location, GLuint v0);
	extern void (*glProgramUniform1uiv)(GLuint program, GLint location, GLsizei count, const GLuint *value);
	extern void (*glProgramUniform2d)(GLuint program, GLint location, GLdouble v0, GLdouble v1);
	extern void (*glProgramUniform2dv)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
	extern void (*glProgramUniform2f)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
	extern void (*glProgramUniform2fv)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
	extern void (*glProgramUniform2i)(GLuint program, GLint location, GLint v0, GLint v1);
	extern void (*glProgramUniform2iv)(GLuint program, GLint location, GLsizei count, const GLint *value);
	extern void (*glProgramUniform2ui)(GLuint program, GLint location, GLuint v0, GLuint v1);
	extern void (*glProgramUniform2uiv)(GLuint program, GLint location, GLsizei count, const GLuint *value);
	extern void (*glProgramUniform3d)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
	extern void (*glProgramUniform3dv)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
	extern void (*glProgramUniform3f)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
	extern void (*glProgramUniform3fv)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
	extern void (*glProgramUniform3i)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
	extern void (*glProgramUniform3iv)(GLuint program, GLint location, GLsizei count, const GLint *value);
	extern void (*glProgramUniform3ui)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
	extern void (*glProgramUniform3uiv)(GLuint program, GLint location, GLsizei count, const GLuint *value);
	extern void (*glProgramUniform4d)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
	extern void (*glProgramUniform4dv)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
	extern void (*glProgramUniform4f)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
	extern void (*glProgramUniform4fv)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
	extern void (*glProgramUniform4i)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
	extern void (*glProgramUniform4iv)(GLuint program, GLint location, GLsizei count, const GLint *value);
	extern void (*glProgramUniform4ui)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
	extern void (*glProgramUniform4uiv)(GLuint program, GLint location, GLsizei count, const GLuint *value);
	extern void (*glProgramUniformMatrix2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix2x3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix2x3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix2x4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix2x4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix3x2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix3x2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix3x4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix3x4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix4x2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix4x2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix4x3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix4x3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUseProgramStages)(GLuint pipeline, GLbitfield stages, GLuint program);
	extern void (*glValidateProgramPipeline)(GLuint pipeline);
	#endif // GL_ARB_separate_shader_objects
	
	#ifdef GL_ARB_shader_atomic_counters
	extern bool ext_GL_ARB_shader_atomic_counters;
	enum {
		#if !defined(GL_ARB_program_interface_query)
		GL_ATOMIC_COUNTER_BUFFER = 0x92C0,
		#endif
		GL_ATOMIC_COUNTER_BUFFER_BINDING = 0x92C1,
		GL_ATOMIC_COUNTER_BUFFER_START = 0x92C2,
		GL_ATOMIC_COUNTER_BUFFER_SIZE = 0x92C3,
		GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE = 0x92C4,
		GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS = 0x92C5,
		GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES = 0x92C6,
		GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER = 0x92C7,
		GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER = 0x92C8,
		GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x92C9,
		GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER = 0x92CA,
		GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER = 0x92CB,
		GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS = 0x92CC,
		GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS = 0x92CD,
		GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS = 0x92CE,
		GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS = 0x92CF,
		GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS = 0x92D0,
		GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS = 0x92D1,
		GL_MAX_VERTEX_ATOMIC_COUNTERS = 0x92D2,
		GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS = 0x92D3,
		GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS = 0x92D4,
		GL_MAX_GEOMETRY_ATOMIC_COUNTERS = 0x92D5,
		GL_MAX_FRAGMENT_ATOMIC_COUNTERS = 0x92D6,
		GL_MAX_COMBINED_ATOMIC_COUNTERS = 0x92D7,
		GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE = 0x92D8,
		GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS = 0x92DC,
		GL_ACTIVE_ATOMIC_COUNTER_BUFFERS = 0x92D9,
		GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX = 0x92DA,
		GL_UNSIGNED_INT_ATOMIC_COUNTER = 0x92DB,
	};
	extern void (*glGetActiveAtomicCounterBufferiv)(GLuint program, GLuint bufferIndex, GLenum pname, GLint *params);
	#endif // GL_ARB_shader_atomic_counters
	
	#ifdef GL_ARB_shader_image_load_store
	extern bool ext_GL_ARB_shader_image_load_store;
	enum {
		GL_ALL_BARRIER_BITS = 0xFFFFFFFF,
		GL_ATOMIC_COUNTER_BARRIER_BIT = 0x00001000,
		GL_BUFFER_UPDATE_BARRIER_BIT = 0x00000200,
		GL_COMMAND_BARRIER_BIT = 0x00000040,
		GL_ELEMENT_ARRAY_BARRIER_BIT = 0x00000002,
		GL_FRAMEBUFFER_BARRIER_BIT = 0x00000400,
		GL_PIXEL_BUFFER_BARRIER_BIT = 0x00000080,
		GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = 0x00000020,
		GL_TEXTURE_FETCH_BARRIER_BIT = 0x00000008,
		GL_TEXTURE_UPDATE_BARRIER_BIT = 0x00000100,
		GL_TRANSFORM_FEEDBACK_BARRIER_BIT = 0x00000800,
		GL_UNIFORM_BARRIER_BIT = 0x00000004,
		GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = 0x00000001,
		GL_MAX_IMAGE_UNITS = 0x8F38,
		GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS = 0x8F39,
		GL_IMAGE_BINDING_NAME = 0x8F3A,
		GL_IMAGE_BINDING_LEVEL = 0x8F3B,
		GL_IMAGE_BINDING_LAYERED = 0x8F3C,
		GL_IMAGE_BINDING_LAYER = 0x8F3D,
		GL_IMAGE_BINDING_ACCESS = 0x8F3E,
		GL_IMAGE_1D = 0x904C,
		GL_IMAGE_2D = 0x904D,
		GL_IMAGE_3D = 0x904E,
		GL_IMAGE_2D_RECT = 0x904F,
		GL_IMAGE_CUBE = 0x9050,
		GL_IMAGE_BUFFER = 0x9051,
		GL_IMAGE_1D_ARRAY = 0x9052,
		GL_IMAGE_2D_ARRAY = 0x9053,
		GL_IMAGE_CUBE_MAP_ARRAY = 0x9054,
		GL_IMAGE_2D_MULTISAMPLE = 0x9055,
		GL_IMAGE_2D_MULTISAMPLE_ARRAY = 0x9056,
		GL_INT_IMAGE_1D = 0x9057,
		GL_INT_IMAGE_2D = 0x9058,
		GL_INT_IMAGE_3D = 0x9059,
		GL_INT_IMAGE_2D_RECT = 0x905A,
		GL_INT_IMAGE_CUBE = 0x905B,
		GL_INT_IMAGE_BUFFER = 0x905C,
		GL_INT_IMAGE_1D_ARRAY = 0x905D,
		GL_INT_IMAGE_2D_ARRAY = 0x905E,
		GL_INT_IMAGE_CUBE_MAP_ARRAY = 0x905F,
		GL_INT_IMAGE_2D_MULTISAMPLE = 0x9060,
		GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY = 0x9061,
		GL_UNSIGNED_INT_IMAGE_1D = 0x9062,
		GL_UNSIGNED_INT_IMAGE_2D = 0x9063,
		GL_UNSIGNED_INT_IMAGE_3D = 0x9064,
		GL_UNSIGNED_INT_IMAGE_2D_RECT = 0x9065,
		GL_UNSIGNED_INT_IMAGE_CUBE = 0x9066,
		GL_UNSIGNED_INT_IMAGE_BUFFER = 0x9067,
		GL_UNSIGNED_INT_IMAGE_1D_ARRAY = 0x9068,
		GL_UNSIGNED_INT_IMAGE_2D_ARRAY = 0x9069,
		GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY = 0x906A,
		GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE = 0x906B,
		GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY = 0x906C,
		GL_MAX_IMAGE_SAMPLES = 0x906D,
		GL_IMAGE_BINDING_FORMAT = 0x906E,
		#if !defined(GL_ARB_internalformat_query2)
		GL_IMAGE_FORMAT_COMPATIBILITY_TYPE = 0x90C7,
		#endif
		GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE = 0x90C8,
		GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS = 0x90C9,
		GL_MAX_VERTEX_IMAGE_UNIFORMS = 0x90CA,
		GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS = 0x90CB,
		GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS = 0x90CC,
		GL_MAX_GEOMETRY_IMAGE_UNIFORMS = 0x90CD,
		GL_MAX_FRAGMENT_IMAGE_UNIFORMS = 0x90CE,
		GL_MAX_COMBINED_IMAGE_UNIFORMS = 0x90CF,
	};
	extern void (*glBindImageTexture)(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
	extern void (*glMemoryBarrier)(GLbitfield barriers);
	#endif // GL_ARB_shader_image_load_store
	
	#ifdef GL_ARB_shader_objects
	extern bool ext_GL_ARB_shader_objects;
	enum {
		GL_PROGRAM_OBJECT_ARB = 0x8B40,
		GL_SHADER_OBJECT_ARB = 0x8B48,
		GL_OBJECT_TYPE_ARB = 0x8B4E,
		GL_OBJECT_SUBTYPE_ARB = 0x8B4F,
		GL_FLOAT_VEC2_ARB = 0x8B50,
		GL_FLOAT_VEC3_ARB = 0x8B51,
		GL_FLOAT_VEC4_ARB = 0x8B52,
		GL_INT_VEC2_ARB = 0x8B53,
		GL_INT_VEC3_ARB = 0x8B54,
		GL_INT_VEC4_ARB = 0x8B55,
		GL_BOOL_ARB = 0x8B56,
		GL_BOOL_VEC2_ARB = 0x8B57,
		GL_BOOL_VEC3_ARB = 0x8B58,
		GL_BOOL_VEC4_ARB = 0x8B59,
		GL_FLOAT_MAT2_ARB = 0x8B5A,
		GL_FLOAT_MAT3_ARB = 0x8B5B,
		GL_FLOAT_MAT4_ARB = 0x8B5C,
		GL_SAMPLER_1D_ARB = 0x8B5D,
		GL_SAMPLER_2D_ARB = 0x8B5E,
		GL_SAMPLER_3D_ARB = 0x8B5F,
		GL_SAMPLER_CUBE_ARB = 0x8B60,
		GL_SAMPLER_1D_SHADOW_ARB = 0x8B61,
		GL_SAMPLER_2D_SHADOW_ARB = 0x8B62,
		GL_SAMPLER_2D_RECT_ARB = 0x8B63,
		GL_SAMPLER_2D_RECT_SHADOW_ARB = 0x8B64,
		GL_OBJECT_DELETE_STATUS_ARB = 0x8B80,
		GL_OBJECT_COMPILE_STATUS_ARB = 0x8B81,
		GL_OBJECT_LINK_STATUS_ARB = 0x8B82,
		GL_OBJECT_VALIDATE_STATUS_ARB = 0x8B83,
		GL_OBJECT_INFO_LOG_LENGTH_ARB = 0x8B84,
		GL_OBJECT_ATTACHED_OBJECTS_ARB = 0x8B85,
		GL_OBJECT_ACTIVE_UNIFORMS_ARB = 0x8B86,
		GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB = 0x8B87,
		GL_OBJECT_SHADER_SOURCE_LENGTH_ARB = 0x8B88,
	};
	extern void (*glAttachObjectARB)(GLhandleARB containerObj, GLhandleARB obj);
	extern void (*glCompileShaderARB)(GLhandleARB shaderObj);
	extern GLhandleARB (*glCreateProgramObjectARB)();
	extern GLhandleARB (*glCreateShaderObjectARB)(GLenum shaderType);
	extern void (*glDeleteObjectARB)(GLhandleARB obj);
	extern void (*glDetachObjectARB)(GLhandleARB containerObj, GLhandleARB attachedObj);
	extern void (*glGetActiveUniformARB)(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
	extern void (*glGetAttachedObjectsARB)(GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj);
	extern GLhandleARB (*glGetHandleARB)(GLenum pname);
	extern void (*glGetInfoLogARB)(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog);
	extern void (*glGetObjectParameterfvARB)(GLhandleARB obj, GLenum pname, GLfloat *params);
	extern void (*glGetObjectParameterivARB)(GLhandleARB obj, GLenum pname, GLint *params);
	extern void (*glGetShaderSourceARB)(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source);
	extern GLint (*glGetUniformLocationARB)(GLhandleARB programObj, const GLcharARB *name);
	extern void (*glGetUniformfvARB)(GLhandleARB programObj, GLint location, GLfloat *params);
	extern void (*glGetUniformivARB)(GLhandleARB programObj, GLint location, GLint *params);
	extern void (*glLinkProgramARB)(GLhandleARB programObj);
	extern void (*glShaderSourceARB)(GLhandleARB shaderObj, GLsizei count, const GLcharARB **string, const GLint *length);
	extern void (*glUniform1fARB)(GLint location, GLfloat v0);
	extern void (*glUniform1fvARB)(GLint location, GLsizei count, const GLfloat *value);
	extern void (*glUniform1iARB)(GLint location, GLint v0);
	extern void (*glUniform1ivARB)(GLint location, GLsizei count, const GLint *value);
	extern void (*glUniform2fARB)(GLint location, GLfloat v0, GLfloat v1);
	extern void (*glUniform2fvARB)(GLint location, GLsizei count, const GLfloat *value);
	extern void (*glUniform2iARB)(GLint location, GLint v0, GLint v1);
	extern void (*glUniform2ivARB)(GLint location, GLsizei count, const GLint *value);
	extern void (*glUniform3fARB)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
	extern void (*glUniform3fvARB)(GLint location, GLsizei count, const GLfloat *value);
	extern void (*glUniform3iARB)(GLint location, GLint v0, GLint v1, GLint v2);
	extern void (*glUniform3ivARB)(GLint location, GLsizei count, const GLint *value);
	extern void (*glUniform4fARB)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
	extern void (*glUniform4fvARB)(GLint location, GLsizei count, const GLfloat *value);
	extern void (*glUniform4iARB)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
	extern void (*glUniform4ivARB)(GLint location, GLsizei count, const GLint *value);
	extern void (*glUniformMatrix2fvARB)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix3fvARB)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUniformMatrix4fvARB)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glUseProgramObjectARB)(GLhandleARB programObj);
	extern void (*glValidateProgramARB)(GLhandleARB programObj);
	#endif // GL_ARB_shader_objects
	
	#ifdef GL_ARB_shader_storage_buffer_object
	extern bool ext_GL_ARB_shader_storage_buffer_object;
	enum {
		GL_SHADER_STORAGE_BARRIER_BIT = 0x00002000,
		GL_SHADER_STORAGE_BUFFER = 0x90D2,
		GL_SHADER_STORAGE_BUFFER_BINDING = 0x90D3,
		GL_SHADER_STORAGE_BUFFER_START = 0x90D4,
		GL_SHADER_STORAGE_BUFFER_SIZE = 0x90D5,
		GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS = 0x90D6,
		GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS = 0x90D7,
		GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS = 0x90D8,
		GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS = 0x90D9,
		GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS = 0x90DA,
		GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS = 0x90DB,
		GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS = 0x90DC,
		GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS = 0x90DD,
		GL_MAX_SHADER_STORAGE_BLOCK_SIZE = 0x90DE,
		GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT = 0x90DF,
		GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES = 0x8F39,
		#if !defined(GL_ARB_shader_image_load_store)
		GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS = 0x8F39,
		#endif
	};
	extern void (*glShaderStorageBlockBinding)(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
	#endif // GL_ARB_shader_storage_buffer_object
	
	#ifdef GL_ARB_shader_subroutine
	extern bool ext_GL_ARB_shader_subroutine;
	enum {
		GL_ACTIVE_SUBROUTINES = 0x8DE5,
		GL_ACTIVE_SUBROUTINE_UNIFORMS = 0x8DE6,
		GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS = 0x8E47,
		GL_ACTIVE_SUBROUTINE_MAX_LENGTH = 0x8E48,
		GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH = 0x8E49,
		GL_MAX_SUBROUTINES = 0x8DE7,
		GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS = 0x8DE8,
		#if !defined(GL_ARB_program_interface_query)
		GL_NUM_COMPATIBLE_SUBROUTINES = 0x8E4A,
		GL_COMPATIBLE_SUBROUTINES = 0x8E4B,
		#endif
	};
	extern void (*glGetActiveSubroutineName)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
	extern void (*glGetActiveSubroutineUniformName)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
	extern void (*glGetActiveSubroutineUniformiv)(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
	extern void (*glGetProgramStageiv)(GLuint program, GLenum shadertype, GLenum pname, GLint *values);
	extern GLuint (*glGetSubroutineIndex)(GLuint program, GLenum shadertype, const GLchar *name);
	extern GLint (*glGetSubroutineUniformLocation)(GLuint program, GLenum shadertype, const GLchar *name);
	extern void (*glGetUniformSubroutineuiv)(GLenum shadertype, GLint location, GLuint *params);
	extern void (*glUniformSubroutinesuiv)(GLenum shadertype, GLsizei count, const GLuint *indices);
	#endif // GL_ARB_shader_subroutine
	
	#ifdef GL_ARB_shading_language_100
	extern bool ext_GL_ARB_shading_language_100;
	enum {
		GL_SHADING_LANGUAGE_VERSION_ARB = 0x8B8C,
	};
	#endif // GL_ARB_shading_language_100
	
	#ifdef GL_ARB_shading_language_include
	extern bool ext_GL_ARB_shading_language_include;
	enum {
		GL_SHADER_INCLUDE_ARB = 0x8DAE,
		GL_NAMED_STRING_LENGTH_ARB = 0x8DE9,
		GL_NAMED_STRING_TYPE_ARB = 0x8DEA,
	};
	extern void (*glCompileShaderIncludeARB)(GLuint shader, GLsizei count, const GLchar *const*path, const GLint *length);
	extern void (*glDeleteNamedStringARB)(GLint namelen, const GLchar *name);
	extern void (*glGetNamedStringARB)(GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string);
	extern void (*glGetNamedStringivARB)(GLint namelen, const GLchar *name, GLenum pname, GLint *params);
	extern GLboolean (*glIsNamedStringARB)(GLint namelen, const GLchar *name);
	extern void (*glNamedStringARB)(GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string);
	#endif // GL_ARB_shading_language_include
	
	#ifdef GL_ARB_shadow
	extern bool ext_GL_ARB_shadow;
	enum {
		GL_TEXTURE_COMPARE_MODE_ARB = 0x884C,
		GL_TEXTURE_COMPARE_FUNC_ARB = 0x884D,
		GL_COMPARE_R_TO_TEXTURE_ARB = 0x884E,
	};
	#endif // GL_ARB_shadow
	
	#ifdef GL_ARB_shadow_ambient
	extern bool ext_GL_ARB_shadow_ambient;
	enum {
		GL_TEXTURE_COMPARE_FAIL_VALUE_ARB = 0x80BF,
	};
	#endif // GL_ARB_shadow_ambient
	
	#ifdef GL_ARB_sparse_buffer
	extern bool ext_GL_ARB_sparse_buffer;
	enum {
		GL_SPARSE_STORAGE_BIT_ARB = 0x0400,
		GL_SPARSE_BUFFER_PAGE_SIZE_ARB = 0x82F8,
	};
	extern void (*glBufferPageCommitmentARB)(GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);
	extern void (*glNamedBufferPageCommitmentARB)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
	extern void (*glNamedBufferPageCommitmentEXT)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
	#endif // GL_ARB_sparse_buffer
	
	#ifdef GL_ARB_sparse_texture
	extern bool ext_GL_ARB_sparse_texture;
	enum {
		GL_TEXTURE_SPARSE_ARB = 0x91A6,
		GL_VIRTUAL_PAGE_SIZE_INDEX_ARB = 0x91A7,
		GL_NUM_SPARSE_LEVELS_ARB = 0x91AA,
		GL_NUM_VIRTUAL_PAGE_SIZES_ARB = 0x91A8,
		GL_VIRTUAL_PAGE_SIZE_X_ARB = 0x9195,
		GL_VIRTUAL_PAGE_SIZE_Y_ARB = 0x9196,
		GL_VIRTUAL_PAGE_SIZE_Z_ARB = 0x9197,
		GL_MAX_SPARSE_TEXTURE_SIZE_ARB = 0x9198,
		GL_MAX_SPARSE_3D_TEXTURE_SIZE_ARB = 0x9199,
		GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_ARB = 0x919A,
		GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_ARB = 0x91A9,
	};
	extern void (*glTexPageCommitmentARB)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
	#endif // GL_ARB_sparse_texture
	
	#ifdef GL_ARB_stencil_texturing
	extern bool ext_GL_ARB_stencil_texturing;
	enum {
		GL_DEPTH_STENCIL_TEXTURE_MODE = 0x90EA,
	};
	#endif // GL_ARB_stencil_texturing
	
	#ifdef GL_ARB_tessellation_shader
	extern bool ext_GL_ARB_tessellation_shader;
	enum {
		GL_PATCHES = 0x000E,
		GL_QUADS = 0x0007,
		GL_PATCH_VERTICES = 0x8E72,
		GL_PATCH_DEFAULT_INNER_LEVEL = 0x8E73,
		GL_PATCH_DEFAULT_OUTER_LEVEL = 0x8E74,
		GL_TESS_CONTROL_OUTPUT_VERTICES = 0x8E75,
		GL_TESS_GEN_MODE = 0x8E76,
		GL_TESS_GEN_SPACING = 0x8E77,
		GL_TESS_GEN_VERTEX_ORDER = 0x8E78,
		GL_TESS_GEN_POINT_MODE = 0x8E79,
		GL_ISOLINES = 0x8E7A,
		GL_FRACTIONAL_ODD = 0x8E7B,
		GL_FRACTIONAL_EVEN = 0x8E7C,
		GL_MAX_PATCH_VERTICES = 0x8E7D,
		GL_MAX_TESS_GEN_LEVEL = 0x8E7E,
		GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E7F,
		GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E80,
		GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS = 0x8E81,
		GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS = 0x8E82,
		GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS = 0x8E83,
		GL_MAX_TESS_PATCH_COMPONENTS = 0x8E84,
		GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS = 0x8E85,
		GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS = 0x8E86,
		GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS = 0x8E89,
		GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS = 0x8E8A,
		GL_MAX_TESS_CONTROL_INPUT_COMPONENTS = 0x886C,
		GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS = 0x886D,
		GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E1E,
		GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E1F,
		GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER = 0x84F0,
		GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x84F1,
		GL_TESS_EVALUATION_SHADER = 0x8E87,
		GL_TESS_CONTROL_SHADER = 0x8E88,
	};
	extern void (*glPatchParameterfv)(GLenum pname, const GLfloat *values);
	extern void (*glPatchParameteri)(GLenum pname, GLint value);
	#endif // GL_ARB_tessellation_shader
	
	#ifdef GL_ARB_texture_barrier
	extern bool ext_GL_ARB_texture_barrier;
	extern void (*glTextureBarrier)();
	#endif // GL_ARB_texture_barrier
	
	#ifdef GL_ARB_texture_border_clamp
	extern bool ext_GL_ARB_texture_border_clamp;
	enum {
		GL_CLAMP_TO_BORDER_ARB = 0x812D,
	};
	#endif // GL_ARB_texture_border_clamp
	
	#ifdef GL_ARB_texture_buffer_object
	extern bool ext_GL_ARB_texture_buffer_object;
	enum {
		GL_TEXTURE_BUFFER_ARB = 0x8C2A,
		GL_MAX_TEXTURE_BUFFER_SIZE_ARB = 0x8C2B,
		GL_TEXTURE_BINDING_BUFFER_ARB = 0x8C2C,
		GL_TEXTURE_BUFFER_DATA_STORE_BINDING_ARB = 0x8C2D,
		GL_TEXTURE_BUFFER_FORMAT_ARB = 0x8C2E,
	};
	extern void (*glTexBufferARB)(GLenum target, GLenum internalformat, GLuint buffer);
	#endif // GL_ARB_texture_buffer_object
	
	#ifdef GL_ARB_texture_buffer_range
	extern bool ext_GL_ARB_texture_buffer_range;
	enum {
		GL_TEXTURE_BUFFER_OFFSET = 0x919D,
		GL_TEXTURE_BUFFER_SIZE = 0x919E,
		GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT = 0x919F,
	};
	extern void (*glTexBufferRange)(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
	#endif // GL_ARB_texture_buffer_range
	
	#ifdef GL_ARB_texture_compression
	extern bool ext_GL_ARB_texture_compression;
	enum {
		GL_TEXTURE_COMPRESSION_HINT_ARB = 0x84EF,
		GL_COMPRESSED_ALPHA_ARB = 0x84E9,
		GL_COMPRESSED_LUMINANCE_ARB = 0x84EA,
		GL_COMPRESSED_LUMINANCE_ALPHA_ARB = 0x84EB,
		GL_COMPRESSED_INTENSITY_ARB = 0x84EC,
		GL_COMPRESSED_RGB_ARB = 0x84ED,
		GL_COMPRESSED_RGBA_ARB = 0x84EE,
		GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB = 0x86A0,
		GL_TEXTURE_COMPRESSED_ARB = 0x86A1,
		GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB = 0x86A2,
		GL_COMPRESSED_TEXTURE_FORMATS_ARB = 0x86A3,
	};
	extern void (*glCompressedTexImage1DARB)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
	extern void (*glCompressedTexImage2DARB)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
	extern void (*glCompressedTexImage3DARB)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
	extern void (*glCompressedTexSubImage1DARB)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
	extern void (*glCompressedTexSubImage2DARB)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
	extern void (*glCompressedTexSubImage3DARB)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
	extern void (*glGetCompressedTexImageARB)(GLenum target, GLint level, void *img);
	#endif // GL_ARB_texture_compression
	
	#ifdef GL_ARB_texture_compression_bptc
	extern bool ext_GL_ARB_texture_compression_bptc;
	enum {
		GL_COMPRESSED_RGBA_BPTC_UNORM_ARB = 0x8E8C,
		GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB = 0x8E8D,
		GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB = 0x8E8E,
		GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB = 0x8E8F,
	};
	#endif // GL_ARB_texture_compression_bptc
	
	#ifdef GL_ARB_texture_cube_map
	extern bool ext_GL_ARB_texture_cube_map;
	enum {
		GL_NORMAL_MAP_ARB = 0x8511,
		GL_REFLECTION_MAP_ARB = 0x8512,
		GL_TEXTURE_CUBE_MAP_ARB = 0x8513,
		GL_TEXTURE_BINDING_CUBE_MAP_ARB = 0x8514,
		GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB = 0x8515,
		GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB = 0x8516,
		GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB = 0x8517,
		GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB = 0x8518,
		GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB = 0x8519,
		GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB = 0x851A,
		GL_PROXY_TEXTURE_CUBE_MAP_ARB = 0x851B,
		GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB = 0x851C,
	};
	#endif // GL_ARB_texture_cube_map
	
	#ifdef GL_ARB_texture_cube_map_array
	extern bool ext_GL_ARB_texture_cube_map_array;
	enum {
		GL_TEXTURE_CUBE_MAP_ARRAY_ARB = 0x9009,
		GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB = 0x900A,
		GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB = 0x900B,
		GL_SAMPLER_CUBE_MAP_ARRAY_ARB = 0x900C,
		GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB = 0x900D,
		GL_INT_SAMPLER_CUBE_MAP_ARRAY_ARB = 0x900E,
		GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB = 0x900F,
	};
	#endif // GL_ARB_texture_cube_map_array
	
	#ifdef GL_ARB_texture_env_combine
	extern bool ext_GL_ARB_texture_env_combine;
	enum {
		GL_COMBINE_ARB = 0x8570,
		GL_COMBINE_RGB_ARB = 0x8571,
		GL_COMBINE_ALPHA_ARB = 0x8572,
		GL_SOURCE0_RGB_ARB = 0x8580,
		GL_SOURCE1_RGB_ARB = 0x8581,
		GL_SOURCE2_RGB_ARB = 0x8582,
		GL_SOURCE0_ALPHA_ARB = 0x8588,
		GL_SOURCE1_ALPHA_ARB = 0x8589,
		GL_SOURCE2_ALPHA_ARB = 0x858A,
		GL_OPERAND0_RGB_ARB = 0x8590,
		GL_OPERAND1_RGB_ARB = 0x8591,
		GL_OPERAND2_RGB_ARB = 0x8592,
		GL_OPERAND0_ALPHA_ARB = 0x8598,
		GL_OPERAND1_ALPHA_ARB = 0x8599,
		GL_OPERAND2_ALPHA_ARB = 0x859A,
		GL_RGB_SCALE_ARB = 0x8573,
		GL_ADD_SIGNED_ARB = 0x8574,
		GL_INTERPOLATE_ARB = 0x8575,
		GL_SUBTRACT_ARB = 0x84E7,
		GL_CONSTANT_ARB = 0x8576,
		GL_PRIMARY_COLOR_ARB = 0x8577,
		GL_PREVIOUS_ARB = 0x8578,
	};
	#endif // GL_ARB_texture_env_combine
	
	#ifdef GL_ARB_texture_env_dot3
	extern bool ext_GL_ARB_texture_env_dot3;
	enum {
		GL_DOT3_RGB_ARB = 0x86AE,
		GL_DOT3_RGBA_ARB = 0x86AF,
	};
	#endif // GL_ARB_texture_env_dot3
	
	#ifdef GL_ARB_texture_filter_minmax
	extern bool ext_GL_ARB_texture_filter_minmax;
	enum {
		GL_TEXTURE_REDUCTION_MODE_ARB = 0x9366,
		GL_WEIGHTED_AVERAGE_ARB = 0x9367,
	};
	#endif // GL_ARB_texture_filter_minmax
	
	#ifdef GL_ARB_texture_float
	extern bool ext_GL_ARB_texture_float;
	enum {
		GL_TEXTURE_RED_TYPE_ARB = 0x8C10,
		GL_TEXTURE_GREEN_TYPE_ARB = 0x8C11,
		GL_TEXTURE_BLUE_TYPE_ARB = 0x8C12,
		GL_TEXTURE_ALPHA_TYPE_ARB = 0x8C13,
		GL_TEXTURE_LUMINANCE_TYPE_ARB = 0x8C14,
		GL_TEXTURE_INTENSITY_TYPE_ARB = 0x8C15,
		GL_TEXTURE_DEPTH_TYPE_ARB = 0x8C16,
		GL_UNSIGNED_NORMALIZED_ARB = 0x8C17,
		GL_RGBA32F_ARB = 0x8814,
		GL_RGB32F_ARB = 0x8815,
		GL_ALPHA32F_ARB = 0x8816,
		GL_INTENSITY32F_ARB = 0x8817,
		GL_LUMINANCE32F_ARB = 0x8818,
		GL_LUMINANCE_ALPHA32F_ARB = 0x8819,
		GL_RGBA16F_ARB = 0x881A,
		GL_RGB16F_ARB = 0x881B,
		GL_ALPHA16F_ARB = 0x881C,
		GL_INTENSITY16F_ARB = 0x881D,
		GL_LUMINANCE16F_ARB = 0x881E,
		GL_LUMINANCE_ALPHA16F_ARB = 0x881F,
	};
	#endif // GL_ARB_texture_float
	
	#ifdef GL_ARB_texture_gather
	extern bool ext_GL_ARB_texture_gather;
	enum {
		GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB = 0x8E5E,
		GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB = 0x8E5F,
		GL_MAX_PROGRAM_TEXTURE_GATHER_COMPONENTS_ARB = 0x8F9F,
	};
	#endif // GL_ARB_texture_gather
	
	#ifdef GL_ARB_texture_mirror_clamp_to_edge
	extern bool ext_GL_ARB_texture_mirror_clamp_to_edge;
	enum {
		GL_MIRROR_CLAMP_TO_EDGE = 0x8743,
	};
	#endif // GL_ARB_texture_mirror_clamp_to_edge
	
	#ifdef GL_ARB_texture_mirrored_repeat
	extern bool ext_GL_ARB_texture_mirrored_repeat;
	enum {
		GL_MIRRORED_REPEAT_ARB = 0x8370,
	};
	#endif // GL_ARB_texture_mirrored_repeat
	
	#ifdef GL_ARB_texture_rectangle
	extern bool ext_GL_ARB_texture_rectangle;
	enum {
		GL_TEXTURE_RECTANGLE_ARB = 0x84F5,
		GL_TEXTURE_BINDING_RECTANGLE_ARB = 0x84F6,
		GL_PROXY_TEXTURE_RECTANGLE_ARB = 0x84F7,
		GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB = 0x84F8,
	};
	#endif // GL_ARB_texture_rectangle
	
	#ifdef GL_ARB_texture_storage
	extern bool ext_GL_ARB_texture_storage;
	enum {
		GL_TEXTURE_IMMUTABLE_FORMAT = 0x912F,
	};
	extern void (*glTexStorage1D)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
	extern void (*glTexStorage2D)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
	extern void (*glTexStorage3D)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
	#endif // GL_ARB_texture_storage
	
	#ifdef GL_ARB_texture_storage_multisample
	extern bool ext_GL_ARB_texture_storage_multisample;
	extern void (*glTexStorage2DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
	extern void (*glTexStorage3DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
	#endif // GL_ARB_texture_storage_multisample
	
	#ifdef GL_ARB_texture_view
	extern bool ext_GL_ARB_texture_view;
	enum {
		GL_TEXTURE_VIEW_MIN_LEVEL = 0x82DB,
		GL_TEXTURE_VIEW_NUM_LEVELS = 0x82DC,
		GL_TEXTURE_VIEW_MIN_LAYER = 0x82DD,
		GL_TEXTURE_VIEW_NUM_LAYERS = 0x82DE,
		GL_TEXTURE_IMMUTABLE_LEVELS = 0x82DF,
	};
	extern void (*glTextureView)(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
	#endif // GL_ARB_texture_view
	
	#ifdef GL_ARB_transform_feedback2
	extern bool ext_GL_ARB_transform_feedback2;
	enum {
		GL_TRANSFORM_FEEDBACK = 0x8E22,
		GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED = 0x8E23,
		GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE = 0x8E24,
		GL_TRANSFORM_FEEDBACK_BINDING = 0x8E25,
	};
	extern void (*glBindTransformFeedback)(GLenum target, GLuint id);
	extern void (*glDeleteTransformFeedbacks)(GLsizei n, const GLuint *ids);
	extern void (*glDrawTransformFeedback)(GLenum mode, GLuint id);
	extern void (*glGenTransformFeedbacks)(GLsizei n, GLuint *ids);
	extern GLboolean (*glIsTransformFeedback)(GLuint id);
	extern void (*glPauseTransformFeedback)();
	extern void (*glResumeTransformFeedback)();
	#endif // GL_ARB_transform_feedback2
	
	#ifdef GL_ARB_transform_feedback3
	extern bool ext_GL_ARB_transform_feedback3;
	enum {
		GL_MAX_TRANSFORM_FEEDBACK_BUFFERS = 0x8E70,
		#if !defined(GL_ARB_gpu_shader5)
		GL_MAX_VERTEX_STREAMS = 0x8E71,
		#endif
	};
	extern void (*glBeginQueryIndexed)(GLenum target, GLuint index, GLuint id);
	extern void (*glDrawTransformFeedbackStream)(GLenum mode, GLuint id, GLuint stream);
	extern void (*glEndQueryIndexed)(GLenum target, GLuint index);
	extern void (*glGetQueryIndexediv)(GLenum target, GLuint index, GLenum pname, GLint *params);
	#endif // GL_ARB_transform_feedback3
	
	#ifdef GL_ARB_transform_feedback_instanced
	extern bool ext_GL_ARB_transform_feedback_instanced;
	extern void (*glDrawTransformFeedbackInstanced)(GLenum mode, GLuint id, GLsizei instancecount);
	extern void (*glDrawTransformFeedbackStreamInstanced)(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
	#endif // GL_ARB_transform_feedback_instanced
	
	#ifdef GL_ARB_transform_feedback_overflow_query
	extern bool ext_GL_ARB_transform_feedback_overflow_query;
	enum {
		GL_TRANSFORM_FEEDBACK_OVERFLOW_ARB = 0x82EC,
		GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW_ARB = 0x82ED,
	};
	#endif // GL_ARB_transform_feedback_overflow_query
	
	#ifdef GL_ARB_transpose_matrix
	extern bool ext_GL_ARB_transpose_matrix;
	enum {
		GL_TRANSPOSE_MODELVIEW_MATRIX_ARB = 0x84E3,
		GL_TRANSPOSE_PROJECTION_MATRIX_ARB = 0x84E4,
		GL_TRANSPOSE_TEXTURE_MATRIX_ARB = 0x84E5,
		GL_TRANSPOSE_COLOR_MATRIX_ARB = 0x84E6,
	};
	extern void (*glLoadTransposeMatrixdARB)(const GLdouble *m);
	extern void (*glLoadTransposeMatrixfARB)(const GLfloat *m);
	extern void (*glMultTransposeMatrixdARB)(const GLdouble *m);
	extern void (*glMultTransposeMatrixfARB)(const GLfloat *m);
	#endif // GL_ARB_transpose_matrix
	
	#ifdef GL_ARB_vertex_attrib_64bit
	extern bool ext_GL_ARB_vertex_attrib_64bit;
	enum {
		#if !defined(GL_ARB_gpu_shader_fp64)
		GL_DOUBLE_VEC2 = 0x8FFC,
		GL_DOUBLE_VEC3 = 0x8FFD,
		GL_DOUBLE_VEC4 = 0x8FFE,
		GL_DOUBLE_MAT2 = 0x8F46,
		GL_DOUBLE_MAT3 = 0x8F47,
		GL_DOUBLE_MAT4 = 0x8F48,
		GL_DOUBLE_MAT2x3 = 0x8F49,
		GL_DOUBLE_MAT2x4 = 0x8F4A,
		GL_DOUBLE_MAT3x2 = 0x8F4B,
		GL_DOUBLE_MAT3x4 = 0x8F4C,
		GL_DOUBLE_MAT4x2 = 0x8F4D,
		GL_DOUBLE_MAT4x3 = 0x8F4E,
		#endif
	};
	extern void (*glGetVertexAttribLdv)(GLuint index, GLenum pname, GLdouble *params);
	extern void (*glVertexAttribL1d)(GLuint index, GLdouble x);
	extern void (*glVertexAttribL1dv)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttribL2d)(GLuint index, GLdouble x, GLdouble y);
	extern void (*glVertexAttribL2dv)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttribL3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
	extern void (*glVertexAttribL3dv)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttribL4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glVertexAttribL4dv)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttribLPointer)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
	#endif // GL_ARB_vertex_attrib_64bit
	
	#ifdef GL_ARB_vertex_attrib_binding
	extern bool ext_GL_ARB_vertex_attrib_binding;
	enum {
		GL_VERTEX_ATTRIB_BINDING = 0x82D4,
		GL_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D5,
		GL_VERTEX_BINDING_DIVISOR = 0x82D6,
		GL_VERTEX_BINDING_OFFSET = 0x82D7,
		GL_VERTEX_BINDING_STRIDE = 0x82D8,
		GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D9,
		GL_MAX_VERTEX_ATTRIB_BINDINGS = 0x82DA,
	};
	extern void (*glBindVertexBuffer)(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
	extern void (*glVertexAttribBinding)(GLuint attribindex, GLuint bindingindex);
	extern void (*glVertexAttribFormat)(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
	extern void (*glVertexAttribIFormat)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
	extern void (*glVertexAttribLFormat)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
	extern void (*glVertexBindingDivisor)(GLuint bindingindex, GLuint divisor);
	#endif // GL_ARB_vertex_attrib_binding
	
	#ifdef GL_ARB_vertex_blend
	extern bool ext_GL_ARB_vertex_blend;
	enum {
		GL_MAX_VERTEX_UNITS_ARB = 0x86A4,
		GL_ACTIVE_VERTEX_UNITS_ARB = 0x86A5,
		GL_WEIGHT_SUM_UNITY_ARB = 0x86A6,
		GL_VERTEX_BLEND_ARB = 0x86A7,
		GL_CURRENT_WEIGHT_ARB = 0x86A8,
		GL_WEIGHT_ARRAY_TYPE_ARB = 0x86A9,
		GL_WEIGHT_ARRAY_STRIDE_ARB = 0x86AA,
		GL_WEIGHT_ARRAY_SIZE_ARB = 0x86AB,
		GL_WEIGHT_ARRAY_POINTER_ARB = 0x86AC,
		GL_WEIGHT_ARRAY_ARB = 0x86AD,
		GL_MODELVIEW0_ARB = 0x1700,
		GL_MODELVIEW1_ARB = 0x850A,
		GL_MODELVIEW2_ARB = 0x8722,
		GL_MODELVIEW3_ARB = 0x8723,
		GL_MODELVIEW4_ARB = 0x8724,
		GL_MODELVIEW5_ARB = 0x8725,
		GL_MODELVIEW6_ARB = 0x8726,
		GL_MODELVIEW7_ARB = 0x8727,
		GL_MODELVIEW8_ARB = 0x8728,
		GL_MODELVIEW9_ARB = 0x8729,
		GL_MODELVIEW10_ARB = 0x872A,
		GL_MODELVIEW11_ARB = 0x872B,
		GL_MODELVIEW12_ARB = 0x872C,
		GL_MODELVIEW13_ARB = 0x872D,
		GL_MODELVIEW14_ARB = 0x872E,
		GL_MODELVIEW15_ARB = 0x872F,
		GL_MODELVIEW16_ARB = 0x8730,
		GL_MODELVIEW17_ARB = 0x8731,
		GL_MODELVIEW18_ARB = 0x8732,
		GL_MODELVIEW19_ARB = 0x8733,
		GL_MODELVIEW20_ARB = 0x8734,
		GL_MODELVIEW21_ARB = 0x8735,
		GL_MODELVIEW22_ARB = 0x8736,
		GL_MODELVIEW23_ARB = 0x8737,
		GL_MODELVIEW24_ARB = 0x8738,
		GL_MODELVIEW25_ARB = 0x8739,
		GL_MODELVIEW26_ARB = 0x873A,
		GL_MODELVIEW27_ARB = 0x873B,
		GL_MODELVIEW28_ARB = 0x873C,
		GL_MODELVIEW29_ARB = 0x873D,
		GL_MODELVIEW30_ARB = 0x873E,
		GL_MODELVIEW31_ARB = 0x873F,
	};
	extern void (*glVertexBlendARB)(GLint count);
	extern void (*glWeightPointerARB)(GLint size, GLenum type, GLsizei stride, const void *pointer);
	extern void (*glWeightbvARB)(GLint size, const GLbyte *weights);
	extern void (*glWeightdvARB)(GLint size, const GLdouble *weights);
	extern void (*glWeightfvARB)(GLint size, const GLfloat *weights);
	extern void (*glWeightivARB)(GLint size, const GLint *weights);
	extern void (*glWeightsvARB)(GLint size, const GLshort *weights);
	extern void (*glWeightubvARB)(GLint size, const GLubyte *weights);
	extern void (*glWeightuivARB)(GLint size, const GLuint *weights);
	extern void (*glWeightusvARB)(GLint size, const GLushort *weights);
	#endif // GL_ARB_vertex_blend
	
	#ifdef GL_ARB_vertex_buffer_object
	extern bool ext_GL_ARB_vertex_buffer_object;
	enum {
		GL_BUFFER_SIZE_ARB = 0x8764,
		GL_BUFFER_USAGE_ARB = 0x8765,
		GL_ARRAY_BUFFER_ARB = 0x8892,
		GL_ELEMENT_ARRAY_BUFFER_ARB = 0x8893,
		GL_ARRAY_BUFFER_BINDING_ARB = 0x8894,
		GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB = 0x8895,
		GL_VERTEX_ARRAY_BUFFER_BINDING_ARB = 0x8896,
		GL_NORMAL_ARRAY_BUFFER_BINDING_ARB = 0x8897,
		GL_COLOR_ARRAY_BUFFER_BINDING_ARB = 0x8898,
		GL_INDEX_ARRAY_BUFFER_BINDING_ARB = 0x8899,
		GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB = 0x889A,
		GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB = 0x889B,
		GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB = 0x889C,
		GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB = 0x889D,
		GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB = 0x889E,
		GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB = 0x889F,
		GL_READ_ONLY_ARB = 0x88B8,
		GL_WRITE_ONLY_ARB = 0x88B9,
		GL_READ_WRITE_ARB = 0x88BA,
		GL_BUFFER_ACCESS_ARB = 0x88BB,
		GL_BUFFER_MAPPED_ARB = 0x88BC,
		GL_BUFFER_MAP_POINTER_ARB = 0x88BD,
		GL_STREAM_DRAW_ARB = 0x88E0,
		GL_STREAM_READ_ARB = 0x88E1,
		GL_STREAM_COPY_ARB = 0x88E2,
		GL_STATIC_DRAW_ARB = 0x88E4,
		GL_STATIC_READ_ARB = 0x88E5,
		GL_STATIC_COPY_ARB = 0x88E6,
		GL_DYNAMIC_DRAW_ARB = 0x88E8,
		GL_DYNAMIC_READ_ARB = 0x88E9,
		GL_DYNAMIC_COPY_ARB = 0x88EA,
	};
	extern void (*glBindBufferARB)(GLenum target, GLuint buffer);
	extern void (*glBufferDataARB)(GLenum target, GLsizeiptrARB size, const void *data, GLenum usage);
	extern void (*glBufferSubDataARB)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void *data);
	extern void (*glDeleteBuffersARB)(GLsizei n, const GLuint *buffers);
	extern void (*glGenBuffersARB)(GLsizei n, GLuint *buffers);
	extern void (*glGetBufferParameterivARB)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetBufferPointervARB)(GLenum target, GLenum pname, void **params);
	extern void (*glGetBufferSubDataARB)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void *data);
	extern GLboolean (*glIsBufferARB)(GLuint buffer);
	extern void *(*glMapBufferARB)(GLenum target, GLenum access);
	extern GLboolean (*glUnmapBufferARB)(GLenum target);
	#endif // GL_ARB_vertex_buffer_object
	
	#ifdef GL_ARB_vertex_program
	extern bool ext_GL_ARB_vertex_program;
	enum {
		GL_COLOR_SUM_ARB = 0x8458,
		GL_VERTEX_PROGRAM_ARB = 0x8620,
		GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB = 0x8622,
		GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB = 0x8623,
		GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB = 0x8624,
		GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB = 0x8625,
		GL_CURRENT_VERTEX_ATTRIB_ARB = 0x8626,
		#if !defined(GL_ARB_fragment_program)
		GL_PROGRAM_LENGTH_ARB = 0x8627,
		GL_PROGRAM_STRING_ARB = 0x8628,
		GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB = 0x862E,
		GL_MAX_PROGRAM_MATRICES_ARB = 0x862F,
		GL_CURRENT_MATRIX_STACK_DEPTH_ARB = 0x8640,
		GL_CURRENT_MATRIX_ARB = 0x8641,
		#endif
		GL_VERTEX_PROGRAM_POINT_SIZE_ARB = 0x8642,
		GL_VERTEX_PROGRAM_TWO_SIDE_ARB = 0x8643,
		GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB = 0x8645,
		#if !defined(GL_ARB_fragment_program)
		GL_PROGRAM_ERROR_POSITION_ARB = 0x864B,
		GL_PROGRAM_BINDING_ARB = 0x8677,
		#endif
		GL_MAX_VERTEX_ATTRIBS_ARB = 0x8869,
		GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB = 0x886A,
		#if !defined(GL_ARB_fragment_program)
		GL_PROGRAM_ERROR_STRING_ARB = 0x8874,
		GL_PROGRAM_FORMAT_ASCII_ARB = 0x8875,
		GL_PROGRAM_FORMAT_ARB = 0x8876,
		GL_PROGRAM_INSTRUCTIONS_ARB = 0x88A0,
		GL_MAX_PROGRAM_INSTRUCTIONS_ARB = 0x88A1,
		GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB = 0x88A2,
		GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB = 0x88A3,
		GL_PROGRAM_TEMPORARIES_ARB = 0x88A4,
		GL_MAX_PROGRAM_TEMPORARIES_ARB = 0x88A5,
		GL_PROGRAM_NATIVE_TEMPORARIES_ARB = 0x88A6,
		GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB = 0x88A7,
		GL_PROGRAM_PARAMETERS_ARB = 0x88A8,
		GL_MAX_PROGRAM_PARAMETERS_ARB = 0x88A9,
		GL_PROGRAM_NATIVE_PARAMETERS_ARB = 0x88AA,
		GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB = 0x88AB,
		GL_PROGRAM_ATTRIBS_ARB = 0x88AC,
		GL_MAX_PROGRAM_ATTRIBS_ARB = 0x88AD,
		GL_PROGRAM_NATIVE_ATTRIBS_ARB = 0x88AE,
		GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB = 0x88AF,
		#endif
		GL_PROGRAM_ADDRESS_REGISTERS_ARB = 0x88B0,
		GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB = 0x88B1,
		GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB = 0x88B2,
		GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB = 0x88B3,
		#if !defined(GL_ARB_fragment_program)
		GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB = 0x88B4,
		GL_MAX_PROGRAM_ENV_PARAMETERS_ARB = 0x88B5,
		GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB = 0x88B6,
		GL_TRANSPOSE_CURRENT_MATRIX_ARB = 0x88B7,
		GL_MATRIX0_ARB = 0x88C0,
		GL_MATRIX1_ARB = 0x88C1,
		GL_MATRIX2_ARB = 0x88C2,
		GL_MATRIX3_ARB = 0x88C3,
		GL_MATRIX4_ARB = 0x88C4,
		GL_MATRIX5_ARB = 0x88C5,
		GL_MATRIX6_ARB = 0x88C6,
		GL_MATRIX7_ARB = 0x88C7,
		GL_MATRIX8_ARB = 0x88C8,
		GL_MATRIX9_ARB = 0x88C9,
		GL_MATRIX10_ARB = 0x88CA,
		GL_MATRIX11_ARB = 0x88CB,
		GL_MATRIX12_ARB = 0x88CC,
		GL_MATRIX13_ARB = 0x88CD,
		GL_MATRIX14_ARB = 0x88CE,
		GL_MATRIX15_ARB = 0x88CF,
		GL_MATRIX16_ARB = 0x88D0,
		GL_MATRIX17_ARB = 0x88D1,
		GL_MATRIX18_ARB = 0x88D2,
		GL_MATRIX19_ARB = 0x88D3,
		GL_MATRIX20_ARB = 0x88D4,
		GL_MATRIX21_ARB = 0x88D5,
		GL_MATRIX22_ARB = 0x88D6,
		GL_MATRIX23_ARB = 0x88D7,
		GL_MATRIX24_ARB = 0x88D8,
		GL_MATRIX25_ARB = 0x88D9,
		GL_MATRIX26_ARB = 0x88DA,
		GL_MATRIX27_ARB = 0x88DB,
		GL_MATRIX28_ARB = 0x88DC,
		GL_MATRIX29_ARB = 0x88DD,
		GL_MATRIX30_ARB = 0x88DE,
		GL_MATRIX31_ARB = 0x88DF,
		#endif
	};
	#if !defined(GL_ARB_fragment_program)
	extern void (*glBindProgramARB)(GLenum target, GLuint program);
	extern void (*glDeleteProgramsARB)(GLsizei n, const GLuint *programs);
	#endif
	extern void (*glDisableVertexAttribArrayARB)(GLuint index);
	extern void (*glEnableVertexAttribArrayARB)(GLuint index);
	#if !defined(GL_ARB_fragment_program)
	extern void (*glGenProgramsARB)(GLsizei n, GLuint *programs);
	extern void (*glGetProgramEnvParameterdvARB)(GLenum target, GLuint index, GLdouble *params);
	extern void (*glGetProgramEnvParameterfvARB)(GLenum target, GLuint index, GLfloat *params);
	extern void (*glGetProgramLocalParameterdvARB)(GLenum target, GLuint index, GLdouble *params);
	extern void (*glGetProgramLocalParameterfvARB)(GLenum target, GLuint index, GLfloat *params);
	extern void (*glGetProgramStringARB)(GLenum target, GLenum pname, void *string);
	extern void (*glGetProgramivARB)(GLenum target, GLenum pname, GLint *params);
	#endif
	extern void (*glGetVertexAttribPointervARB)(GLuint index, GLenum pname, void **pointer);
	extern void (*glGetVertexAttribdvARB)(GLuint index, GLenum pname, GLdouble *params);
	extern void (*glGetVertexAttribfvARB)(GLuint index, GLenum pname, GLfloat *params);
	extern void (*glGetVertexAttribivARB)(GLuint index, GLenum pname, GLint *params);
	#if !defined(GL_ARB_fragment_program)
	extern GLboolean (*glIsProgramARB)(GLuint program);
	extern void (*glProgramEnvParameter4dARB)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glProgramEnvParameter4dvARB)(GLenum target, GLuint index, const GLdouble *params);
	extern void (*glProgramEnvParameter4fARB)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glProgramEnvParameter4fvARB)(GLenum target, GLuint index, const GLfloat *params);
	extern void (*glProgramLocalParameter4dARB)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glProgramLocalParameter4dvARB)(GLenum target, GLuint index, const GLdouble *params);
	extern void (*glProgramLocalParameter4fARB)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glProgramLocalParameter4fvARB)(GLenum target, GLuint index, const GLfloat *params);
	extern void (*glProgramStringARB)(GLenum target, GLenum format, GLsizei len, const void *string);
	#endif
	extern void (*glVertexAttrib1dARB)(GLuint index, GLdouble x);
	extern void (*glVertexAttrib1dvARB)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib1fARB)(GLuint index, GLfloat x);
	extern void (*glVertexAttrib1fvARB)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib1sARB)(GLuint index, GLshort x);
	extern void (*glVertexAttrib1svARB)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib2dARB)(GLuint index, GLdouble x, GLdouble y);
	extern void (*glVertexAttrib2dvARB)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib2fARB)(GLuint index, GLfloat x, GLfloat y);
	extern void (*glVertexAttrib2fvARB)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib2sARB)(GLuint index, GLshort x, GLshort y);
	extern void (*glVertexAttrib2svARB)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib3dARB)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
	extern void (*glVertexAttrib3dvARB)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib3fARB)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glVertexAttrib3fvARB)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib3sARB)(GLuint index, GLshort x, GLshort y, GLshort z);
	extern void (*glVertexAttrib3svARB)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib4NbvARB)(GLuint index, const GLbyte *v);
	extern void (*glVertexAttrib4NivARB)(GLuint index, const GLint *v);
	extern void (*glVertexAttrib4NsvARB)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib4NubARB)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
	extern void (*glVertexAttrib4NubvARB)(GLuint index, const GLubyte *v);
	extern void (*glVertexAttrib4NuivARB)(GLuint index, const GLuint *v);
	extern void (*glVertexAttrib4NusvARB)(GLuint index, const GLushort *v);
	extern void (*glVertexAttrib4bvARB)(GLuint index, const GLbyte *v);
	extern void (*glVertexAttrib4dARB)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glVertexAttrib4dvARB)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib4fARB)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glVertexAttrib4fvARB)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib4ivARB)(GLuint index, const GLint *v);
	extern void (*glVertexAttrib4sARB)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
	extern void (*glVertexAttrib4svARB)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib4ubvARB)(GLuint index, const GLubyte *v);
	extern void (*glVertexAttrib4uivARB)(GLuint index, const GLuint *v);
	extern void (*glVertexAttrib4usvARB)(GLuint index, const GLushort *v);
	extern void (*glVertexAttribPointerARB)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
	#endif // GL_ARB_vertex_program
	
	#ifdef GL_ARB_vertex_shader
	extern bool ext_GL_ARB_vertex_shader;
	enum {
		GL_VERTEX_SHADER_ARB = 0x8B31,
		GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB = 0x8B4A,
		GL_MAX_VARYING_FLOATS_ARB = 0x8B4B,
		GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB = 0x8B4C,
		GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB = 0x8B4D,
		GL_OBJECT_ACTIVE_ATTRIBUTES_ARB = 0x8B89,
		GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB = 0x8B8A,
		#if !defined(GL_ARB_vertex_program)
		GL_MAX_VERTEX_ATTRIBS_ARB = 0x8869,
		#endif
		#if !defined(GL_ARB_fragment_program)
		GL_MAX_TEXTURE_IMAGE_UNITS_ARB = 0x8872,
		GL_MAX_TEXTURE_COORDS_ARB = 0x8871,
		#endif
		#if !defined(GL_ARB_vertex_program)
		GL_VERTEX_PROGRAM_POINT_SIZE_ARB = 0x8642,
		GL_VERTEX_PROGRAM_TWO_SIDE_ARB = 0x8643,
		GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB = 0x8622,
		GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB = 0x8623,
		GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB = 0x8624,
		GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB = 0x8625,
		GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB = 0x886A,
		GL_CURRENT_VERTEX_ATTRIB_ARB = 0x8626,
		GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB = 0x8645,
		#endif
		#if !defined(GL_ARB_shader_objects)
		GL_FLOAT_VEC2_ARB = 0x8B50,
		GL_FLOAT_VEC3_ARB = 0x8B51,
		GL_FLOAT_VEC4_ARB = 0x8B52,
		GL_FLOAT_MAT2_ARB = 0x8B5A,
		GL_FLOAT_MAT3_ARB = 0x8B5B,
		GL_FLOAT_MAT4_ARB = 0x8B5C,
		#endif
	};
	extern void (*glBindAttribLocationARB)(GLhandleARB programObj, GLuint index, const GLcharARB *name);
	#if !defined(GL_ARB_vertex_program)
	extern void (*glDisableVertexAttribArrayARB)(GLuint index);
	extern void (*glEnableVertexAttribArrayARB)(GLuint index);
	#endif
	extern void (*glGetActiveAttribARB)(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
	extern GLint (*glGetAttribLocationARB)(GLhandleARB programObj, const GLcharARB *name);
	#if !defined(GL_ARB_vertex_program)
	extern void (*glGetVertexAttribPointervARB)(GLuint index, GLenum pname, void **pointer);
	extern void (*glGetVertexAttribdvARB)(GLuint index, GLenum pname, GLdouble *params);
	extern void (*glGetVertexAttribfvARB)(GLuint index, GLenum pname, GLfloat *params);
	extern void (*glGetVertexAttribivARB)(GLuint index, GLenum pname, GLint *params);
	extern void (*glVertexAttrib1dARB)(GLuint index, GLdouble x);
	extern void (*glVertexAttrib1dvARB)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib1fARB)(GLuint index, GLfloat x);
	extern void (*glVertexAttrib1fvARB)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib1sARB)(GLuint index, GLshort x);
	extern void (*glVertexAttrib1svARB)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib2dARB)(GLuint index, GLdouble x, GLdouble y);
	extern void (*glVertexAttrib2dvARB)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib2fARB)(GLuint index, GLfloat x, GLfloat y);
	extern void (*glVertexAttrib2fvARB)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib2sARB)(GLuint index, GLshort x, GLshort y);
	extern void (*glVertexAttrib2svARB)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib3dARB)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
	extern void (*glVertexAttrib3dvARB)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib3fARB)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glVertexAttrib3fvARB)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib3sARB)(GLuint index, GLshort x, GLshort y, GLshort z);
	extern void (*glVertexAttrib3svARB)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib4NbvARB)(GLuint index, const GLbyte *v);
	extern void (*glVertexAttrib4NivARB)(GLuint index, const GLint *v);
	extern void (*glVertexAttrib4NsvARB)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib4NubARB)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
	extern void (*glVertexAttrib4NubvARB)(GLuint index, const GLubyte *v);
	extern void (*glVertexAttrib4NuivARB)(GLuint index, const GLuint *v);
	extern void (*glVertexAttrib4NusvARB)(GLuint index, const GLushort *v);
	extern void (*glVertexAttrib4bvARB)(GLuint index, const GLbyte *v);
	extern void (*glVertexAttrib4dARB)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glVertexAttrib4dvARB)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib4fARB)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glVertexAttrib4fvARB)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib4ivARB)(GLuint index, const GLint *v);
	extern void (*glVertexAttrib4sARB)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
	extern void (*glVertexAttrib4svARB)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib4ubvARB)(GLuint index, const GLubyte *v);
	extern void (*glVertexAttrib4uivARB)(GLuint index, const GLuint *v);
	extern void (*glVertexAttrib4usvARB)(GLuint index, const GLushort *v);
	extern void (*glVertexAttribPointerARB)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
	#endif
	#endif // GL_ARB_vertex_shader
	
	#ifdef GL_ARB_vertex_type_2_10_10_10_rev
	extern bool ext_GL_ARB_vertex_type_2_10_10_10_rev;
	extern void (*glColorP3ui)(GLenum type, GLuint color);
	extern void (*glColorP3uiv)(GLenum type, const GLuint *color);
	extern void (*glColorP4ui)(GLenum type, GLuint color);
	extern void (*glColorP4uiv)(GLenum type, const GLuint *color);
	extern void (*glMultiTexCoordP1ui)(GLenum texture, GLenum type, GLuint coords);
	extern void (*glMultiTexCoordP1uiv)(GLenum texture, GLenum type, const GLuint *coords);
	extern void (*glMultiTexCoordP2ui)(GLenum texture, GLenum type, GLuint coords);
	extern void (*glMultiTexCoordP2uiv)(GLenum texture, GLenum type, const GLuint *coords);
	extern void (*glMultiTexCoordP3ui)(GLenum texture, GLenum type, GLuint coords);
	extern void (*glMultiTexCoordP3uiv)(GLenum texture, GLenum type, const GLuint *coords);
	extern void (*glMultiTexCoordP4ui)(GLenum texture, GLenum type, GLuint coords);
	extern void (*glMultiTexCoordP4uiv)(GLenum texture, GLenum type, const GLuint *coords);
	extern void (*glNormalP3ui)(GLenum type, GLuint coords);
	extern void (*glNormalP3uiv)(GLenum type, const GLuint *coords);
	extern void (*glSecondaryColorP3ui)(GLenum type, GLuint color);
	extern void (*glSecondaryColorP3uiv)(GLenum type, const GLuint *color);
	extern void (*glTexCoordP1ui)(GLenum type, GLuint coords);
	extern void (*glTexCoordP1uiv)(GLenum type, const GLuint *coords);
	extern void (*glTexCoordP2ui)(GLenum type, GLuint coords);
	extern void (*glTexCoordP2uiv)(GLenum type, const GLuint *coords);
	extern void (*glTexCoordP3ui)(GLenum type, GLuint coords);
	extern void (*glTexCoordP3uiv)(GLenum type, const GLuint *coords);
	extern void (*glTexCoordP4ui)(GLenum type, GLuint coords);
	extern void (*glTexCoordP4uiv)(GLenum type, const GLuint *coords);
	extern void (*glVertexP2ui)(GLenum type, GLuint value);
	extern void (*glVertexP2uiv)(GLenum type, const GLuint *value);
	extern void (*glVertexP3ui)(GLenum type, GLuint value);
	extern void (*glVertexP3uiv)(GLenum type, const GLuint *value);
	extern void (*glVertexP4ui)(GLenum type, GLuint value);
	extern void (*glVertexP4uiv)(GLenum type, const GLuint *value);
	#endif // GL_ARB_vertex_type_2_10_10_10_rev
	
	#ifdef GL_ARB_viewport_array
	extern bool ext_GL_ARB_viewport_array;
	enum {
		GL_MAX_VIEWPORTS = 0x825B,
		GL_VIEWPORT_SUBPIXEL_BITS = 0x825C,
		GL_VIEWPORT_BOUNDS_RANGE = 0x825D,
		GL_LAYER_PROVOKING_VERTEX = 0x825E,
		GL_VIEWPORT_INDEX_PROVOKING_VERTEX = 0x825F,
		GL_UNDEFINED_VERTEX = 0x8260,
	};
	extern void (*glDepthRangeArrayv)(GLuint first, GLsizei count, const GLdouble *v);
	extern void (*glDepthRangeIndexed)(GLuint index, GLdouble n, GLdouble f);
	extern void (*glGetDoublei_v)(GLenum target, GLuint index, GLdouble *data);
	extern void (*glGetFloati_v)(GLenum target, GLuint index, GLfloat *data);
	extern void (*glScissorArrayv)(GLuint first, GLsizei count, const GLint *v);
	extern void (*glScissorIndexed)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
	extern void (*glScissorIndexedv)(GLuint index, const GLint *v);
	extern void (*glViewportArrayv)(GLuint first, GLsizei count, const GLfloat *v);
	extern void (*glViewportIndexedf)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
	extern void (*glViewportIndexedfv)(GLuint index, const GLfloat *v);
	#endif // GL_ARB_viewport_array
	
	#ifdef GL_ARB_window_pos
	extern bool ext_GL_ARB_window_pos;
	extern void (*glWindowPos2dARB)(GLdouble x, GLdouble y);
	extern void (*glWindowPos2dvARB)(const GLdouble *v);
	extern void (*glWindowPos2fARB)(GLfloat x, GLfloat y);
	extern void (*glWindowPos2fvARB)(const GLfloat *v);
	extern void (*glWindowPos2iARB)(GLint x, GLint y);
	extern void (*glWindowPos2ivARB)(const GLint *v);
	extern void (*glWindowPos2sARB)(GLshort x, GLshort y);
	extern void (*glWindowPos2svARB)(const GLshort *v);
	extern void (*glWindowPos3dARB)(GLdouble x, GLdouble y, GLdouble z);
	extern void (*glWindowPos3dvARB)(const GLdouble *v);
	extern void (*glWindowPos3fARB)(GLfloat x, GLfloat y, GLfloat z);
	extern void (*glWindowPos3fvARB)(const GLfloat *v);
	extern void (*glWindowPos3iARB)(GLint x, GLint y, GLint z);
	extern void (*glWindowPos3ivARB)(const GLint *v);
	extern void (*glWindowPos3sARB)(GLshort x, GLshort y, GLshort z);
	extern void (*glWindowPos3svARB)(const GLshort *v);
	#endif // GL_ARB_window_pos
	
	#ifdef GL_ATI_draw_buffers
	extern bool ext_GL_ATI_draw_buffers;
	enum {
		GL_MAX_DRAW_BUFFERS_ATI = 0x8824,
		GL_DRAW_BUFFER0_ATI = 0x8825,
		GL_DRAW_BUFFER1_ATI = 0x8826,
		GL_DRAW_BUFFER2_ATI = 0x8827,
		GL_DRAW_BUFFER3_ATI = 0x8828,
		GL_DRAW_BUFFER4_ATI = 0x8829,
		GL_DRAW_BUFFER5_ATI = 0x882A,
		GL_DRAW_BUFFER6_ATI = 0x882B,
		GL_DRAW_BUFFER7_ATI = 0x882C,
		GL_DRAW_BUFFER8_ATI = 0x882D,
		GL_DRAW_BUFFER9_ATI = 0x882E,
		GL_DRAW_BUFFER10_ATI = 0x882F,
		GL_DRAW_BUFFER11_ATI = 0x8830,
		GL_DRAW_BUFFER12_ATI = 0x8831,
		GL_DRAW_BUFFER13_ATI = 0x8832,
		GL_DRAW_BUFFER14_ATI = 0x8833,
		GL_DRAW_BUFFER15_ATI = 0x8834,
	};
	extern void (*glDrawBuffersATI)(GLsizei n, const GLenum *bufs);
	#endif // GL_ATI_draw_buffers
	
	#ifdef GL_ATI_element_array
	extern bool ext_GL_ATI_element_array;
	enum {
		GL_ELEMENT_ARRAY_ATI = 0x8768,
		GL_ELEMENT_ARRAY_TYPE_ATI = 0x8769,
		GL_ELEMENT_ARRAY_POINTER_ATI = 0x876A,
	};
	extern void (*glDrawElementArrayATI)(GLenum mode, GLsizei count);
	extern void (*glDrawRangeElementArrayATI)(GLenum mode, GLuint start, GLuint end, GLsizei count);
	extern void (*glElementPointerATI)(GLenum type, const void *pointer);
	#endif // GL_ATI_element_array
	
	#ifdef GL_ATI_envmap_bumpmap
	extern bool ext_GL_ATI_envmap_bumpmap;
	enum {
		GL_BUMP_ROT_MATRIX_ATI = 0x8775,
		GL_BUMP_ROT_MATRIX_SIZE_ATI = 0x8776,
		GL_BUMP_NUM_TEX_UNITS_ATI = 0x8777,
		GL_BUMP_TEX_UNITS_ATI = 0x8778,
		GL_DUDV_ATI = 0x8779,
		GL_DU8DV8_ATI = 0x877A,
		GL_BUMP_ENVMAP_ATI = 0x877B,
		GL_BUMP_TARGET_ATI = 0x877C,
	};
	extern void (*glGetTexBumpParameterfvATI)(GLenum pname, GLfloat *param);
	extern void (*glGetTexBumpParameterivATI)(GLenum pname, GLint *param);
	extern void (*glTexBumpParameterfvATI)(GLenum pname, const GLfloat *param);
	extern void (*glTexBumpParameterivATI)(GLenum pname, const GLint *param);
	#endif // GL_ATI_envmap_bumpmap
	
	#ifdef GL_ATI_fragment_shader
	extern bool ext_GL_ATI_fragment_shader;
	enum {
		GL_FRAGMENT_SHADER_ATI = 0x8920,
		GL_REG_0_ATI = 0x8921,
		GL_REG_1_ATI = 0x8922,
		GL_REG_2_ATI = 0x8923,
		GL_REG_3_ATI = 0x8924,
		GL_REG_4_ATI = 0x8925,
		GL_REG_5_ATI = 0x8926,
		GL_REG_6_ATI = 0x8927,
		GL_REG_7_ATI = 0x8928,
		GL_REG_8_ATI = 0x8929,
		GL_REG_9_ATI = 0x892A,
		GL_REG_10_ATI = 0x892B,
		GL_REG_11_ATI = 0x892C,
		GL_REG_12_ATI = 0x892D,
		GL_REG_13_ATI = 0x892E,
		GL_REG_14_ATI = 0x892F,
		GL_REG_15_ATI = 0x8930,
		GL_REG_16_ATI = 0x8931,
		GL_REG_17_ATI = 0x8932,
		GL_REG_18_ATI = 0x8933,
		GL_REG_19_ATI = 0x8934,
		GL_REG_20_ATI = 0x8935,
		GL_REG_21_ATI = 0x8936,
		GL_REG_22_ATI = 0x8937,
		GL_REG_23_ATI = 0x8938,
		GL_REG_24_ATI = 0x8939,
		GL_REG_25_ATI = 0x893A,
		GL_REG_26_ATI = 0x893B,
		GL_REG_27_ATI = 0x893C,
		GL_REG_28_ATI = 0x893D,
		GL_REG_29_ATI = 0x893E,
		GL_REG_30_ATI = 0x893F,
		GL_REG_31_ATI = 0x8940,
		GL_CON_0_ATI = 0x8941,
		GL_CON_1_ATI = 0x8942,
		GL_CON_2_ATI = 0x8943,
		GL_CON_3_ATI = 0x8944,
		GL_CON_4_ATI = 0x8945,
		GL_CON_5_ATI = 0x8946,
		GL_CON_6_ATI = 0x8947,
		GL_CON_7_ATI = 0x8948,
		GL_CON_8_ATI = 0x8949,
		GL_CON_9_ATI = 0x894A,
		GL_CON_10_ATI = 0x894B,
		GL_CON_11_ATI = 0x894C,
		GL_CON_12_ATI = 0x894D,
		GL_CON_13_ATI = 0x894E,
		GL_CON_14_ATI = 0x894F,
		GL_CON_15_ATI = 0x8950,
		GL_CON_16_ATI = 0x8951,
		GL_CON_17_ATI = 0x8952,
		GL_CON_18_ATI = 0x8953,
		GL_CON_19_ATI = 0x8954,
		GL_CON_20_ATI = 0x8955,
		GL_CON_21_ATI = 0x8956,
		GL_CON_22_ATI = 0x8957,
		GL_CON_23_ATI = 0x8958,
		GL_CON_24_ATI = 0x8959,
		GL_CON_25_ATI = 0x895A,
		GL_CON_26_ATI = 0x895B,
		GL_CON_27_ATI = 0x895C,
		GL_CON_28_ATI = 0x895D,
		GL_CON_29_ATI = 0x895E,
		GL_CON_30_ATI = 0x895F,
		GL_CON_31_ATI = 0x8960,
		GL_MOV_ATI = 0x8961,
		GL_ADD_ATI = 0x8963,
		GL_MUL_ATI = 0x8964,
		GL_SUB_ATI = 0x8965,
		GL_DOT3_ATI = 0x8966,
		GL_DOT4_ATI = 0x8967,
		GL_MAD_ATI = 0x8968,
		GL_LERP_ATI = 0x8969,
		GL_CND_ATI = 0x896A,
		GL_CND0_ATI = 0x896B,
		GL_DOT2_ADD_ATI = 0x896C,
		GL_SECONDARY_INTERPOLATOR_ATI = 0x896D,
		GL_NUM_FRAGMENT_REGISTERS_ATI = 0x896E,
		GL_NUM_FRAGMENT_CONSTANTS_ATI = 0x896F,
		GL_NUM_PASSES_ATI = 0x8970,
		GL_NUM_INSTRUCTIONS_PER_PASS_ATI = 0x8971,
		GL_NUM_INSTRUCTIONS_TOTAL_ATI = 0x8972,
		GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI = 0x8973,
		GL_NUM_LOOPBACK_COMPONENTS_ATI = 0x8974,
		GL_COLOR_ALPHA_PAIRING_ATI = 0x8975,
		GL_SWIZZLE_STR_ATI = 0x8976,
		GL_SWIZZLE_STQ_ATI = 0x8977,
		GL_SWIZZLE_STR_DR_ATI = 0x8978,
		GL_SWIZZLE_STQ_DQ_ATI = 0x8979,
		GL_SWIZZLE_STRQ_ATI = 0x897A,
		GL_SWIZZLE_STRQ_DQ_ATI = 0x897B,
		GL_RED_BIT_ATI = 0x00000001,
		GL_GREEN_BIT_ATI = 0x00000002,
		GL_BLUE_BIT_ATI = 0x00000004,
		GL_2X_BIT_ATI = 0x00000001,
		GL_4X_BIT_ATI = 0x00000002,
		GL_8X_BIT_ATI = 0x00000004,
		GL_HALF_BIT_ATI = 0x00000008,
		GL_QUARTER_BIT_ATI = 0x00000010,
		GL_EIGHTH_BIT_ATI = 0x00000020,
		GL_SATURATE_BIT_ATI = 0x00000040,
		GL_COMP_BIT_ATI = 0x00000002,
		GL_NEGATE_BIT_ATI = 0x00000004,
		GL_BIAS_BIT_ATI = 0x00000008,
	};
	extern void (*glAlphaFragmentOp1ATI)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
	extern void (*glAlphaFragmentOp2ATI)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
	extern void (*glAlphaFragmentOp3ATI)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
	extern void (*glBeginFragmentShaderATI)();
	extern void (*glBindFragmentShaderATI)(GLuint id);
	extern void (*glColorFragmentOp1ATI)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
	extern void (*glColorFragmentOp2ATI)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
	extern void (*glColorFragmentOp3ATI)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
	extern void (*glDeleteFragmentShaderATI)(GLuint id);
	extern void (*glEndFragmentShaderATI)();
	extern GLuint (*glGenFragmentShadersATI)(GLuint range);
	extern void (*glPassTexCoordATI)(GLuint dst, GLuint coord, GLenum swizzle);
	extern void (*glSampleMapATI)(GLuint dst, GLuint interp, GLenum swizzle);
	extern void (*glSetFragmentShaderConstantATI)(GLuint dst, const GLfloat *value);
	#endif // GL_ATI_fragment_shader
	
	#ifdef GL_ATI_map_object_buffer
	extern bool ext_GL_ATI_map_object_buffer;
	extern void *(*glMapObjectBufferATI)(GLuint buffer);
	extern void (*glUnmapObjectBufferATI)(GLuint buffer);
	#endif // GL_ATI_map_object_buffer
	
	#ifdef GL_ATI_meminfo
	extern bool ext_GL_ATI_meminfo;
	enum {
		GL_VBO_FREE_MEMORY_ATI = 0x87FB,
		GL_TEXTURE_FREE_MEMORY_ATI = 0x87FC,
		GL_RENDERBUFFER_FREE_MEMORY_ATI = 0x87FD,
	};
	#endif // GL_ATI_meminfo
	
	#ifdef GL_ATI_pixel_format_float
	extern bool ext_GL_ATI_pixel_format_float;
	enum {
		GL_RGBA_FLOAT_MODE_ATI = 0x8820,
		GL_COLOR_CLEAR_UNCLAMPED_VALUE_ATI = 0x8835,
	};
	#endif // GL_ATI_pixel_format_float
	
	#ifdef GL_ATI_pn_triangles
	extern bool ext_GL_ATI_pn_triangles;
	enum {
		GL_PN_TRIANGLES_ATI = 0x87F0,
		GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI = 0x87F1,
		GL_PN_TRIANGLES_POINT_MODE_ATI = 0x87F2,
		GL_PN_TRIANGLES_NORMAL_MODE_ATI = 0x87F3,
		GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI = 0x87F4,
		GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI = 0x87F5,
		GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI = 0x87F6,
		GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI = 0x87F7,
		GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI = 0x87F8,
	};
	extern void (*glPNTrianglesfATI)(GLenum pname, GLfloat param);
	extern void (*glPNTrianglesiATI)(GLenum pname, GLint param);
	#endif // GL_ATI_pn_triangles
	
	#ifdef GL_ATI_separate_stencil
	extern bool ext_GL_ATI_separate_stencil;
	enum {
		GL_STENCIL_BACK_FUNC_ATI = 0x8800,
		GL_STENCIL_BACK_FAIL_ATI = 0x8801,
		GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI = 0x8802,
		GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI = 0x8803,
	};
	extern void (*glStencilFuncSeparateATI)(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
	extern void (*glStencilOpSeparateATI)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
	#endif // GL_ATI_separate_stencil
	
	#ifdef GL_ATI_text_fragment_shader
	extern bool ext_GL_ATI_text_fragment_shader;
	enum {
		GL_TEXT_FRAGMENT_SHADER_ATI = 0x8200,
	};
	#endif // GL_ATI_text_fragment_shader
	
	#ifdef GL_ATI_texture_env_combine3
	extern bool ext_GL_ATI_texture_env_combine3;
	enum {
		GL_MODULATE_ADD_ATI = 0x8744,
		GL_MODULATE_SIGNED_ADD_ATI = 0x8745,
		GL_MODULATE_SUBTRACT_ATI = 0x8746,
	};
	#endif // GL_ATI_texture_env_combine3
	
	#ifdef GL_ATI_texture_float
	extern bool ext_GL_ATI_texture_float;
	enum {
		GL_RGBA_FLOAT32_ATI = 0x8814,
		GL_RGB_FLOAT32_ATI = 0x8815,
		GL_ALPHA_FLOAT32_ATI = 0x8816,
		GL_INTENSITY_FLOAT32_ATI = 0x8817,
		GL_LUMINANCE_FLOAT32_ATI = 0x8818,
		GL_LUMINANCE_ALPHA_FLOAT32_ATI = 0x8819,
		GL_RGBA_FLOAT16_ATI = 0x881A,
		GL_RGB_FLOAT16_ATI = 0x881B,
		GL_ALPHA_FLOAT16_ATI = 0x881C,
		GL_INTENSITY_FLOAT16_ATI = 0x881D,
		GL_LUMINANCE_FLOAT16_ATI = 0x881E,
		GL_LUMINANCE_ALPHA_FLOAT16_ATI = 0x881F,
	};
	#endif // GL_ATI_texture_float
	
	#ifdef GL_ATI_texture_mirror_once
	extern bool ext_GL_ATI_texture_mirror_once;
	enum {
		GL_MIRROR_CLAMP_ATI = 0x8742,
		GL_MIRROR_CLAMP_TO_EDGE_ATI = 0x8743,
	};
	#endif // GL_ATI_texture_mirror_once
	
	#ifdef GL_ATI_vertex_array_object
	extern bool ext_GL_ATI_vertex_array_object;
	enum {
		GL_STATIC_ATI = 0x8760,
		GL_DYNAMIC_ATI = 0x8761,
		GL_PRESERVE_ATI = 0x8762,
		GL_DISCARD_ATI = 0x8763,
		GL_OBJECT_BUFFER_SIZE_ATI = 0x8764,
		GL_OBJECT_BUFFER_USAGE_ATI = 0x8765,
		GL_ARRAY_OBJECT_BUFFER_ATI = 0x8766,
		GL_ARRAY_OBJECT_OFFSET_ATI = 0x8767,
	};
	extern void (*glArrayObjectATI)(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
	extern void (*glFreeObjectBufferATI)(GLuint buffer);
	extern void (*glGetArrayObjectfvATI)(GLenum array, GLenum pname, GLfloat *params);
	extern void (*glGetArrayObjectivATI)(GLenum array, GLenum pname, GLint *params);
	extern void (*glGetObjectBufferfvATI)(GLuint buffer, GLenum pname, GLfloat *params);
	extern void (*glGetObjectBufferivATI)(GLuint buffer, GLenum pname, GLint *params);
	extern void (*glGetVariantArrayObjectfvATI)(GLuint id, GLenum pname, GLfloat *params);
	extern void (*glGetVariantArrayObjectivATI)(GLuint id, GLenum pname, GLint *params);
	extern GLboolean (*glIsObjectBufferATI)(GLuint buffer);
	extern GLuint (*glNewObjectBufferATI)(GLsizei size, const void *pointer, GLenum usage);
	extern void (*glUpdateObjectBufferATI)(GLuint buffer, GLuint offset, GLsizei size, const void *pointer, GLenum preserve);
	extern void (*glVariantArrayObjectATI)(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
	#endif // GL_ATI_vertex_array_object
	
	#ifdef GL_ATI_vertex_attrib_array_object
	extern bool ext_GL_ATI_vertex_attrib_array_object;
	extern void (*glGetVertexAttribArrayObjectfvATI)(GLuint index, GLenum pname, GLfloat *params);
	extern void (*glGetVertexAttribArrayObjectivATI)(GLuint index, GLenum pname, GLint *params);
	extern void (*glVertexAttribArrayObjectATI)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset);
	#endif // GL_ATI_vertex_attrib_array_object
	
	#ifdef GL_ATI_vertex_streams
	extern bool ext_GL_ATI_vertex_streams;
	enum {
		GL_MAX_VERTEX_STREAMS_ATI = 0x876B,
		GL_VERTEX_STREAM0_ATI = 0x876C,
		GL_VERTEX_STREAM1_ATI = 0x876D,
		GL_VERTEX_STREAM2_ATI = 0x876E,
		GL_VERTEX_STREAM3_ATI = 0x876F,
		GL_VERTEX_STREAM4_ATI = 0x8770,
		GL_VERTEX_STREAM5_ATI = 0x8771,
		GL_VERTEX_STREAM6_ATI = 0x8772,
		GL_VERTEX_STREAM7_ATI = 0x8773,
		GL_VERTEX_SOURCE_ATI = 0x8774,
	};
	extern void (*glClientActiveVertexStreamATI)(GLenum stream);
	extern void (*glNormalStream3bATI)(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz);
	extern void (*glNormalStream3bvATI)(GLenum stream, const GLbyte *coords);
	extern void (*glNormalStream3dATI)(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz);
	extern void (*glNormalStream3dvATI)(GLenum stream, const GLdouble *coords);
	extern void (*glNormalStream3fATI)(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz);
	extern void (*glNormalStream3fvATI)(GLenum stream, const GLfloat *coords);
	extern void (*glNormalStream3iATI)(GLenum stream, GLint nx, GLint ny, GLint nz);
	extern void (*glNormalStream3ivATI)(GLenum stream, const GLint *coords);
	extern void (*glNormalStream3sATI)(GLenum stream, GLshort nx, GLshort ny, GLshort nz);
	extern void (*glNormalStream3svATI)(GLenum stream, const GLshort *coords);
	extern void (*glVertexBlendEnvfATI)(GLenum pname, GLfloat param);
	extern void (*glVertexBlendEnviATI)(GLenum pname, GLint param);
	extern void (*glVertexStream1dATI)(GLenum stream, GLdouble x);
	extern void (*glVertexStream1dvATI)(GLenum stream, const GLdouble *coords);
	extern void (*glVertexStream1fATI)(GLenum stream, GLfloat x);
	extern void (*glVertexStream1fvATI)(GLenum stream, const GLfloat *coords);
	extern void (*glVertexStream1iATI)(GLenum stream, GLint x);
	extern void (*glVertexStream1ivATI)(GLenum stream, const GLint *coords);
	extern void (*glVertexStream1sATI)(GLenum stream, GLshort x);
	extern void (*glVertexStream1svATI)(GLenum stream, const GLshort *coords);
	extern void (*glVertexStream2dATI)(GLenum stream, GLdouble x, GLdouble y);
	extern void (*glVertexStream2dvATI)(GLenum stream, const GLdouble *coords);
	extern void (*glVertexStream2fATI)(GLenum stream, GLfloat x, GLfloat y);
	extern void (*glVertexStream2fvATI)(GLenum stream, const GLfloat *coords);
	extern void (*glVertexStream2iATI)(GLenum stream, GLint x, GLint y);
	extern void (*glVertexStream2ivATI)(GLenum stream, const GLint *coords);
	extern void (*glVertexStream2sATI)(GLenum stream, GLshort x, GLshort y);
	extern void (*glVertexStream2svATI)(GLenum stream, const GLshort *coords);
	extern void (*glVertexStream3dATI)(GLenum stream, GLdouble x, GLdouble y, GLdouble z);
	extern void (*glVertexStream3dvATI)(GLenum stream, const GLdouble *coords);
	extern void (*glVertexStream3fATI)(GLenum stream, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glVertexStream3fvATI)(GLenum stream, const GLfloat *coords);
	extern void (*glVertexStream3iATI)(GLenum stream, GLint x, GLint y, GLint z);
	extern void (*glVertexStream3ivATI)(GLenum stream, const GLint *coords);
	extern void (*glVertexStream3sATI)(GLenum stream, GLshort x, GLshort y, GLshort z);
	extern void (*glVertexStream3svATI)(GLenum stream, const GLshort *coords);
	extern void (*glVertexStream4dATI)(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glVertexStream4dvATI)(GLenum stream, const GLdouble *coords);
	extern void (*glVertexStream4fATI)(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glVertexStream4fvATI)(GLenum stream, const GLfloat *coords);
	extern void (*glVertexStream4iATI)(GLenum stream, GLint x, GLint y, GLint z, GLint w);
	extern void (*glVertexStream4ivATI)(GLenum stream, const GLint *coords);
	extern void (*glVertexStream4sATI)(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w);
	extern void (*glVertexStream4svATI)(GLenum stream, const GLshort *coords);
	#endif // GL_ATI_vertex_streams
	
	#ifdef GL_EXT_422_pixels
	extern bool ext_GL_EXT_422_pixels;
	enum {
		GL_422_EXT = 0x80CC,
		GL_422_REV_EXT = 0x80CD,
		GL_422_AVERAGE_EXT = 0x80CE,
		GL_422_REV_AVERAGE_EXT = 0x80CF,
	};
	#endif // GL_EXT_422_pixels
	
	#ifdef GL_EXT_abgr
	extern bool ext_GL_EXT_abgr;
	enum {
		GL_ABGR_EXT = 0x8000,
	};
	#endif // GL_EXT_abgr
	
	#ifdef GL_EXT_bgra
	extern bool ext_GL_EXT_bgra;
	enum {
		GL_BGR_EXT = 0x80E0,
		GL_BGRA_EXT = 0x80E1,
	};
	#endif // GL_EXT_bgra
	
	#ifdef GL_EXT_bindable_uniform
	extern bool ext_GL_EXT_bindable_uniform;
	enum {
		GL_MAX_VERTEX_BINDABLE_UNIFORMS_EXT = 0x8DE2,
		GL_MAX_FRAGMENT_BINDABLE_UNIFORMS_EXT = 0x8DE3,
		GL_MAX_GEOMETRY_BINDABLE_UNIFORMS_EXT = 0x8DE4,
		GL_MAX_BINDABLE_UNIFORM_SIZE_EXT = 0x8DED,
		GL_UNIFORM_BUFFER_EXT = 0x8DEE,
		GL_UNIFORM_BUFFER_BINDING_EXT = 0x8DEF,
	};
	extern GLint (*glGetUniformBufferSizeEXT)(GLuint program, GLint location);
	extern GLintptr (*glGetUniformOffsetEXT)(GLuint program, GLint location);
	extern void (*glUniformBufferEXT)(GLuint program, GLint location, GLuint buffer);
	#endif // GL_EXT_bindable_uniform
	
	#ifdef GL_EXT_blend_color
	extern bool ext_GL_EXT_blend_color;
	enum {
		GL_CONSTANT_ALPHA_EXT = 0x8003,
		GL_CONSTANT_COLOR_EXT = 0x8001,
		GL_ONE_MINUS_CONSTANT_ALPHA_EXT = 0x8004,
		GL_ONE_MINUS_CONSTANT_COLOR_EXT = 0x8002,
		GL_BLEND_COLOR_EXT = 0x8005,
	};
	extern void (*glBlendColorEXT)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	#endif // GL_EXT_blend_color
	
	#ifdef GL_EXT_blend_equation_separate
	extern bool ext_GL_EXT_blend_equation_separate;
	enum {
		GL_BLEND_EQUATION_RGB_EXT = 0x8009,
		GL_BLEND_EQUATION_ALPHA_EXT = 0x883D,
	};
	extern void (*glBlendEquationSeparateEXT)(GLenum modeRGB, GLenum modeAlpha);
	#endif // GL_EXT_blend_equation_separate
	
	#ifdef GL_EXT_blend_func_separate
	extern bool ext_GL_EXT_blend_func_separate;
	enum {
		GL_BLEND_DST_RGB_EXT = 0x80C8,
		GL_BLEND_SRC_RGB_EXT = 0x80C9,
		GL_BLEND_DST_ALPHA_EXT = 0x80CA,
		GL_BLEND_SRC_ALPHA_EXT = 0x80CB,
	};
	extern void (*glBlendFuncSeparateEXT)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
	#endif // GL_EXT_blend_func_separate
	
	#ifdef GL_EXT_blend_minmax
	extern bool ext_GL_EXT_blend_minmax;
	enum {
		GL_FUNC_ADD_EXT = 0x8006,
		GL_MAX_EXT = 0x8008,
		GL_MIN_EXT = 0x8007,
		GL_BLEND_EQUATION_EXT = 0x8009,
	};
	extern void (*glBlendEquationEXT)(GLenum mode);
	#endif // GL_EXT_blend_minmax
	
	#ifdef GL_EXT_blend_subtract
	extern bool ext_GL_EXT_blend_subtract;
	enum {
		GL_FUNC_REVERSE_SUBTRACT_EXT = 0x800B,
		GL_FUNC_SUBTRACT_EXT = 0x800A,
	};
	#endif // GL_EXT_blend_subtract
	
	#ifdef GL_EXT_clip_volume_hint
	extern bool ext_GL_EXT_clip_volume_hint;
	enum {
		GL_CLIP_VOLUME_CLIPPING_HINT_EXT = 0x80F0,
	};
	#endif // GL_EXT_clip_volume_hint
	
	#ifdef GL_EXT_cmyka
	extern bool ext_GL_EXT_cmyka;
	enum {
		GL_PACK_CMYK_HINT_EXT = 0x800E,
		GL_UNPACK_CMYK_HINT_EXT = 0x800F,
		GL_CMYKA_EXT = 0x800D,
		GL_CMYK_EXT = 0x800C,
	};
	#endif // GL_EXT_cmyka
	
	#ifdef GL_EXT_color_subtable
	extern bool ext_GL_EXT_color_subtable;
	extern void (*glColorSubTableEXT)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void *data);
	extern void (*glCopyColorSubTableEXT)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
	#endif // GL_EXT_color_subtable
	
	#ifdef GL_EXT_compiled_vertex_array
	extern bool ext_GL_EXT_compiled_vertex_array;
	enum {
		GL_ARRAY_ELEMENT_LOCK_FIRST_EXT = 0x81A8,
		GL_ARRAY_ELEMENT_LOCK_COUNT_EXT = 0x81A9,
	};
	extern void (*glLockArraysEXT)(GLint first, GLsizei count);
	extern void (*glUnlockArraysEXT)();
	#endif // GL_EXT_compiled_vertex_array
	
	#ifdef GL_EXT_convolution
	extern bool ext_GL_EXT_convolution;
	enum {
		GL_REDUCE_EXT = 0x8016,
		GL_CONVOLUTION_BORDER_MODE_EXT = 0x8013,
		GL_CONVOLUTION_FILTER_BIAS_EXT = 0x8015,
		GL_CONVOLUTION_FILTER_SCALE_EXT = 0x8014,
		GL_CONVOLUTION_1D_EXT = 0x8010,
		GL_CONVOLUTION_2D_EXT = 0x8011,
		GL_SEPARABLE_2D_EXT = 0x8012,
		GL_CONVOLUTION_FORMAT_EXT = 0x8017,
		GL_CONVOLUTION_HEIGHT_EXT = 0x8019,
		GL_CONVOLUTION_WIDTH_EXT = 0x8018,
		GL_MAX_CONVOLUTION_HEIGHT_EXT = 0x801B,
		GL_MAX_CONVOLUTION_WIDTH_EXT = 0x801A,
		GL_POST_CONVOLUTION_ALPHA_BIAS_EXT = 0x8023,
		GL_POST_CONVOLUTION_ALPHA_SCALE_EXT = 0x801F,
		GL_POST_CONVOLUTION_BLUE_BIAS_EXT = 0x8022,
		GL_POST_CONVOLUTION_BLUE_SCALE_EXT = 0x801E,
		GL_POST_CONVOLUTION_GREEN_BIAS_EXT = 0x8021,
		GL_POST_CONVOLUTION_GREEN_SCALE_EXT = 0x801D,
		GL_POST_CONVOLUTION_RED_BIAS_EXT = 0x8020,
		GL_POST_CONVOLUTION_RED_SCALE_EXT = 0x801C,
	};
	extern void (*glConvolutionFilter1DEXT)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *image);
	extern void (*glConvolutionFilter2DEXT)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *image);
	extern void (*glConvolutionParameterfEXT)(GLenum target, GLenum pname, GLfloat params);
	extern void (*glConvolutionParameterfvEXT)(GLenum target, GLenum pname, const GLfloat *params);
	extern void (*glConvolutionParameteriEXT)(GLenum target, GLenum pname, GLint params);
	extern void (*glConvolutionParameterivEXT)(GLenum target, GLenum pname, const GLint *params);
	extern void (*glCopyConvolutionFilter1DEXT)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
	extern void (*glCopyConvolutionFilter2DEXT)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glGetConvolutionFilterEXT)(GLenum target, GLenum format, GLenum type, void *image);
	extern void (*glGetConvolutionParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetConvolutionParameterivEXT)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetSeparableFilterEXT)(GLenum target, GLenum format, GLenum type, void *row, void *column, void *span);
	extern void (*glSeparableFilter2DEXT)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *row, const void *column);
	#endif // GL_EXT_convolution
	
	#ifdef GL_EXT_coordinate_frame
	extern bool ext_GL_EXT_coordinate_frame;
	enum {
		GL_TANGENT_ARRAY_EXT = 0x8439,
		GL_BINORMAL_ARRAY_EXT = 0x843A,
		GL_CURRENT_TANGENT_EXT = 0x843B,
		GL_CURRENT_BINORMAL_EXT = 0x843C,
		GL_TANGENT_ARRAY_TYPE_EXT = 0x843E,
		GL_TANGENT_ARRAY_STRIDE_EXT = 0x843F,
		GL_BINORMAL_ARRAY_TYPE_EXT = 0x8440,
		GL_BINORMAL_ARRAY_STRIDE_EXT = 0x8441,
		GL_TANGENT_ARRAY_POINTER_EXT = 0x8442,
		GL_BINORMAL_ARRAY_POINTER_EXT = 0x8443,
		GL_MAP1_TANGENT_EXT = 0x8444,
		GL_MAP2_TANGENT_EXT = 0x8445,
		GL_MAP1_BINORMAL_EXT = 0x8446,
		GL_MAP2_BINORMAL_EXT = 0x8447,
	};
	extern void (*glBinormal3bEXT)(GLbyte bx, GLbyte by, GLbyte bz);
	extern void (*glBinormal3bvEXT)(const GLbyte *v);
	extern void (*glBinormal3dEXT)(GLdouble bx, GLdouble by, GLdouble bz);
	extern void (*glBinormal3dvEXT)(const GLdouble *v);
	extern void (*glBinormal3fEXT)(GLfloat bx, GLfloat by, GLfloat bz);
	extern void (*glBinormal3fvEXT)(const GLfloat *v);
	extern void (*glBinormal3iEXT)(GLint bx, GLint by, GLint bz);
	extern void (*glBinormal3ivEXT)(const GLint *v);
	extern void (*glBinormal3sEXT)(GLshort bx, GLshort by, GLshort bz);
	extern void (*glBinormal3svEXT)(const GLshort *v);
	extern void (*glBinormalPointerEXT)(GLenum type, GLsizei stride, const void *pointer);
	extern void (*glTangent3bEXT)(GLbyte tx, GLbyte ty, GLbyte tz);
	extern void (*glTangent3bvEXT)(const GLbyte *v);
	extern void (*glTangent3dEXT)(GLdouble tx, GLdouble ty, GLdouble tz);
	extern void (*glTangent3dvEXT)(const GLdouble *v);
	extern void (*glTangent3fEXT)(GLfloat tx, GLfloat ty, GLfloat tz);
	extern void (*glTangent3fvEXT)(const GLfloat *v);
	extern void (*glTangent3iEXT)(GLint tx, GLint ty, GLint tz);
	extern void (*glTangent3ivEXT)(const GLint *v);
	extern void (*glTangent3sEXT)(GLshort tx, GLshort ty, GLshort tz);
	extern void (*glTangent3svEXT)(const GLshort *v);
	extern void (*glTangentPointerEXT)(GLenum type, GLsizei stride, const void *pointer);
	#endif // GL_EXT_coordinate_frame
	
	#ifdef GL_EXT_copy_texture
	extern bool ext_GL_EXT_copy_texture;
	extern void (*glCopyTexImage1DEXT)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
	extern void (*glCopyTexImage2DEXT)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
	extern void (*glCopyTexSubImage1DEXT)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
	extern void (*glCopyTexSubImage2DEXT)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glCopyTexSubImage3DEXT)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	#endif // GL_EXT_copy_texture
	
	#ifdef GL_EXT_cull_vertex
	extern bool ext_GL_EXT_cull_vertex;
	enum {
		GL_CULL_VERTEX_EXT = 0x81AA,
		GL_CULL_VERTEX_EYE_POSITION_EXT = 0x81AB,
		GL_CULL_VERTEX_OBJECT_POSITION_EXT = 0x81AC,
	};
	extern void (*glCullParameterdvEXT)(GLenum pname, GLdouble *params);
	extern void (*glCullParameterfvEXT)(GLenum pname, GLfloat *params);
	#endif // GL_EXT_cull_vertex
	
	#ifdef GL_EXT_debug_label
	extern bool ext_GL_EXT_debug_label;
	enum {
		GL_PROGRAM_PIPELINE_OBJECT_EXT = 0x8A4F,
		GL_PROGRAM_OBJECT_EXT = 0x8B40,
		GL_SHADER_OBJECT_EXT = 0x8B48,
		GL_BUFFER_OBJECT_EXT = 0x9151,
		GL_QUERY_OBJECT_EXT = 0x9153,
		GL_VERTEX_ARRAY_OBJECT_EXT = 0x9154,
		GL_SAMPLER = 0x82E6,
		#if !defined(GL_ARB_transform_feedback2)
		GL_TRANSFORM_FEEDBACK = 0x8E22,
		#endif
	};
	extern void (*glGetObjectLabelEXT)(GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label);
	extern void (*glLabelObjectEXT)(GLenum type, GLuint object, GLsizei length, const GLchar *label);
	#endif // GL_EXT_debug_label
	
	#ifdef GL_EXT_debug_marker
	extern bool ext_GL_EXT_debug_marker;
	extern void (*glInsertEventMarkerEXT)(GLsizei length, const GLchar *marker);
	extern void (*glPopGroupMarkerEXT)();
	extern void (*glPushGroupMarkerEXT)(GLsizei length, const GLchar *marker);
	#endif // GL_EXT_debug_marker
	
	#ifdef GL_EXT_depth_bounds_test
	extern bool ext_GL_EXT_depth_bounds_test;
	enum {
		GL_DEPTH_BOUNDS_TEST_EXT = 0x8890,
		GL_DEPTH_BOUNDS_EXT = 0x8891,
	};
	extern void (*glDepthBoundsEXT)(GLclampd zmin, GLclampd zmax);
	#endif // GL_EXT_depth_bounds_test
	
	#ifdef GL_EXT_direct_state_access
	extern bool ext_GL_EXT_direct_state_access;
	enum {
		GL_PROGRAM_MATRIX_EXT = 0x8E2D,
		GL_TRANSPOSE_PROGRAM_MATRIX_EXT = 0x8E2E,
		GL_PROGRAM_MATRIX_STACK_DEPTH_EXT = 0x8E2F,
	};
	extern void (*glBindMultiTextureEXT)(GLenum texunit, GLenum target, GLuint texture);
	extern GLenum (*glCheckNamedFramebufferStatusEXT)(GLuint framebuffer, GLenum target);
	extern void (*glClearNamedBufferDataEXT)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
	extern void (*glClearNamedBufferSubDataEXT)(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
	extern void (*glClientAttribDefaultEXT)(GLbitfield mask);
	extern void (*glCompressedMultiTexImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits);
	extern void (*glCompressedMultiTexImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits);
	extern void (*glCompressedMultiTexImage3DEXT)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits);
	extern void (*glCompressedMultiTexSubImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits);
	extern void (*glCompressedMultiTexSubImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits);
	extern void (*glCompressedMultiTexSubImage3DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits);
	extern void (*glCompressedTextureImage1DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits);
	extern void (*glCompressedTextureImage2DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits);
	extern void (*glCompressedTextureImage3DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits);
	extern void (*glCompressedTextureSubImage1DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits);
	extern void (*glCompressedTextureSubImage2DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits);
	extern void (*glCompressedTextureSubImage3DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits);
	extern void (*glCopyMultiTexImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
	extern void (*glCopyMultiTexImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
	extern void (*glCopyMultiTexSubImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
	extern void (*glCopyMultiTexSubImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glCopyMultiTexSubImage3DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glCopyTextureImage1DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
	extern void (*glCopyTextureImage2DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
	extern void (*glCopyTextureSubImage1DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
	extern void (*glCopyTextureSubImage2DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glCopyTextureSubImage3DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	extern void (*glDisableClientStateIndexedEXT)(GLenum array, GLuint index);
	extern void (*glDisableClientStateiEXT)(GLenum array, GLuint index);
	extern void (*glDisableIndexedEXT)(GLenum target, GLuint index);
	extern void (*glDisableVertexArrayAttribEXT)(GLuint vaobj, GLuint index);
	extern void (*glDisableVertexArrayEXT)(GLuint vaobj, GLenum array);
	extern void (*glEnableClientStateIndexedEXT)(GLenum array, GLuint index);
	extern void (*glEnableClientStateiEXT)(GLenum array, GLuint index);
	extern void (*glEnableIndexedEXT)(GLenum target, GLuint index);
	extern void (*glEnableVertexArrayAttribEXT)(GLuint vaobj, GLuint index);
	extern void (*glEnableVertexArrayEXT)(GLuint vaobj, GLenum array);
	extern void (*glFlushMappedNamedBufferRangeEXT)(GLuint buffer, GLintptr offset, GLsizeiptr length);
	extern void (*glFramebufferDrawBufferEXT)(GLuint framebuffer, GLenum mode);
	extern void (*glFramebufferDrawBuffersEXT)(GLuint framebuffer, GLsizei n, const GLenum *bufs);
	extern void (*glFramebufferReadBufferEXT)(GLuint framebuffer, GLenum mode);
	extern void (*glGenerateMultiTexMipmapEXT)(GLenum texunit, GLenum target);
	extern void (*glGenerateTextureMipmapEXT)(GLuint texture, GLenum target);
	extern void (*glGetBooleanIndexedvEXT)(GLenum target, GLuint index, GLboolean *data);
	extern void (*glGetCompressedMultiTexImageEXT)(GLenum texunit, GLenum target, GLint lod, void *img);
	extern void (*glGetCompressedTextureImageEXT)(GLuint texture, GLenum target, GLint lod, void *img);
	extern void (*glGetDoubleIndexedvEXT)(GLenum target, GLuint index, GLdouble *data);
	extern void (*glGetDoublei_vEXT)(GLenum pname, GLuint index, GLdouble *params);
	extern void (*glGetFloatIndexedvEXT)(GLenum target, GLuint index, GLfloat *data);
	extern void (*glGetFloati_vEXT)(GLenum pname, GLuint index, GLfloat *params);
	extern void (*glGetFramebufferParameterivEXT)(GLuint framebuffer, GLenum pname, GLint *params);
	extern void (*glGetIntegerIndexedvEXT)(GLenum target, GLuint index, GLint *data);
	extern void (*glGetMultiTexEnvfvEXT)(GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetMultiTexEnvivEXT)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
	extern void (*glGetMultiTexGendvEXT)(GLenum texunit, GLenum coord, GLenum pname, GLdouble *params);
	extern void (*glGetMultiTexGenfvEXT)(GLenum texunit, GLenum coord, GLenum pname, GLfloat *params);
	extern void (*glGetMultiTexGenivEXT)(GLenum texunit, GLenum coord, GLenum pname, GLint *params);
	extern void (*glGetMultiTexImageEXT)(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
	extern void (*glGetMultiTexLevelParameterfvEXT)(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params);
	extern void (*glGetMultiTexLevelParameterivEXT)(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params);
	extern void (*glGetMultiTexParameterIivEXT)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
	extern void (*glGetMultiTexParameterIuivEXT)(GLenum texunit, GLenum target, GLenum pname, GLuint *params);
	extern void (*glGetMultiTexParameterfvEXT)(GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetMultiTexParameterivEXT)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
	extern void (*glGetNamedBufferParameterivEXT)(GLuint buffer, GLenum pname, GLint *params);
	extern void (*glGetNamedBufferPointervEXT)(GLuint buffer, GLenum pname, void **params);
	extern void (*glGetNamedBufferSubDataEXT)(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
	extern void (*glGetNamedFramebufferAttachmentParameterivEXT)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
	extern void (*glGetNamedFramebufferParameterivEXT)(GLuint framebuffer, GLenum pname, GLint *params);
	extern void (*glGetNamedProgramLocalParameterIivEXT)(GLuint program, GLenum target, GLuint index, GLint *params);
	extern void (*glGetNamedProgramLocalParameterIuivEXT)(GLuint program, GLenum target, GLuint index, GLuint *params);
	extern void (*glGetNamedProgramLocalParameterdvEXT)(GLuint program, GLenum target, GLuint index, GLdouble *params);
	extern void (*glGetNamedProgramLocalParameterfvEXT)(GLuint program, GLenum target, GLuint index, GLfloat *params);
	extern void (*glGetNamedProgramStringEXT)(GLuint program, GLenum target, GLenum pname, void *string);
	extern void (*glGetNamedProgramivEXT)(GLuint program, GLenum target, GLenum pname, GLint *params);
	extern void (*glGetNamedRenderbufferParameterivEXT)(GLuint renderbuffer, GLenum pname, GLint *params);
	extern void (*glGetPointerIndexedvEXT)(GLenum target, GLuint index, void **data);
	extern void (*glGetPointeri_vEXT)(GLenum pname, GLuint index, void **params);
	extern void (*glGetTextureImageEXT)(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
	extern void (*glGetTextureLevelParameterfvEXT)(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params);
	extern void (*glGetTextureLevelParameterivEXT)(GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params);
	extern void (*glGetTextureParameterIivEXT)(GLuint texture, GLenum target, GLenum pname, GLint *params);
	extern void (*glGetTextureParameterIuivEXT)(GLuint texture, GLenum target, GLenum pname, GLuint *params);
	extern void (*glGetTextureParameterfvEXT)(GLuint texture, GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetTextureParameterivEXT)(GLuint texture, GLenum target, GLenum pname, GLint *params);
	extern void (*glGetVertexArrayIntegeri_vEXT)(GLuint vaobj, GLuint index, GLenum pname, GLint *param);
	extern void (*glGetVertexArrayIntegervEXT)(GLuint vaobj, GLenum pname, GLint *param);
	extern void (*glGetVertexArrayPointeri_vEXT)(GLuint vaobj, GLuint index, GLenum pname, void **param);
	extern void (*glGetVertexArrayPointervEXT)(GLuint vaobj, GLenum pname, void **param);
	extern GLboolean (*glIsEnabledIndexedEXT)(GLenum target, GLuint index);
	extern void *(*glMapNamedBufferEXT)(GLuint buffer, GLenum access);
	extern void *(*glMapNamedBufferRangeEXT)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
	extern void (*glMatrixFrustumEXT)(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
	extern void (*glMatrixLoadIdentityEXT)(GLenum mode);
	extern void (*glMatrixLoadTransposedEXT)(GLenum mode, const GLdouble *m);
	extern void (*glMatrixLoadTransposefEXT)(GLenum mode, const GLfloat *m);
	extern void (*glMatrixLoaddEXT)(GLenum mode, const GLdouble *m);
	extern void (*glMatrixLoadfEXT)(GLenum mode, const GLfloat *m);
	extern void (*glMatrixMultTransposedEXT)(GLenum mode, const GLdouble *m);
	extern void (*glMatrixMultTransposefEXT)(GLenum mode, const GLfloat *m);
	extern void (*glMatrixMultdEXT)(GLenum mode, const GLdouble *m);
	extern void (*glMatrixMultfEXT)(GLenum mode, const GLfloat *m);
	extern void (*glMatrixOrthoEXT)(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
	extern void (*glMatrixPopEXT)(GLenum mode);
	extern void (*glMatrixPushEXT)(GLenum mode);
	extern void (*glMatrixRotatedEXT)(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
	extern void (*glMatrixRotatefEXT)(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glMatrixScaledEXT)(GLenum mode, GLdouble x, GLdouble y, GLdouble z);
	extern void (*glMatrixScalefEXT)(GLenum mode, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glMatrixTranslatedEXT)(GLenum mode, GLdouble x, GLdouble y, GLdouble z);
	extern void (*glMatrixTranslatefEXT)(GLenum mode, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glMultiTexBufferEXT)(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer);
	extern void (*glMultiTexCoordPointerEXT)(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void *pointer);
	extern void (*glMultiTexEnvfEXT)(GLenum texunit, GLenum target, GLenum pname, GLfloat param);
	extern void (*glMultiTexEnvfvEXT)(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
	extern void (*glMultiTexEnviEXT)(GLenum texunit, GLenum target, GLenum pname, GLint param);
	extern void (*glMultiTexEnvivEXT)(GLenum texunit, GLenum target, GLenum pname, const GLint *params);
	extern void (*glMultiTexGendEXT)(GLenum texunit, GLenum coord, GLenum pname, GLdouble param);
	extern void (*glMultiTexGendvEXT)(GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params);
	extern void (*glMultiTexGenfEXT)(GLenum texunit, GLenum coord, GLenum pname, GLfloat param);
	extern void (*glMultiTexGenfvEXT)(GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params);
	extern void (*glMultiTexGeniEXT)(GLenum texunit, GLenum coord, GLenum pname, GLint param);
	extern void (*glMultiTexGenivEXT)(GLenum texunit, GLenum coord, GLenum pname, const GLint *params);
	extern void (*glMultiTexImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
	extern void (*glMultiTexImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
	extern void (*glMultiTexImage3DEXT)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
	extern void (*glMultiTexParameterIivEXT)(GLenum texunit, GLenum target, GLenum pname, const GLint *params);
	extern void (*glMultiTexParameterIuivEXT)(GLenum texunit, GLenum target, GLenum pname, const GLuint *params);
	extern void (*glMultiTexParameterfEXT)(GLenum texunit, GLenum target, GLenum pname, GLfloat param);
	extern void (*glMultiTexParameterfvEXT)(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
	extern void (*glMultiTexParameteriEXT)(GLenum texunit, GLenum target, GLenum pname, GLint param);
	extern void (*glMultiTexParameterivEXT)(GLenum texunit, GLenum target, GLenum pname, const GLint *params);
	extern void (*glMultiTexRenderbufferEXT)(GLenum texunit, GLenum target, GLuint renderbuffer);
	extern void (*glMultiTexSubImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
	extern void (*glMultiTexSubImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
	extern void (*glMultiTexSubImage3DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
	extern void (*glNamedBufferDataEXT)(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
	extern void (*glNamedBufferStorageEXT)(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
	extern void (*glNamedBufferSubDataEXT)(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
	extern void (*glNamedCopyBufferSubDataEXT)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
	extern void (*glNamedFramebufferParameteriEXT)(GLuint framebuffer, GLenum pname, GLint param);
	extern void (*glNamedFramebufferRenderbufferEXT)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
	extern void (*glNamedFramebufferTexture1DEXT)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	extern void (*glNamedFramebufferTexture2DEXT)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	extern void (*glNamedFramebufferTexture3DEXT)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
	extern void (*glNamedFramebufferTextureEXT)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
	extern void (*glNamedFramebufferTextureFaceEXT)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face);
	extern void (*glNamedFramebufferTextureLayerEXT)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
	extern void (*glNamedProgramLocalParameter4dEXT)(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glNamedProgramLocalParameter4dvEXT)(GLuint program, GLenum target, GLuint index, const GLdouble *params);
	extern void (*glNamedProgramLocalParameter4fEXT)(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glNamedProgramLocalParameter4fvEXT)(GLuint program, GLenum target, GLuint index, const GLfloat *params);
	extern void (*glNamedProgramLocalParameterI4iEXT)(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
	extern void (*glNamedProgramLocalParameterI4ivEXT)(GLuint program, GLenum target, GLuint index, const GLint *params);
	extern void (*glNamedProgramLocalParameterI4uiEXT)(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
	extern void (*glNamedProgramLocalParameterI4uivEXT)(GLuint program, GLenum target, GLuint index, const GLuint *params);
	extern void (*glNamedProgramLocalParameters4fvEXT)(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params);
	extern void (*glNamedProgramLocalParametersI4ivEXT)(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params);
	extern void (*glNamedProgramLocalParametersI4uivEXT)(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params);
	extern void (*glNamedProgramStringEXT)(GLuint program, GLenum target, GLenum format, GLsizei len, const void *string);
	extern void (*glNamedRenderbufferStorageEXT)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
	extern void (*glNamedRenderbufferStorageMultisampleCoverageEXT)(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
	extern void (*glNamedRenderbufferStorageMultisampleEXT)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
	extern void (*glProgramUniform1dEXT)(GLuint program, GLint location, GLdouble x);
	extern void (*glProgramUniform1dvEXT)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
	extern void (*glProgramUniform1fEXT)(GLuint program, GLint location, GLfloat v0);
	extern void (*glProgramUniform1fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
	extern void (*glProgramUniform1iEXT)(GLuint program, GLint location, GLint v0);
	extern void (*glProgramUniform1ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value);
	extern void (*glProgramUniform1uiEXT)(GLuint program, GLint location, GLuint v0);
	extern void (*glProgramUniform1uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value);
	extern void (*glProgramUniform2dEXT)(GLuint program, GLint location, GLdouble x, GLdouble y);
	extern void (*glProgramUniform2dvEXT)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
	extern void (*glProgramUniform2fEXT)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
	extern void (*glProgramUniform2fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
	extern void (*glProgramUniform2iEXT)(GLuint program, GLint location, GLint v0, GLint v1);
	extern void (*glProgramUniform2ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value);
	extern void (*glProgramUniform2uiEXT)(GLuint program, GLint location, GLuint v0, GLuint v1);
	extern void (*glProgramUniform2uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value);
	extern void (*glProgramUniform3dEXT)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z);
	extern void (*glProgramUniform3dvEXT)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
	extern void (*glProgramUniform3fEXT)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
	extern void (*glProgramUniform3fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
	extern void (*glProgramUniform3iEXT)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
	extern void (*glProgramUniform3ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value);
	extern void (*glProgramUniform3uiEXT)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
	extern void (*glProgramUniform3uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value);
	extern void (*glProgramUniform4dEXT)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glProgramUniform4dvEXT)(GLuint program, GLint location, GLsizei count, const GLdouble *value);
	extern void (*glProgramUniform4fEXT)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
	extern void (*glProgramUniform4fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
	extern void (*glProgramUniform4iEXT)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
	extern void (*glProgramUniform4ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value);
	extern void (*glProgramUniform4uiEXT)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
	extern void (*glProgramUniform4uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value);
	extern void (*glProgramUniformMatrix2dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix2fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix2x3dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix2x3fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix2x4dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix2x4fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix3dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix3fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix3x2dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix3x2fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix3x4dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix3x4fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix4dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix4fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix4x2dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix4x2fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix4x3dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
	extern void (*glProgramUniformMatrix4x3fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glPushClientAttribDefaultEXT)(GLbitfield mask);
	extern void (*glTextureBufferEXT)(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer);
	extern void (*glTextureBufferRangeEXT)(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
	extern void (*glTextureImage1DEXT)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
	extern void (*glTextureImage2DEXT)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
	extern void (*glTextureImage3DEXT)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
	extern void (*glTexturePageCommitmentEXT)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
	extern void (*glTextureParameterIivEXT)(GLuint texture, GLenum target, GLenum pname, const GLint *params);
	extern void (*glTextureParameterIuivEXT)(GLuint texture, GLenum target, GLenum pname, const GLuint *params);
	extern void (*glTextureParameterfEXT)(GLuint texture, GLenum target, GLenum pname, GLfloat param);
	extern void (*glTextureParameterfvEXT)(GLuint texture, GLenum target, GLenum pname, const GLfloat *params);
	extern void (*glTextureParameteriEXT)(GLuint texture, GLenum target, GLenum pname, GLint param);
	extern void (*glTextureParameterivEXT)(GLuint texture, GLenum target, GLenum pname, const GLint *params);
	extern void (*glTextureRenderbufferEXT)(GLuint texture, GLenum target, GLuint renderbuffer);
	extern void (*glTextureStorage1DEXT)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
	extern void (*glTextureStorage2DEXT)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
	extern void (*glTextureStorage2DMultisampleEXT)(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
	extern void (*glTextureStorage3DEXT)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
	extern void (*glTextureStorage3DMultisampleEXT)(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
	extern void (*glTextureSubImage1DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
	extern void (*glTextureSubImage2DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
	extern void (*glTextureSubImage3DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
	extern GLboolean (*glUnmapNamedBufferEXT)(GLuint buffer);
	extern void (*glVertexArrayBindVertexBufferEXT)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
	extern void (*glVertexArrayColorOffsetEXT)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
	extern void (*glVertexArrayEdgeFlagOffsetEXT)(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset);
	extern void (*glVertexArrayFogCoordOffsetEXT)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
	extern void (*glVertexArrayIndexOffsetEXT)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
	extern void (*glVertexArrayMultiTexCoordOffsetEXT)(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset);
	extern void (*glVertexArrayNormalOffsetEXT)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
	extern void (*glVertexArraySecondaryColorOffsetEXT)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
	extern void (*glVertexArrayTexCoordOffsetEXT)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
	extern void (*glVertexArrayVertexAttribBindingEXT)(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
	extern void (*glVertexArrayVertexAttribDivisorEXT)(GLuint vaobj, GLuint index, GLuint divisor);
	extern void (*glVertexArrayVertexAttribFormatEXT)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
	extern void (*glVertexArrayVertexAttribIFormatEXT)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
	extern void (*glVertexArrayVertexAttribIOffsetEXT)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
	extern void (*glVertexArrayVertexAttribLFormatEXT)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
	extern void (*glVertexArrayVertexAttribLOffsetEXT)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
	extern void (*glVertexArrayVertexAttribOffsetEXT)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset);
	extern void (*glVertexArrayVertexBindingDivisorEXT)(GLuint vaobj, GLuint bindingindex, GLuint divisor);
	extern void (*glVertexArrayVertexOffsetEXT)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
	#endif // GL_EXT_direct_state_access
	
	#ifdef GL_EXT_draw_buffers2
	extern bool ext_GL_EXT_draw_buffers2;
	extern void (*glColorMaskIndexedEXT)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
	#if !defined(GL_EXT_direct_state_access)
	extern void (*glDisableIndexedEXT)(GLenum target, GLuint index);
	extern void (*glEnableIndexedEXT)(GLenum target, GLuint index);
	extern void (*glGetBooleanIndexedvEXT)(GLenum target, GLuint index, GLboolean *data);
	extern void (*glGetIntegerIndexedvEXT)(GLenum target, GLuint index, GLint *data);
	extern GLboolean (*glIsEnabledIndexedEXT)(GLenum target, GLuint index);
	#endif
	#endif // GL_EXT_draw_buffers2
	
	#ifdef GL_EXT_draw_instanced
	extern bool ext_GL_EXT_draw_instanced;
	extern void (*glDrawArraysInstancedEXT)(GLenum mode, GLint start, GLsizei count, GLsizei primcount);
	extern void (*glDrawElementsInstancedEXT)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
	#endif // GL_EXT_draw_instanced
	
	#ifdef GL_EXT_draw_range_elements
	extern bool ext_GL_EXT_draw_range_elements;
	enum {
		GL_MAX_ELEMENTS_VERTICES_EXT = 0x80E8,
		GL_MAX_ELEMENTS_INDICES_EXT = 0x80E9,
	};
	extern void (*glDrawRangeElementsEXT)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
	#endif // GL_EXT_draw_range_elements
	
	#ifdef GL_EXT_fog_coord
	extern bool ext_GL_EXT_fog_coord;
	enum {
		GL_FOG_COORDINATE_SOURCE_EXT = 0x8450,
		GL_FOG_COORDINATE_EXT = 0x8451,
		GL_FRAGMENT_DEPTH_EXT = 0x8452,
		GL_CURRENT_FOG_COORDINATE_EXT = 0x8453,
		GL_FOG_COORDINATE_ARRAY_TYPE_EXT = 0x8454,
		GL_FOG_COORDINATE_ARRAY_STRIDE_EXT = 0x8455,
		GL_FOG_COORDINATE_ARRAY_POINTER_EXT = 0x8456,
		GL_FOG_COORDINATE_ARRAY_EXT = 0x8457,
	};
	extern void (*glFogCoordPointerEXT)(GLenum type, GLsizei stride, const void *pointer);
	extern void (*glFogCoorddEXT)(GLdouble coord);
	extern void (*glFogCoorddvEXT)(const GLdouble *coord);
	extern void (*glFogCoordfEXT)(GLfloat coord);
	extern void (*glFogCoordfvEXT)(const GLfloat *coord);
	#endif // GL_EXT_fog_coord
	
	#ifdef GL_EXT_framebuffer_blit
	extern bool ext_GL_EXT_framebuffer_blit;
	enum {
		GL_READ_FRAMEBUFFER_EXT = 0x8CA8,
		GL_DRAW_FRAMEBUFFER_EXT = 0x8CA9,
		GL_DRAW_FRAMEBUFFER_BINDING_EXT = 0x8CA6,
		GL_READ_FRAMEBUFFER_BINDING_EXT = 0x8CAA,
	};
	extern void (*glBlitFramebufferEXT)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
	#endif // GL_EXT_framebuffer_blit
	
	#ifdef GL_EXT_framebuffer_multisample
	extern bool ext_GL_EXT_framebuffer_multisample;
	enum {
		GL_RENDERBUFFER_SAMPLES_EXT = 0x8CAB,
		GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT = 0x8D56,
		GL_MAX_SAMPLES_EXT = 0x8D57,
	};
	extern void (*glRenderbufferStorageMultisampleEXT)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
	#endif // GL_EXT_framebuffer_multisample
	
	#ifdef GL_EXT_framebuffer_multisample_blit_scaled
	extern bool ext_GL_EXT_framebuffer_multisample_blit_scaled;
	enum {
		GL_SCALED_RESOLVE_FASTEST_EXT = 0x90BA,
		GL_SCALED_RESOLVE_NICEST_EXT = 0x90BB,
	};
	#endif // GL_EXT_framebuffer_multisample_blit_scaled
	
	#ifdef GL_EXT_framebuffer_object
	extern bool ext_GL_EXT_framebuffer_object;
	enum {
		GL_INVALID_FRAMEBUFFER_OPERATION_EXT = 0x0506,
		GL_MAX_RENDERBUFFER_SIZE_EXT = 0x84E8,
		GL_FRAMEBUFFER_BINDING_EXT = 0x8CA6,
		GL_RENDERBUFFER_BINDING_EXT = 0x8CA7,
		GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT = 0x8CD0,
		GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT = 0x8CD1,
		GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT = 0x8CD2,
		GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT = 0x8CD3,
		GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT = 0x8CD4,
		GL_FRAMEBUFFER_COMPLETE_EXT = 0x8CD5,
		GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT = 0x8CD6,
		GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT = 0x8CD7,
		GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT = 0x8CD9,
		GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT = 0x8CDA,
		GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT = 0x8CDB,
		GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT = 0x8CDC,
		GL_FRAMEBUFFER_UNSUPPORTED_EXT = 0x8CDD,
		GL_MAX_COLOR_ATTACHMENTS_EXT = 0x8CDF,
		GL_COLOR_ATTACHMENT0_EXT = 0x8CE0,
		GL_COLOR_ATTACHMENT1_EXT = 0x8CE1,
		GL_COLOR_ATTACHMENT2_EXT = 0x8CE2,
		GL_COLOR_ATTACHMENT3_EXT = 0x8CE3,
		GL_COLOR_ATTACHMENT4_EXT = 0x8CE4,
		GL_COLOR_ATTACHMENT5_EXT = 0x8CE5,
		GL_COLOR_ATTACHMENT6_EXT = 0x8CE6,
		GL_COLOR_ATTACHMENT7_EXT = 0x8CE7,
		GL_COLOR_ATTACHMENT8_EXT = 0x8CE8,
		GL_COLOR_ATTACHMENT9_EXT = 0x8CE9,
		GL_COLOR_ATTACHMENT10_EXT = 0x8CEA,
		GL_COLOR_ATTACHMENT11_EXT = 0x8CEB,
		GL_COLOR_ATTACHMENT12_EXT = 0x8CEC,
		GL_COLOR_ATTACHMENT13_EXT = 0x8CED,
		GL_COLOR_ATTACHMENT14_EXT = 0x8CEE,
		GL_COLOR_ATTACHMENT15_EXT = 0x8CEF,
		GL_DEPTH_ATTACHMENT_EXT = 0x8D00,
		GL_STENCIL_ATTACHMENT_EXT = 0x8D20,
		GL_FRAMEBUFFER_EXT = 0x8D40,
		GL_RENDERBUFFER_EXT = 0x8D41,
		GL_RENDERBUFFER_WIDTH_EXT = 0x8D42,
		GL_RENDERBUFFER_HEIGHT_EXT = 0x8D43,
		GL_RENDERBUFFER_INTERNAL_FORMAT_EXT = 0x8D44,
		GL_STENCIL_INDEX1_EXT = 0x8D46,
		GL_STENCIL_INDEX4_EXT = 0x8D47,
		GL_STENCIL_INDEX8_EXT = 0x8D48,
		GL_STENCIL_INDEX16_EXT = 0x8D49,
		GL_RENDERBUFFER_RED_SIZE_EXT = 0x8D50,
		GL_RENDERBUFFER_GREEN_SIZE_EXT = 0x8D51,
		GL_RENDERBUFFER_BLUE_SIZE_EXT = 0x8D52,
		GL_RENDERBUFFER_ALPHA_SIZE_EXT = 0x8D53,
		GL_RENDERBUFFER_DEPTH_SIZE_EXT = 0x8D54,
		GL_RENDERBUFFER_STENCIL_SIZE_EXT = 0x8D55,
	};
	extern void (*glBindFramebufferEXT)(GLenum target, GLuint framebuffer);
	extern void (*glBindRenderbufferEXT)(GLenum target, GLuint renderbuffer);
	extern GLenum (*glCheckFramebufferStatusEXT)(GLenum target);
	extern void (*glDeleteFramebuffersEXT)(GLsizei n, const GLuint *framebuffers);
	extern void (*glDeleteRenderbuffersEXT)(GLsizei n, const GLuint *renderbuffers);
	extern void (*glFramebufferRenderbufferEXT)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
	extern void (*glFramebufferTexture1DEXT)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	extern void (*glFramebufferTexture2DEXT)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	extern void (*glFramebufferTexture3DEXT)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
	extern void (*glGenFramebuffersEXT)(GLsizei n, GLuint *framebuffers);
	extern void (*glGenRenderbuffersEXT)(GLsizei n, GLuint *renderbuffers);
	extern void (*glGenerateMipmapEXT)(GLenum target);
	extern void (*glGetFramebufferAttachmentParameterivEXT)(GLenum target, GLenum attachment, GLenum pname, GLint *params);
	extern void (*glGetRenderbufferParameterivEXT)(GLenum target, GLenum pname, GLint *params);
	extern GLboolean (*glIsFramebufferEXT)(GLuint framebuffer);
	extern GLboolean (*glIsRenderbufferEXT)(GLuint renderbuffer);
	extern void (*glRenderbufferStorageEXT)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
	#endif // GL_EXT_framebuffer_object
	
	#ifdef GL_EXT_framebuffer_sRGB
	extern bool ext_GL_EXT_framebuffer_sRGB;
	enum {
		GL_FRAMEBUFFER_SRGB_EXT = 0x8DB9,
		GL_FRAMEBUFFER_SRGB_CAPABLE_EXT = 0x8DBA,
	};
	#endif // GL_EXT_framebuffer_sRGB
	
	#ifdef GL_EXT_geometry_shader4
	extern bool ext_GL_EXT_geometry_shader4;
	enum {
		GL_LINES_ADJACENCY_EXT = 0x000A,
		GL_LINE_STRIP_ADJACENCY_EXT = 0x000B,
		GL_TRIANGLES_ADJACENCY_EXT = 0x000C,
		GL_TRIANGLE_STRIP_ADJACENCY_EXT = 0x000D,
		GL_GEOMETRY_SHADER_EXT = 0x8DD9,
		GL_GEOMETRY_VERTICES_OUT_EXT = 0x8DDA,
		GL_GEOMETRY_INPUT_TYPE_EXT = 0x8DDB,
		GL_GEOMETRY_OUTPUT_TYPE_EXT = 0x8DDC,
		GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT = 0x8C29,
		GL_MAX_GEOMETRY_VARYING_COMPONENTS_EXT = 0x8DDD,
		GL_MAX_VERTEX_VARYING_COMPONENTS_EXT = 0x8DDE,
		GL_MAX_VARYING_COMPONENTS_EXT = 0x8B4B,
		GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT = 0x8DDF,
		GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT = 0x8DE0,
		GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT = 0x8DE1,
		GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT = 0x8DA8,
		GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT = 0x8DA9,
		GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT = 0x8DA7,
		GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT = 0x8CD4,
		GL_PROGRAM_POINT_SIZE_EXT = 0x8642,
	};
	extern void (*glProgramParameteriEXT)(GLuint program, GLenum pname, GLint value);
	#endif // GL_EXT_geometry_shader4
	
	#ifdef GL_EXT_gpu_program_parameters
	extern bool ext_GL_EXT_gpu_program_parameters;
	extern void (*glProgramEnvParameters4fvEXT)(GLenum target, GLuint index, GLsizei count, const GLfloat *params);
	extern void (*glProgramLocalParameters4fvEXT)(GLenum target, GLuint index, GLsizei count, const GLfloat *params);
	#endif // GL_EXT_gpu_program_parameters
	
	#ifdef GL_EXT_gpu_shader4
	extern bool ext_GL_EXT_gpu_shader4;
	enum {
		GL_VERTEX_ATTRIB_ARRAY_INTEGER_EXT = 0x88FD,
		GL_SAMPLER_1D_ARRAY_EXT = 0x8DC0,
		GL_SAMPLER_2D_ARRAY_EXT = 0x8DC1,
		GL_SAMPLER_BUFFER_EXT = 0x8DC2,
		GL_SAMPLER_1D_ARRAY_SHADOW_EXT = 0x8DC3,
		GL_SAMPLER_2D_ARRAY_SHADOW_EXT = 0x8DC4,
		GL_SAMPLER_CUBE_SHADOW_EXT = 0x8DC5,
		GL_UNSIGNED_INT_VEC2_EXT = 0x8DC6,
		GL_UNSIGNED_INT_VEC3_EXT = 0x8DC7,
		GL_UNSIGNED_INT_VEC4_EXT = 0x8DC8,
		GL_INT_SAMPLER_1D_EXT = 0x8DC9,
		GL_INT_SAMPLER_2D_EXT = 0x8DCA,
		GL_INT_SAMPLER_3D_EXT = 0x8DCB,
		GL_INT_SAMPLER_CUBE_EXT = 0x8DCC,
		GL_INT_SAMPLER_2D_RECT_EXT = 0x8DCD,
		GL_INT_SAMPLER_1D_ARRAY_EXT = 0x8DCE,
		GL_INT_SAMPLER_2D_ARRAY_EXT = 0x8DCF,
		GL_INT_SAMPLER_BUFFER_EXT = 0x8DD0,
		GL_UNSIGNED_INT_SAMPLER_1D_EXT = 0x8DD1,
		GL_UNSIGNED_INT_SAMPLER_2D_EXT = 0x8DD2,
		GL_UNSIGNED_INT_SAMPLER_3D_EXT = 0x8DD3,
		GL_UNSIGNED_INT_SAMPLER_CUBE_EXT = 0x8DD4,
		GL_UNSIGNED_INT_SAMPLER_2D_RECT_EXT = 0x8DD5,
		GL_UNSIGNED_INT_SAMPLER_1D_ARRAY_EXT = 0x8DD6,
		GL_UNSIGNED_INT_SAMPLER_2D_ARRAY_EXT = 0x8DD7,
		GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT = 0x8DD8,
		GL_MIN_PROGRAM_TEXEL_OFFSET_EXT = 0x8904,
		GL_MAX_PROGRAM_TEXEL_OFFSET_EXT = 0x8905,
	};
	extern void (*glBindFragDataLocationEXT)(GLuint program, GLuint color, const GLchar *name);
	extern GLint (*glGetFragDataLocationEXT)(GLuint program, const GLchar *name);
	extern void (*glGetUniformuivEXT)(GLuint program, GLint location, GLuint *params);
	extern void (*glUniform1uiEXT)(GLint location, GLuint v0);
	extern void (*glUniform1uivEXT)(GLint location, GLsizei count, const GLuint *value);
	extern void (*glUniform2uiEXT)(GLint location, GLuint v0, GLuint v1);
	extern void (*glUniform2uivEXT)(GLint location, GLsizei count, const GLuint *value);
	extern void (*glUniform3uiEXT)(GLint location, GLuint v0, GLuint v1, GLuint v2);
	extern void (*glUniform3uivEXT)(GLint location, GLsizei count, const GLuint *value);
	extern void (*glUniform4uiEXT)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
	extern void (*glUniform4uivEXT)(GLint location, GLsizei count, const GLuint *value);
	#endif // GL_EXT_gpu_shader4
	
	#ifdef GL_EXT_histogram
	extern bool ext_GL_EXT_histogram;
	enum {
		GL_HISTOGRAM_EXT = 0x8024,
		GL_MINMAX_EXT = 0x802E,
		GL_TABLE_TOO_LARGE_EXT = 0x8031,
		GL_HISTOGRAM_ALPHA_SIZE_EXT = 0x802B,
		GL_HISTOGRAM_BLUE_SIZE_EXT = 0x802A,
		GL_HISTOGRAM_FORMAT_EXT = 0x8027,
		GL_HISTOGRAM_GREEN_SIZE_EXT = 0x8029,
		GL_HISTOGRAM_LUMINANCE_SIZE_EXT = 0x802C,
		GL_HISTOGRAM_RED_SIZE_EXT = 0x8028,
		GL_HISTOGRAM_SINK_EXT = 0x802D,
		GL_HISTOGRAM_WIDTH_EXT = 0x8026,
		GL_MINMAX_FORMAT_EXT = 0x802F,
		GL_MINMAX_SINK_EXT = 0x8030,
		GL_PROXY_HISTOGRAM_EXT = 0x8025,
	};
	extern void (*glGetHistogramEXT)(GLenum target, GLboolean reset, GLenum format, GLenum type, void *values);
	extern void (*glGetHistogramParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetHistogramParameterivEXT)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetMinmaxEXT)(GLenum target, GLboolean reset, GLenum format, GLenum type, void *values);
	extern void (*glGetMinmaxParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetMinmaxParameterivEXT)(GLenum target, GLenum pname, GLint *params);
	extern void (*glHistogramEXT)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
	extern void (*glMinmaxEXT)(GLenum target, GLenum internalformat, GLboolean sink);
	extern void (*glResetHistogramEXT)(GLenum target);
	extern void (*glResetMinmaxEXT)(GLenum target);
	#endif // GL_EXT_histogram
	
	#ifdef GL_EXT_index_array_formats
	extern bool ext_GL_EXT_index_array_formats;
	enum {
		GL_IUI_V2F_EXT = 0x81AD,
		GL_IUI_V3F_EXT = 0x81AE,
		GL_IUI_N3F_V2F_EXT = 0x81AF,
		GL_IUI_N3F_V3F_EXT = 0x81B0,
		GL_T2F_IUI_V2F_EXT = 0x81B1,
		GL_T2F_IUI_V3F_EXT = 0x81B2,
		GL_T2F_IUI_N3F_V2F_EXT = 0x81B3,
		GL_T2F_IUI_N3F_V3F_EXT = 0x81B4,
	};
	#endif // GL_EXT_index_array_formats
	
	#ifdef GL_EXT_index_func
	extern bool ext_GL_EXT_index_func;
	enum {
		GL_INDEX_TEST_EXT = 0x81B5,
		GL_INDEX_TEST_FUNC_EXT = 0x81B6,
		GL_INDEX_TEST_REF_EXT = 0x81B7,
	};
	extern void (*glIndexFuncEXT)(GLenum func, GLclampf ref);
	#endif // GL_EXT_index_func
	
	#ifdef GL_EXT_index_material
	extern bool ext_GL_EXT_index_material;
	enum {
		GL_INDEX_MATERIAL_EXT = 0x81B8,
		GL_INDEX_MATERIAL_PARAMETER_EXT = 0x81B9,
		GL_INDEX_MATERIAL_FACE_EXT = 0x81BA,
	};
	extern void (*glIndexMaterialEXT)(GLenum face, GLenum mode);
	#endif // GL_EXT_index_material
	
	#ifdef GL_EXT_light_texture
	extern bool ext_GL_EXT_light_texture;
	enum {
		GL_FRAGMENT_MATERIAL_EXT = 0x8349,
		GL_FRAGMENT_NORMAL_EXT = 0x834A,
		GL_FRAGMENT_COLOR_EXT = 0x834C,
		GL_ATTENUATION_EXT = 0x834D,
		GL_SHADOW_ATTENUATION_EXT = 0x834E,
		GL_TEXTURE_APPLICATION_MODE_EXT = 0x834F,
		GL_TEXTURE_LIGHT_EXT = 0x8350,
		GL_TEXTURE_MATERIAL_FACE_EXT = 0x8351,
		GL_TEXTURE_MATERIAL_PARAMETER_EXT = 0x8352,
		#if !defined(GL_EXT_fog_coord)
		GL_FRAGMENT_DEPTH_EXT = 0x8452,
		#endif
	};
	extern void (*glApplyTextureEXT)(GLenum mode);
	extern void (*glTextureLightEXT)(GLenum pname);
	extern void (*glTextureMaterialEXT)(GLenum face, GLenum mode);
	#endif // GL_EXT_light_texture
	
	#ifdef GL_EXT_multi_draw_arrays
	extern bool ext_GL_EXT_multi_draw_arrays;
	extern void (*glMultiDrawArraysEXT)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
	extern void (*glMultiDrawElementsEXT)(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount);
	#endif // GL_EXT_multi_draw_arrays
	
	#ifdef GL_EXT_multisample
	extern bool ext_GL_EXT_multisample;
	enum {
		GL_MULTISAMPLE_BIT_EXT = 0x20000000,
		GL_1PASS_EXT = 0x80A1,
		GL_2PASS_0_EXT = 0x80A2,
		GL_2PASS_1_EXT = 0x80A3,
		GL_4PASS_0_EXT = 0x80A4,
		GL_4PASS_1_EXT = 0x80A5,
		GL_4PASS_2_EXT = 0x80A6,
		GL_4PASS_3_EXT = 0x80A7,
		GL_MULTISAMPLE_EXT = 0x809D,
		GL_SAMPLE_ALPHA_TO_MASK_EXT = 0x809E,
		GL_SAMPLE_ALPHA_TO_ONE_EXT = 0x809F,
		GL_SAMPLE_MASK_EXT = 0x80A0,
		GL_SAMPLE_BUFFERS_EXT = 0x80A8,
		GL_SAMPLES_EXT = 0x80A9,
		GL_SAMPLE_MASK_VALUE_EXT = 0x80AA,
		GL_SAMPLE_MASK_INVERT_EXT = 0x80AB,
		GL_SAMPLE_PATTERN_EXT = 0x80AC,
	};
	extern void (*glSampleMaskEXT)(GLclampf value, GLboolean invert);
	extern void (*glSamplePatternEXT)(GLenum pattern);
	#endif // GL_EXT_multisample
	
	#ifdef GL_EXT_packed_depth_stencil
	extern bool ext_GL_EXT_packed_depth_stencil;
	enum {
		GL_DEPTH_STENCIL_EXT = 0x84F9,
		GL_UNSIGNED_INT_24_8_EXT = 0x84FA,
		GL_DEPTH24_STENCIL8_EXT = 0x88F0,
		GL_TEXTURE_STENCIL_SIZE_EXT = 0x88F1,
	};
	#endif // GL_EXT_packed_depth_stencil
	
	#ifdef GL_EXT_packed_float
	extern bool ext_GL_EXT_packed_float;
	enum {
		GL_R11F_G11F_B10F_EXT = 0x8C3A,
		GL_UNSIGNED_INT_10F_11F_11F_REV_EXT = 0x8C3B,
		GL_RGBA_SIGNED_COMPONENTS_EXT = 0x8C3C,
	};
	#endif // GL_EXT_packed_float
	
	#ifdef GL_EXT_packed_pixels
	extern bool ext_GL_EXT_packed_pixels;
	enum {
		GL_UNSIGNED_BYTE_3_3_2_EXT = 0x8032,
		GL_UNSIGNED_INT_10_10_10_2_EXT = 0x8036,
		GL_UNSIGNED_INT_8_8_8_8_EXT = 0x8035,
		GL_UNSIGNED_SHORT_4_4_4_4_EXT = 0x8033,
		GL_UNSIGNED_SHORT_5_5_5_1_EXT = 0x8034,
	};
	#endif // GL_EXT_packed_pixels
	
	#ifdef GL_EXT_paletted_texture
	extern bool ext_GL_EXT_paletted_texture;
	enum {
		GL_COLOR_INDEX1_EXT = 0x80E2,
		GL_COLOR_INDEX2_EXT = 0x80E3,
		GL_COLOR_INDEX4_EXT = 0x80E4,
		GL_COLOR_INDEX8_EXT = 0x80E5,
		GL_COLOR_INDEX12_EXT = 0x80E6,
		GL_COLOR_INDEX16_EXT = 0x80E7,
		GL_TEXTURE_INDEX_SIZE_EXT = 0x80ED,
	};
	extern void (*glColorTableEXT)(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void *table);
	extern void (*glGetColorTableEXT)(GLenum target, GLenum format, GLenum type, void *data);
	extern void (*glGetColorTableParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetColorTableParameterivEXT)(GLenum target, GLenum pname, GLint *params);
	#endif // GL_EXT_paletted_texture
	
	#ifdef GL_EXT_pixel_buffer_object
	extern bool ext_GL_EXT_pixel_buffer_object;
	enum {
		GL_PIXEL_PACK_BUFFER_EXT = 0x88EB,
		GL_PIXEL_UNPACK_BUFFER_EXT = 0x88EC,
		GL_PIXEL_PACK_BUFFER_BINDING_EXT = 0x88ED,
		GL_PIXEL_UNPACK_BUFFER_BINDING_EXT = 0x88EF,
	};
	#endif // GL_EXT_pixel_buffer_object
	
	#ifdef GL_EXT_pixel_transform
	extern bool ext_GL_EXT_pixel_transform;
	enum {
		GL_PIXEL_TRANSFORM_2D_EXT = 0x8330,
		GL_PIXEL_MAG_FILTER_EXT = 0x8331,
		GL_PIXEL_MIN_FILTER_EXT = 0x8332,
		GL_PIXEL_CUBIC_WEIGHT_EXT = 0x8333,
		GL_CUBIC_EXT = 0x8334,
		GL_AVERAGE_EXT = 0x8335,
		GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT = 0x8336,
		GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT = 0x8337,
		GL_PIXEL_TRANSFORM_2D_MATRIX_EXT = 0x8338,
	};
	extern void (*glGetPixelTransformParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetPixelTransformParameterivEXT)(GLenum target, GLenum pname, GLint *params);
	extern void (*glPixelTransformParameterfEXT)(GLenum target, GLenum pname, GLfloat param);
	extern void (*glPixelTransformParameterfvEXT)(GLenum target, GLenum pname, const GLfloat *params);
	extern void (*glPixelTransformParameteriEXT)(GLenum target, GLenum pname, GLint param);
	extern void (*glPixelTransformParameterivEXT)(GLenum target, GLenum pname, const GLint *params);
	#endif // GL_EXT_pixel_transform
	
	#ifdef GL_EXT_point_parameters
	extern bool ext_GL_EXT_point_parameters;
	enum {
		GL_DISTANCE_ATTENUATION_EXT = 0x8129,
		GL_POINT_FADE_THRESHOLD_SIZE_EXT = 0x8128,
		GL_POINT_SIZE_MAX_EXT = 0x8127,
		GL_POINT_SIZE_MIN_EXT = 0x8126,
	};
	extern void (*glPointParameterfEXT)(GLenum pname, GLfloat param);
	extern void (*glPointParameterfvEXT)(GLenum pname, const GLfloat *params);
	#endif // GL_EXT_point_parameters
	
	#ifdef GL_EXT_polygon_offset
	extern bool ext_GL_EXT_polygon_offset;
	enum {
		GL_POLYGON_OFFSET_BIAS_EXT = 0x8039,
		GL_POLYGON_OFFSET_EXT = 0x8037,
		GL_POLYGON_OFFSET_FACTOR_EXT = 0x8038,
	};
	extern void (*glPolygonOffsetEXT)(GLfloat factor, GLfloat bias);
	#endif // GL_EXT_polygon_offset
	
	#ifdef GL_EXT_polygon_offset_clamp
	extern bool ext_GL_EXT_polygon_offset_clamp;
	enum {
		GL_POLYGON_OFFSET_CLAMP_EXT = 0x8E1B,
	};
	extern void (*glPolygonOffsetClampEXT)(GLfloat factor, GLfloat units, GLfloat clamp);
	#endif // GL_EXT_polygon_offset_clamp
	
	#ifdef GL_EXT_provoking_vertex
	extern bool ext_GL_EXT_provoking_vertex;
	enum {
		GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION_EXT = 0x8E4C,
		GL_FIRST_VERTEX_CONVENTION_EXT = 0x8E4D,
		GL_LAST_VERTEX_CONVENTION_EXT = 0x8E4E,
		GL_PROVOKING_VERTEX_EXT = 0x8E4F,
	};
	extern void (*glProvokingVertexEXT)(GLenum mode);
	#endif // GL_EXT_provoking_vertex
	
	#ifdef GL_EXT_raster_multisample
	extern bool ext_GL_EXT_raster_multisample;
	enum {
		GL_RASTER_MULTISAMPLE_EXT = 0x9327,
		GL_RASTER_SAMPLES_EXT = 0x9328,
		GL_MAX_RASTER_SAMPLES_EXT = 0x9329,
		GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT = 0x932A,
		GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT = 0x932B,
		GL_EFFECTIVE_RASTER_SAMPLES_EXT = 0x932C,
	};
	extern void (*glRasterSamplesEXT)(GLuint samples, GLboolean fixedsamplelocations);
	#endif // GL_EXT_raster_multisample
	
	#ifdef GL_EXT_rescale_normal
	extern bool ext_GL_EXT_rescale_normal;
	enum {
		GL_RESCALE_NORMAL_EXT = 0x803A,
	};
	#endif // GL_EXT_rescale_normal
	
	#ifdef GL_EXT_secondary_color
	extern bool ext_GL_EXT_secondary_color;
	enum {
		GL_COLOR_SUM_EXT = 0x8458,
		GL_CURRENT_SECONDARY_COLOR_EXT = 0x8459,
		GL_SECONDARY_COLOR_ARRAY_SIZE_EXT = 0x845A,
		GL_SECONDARY_COLOR_ARRAY_TYPE_EXT = 0x845B,
		GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT = 0x845C,
		GL_SECONDARY_COLOR_ARRAY_POINTER_EXT = 0x845D,
		GL_SECONDARY_COLOR_ARRAY_EXT = 0x845E,
	};
	extern void (*glSecondaryColor3bEXT)(GLbyte red, GLbyte green, GLbyte blue);
	extern void (*glSecondaryColor3bvEXT)(const GLbyte *v);
	extern void (*glSecondaryColor3dEXT)(GLdouble red, GLdouble green, GLdouble blue);
	extern void (*glSecondaryColor3dvEXT)(const GLdouble *v);
	extern void (*glSecondaryColor3fEXT)(GLfloat red, GLfloat green, GLfloat blue);
	extern void (*glSecondaryColor3fvEXT)(const GLfloat *v);
	extern void (*glSecondaryColor3iEXT)(GLint red, GLint green, GLint blue);
	extern void (*glSecondaryColor3ivEXT)(const GLint *v);
	extern void (*glSecondaryColor3sEXT)(GLshort red, GLshort green, GLshort blue);
	extern void (*glSecondaryColor3svEXT)(const GLshort *v);
	extern void (*glSecondaryColor3ubEXT)(GLubyte red, GLubyte green, GLubyte blue);
	extern void (*glSecondaryColor3ubvEXT)(const GLubyte *v);
	extern void (*glSecondaryColor3uiEXT)(GLuint red, GLuint green, GLuint blue);
	extern void (*glSecondaryColor3uivEXT)(const GLuint *v);
	extern void (*glSecondaryColor3usEXT)(GLushort red, GLushort green, GLushort blue);
	extern void (*glSecondaryColor3usvEXT)(const GLushort *v);
	extern void (*glSecondaryColorPointerEXT)(GLint size, GLenum type, GLsizei stride, const void *pointer);
	#endif // GL_EXT_secondary_color
	
	#ifdef GL_EXT_separate_shader_objects
	extern bool ext_GL_EXT_separate_shader_objects;
	enum {
		GL_VERTEX_SHADER_BIT_EXT = 0x00000001,
		GL_FRAGMENT_SHADER_BIT_EXT = 0x00000002,
		GL_ALL_SHADER_BITS_EXT = 0xFFFFFFFF,
		GL_ACTIVE_PROGRAM_EXT = 0x8259,
		GL_PROGRAM_SEPARABLE_EXT = 0x8258,
		GL_PROGRAM_PIPELINE_BINDING_EXT = 0x825A,
	};
	extern void (*glActiveProgramEXT)(GLuint program);
	extern void (*glActiveShaderProgramEXT)(GLuint pipeline, GLuint program);
	extern void (*glBindProgramPipelineEXT)(GLuint pipeline);
	extern GLuint (*glCreateShaderProgramEXT)(GLenum type, const GLchar *string);
	extern GLuint (*glCreateShaderProgramvEXT)(GLenum type, GLsizei count, const GLchar **strings);
	extern void (*glDeleteProgramPipelinesEXT)(GLsizei n, const GLuint *pipelines);
	extern void (*glGenProgramPipelinesEXT)(GLsizei n, GLuint *pipelines);
	extern void (*glGetProgramPipelineInfoLogEXT)(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
	extern void (*glGetProgramPipelineivEXT)(GLuint pipeline, GLenum pname, GLint *params);
	extern GLboolean (*glIsProgramPipelineEXT)(GLuint pipeline);
	#if !defined(GL_EXT_geometry_shader4)
	extern void (*glProgramParameteriEXT)(GLuint program, GLenum pname, GLint value);
	#endif
	#if !defined(GL_EXT_direct_state_access)
	extern void (*glProgramUniform1fEXT)(GLuint program, GLint location, GLfloat v0);
	extern void (*glProgramUniform1fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
	extern void (*glProgramUniform1iEXT)(GLuint program, GLint location, GLint v0);
	extern void (*glProgramUniform1ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value);
	extern void (*glProgramUniform1uiEXT)(GLuint program, GLint location, GLuint v0);
	extern void (*glProgramUniform1uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value);
	extern void (*glProgramUniform2fEXT)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
	extern void (*glProgramUniform2fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
	extern void (*glProgramUniform2iEXT)(GLuint program, GLint location, GLint v0, GLint v1);
	extern void (*glProgramUniform2ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value);
	extern void (*glProgramUniform2uiEXT)(GLuint program, GLint location, GLuint v0, GLuint v1);
	extern void (*glProgramUniform2uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value);
	extern void (*glProgramUniform3fEXT)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
	extern void (*glProgramUniform3fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
	extern void (*glProgramUniform3iEXT)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
	extern void (*glProgramUniform3ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value);
	extern void (*glProgramUniform3uiEXT)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
	extern void (*glProgramUniform3uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value);
	extern void (*glProgramUniform4fEXT)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
	extern void (*glProgramUniform4fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
	extern void (*glProgramUniform4iEXT)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
	extern void (*glProgramUniform4ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value);
	extern void (*glProgramUniform4uiEXT)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
	extern void (*glProgramUniform4uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value);
	extern void (*glProgramUniformMatrix2fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix2x3fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix2x4fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix3fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix3x2fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix3x4fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix4fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix4x2fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	extern void (*glProgramUniformMatrix4x3fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
	#endif
	extern void (*glUseProgramStagesEXT)(GLuint pipeline, GLbitfield stages, GLuint program);
	extern void (*glUseShaderProgramEXT)(GLenum type, GLuint program);
	extern void (*glValidateProgramPipelineEXT)(GLuint pipeline);
	#endif // GL_EXT_separate_shader_objects
	
	#ifdef GL_EXT_separate_specular_color
	extern bool ext_GL_EXT_separate_specular_color;
	enum {
		GL_SEPARATE_SPECULAR_COLOR_EXT = 0x81FA,
		GL_SINGLE_COLOR_EXT = 0x81F9,
		GL_LIGHT_MODEL_COLOR_CONTROL_EXT = 0x81F8,
	};
	#endif // GL_EXT_separate_specular_color
	
	#ifdef GL_EXT_shader_image_load_store
	extern bool ext_GL_EXT_shader_image_load_store;
	enum {
		GL_ALL_BARRIER_BITS_EXT = 0xFFFFFFFF,
		GL_ATOMIC_COUNTER_BARRIER_BIT_EXT = 0x00001000,
		GL_BUFFER_UPDATE_BARRIER_BIT_EXT = 0x00000200,
		GL_COMMAND_BARRIER_BIT_EXT = 0x00000040,
		GL_ELEMENT_ARRAY_BARRIER_BIT_EXT = 0x00000002,
		GL_FRAMEBUFFER_BARRIER_BIT_EXT = 0x00000400,
		GL_PIXEL_BUFFER_BARRIER_BIT_EXT = 0x00000080,
		GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT = 0x00000020,
		GL_TEXTURE_FETCH_BARRIER_BIT_EXT = 0x00000008,
		GL_TEXTURE_UPDATE_BARRIER_BIT_EXT = 0x00000100,
		GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT = 0x00000800,
		GL_UNIFORM_BARRIER_BIT_EXT = 0x00000004,
		GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT = 0x00000001,
		GL_MAX_IMAGE_UNITS_EXT = 0x8F38,
		GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS_EXT = 0x8F39,
		GL_IMAGE_BINDING_NAME_EXT = 0x8F3A,
		GL_IMAGE_BINDING_LEVEL_EXT = 0x8F3B,
		GL_IMAGE_BINDING_LAYERED_EXT = 0x8F3C,
		GL_IMAGE_BINDING_LAYER_EXT = 0x8F3D,
		GL_IMAGE_BINDING_ACCESS_EXT = 0x8F3E,
		GL_IMAGE_1D_EXT = 0x904C,
		GL_IMAGE_2D_EXT = 0x904D,
		GL_IMAGE_3D_EXT = 0x904E,
		GL_IMAGE_2D_RECT_EXT = 0x904F,
		GL_IMAGE_CUBE_EXT = 0x9050,
		GL_IMAGE_BUFFER_EXT = 0x9051,
		GL_IMAGE_1D_ARRAY_EXT = 0x9052,
		GL_IMAGE_2D_ARRAY_EXT = 0x9053,
		GL_IMAGE_CUBE_MAP_ARRAY_EXT = 0x9054,
		GL_IMAGE_2D_MULTISAMPLE_EXT = 0x9055,
		GL_IMAGE_2D_MULTISAMPLE_ARRAY_EXT = 0x9056,
		GL_INT_IMAGE_1D_EXT = 0x9057,
		GL_INT_IMAGE_2D_EXT = 0x9058,
		GL_INT_IMAGE_3D_EXT = 0x9059,
		GL_INT_IMAGE_2D_RECT_EXT = 0x905A,
		GL_INT_IMAGE_CUBE_EXT = 0x905B,
		GL_INT_IMAGE_BUFFER_EXT = 0x905C,
		GL_INT_IMAGE_1D_ARRAY_EXT = 0x905D,
		GL_INT_IMAGE_2D_ARRAY_EXT = 0x905E,
		GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT = 0x905F,
		GL_INT_IMAGE_2D_MULTISAMPLE_EXT = 0x9060,
		GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT = 0x9061,
		GL_UNSIGNED_INT_IMAGE_1D_EXT = 0x9062,
		GL_UNSIGNED_INT_IMAGE_2D_EXT = 0x9063,
		GL_UNSIGNED_INT_IMAGE_3D_EXT = 0x9064,
		GL_UNSIGNED_INT_IMAGE_2D_RECT_EXT = 0x9065,
		GL_UNSIGNED_INT_IMAGE_CUBE_EXT = 0x9066,
		GL_UNSIGNED_INT_IMAGE_BUFFER_EXT = 0x9067,
		GL_UNSIGNED_INT_IMAGE_1D_ARRAY_EXT = 0x9068,
		GL_UNSIGNED_INT_IMAGE_2D_ARRAY_EXT = 0x9069,
		GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT = 0x906A,
		GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_EXT = 0x906B,
		GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT = 0x906C,
		GL_MAX_IMAGE_SAMPLES_EXT = 0x906D,
		GL_IMAGE_BINDING_FORMAT_EXT = 0x906E,
	};
	extern void (*glBindImageTextureEXT)(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format);
	extern void (*glMemoryBarrierEXT)(GLbitfield barriers);
	#endif // GL_EXT_shader_image_load_store
	
	#ifdef GL_EXT_shared_texture_palette
	extern bool ext_GL_EXT_shared_texture_palette;
	enum {
		GL_SHARED_TEXTURE_PALETTE_EXT = 0x81FB,
	};
	#endif // GL_EXT_shared_texture_palette
	
	#ifdef GL_EXT_stencil_clear_tag
	extern bool ext_GL_EXT_stencil_clear_tag;
	enum {
		GL_STENCIL_TAG_BITS_EXT = 0x88F2,
		GL_STENCIL_CLEAR_TAG_VALUE_EXT = 0x88F3,
	};
	extern void (*glStencilClearTagEXT)(GLsizei stencilTagBits, GLuint stencilClearTag);
	#endif // GL_EXT_stencil_clear_tag
	
	#ifdef GL_EXT_stencil_two_side
	extern bool ext_GL_EXT_stencil_two_side;
	enum {
		GL_STENCIL_TEST_TWO_SIDE_EXT = 0x8910,
		GL_ACTIVE_STENCIL_FACE_EXT = 0x8911,
	};
	extern void (*glActiveStencilFaceEXT)(GLenum face);
	#endif // GL_EXT_stencil_two_side
	
	#ifdef GL_EXT_stencil_wrap
	extern bool ext_GL_EXT_stencil_wrap;
	enum {
		GL_INCR_WRAP_EXT = 0x8507,
		GL_DECR_WRAP_EXT = 0x8508,
	};
	#endif // GL_EXT_stencil_wrap
	
	#ifdef GL_EXT_subtexture
	extern bool ext_GL_EXT_subtexture;
	extern void (*glTexSubImage1DEXT)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
	extern void (*glTexSubImage2DEXT)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
	#endif // GL_EXT_subtexture
	
	#ifdef GL_EXT_texture
	extern bool ext_GL_EXT_texture;
	enum {
		GL_TEXTURE_TOO_LARGE_EXT = 0x8065,
		GL_RGB2_EXT = 0x804E,
		GL_REPLACE_EXT = 0x8062,
		GL_PROXY_TEXTURE_1D_EXT = 0x8063,
		GL_PROXY_TEXTURE_2D_EXT = 0x8064,
		GL_ALPHA4_EXT = 0x803B,
		GL_ALPHA8_EXT = 0x803C,
		GL_ALPHA12_EXT = 0x803D,
		GL_ALPHA16_EXT = 0x803E,
		GL_LUMINANCE4_EXT = 0x803F,
		GL_LUMINANCE8_EXT = 0x8040,
		GL_LUMINANCE12_EXT = 0x8041,
		GL_LUMINANCE16_EXT = 0x8042,
		GL_LUMINANCE4_ALPHA4_EXT = 0x8043,
		GL_LUMINANCE6_ALPHA2_EXT = 0x8044,
		GL_LUMINANCE8_ALPHA8_EXT = 0x8045,
		GL_LUMINANCE12_ALPHA4_EXT = 0x8046,
		GL_LUMINANCE12_ALPHA12_EXT = 0x8047,
		GL_LUMINANCE16_ALPHA16_EXT = 0x8048,
		GL_INTENSITY_EXT = 0x8049,
		GL_INTENSITY4_EXT = 0x804A,
		GL_INTENSITY8_EXT = 0x804B,
		GL_INTENSITY12_EXT = 0x804C,
		GL_INTENSITY16_EXT = 0x804D,
		GL_RGB4_EXT = 0x804F,
		GL_RGB5_EXT = 0x8050,
		GL_RGB8_EXT = 0x8051,
		GL_RGB10_EXT = 0x8052,
		GL_RGB12_EXT = 0x8053,
		GL_RGB16_EXT = 0x8054,
		GL_RGBA2_EXT = 0x8055,
		GL_RGBA4_EXT = 0x8056,
		GL_RGB5_A1_EXT = 0x8057,
		GL_RGBA8_EXT = 0x8058,
		GL_RGB10_A2_EXT = 0x8059,
		GL_RGBA12_EXT = 0x805A,
		GL_RGBA16_EXT = 0x805B,
		GL_TEXTURE_RED_SIZE_EXT = 0x805C,
		GL_TEXTURE_GREEN_SIZE_EXT = 0x805D,
		GL_TEXTURE_BLUE_SIZE_EXT = 0x805E,
		GL_TEXTURE_ALPHA_SIZE_EXT = 0x805F,
		GL_TEXTURE_LUMINANCE_SIZE_EXT = 0x8060,
		GL_TEXTURE_INTENSITY_SIZE_EXT = 0x8061,
	};
	#endif // GL_EXT_texture
	
	#ifdef GL_EXT_texture3D
	extern bool ext_GL_EXT_texture3D;
	enum {
		GL_TEXTURE_3D_EXT = 0x806F,
		GL_MAX_3D_TEXTURE_SIZE_EXT = 0x8073,
		GL_PACK_IMAGE_HEIGHT_EXT = 0x806C,
		GL_PACK_SKIP_IMAGES_EXT = 0x806B,
		GL_UNPACK_IMAGE_HEIGHT_EXT = 0x806E,
		GL_UNPACK_SKIP_IMAGES_EXT = 0x806D,
		GL_TEXTURE_DEPTH_EXT = 0x8071,
		GL_TEXTURE_WRAP_R_EXT = 0x8072,
		GL_PROXY_TEXTURE_3D_EXT = 0x8070,
	};
	extern void (*glTexImage3DEXT)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
	extern void (*glTexSubImage3DEXT)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
	#endif // GL_EXT_texture3D
	
	#ifdef GL_EXT_texture_array
	extern bool ext_GL_EXT_texture_array;
	enum {
		GL_TEXTURE_1D_ARRAY_EXT = 0x8C18,
		GL_PROXY_TEXTURE_1D_ARRAY_EXT = 0x8C19,
		GL_TEXTURE_2D_ARRAY_EXT = 0x8C1A,
		GL_PROXY_TEXTURE_2D_ARRAY_EXT = 0x8C1B,
		GL_TEXTURE_BINDING_1D_ARRAY_EXT = 0x8C1C,
		GL_TEXTURE_BINDING_2D_ARRAY_EXT = 0x8C1D,
		GL_MAX_ARRAY_TEXTURE_LAYERS_EXT = 0x88FF,
		GL_COMPARE_REF_DEPTH_TO_TEXTURE_EXT = 0x884E,
		#if !defined(GL_EXT_geometry_shader4)
		GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT = 0x8CD4,
		#endif
	};
	extern void (*glFramebufferTextureLayerEXT)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
	#endif // GL_EXT_texture_array
	
	#ifdef GL_EXT_texture_buffer_object
	extern bool ext_GL_EXT_texture_buffer_object;
	enum {
		GL_TEXTURE_BUFFER_EXT = 0x8C2A,
		GL_MAX_TEXTURE_BUFFER_SIZE_EXT = 0x8C2B,
		GL_TEXTURE_BINDING_BUFFER_EXT = 0x8C2C,
		GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT = 0x8C2D,
		GL_TEXTURE_BUFFER_FORMAT_EXT = 0x8C2E,
	};
	extern void (*glTexBufferEXT)(GLenum target, GLenum internalformat, GLuint buffer);
	#endif // GL_EXT_texture_buffer_object
	
	#ifdef GL_EXT_texture_compression_latc
	extern bool ext_GL_EXT_texture_compression_latc;
	enum {
		GL_COMPRESSED_LUMINANCE_LATC1_EXT = 0x8C70,
		GL_COMPRESSED_SIGNED_LUMINANCE_LATC1_EXT = 0x8C71,
		GL_COMPRESSED_LUMINANCE_ALPHA_LATC2_EXT = 0x8C72,
		GL_COMPRESSED_SIGNED_LUMINANCE_ALPHA_LATC2_EXT = 0x8C73,
	};
	#endif // GL_EXT_texture_compression_latc
	
	#ifdef GL_EXT_texture_compression_rgtc
	extern bool ext_GL_EXT_texture_compression_rgtc;
	enum {
		GL_COMPRESSED_RED_RGTC1_EXT = 0x8DBB,
		GL_COMPRESSED_SIGNED_RED_RGTC1_EXT = 0x8DBC,
		GL_COMPRESSED_RED_GREEN_RGTC2_EXT = 0x8DBD,
		GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT = 0x8DBE,
	};
	#endif // GL_EXT_texture_compression_rgtc
	
	#ifdef GL_EXT_texture_compression_s3tc
	extern bool ext_GL_EXT_texture_compression_s3tc;
	enum {
		GL_COMPRESSED_RGB_S3TC_DXT1_EXT = 0x83F0,
		GL_COMPRESSED_RGBA_S3TC_DXT1_EXT = 0x83F1,
		GL_COMPRESSED_RGBA_S3TC_DXT3_EXT = 0x83F2,
		GL_COMPRESSED_RGBA_S3TC_DXT5_EXT = 0x83F3,
	};
	#endif // GL_EXT_texture_compression_s3tc
	
	#ifdef GL_EXT_texture_cube_map
	extern bool ext_GL_EXT_texture_cube_map;
	enum {
		GL_NORMAL_MAP_EXT = 0x8511,
		GL_REFLECTION_MAP_EXT = 0x8512,
		GL_TEXTURE_CUBE_MAP_EXT = 0x8513,
		GL_TEXTURE_BINDING_CUBE_MAP_EXT = 0x8514,
		GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT = 0x8515,
		GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT = 0x8516,
		GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT = 0x8517,
		GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT = 0x8518,
		GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT = 0x8519,
		GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT = 0x851A,
		GL_PROXY_TEXTURE_CUBE_MAP_EXT = 0x851B,
		GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT = 0x851C,
	};
	#endif // GL_EXT_texture_cube_map
	
	#ifdef GL_EXT_texture_env_combine
	extern bool ext_GL_EXT_texture_env_combine;
	enum {
		GL_COMBINE_EXT = 0x8570,
		GL_COMBINE_RGB_EXT = 0x8571,
		GL_COMBINE_ALPHA_EXT = 0x8572,
		GL_RGB_SCALE_EXT = 0x8573,
		GL_ADD_SIGNED_EXT = 0x8574,
		GL_INTERPOLATE_EXT = 0x8575,
		GL_CONSTANT_EXT = 0x8576,
		GL_PRIMARY_COLOR_EXT = 0x8577,
		GL_PREVIOUS_EXT = 0x8578,
		GL_SOURCE0_RGB_EXT = 0x8580,
		GL_SOURCE1_RGB_EXT = 0x8581,
		GL_SOURCE2_RGB_EXT = 0x8582,
		GL_SOURCE0_ALPHA_EXT = 0x8588,
		GL_SOURCE1_ALPHA_EXT = 0x8589,
		GL_SOURCE2_ALPHA_EXT = 0x858A,
		GL_OPERAND0_RGB_EXT = 0x8590,
		GL_OPERAND1_RGB_EXT = 0x8591,
		GL_OPERAND2_RGB_EXT = 0x8592,
		GL_OPERAND0_ALPHA_EXT = 0x8598,
		GL_OPERAND1_ALPHA_EXT = 0x8599,
		GL_OPERAND2_ALPHA_EXT = 0x859A,
	};
	#endif // GL_EXT_texture_env_combine
	
	#ifdef GL_EXT_texture_env_dot3
	extern bool ext_GL_EXT_texture_env_dot3;
	enum {
		GL_DOT3_RGB_EXT = 0x8740,
		GL_DOT3_RGBA_EXT = 0x8741,
	};
	#endif // GL_EXT_texture_env_dot3
	
	#ifdef GL_EXT_texture_filter_anisotropic
	extern bool ext_GL_EXT_texture_filter_anisotropic;
	enum {
		GL_TEXTURE_MAX_ANISOTROPY_EXT = 0x84FE,
		GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT = 0x84FF,
	};
	#endif // GL_EXT_texture_filter_anisotropic
	
	#ifdef GL_EXT_texture_filter_minmax
	extern bool ext_GL_EXT_texture_filter_minmax;
	enum {
		#if !defined(GL_EXT_raster_multisample)
		GL_RASTER_MULTISAMPLE_EXT = 0x9327,
		GL_RASTER_SAMPLES_EXT = 0x9328,
		GL_MAX_RASTER_SAMPLES_EXT = 0x9329,
		GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT = 0x932A,
		GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT = 0x932B,
		GL_EFFECTIVE_RASTER_SAMPLES_EXT = 0x932C,
		#endif
	};
	#if !defined(GL_EXT_raster_multisample)
	extern void (*glRasterSamplesEXT)(GLuint samples, GLboolean fixedsamplelocations);
	#endif
	#endif // GL_EXT_texture_filter_minmax
	
	#ifdef GL_EXT_texture_integer
	extern bool ext_GL_EXT_texture_integer;
	enum {
		GL_RGBA32UI_EXT = 0x8D70,
		GL_RGB32UI_EXT = 0x8D71,
		GL_ALPHA32UI_EXT = 0x8D72,
		GL_INTENSITY32UI_EXT = 0x8D73,
		GL_LUMINANCE32UI_EXT = 0x8D74,
		GL_LUMINANCE_ALPHA32UI_EXT = 0x8D75,
		GL_RGBA16UI_EXT = 0x8D76,
		GL_RGB16UI_EXT = 0x8D77,
		GL_ALPHA16UI_EXT = 0x8D78,
		GL_INTENSITY16UI_EXT = 0x8D79,
		GL_LUMINANCE16UI_EXT = 0x8D7A,
		GL_LUMINANCE_ALPHA16UI_EXT = 0x8D7B,
		GL_RGBA8UI_EXT = 0x8D7C,
		GL_RGB8UI_EXT = 0x8D7D,
		GL_ALPHA8UI_EXT = 0x8D7E,
		GL_INTENSITY8UI_EXT = 0x8D7F,
		GL_LUMINANCE8UI_EXT = 0x8D80,
		GL_LUMINANCE_ALPHA8UI_EXT = 0x8D81,
		GL_RGBA32I_EXT = 0x8D82,
		GL_RGB32I_EXT = 0x8D83,
		GL_ALPHA32I_EXT = 0x8D84,
		GL_INTENSITY32I_EXT = 0x8D85,
		GL_LUMINANCE32I_EXT = 0x8D86,
		GL_LUMINANCE_ALPHA32I_EXT = 0x8D87,
		GL_RGBA16I_EXT = 0x8D88,
		GL_RGB16I_EXT = 0x8D89,
		GL_ALPHA16I_EXT = 0x8D8A,
		GL_INTENSITY16I_EXT = 0x8D8B,
		GL_LUMINANCE16I_EXT = 0x8D8C,
		GL_LUMINANCE_ALPHA16I_EXT = 0x8D8D,
		GL_RGBA8I_EXT = 0x8D8E,
		GL_RGB8I_EXT = 0x8D8F,
		GL_ALPHA8I_EXT = 0x8D90,
		GL_INTENSITY8I_EXT = 0x8D91,
		GL_LUMINANCE8I_EXT = 0x8D92,
		GL_LUMINANCE_ALPHA8I_EXT = 0x8D93,
		GL_RED_INTEGER_EXT = 0x8D94,
		GL_GREEN_INTEGER_EXT = 0x8D95,
		GL_BLUE_INTEGER_EXT = 0x8D96,
		GL_ALPHA_INTEGER_EXT = 0x8D97,
		GL_RGB_INTEGER_EXT = 0x8D98,
		GL_RGBA_INTEGER_EXT = 0x8D99,
		GL_BGR_INTEGER_EXT = 0x8D9A,
		GL_BGRA_INTEGER_EXT = 0x8D9B,
		GL_LUMINANCE_INTEGER_EXT = 0x8D9C,
		GL_LUMINANCE_ALPHA_INTEGER_EXT = 0x8D9D,
		GL_RGBA_INTEGER_MODE_EXT = 0x8D9E,
	};
	extern void (*glClearColorIiEXT)(GLint red, GLint green, GLint blue, GLint alpha);
	extern void (*glClearColorIuiEXT)(GLuint red, GLuint green, GLuint blue, GLuint alpha);
	extern void (*glGetTexParameterIivEXT)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetTexParameterIuivEXT)(GLenum target, GLenum pname, GLuint *params);
	extern void (*glTexParameterIivEXT)(GLenum target, GLenum pname, const GLint *params);
	extern void (*glTexParameterIuivEXT)(GLenum target, GLenum pname, const GLuint *params);
	#endif // GL_EXT_texture_integer
	
	#ifdef GL_EXT_texture_lod_bias
	extern bool ext_GL_EXT_texture_lod_bias;
	enum {
		GL_MAX_TEXTURE_LOD_BIAS_EXT = 0x84FD,
		GL_TEXTURE_FILTER_CONTROL_EXT = 0x8500,
		GL_TEXTURE_LOD_BIAS_EXT = 0x8501,
	};
	#endif // GL_EXT_texture_lod_bias
	
	#ifdef GL_EXT_texture_mirror_clamp
	extern bool ext_GL_EXT_texture_mirror_clamp;
	enum {
		GL_MIRROR_CLAMP_EXT = 0x8742,
		GL_MIRROR_CLAMP_TO_EDGE_EXT = 0x8743,
		GL_MIRROR_CLAMP_TO_BORDER_EXT = 0x8912,
	};
	#endif // GL_EXT_texture_mirror_clamp
	
	#ifdef GL_EXT_texture_object
	extern bool ext_GL_EXT_texture_object;
	enum {
		GL_TEXTURE_3D_BINDING_EXT = 0x806A,
		GL_TEXTURE_PRIORITY_EXT = 0x8066,
		GL_TEXTURE_RESIDENT_EXT = 0x8067,
		GL_TEXTURE_1D_BINDING_EXT = 0x8068,
		GL_TEXTURE_2D_BINDING_EXT = 0x8069,
	};
	extern GLboolean (*glAreTexturesResidentEXT)(GLsizei n, const GLuint *textures, GLboolean *residences);
	extern void (*glBindTextureEXT)(GLenum target, GLuint texture);
	extern void (*glDeleteTexturesEXT)(GLsizei n, const GLuint *textures);
	extern void (*glGenTexturesEXT)(GLsizei n, GLuint *textures);
	extern GLboolean (*glIsTextureEXT)(GLuint texture);
	extern void (*glPrioritizeTexturesEXT)(GLsizei n, const GLuint *textures, const GLclampf *priorities);
	#endif // GL_EXT_texture_object
	
	#ifdef GL_EXT_texture_perturb_normal
	extern bool ext_GL_EXT_texture_perturb_normal;
	enum {
		GL_PERTURB_EXT = 0x85AE,
		GL_TEXTURE_NORMAL_EXT = 0x85AF,
	};
	extern void (*glTextureNormalEXT)(GLenum mode);
	#endif // GL_EXT_texture_perturb_normal
	
	#ifdef GL_EXT_texture_sRGB
	extern bool ext_GL_EXT_texture_sRGB;
	enum {
		GL_SRGB_EXT = 0x8C40,
		GL_SRGB8_EXT = 0x8C41,
		GL_SRGB_ALPHA_EXT = 0x8C42,
		GL_SRGB8_ALPHA8_EXT = 0x8C43,
		GL_SLUMINANCE_ALPHA_EXT = 0x8C44,
		GL_SLUMINANCE8_ALPHA8_EXT = 0x8C45,
		GL_SLUMINANCE_EXT = 0x8C46,
		GL_SLUMINANCE8_EXT = 0x8C47,
		GL_COMPRESSED_SRGB_EXT = 0x8C48,
		GL_COMPRESSED_SRGB_ALPHA_EXT = 0x8C49,
		GL_COMPRESSED_SLUMINANCE_EXT = 0x8C4A,
		GL_COMPRESSED_SLUMINANCE_ALPHA_EXT = 0x8C4B,
		GL_COMPRESSED_SRGB_S3TC_DXT1_EXT = 0x8C4C,
		GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT = 0x8C4D,
		GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT = 0x8C4E,
		GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT = 0x8C4F,
	};
	#endif // GL_EXT_texture_sRGB
	
	#ifdef GL_EXT_texture_sRGB_decode
	extern bool ext_GL_EXT_texture_sRGB_decode;
	enum {
		GL_TEXTURE_SRGB_DECODE_EXT = 0x8A48,
		GL_DECODE_EXT = 0x8A49,
		GL_SKIP_DECODE_EXT = 0x8A4A,
	};
	#endif // GL_EXT_texture_sRGB_decode
	
	#ifdef GL_EXT_texture_shared_exponent
	extern bool ext_GL_EXT_texture_shared_exponent;
	enum {
		GL_RGB9_E5_EXT = 0x8C3D,
		GL_UNSIGNED_INT_5_9_9_9_REV_EXT = 0x8C3E,
		GL_TEXTURE_SHARED_SIZE_EXT = 0x8C3F,
	};
	#endif // GL_EXT_texture_shared_exponent
	
	#ifdef GL_EXT_texture_snorm
	extern bool ext_GL_EXT_texture_snorm;
	enum {
		GL_ALPHA_SNORM = 0x9010,
		GL_LUMINANCE_SNORM = 0x9011,
		GL_LUMINANCE_ALPHA_SNORM = 0x9012,
		GL_INTENSITY_SNORM = 0x9013,
		GL_ALPHA8_SNORM = 0x9014,
		GL_LUMINANCE8_SNORM = 0x9015,
		GL_LUMINANCE8_ALPHA8_SNORM = 0x9016,
		GL_INTENSITY8_SNORM = 0x9017,
		GL_ALPHA16_SNORM = 0x9018,
		GL_LUMINANCE16_SNORM = 0x9019,
		GL_LUMINANCE16_ALPHA16_SNORM = 0x901A,
		GL_INTENSITY16_SNORM = 0x901B,
		GL_RED_SNORM = 0x8F90,
		GL_RG_SNORM = 0x8F91,
		GL_RGB_SNORM = 0x8F92,
		GL_RGBA_SNORM = 0x8F93,
	};
	#endif // GL_EXT_texture_snorm
	
	#ifdef GL_EXT_texture_swizzle
	extern bool ext_GL_EXT_texture_swizzle;
	enum {
		GL_TEXTURE_SWIZZLE_R_EXT = 0x8E42,
		GL_TEXTURE_SWIZZLE_G_EXT = 0x8E43,
		GL_TEXTURE_SWIZZLE_B_EXT = 0x8E44,
		GL_TEXTURE_SWIZZLE_A_EXT = 0x8E45,
		GL_TEXTURE_SWIZZLE_RGBA_EXT = 0x8E46,
	};
	#endif // GL_EXT_texture_swizzle
	
	#ifdef GL_EXT_timer_query
	extern bool ext_GL_EXT_timer_query;
	enum {
		GL_TIME_ELAPSED_EXT = 0x88BF,
	};
	extern void (*glGetQueryObjecti64vEXT)(GLuint id, GLenum pname, GLint64 *params);
	extern void (*glGetQueryObjectui64vEXT)(GLuint id, GLenum pname, GLuint64 *params);
	#endif // GL_EXT_timer_query
	
	#ifdef GL_EXT_transform_feedback
	extern bool ext_GL_EXT_transform_feedback;
	enum {
		GL_TRANSFORM_FEEDBACK_BUFFER_EXT = 0x8C8E,
		GL_TRANSFORM_FEEDBACK_BUFFER_START_EXT = 0x8C84,
		GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_EXT = 0x8C85,
		GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_EXT = 0x8C8F,
		GL_INTERLEAVED_ATTRIBS_EXT = 0x8C8C,
		GL_SEPARATE_ATTRIBS_EXT = 0x8C8D,
		GL_PRIMITIVES_GENERATED_EXT = 0x8C87,
		GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_EXT = 0x8C88,
		GL_RASTERIZER_DISCARD_EXT = 0x8C89,
		GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_EXT = 0x8C8A,
		GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_EXT = 0x8C8B,
		GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_EXT = 0x8C80,
		GL_TRANSFORM_FEEDBACK_VARYINGS_EXT = 0x8C83,
		GL_TRANSFORM_FEEDBACK_BUFFER_MODE_EXT = 0x8C7F,
		GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH_EXT = 0x8C76,
	};
	extern void (*glBeginTransformFeedbackEXT)(GLenum primitiveMode);
	extern void (*glBindBufferBaseEXT)(GLenum target, GLuint index, GLuint buffer);
	extern void (*glBindBufferOffsetEXT)(GLenum target, GLuint index, GLuint buffer, GLintptr offset);
	extern void (*glBindBufferRangeEXT)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
	extern void (*glEndTransformFeedbackEXT)();
	extern void (*glGetTransformFeedbackVaryingEXT)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
	extern void (*glTransformFeedbackVaryingsEXT)(GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
	#endif // GL_EXT_transform_feedback
	
	#ifdef GL_EXT_vertex_array
	extern bool ext_GL_EXT_vertex_array;
	enum {
		GL_COLOR_ARRAY_COUNT_EXT = 0x8084,
		GL_EDGE_FLAG_ARRAY_COUNT_EXT = 0x808D,
		GL_INDEX_ARRAY_COUNT_EXT = 0x8087,
		GL_NORMAL_ARRAY_COUNT_EXT = 0x8080,
		GL_TEXTURE_COORD_ARRAY_COUNT_EXT = 0x808B,
		GL_VERTEX_ARRAY_COUNT_EXT = 0x807D,
		GL_COLOR_ARRAY_POINTER_EXT = 0x8090,
		GL_EDGE_FLAG_ARRAY_POINTER_EXT = 0x8093,
		GL_INDEX_ARRAY_POINTER_EXT = 0x8091,
		GL_NORMAL_ARRAY_POINTER_EXT = 0x808F,
		GL_TEXTURE_COORD_ARRAY_POINTER_EXT = 0x8092,
		GL_VERTEX_ARRAY_POINTER_EXT = 0x808E,
		GL_VERTEX_ARRAY_EXT = 0x8074,
		GL_NORMAL_ARRAY_EXT = 0x8075,
		GL_COLOR_ARRAY_EXT = 0x8076,
		GL_INDEX_ARRAY_EXT = 0x8077,
		GL_TEXTURE_COORD_ARRAY_EXT = 0x8078,
		GL_EDGE_FLAG_ARRAY_EXT = 0x8079,
		GL_VERTEX_ARRAY_SIZE_EXT = 0x807A,
		GL_VERTEX_ARRAY_TYPE_EXT = 0x807B,
		GL_VERTEX_ARRAY_STRIDE_EXT = 0x807C,
		GL_NORMAL_ARRAY_TYPE_EXT = 0x807E,
		GL_NORMAL_ARRAY_STRIDE_EXT = 0x807F,
		GL_COLOR_ARRAY_SIZE_EXT = 0x8081,
		GL_COLOR_ARRAY_TYPE_EXT = 0x8082,
		GL_COLOR_ARRAY_STRIDE_EXT = 0x8083,
		GL_INDEX_ARRAY_TYPE_EXT = 0x8085,
		GL_INDEX_ARRAY_STRIDE_EXT = 0x8086,
		GL_TEXTURE_COORD_ARRAY_SIZE_EXT = 0x8088,
		GL_TEXTURE_COORD_ARRAY_TYPE_EXT = 0x8089,
		GL_TEXTURE_COORD_ARRAY_STRIDE_EXT = 0x808A,
		GL_EDGE_FLAG_ARRAY_STRIDE_EXT = 0x808C,
	};
	extern void (*glArrayElementEXT)(GLint i);
	extern void (*glColorPointerEXT)(GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer);
	extern void (*glDrawArraysEXT)(GLenum mode, GLint first, GLsizei count);
	extern void (*glEdgeFlagPointerEXT)(GLsizei stride, GLsizei count, const GLboolean *pointer);
	extern void (*glGetPointervEXT)(GLenum pname, void **params);
	extern void (*glIndexPointerEXT)(GLenum type, GLsizei stride, GLsizei count, const void *pointer);
	extern void (*glNormalPointerEXT)(GLenum type, GLsizei stride, GLsizei count, const void *pointer);
	extern void (*glTexCoordPointerEXT)(GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer);
	extern void (*glVertexPointerEXT)(GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer);
	#endif // GL_EXT_vertex_array
	
	#ifdef GL_EXT_vertex_attrib_64bit
	extern bool ext_GL_EXT_vertex_attrib_64bit;
	enum {
		GL_DOUBLE_VEC2_EXT = 0x8FFC,
		GL_DOUBLE_VEC3_EXT = 0x8FFD,
		GL_DOUBLE_VEC4_EXT = 0x8FFE,
		GL_DOUBLE_MAT2_EXT = 0x8F46,
		GL_DOUBLE_MAT3_EXT = 0x8F47,
		GL_DOUBLE_MAT4_EXT = 0x8F48,
		GL_DOUBLE_MAT2x3_EXT = 0x8F49,
		GL_DOUBLE_MAT2x4_EXT = 0x8F4A,
		GL_DOUBLE_MAT3x2_EXT = 0x8F4B,
		GL_DOUBLE_MAT3x4_EXT = 0x8F4C,
		GL_DOUBLE_MAT4x2_EXT = 0x8F4D,
		GL_DOUBLE_MAT4x3_EXT = 0x8F4E,
	};
	extern void (*glGetVertexAttribLdvEXT)(GLuint index, GLenum pname, GLdouble *params);
	extern void (*glVertexAttribL1dEXT)(GLuint index, GLdouble x);
	extern void (*glVertexAttribL1dvEXT)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttribL2dEXT)(GLuint index, GLdouble x, GLdouble y);
	extern void (*glVertexAttribL2dvEXT)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttribL3dEXT)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
	extern void (*glVertexAttribL3dvEXT)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttribL4dEXT)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glVertexAttribL4dvEXT)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttribLPointerEXT)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
	#endif // GL_EXT_vertex_attrib_64bit
	
	#ifdef GL_EXT_vertex_shader
	extern bool ext_GL_EXT_vertex_shader;
	enum {
		GL_VERTEX_SHADER_EXT = 0x8780,
		GL_VERTEX_SHADER_BINDING_EXT = 0x8781,
		GL_OP_INDEX_EXT = 0x8782,
		GL_OP_NEGATE_EXT = 0x8783,
		GL_OP_DOT3_EXT = 0x8784,
		GL_OP_DOT4_EXT = 0x8785,
		GL_OP_MUL_EXT = 0x8786,
		GL_OP_ADD_EXT = 0x8787,
		GL_OP_MADD_EXT = 0x8788,
		GL_OP_FRAC_EXT = 0x8789,
		GL_OP_MAX_EXT = 0x878A,
		GL_OP_MIN_EXT = 0x878B,
		GL_OP_SET_GE_EXT = 0x878C,
		GL_OP_SET_LT_EXT = 0x878D,
		GL_OP_CLAMP_EXT = 0x878E,
		GL_OP_FLOOR_EXT = 0x878F,
		GL_OP_ROUND_EXT = 0x8790,
		GL_OP_EXP_BASE_2_EXT = 0x8791,
		GL_OP_LOG_BASE_2_EXT = 0x8792,
		GL_OP_POWER_EXT = 0x8793,
		GL_OP_RECIP_EXT = 0x8794,
		GL_OP_RECIP_SQRT_EXT = 0x8795,
		GL_OP_SUB_EXT = 0x8796,
		GL_OP_CROSS_PRODUCT_EXT = 0x8797,
		GL_OP_MULTIPLY_MATRIX_EXT = 0x8798,
		GL_OP_MOV_EXT = 0x8799,
		GL_OUTPUT_VERTEX_EXT = 0x879A,
		GL_OUTPUT_COLOR0_EXT = 0x879B,
		GL_OUTPUT_COLOR1_EXT = 0x879C,
		GL_OUTPUT_TEXTURE_COORD0_EXT = 0x879D,
		GL_OUTPUT_TEXTURE_COORD1_EXT = 0x879E,
		GL_OUTPUT_TEXTURE_COORD2_EXT = 0x879F,
		GL_OUTPUT_TEXTURE_COORD3_EXT = 0x87A0,
		GL_OUTPUT_TEXTURE_COORD4_EXT = 0x87A1,
		GL_OUTPUT_TEXTURE_COORD5_EXT = 0x87A2,
		GL_OUTPUT_TEXTURE_COORD6_EXT = 0x87A3,
		GL_OUTPUT_TEXTURE_COORD7_EXT = 0x87A4,
		GL_OUTPUT_TEXTURE_COORD8_EXT = 0x87A5,
		GL_OUTPUT_TEXTURE_COORD9_EXT = 0x87A6,
		GL_OUTPUT_TEXTURE_COORD10_EXT = 0x87A7,
		GL_OUTPUT_TEXTURE_COORD11_EXT = 0x87A8,
		GL_OUTPUT_TEXTURE_COORD12_EXT = 0x87A9,
		GL_OUTPUT_TEXTURE_COORD13_EXT = 0x87AA,
		GL_OUTPUT_TEXTURE_COORD14_EXT = 0x87AB,
		GL_OUTPUT_TEXTURE_COORD15_EXT = 0x87AC,
		GL_OUTPUT_TEXTURE_COORD16_EXT = 0x87AD,
		GL_OUTPUT_TEXTURE_COORD17_EXT = 0x87AE,
		GL_OUTPUT_TEXTURE_COORD18_EXT = 0x87AF,
		GL_OUTPUT_TEXTURE_COORD19_EXT = 0x87B0,
		GL_OUTPUT_TEXTURE_COORD20_EXT = 0x87B1,
		GL_OUTPUT_TEXTURE_COORD21_EXT = 0x87B2,
		GL_OUTPUT_TEXTURE_COORD22_EXT = 0x87B3,
		GL_OUTPUT_TEXTURE_COORD23_EXT = 0x87B4,
		GL_OUTPUT_TEXTURE_COORD24_EXT = 0x87B5,
		GL_OUTPUT_TEXTURE_COORD25_EXT = 0x87B6,
		GL_OUTPUT_TEXTURE_COORD26_EXT = 0x87B7,
		GL_OUTPUT_TEXTURE_COORD27_EXT = 0x87B8,
		GL_OUTPUT_TEXTURE_COORD28_EXT = 0x87B9,
		GL_OUTPUT_TEXTURE_COORD29_EXT = 0x87BA,
		GL_OUTPUT_TEXTURE_COORD30_EXT = 0x87BB,
		GL_OUTPUT_TEXTURE_COORD31_EXT = 0x87BC,
		GL_OUTPUT_FOG_EXT = 0x87BD,
		GL_SCALAR_EXT = 0x87BE,
		GL_VECTOR_EXT = 0x87BF,
		GL_MATRIX_EXT = 0x87C0,
		GL_VARIANT_EXT = 0x87C1,
		GL_INVARIANT_EXT = 0x87C2,
		GL_LOCAL_CONSTANT_EXT = 0x87C3,
		GL_LOCAL_EXT = 0x87C4,
		GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT = 0x87C5,
		GL_MAX_VERTEX_SHADER_VARIANTS_EXT = 0x87C6,
		GL_MAX_VERTEX_SHADER_INVARIANTS_EXT = 0x87C7,
		GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT = 0x87C8,
		GL_MAX_VERTEX_SHADER_LOCALS_EXT = 0x87C9,
		GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT = 0x87CA,
		GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT = 0x87CB,
		GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT = 0x87CC,
		GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT = 0x87CD,
		GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT = 0x87CE,
		GL_VERTEX_SHADER_INSTRUCTIONS_EXT = 0x87CF,
		GL_VERTEX_SHADER_VARIANTS_EXT = 0x87D0,
		GL_VERTEX_SHADER_INVARIANTS_EXT = 0x87D1,
		GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT = 0x87D2,
		GL_VERTEX_SHADER_LOCALS_EXT = 0x87D3,
		GL_VERTEX_SHADER_OPTIMIZED_EXT = 0x87D4,
		GL_X_EXT = 0x87D5,
		GL_Y_EXT = 0x87D6,
		GL_Z_EXT = 0x87D7,
		GL_W_EXT = 0x87D8,
		GL_NEGATIVE_X_EXT = 0x87D9,
		GL_NEGATIVE_Y_EXT = 0x87DA,
		GL_NEGATIVE_Z_EXT = 0x87DB,
		GL_NEGATIVE_W_EXT = 0x87DC,
		GL_ZERO_EXT = 0x87DD,
		GL_ONE_EXT = 0x87DE,
		GL_NEGATIVE_ONE_EXT = 0x87DF,
		GL_NORMALIZED_RANGE_EXT = 0x87E0,
		GL_FULL_RANGE_EXT = 0x87E1,
		GL_CURRENT_VERTEX_EXT = 0x87E2,
		GL_MVP_MATRIX_EXT = 0x87E3,
		GL_VARIANT_VALUE_EXT = 0x87E4,
		GL_VARIANT_DATATYPE_EXT = 0x87E5,
		GL_VARIANT_ARRAY_STRIDE_EXT = 0x87E6,
		GL_VARIANT_ARRAY_TYPE_EXT = 0x87E7,
		GL_VARIANT_ARRAY_EXT = 0x87E8,
		GL_VARIANT_ARRAY_POINTER_EXT = 0x87E9,
		GL_INVARIANT_VALUE_EXT = 0x87EA,
		GL_INVARIANT_DATATYPE_EXT = 0x87EB,
		GL_LOCAL_CONSTANT_VALUE_EXT = 0x87EC,
		GL_LOCAL_CONSTANT_DATATYPE_EXT = 0x87ED,
	};
	extern void (*glBeginVertexShaderEXT)();
	extern GLuint (*glBindLightParameterEXT)(GLenum light, GLenum value);
	extern GLuint (*glBindMaterialParameterEXT)(GLenum face, GLenum value);
	extern GLuint (*glBindParameterEXT)(GLenum value);
	extern GLuint (*glBindTexGenParameterEXT)(GLenum unit, GLenum coord, GLenum value);
	extern GLuint (*glBindTextureUnitParameterEXT)(GLenum unit, GLenum value);
	extern void (*glBindVertexShaderEXT)(GLuint id);
	extern void (*glDeleteVertexShaderEXT)(GLuint id);
	extern void (*glDisableVariantClientStateEXT)(GLuint id);
	extern void (*glEnableVariantClientStateEXT)(GLuint id);
	extern void (*glEndVertexShaderEXT)();
	extern void (*glExtractComponentEXT)(GLuint res, GLuint src, GLuint num);
	extern GLuint (*glGenSymbolsEXT)(GLenum datatype, GLenum storagetype, GLenum range, GLuint components);
	extern GLuint (*glGenVertexShadersEXT)(GLuint range);
	extern void (*glGetInvariantBooleanvEXT)(GLuint id, GLenum value, GLboolean *data);
	extern void (*glGetInvariantFloatvEXT)(GLuint id, GLenum value, GLfloat *data);
	extern void (*glGetInvariantIntegervEXT)(GLuint id, GLenum value, GLint *data);
	extern void (*glGetLocalConstantBooleanvEXT)(GLuint id, GLenum value, GLboolean *data);
	extern void (*glGetLocalConstantFloatvEXT)(GLuint id, GLenum value, GLfloat *data);
	extern void (*glGetLocalConstantIntegervEXT)(GLuint id, GLenum value, GLint *data);
	extern void (*glGetVariantBooleanvEXT)(GLuint id, GLenum value, GLboolean *data);
	extern void (*glGetVariantFloatvEXT)(GLuint id, GLenum value, GLfloat *data);
	extern void (*glGetVariantIntegervEXT)(GLuint id, GLenum value, GLint *data);
	extern void (*glGetVariantPointervEXT)(GLuint id, GLenum value, void **data);
	extern void (*glInsertComponentEXT)(GLuint res, GLuint src, GLuint num);
	extern GLboolean (*glIsVariantEnabledEXT)(GLuint id, GLenum cap);
	extern void (*glSetInvariantEXT)(GLuint id, GLenum type, const void *addr);
	extern void (*glSetLocalConstantEXT)(GLuint id, GLenum type, const void *addr);
	extern void (*glShaderOp1EXT)(GLenum op, GLuint res, GLuint arg1);
	extern void (*glShaderOp2EXT)(GLenum op, GLuint res, GLuint arg1, GLuint arg2);
	extern void (*glShaderOp3EXT)(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3);
	extern void (*glSwizzleEXT)(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
	extern void (*glVariantPointerEXT)(GLuint id, GLenum type, GLuint stride, const void *addr);
	extern void (*glVariantbvEXT)(GLuint id, const GLbyte *addr);
	extern void (*glVariantdvEXT)(GLuint id, const GLdouble *addr);
	extern void (*glVariantfvEXT)(GLuint id, const GLfloat *addr);
	extern void (*glVariantivEXT)(GLuint id, const GLint *addr);
	extern void (*glVariantsvEXT)(GLuint id, const GLshort *addr);
	extern void (*glVariantubvEXT)(GLuint id, const GLubyte *addr);
	extern void (*glVariantuivEXT)(GLuint id, const GLuint *addr);
	extern void (*glVariantusvEXT)(GLuint id, const GLushort *addr);
	extern void (*glWriteMaskEXT)(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
	#endif // GL_EXT_vertex_shader
	
	#ifdef GL_EXT_vertex_weighting
	extern bool ext_GL_EXT_vertex_weighting;
	enum {
		GL_MODELVIEW0_MATRIX_EXT = 0x0BA6,
		GL_MODELVIEW0_STACK_DEPTH_EXT = 0x0BA3,
		GL_MODELVIEW0_EXT = 0x1700,
		GL_MODELVIEW1_STACK_DEPTH_EXT = 0x8502,
		GL_MODELVIEW1_MATRIX_EXT = 0x8506,
		GL_VERTEX_WEIGHTING_EXT = 0x8509,
		GL_MODELVIEW1_EXT = 0x850A,
		GL_CURRENT_VERTEX_WEIGHT_EXT = 0x850B,
		GL_VERTEX_WEIGHT_ARRAY_EXT = 0x850C,
		GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT = 0x850D,
		GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT = 0x850E,
		GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT = 0x850F,
		GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT = 0x8510,
	};
	extern void (*glVertexWeightPointerEXT)(GLint size, GLenum type, GLsizei stride, const void *pointer);
	extern void (*glVertexWeightfEXT)(GLfloat weight);
	extern void (*glVertexWeightfvEXT)(const GLfloat *weight);
	#endif // GL_EXT_vertex_weighting
	
	#ifdef GL_EXT_x11_sync_object
	extern bool ext_GL_EXT_x11_sync_object;
	enum {
		GL_SYNC_X11_FENCE_EXT = 0x90E1,
	};
	extern GLsync (*glImportSyncEXT)(GLenum external_sync_type, GLintptr external_sync, GLbitfield flags);
	#endif // GL_EXT_x11_sync_object
	
	#ifdef GL_GREMEDY_frame_terminator
	extern bool ext_GL_GREMEDY_frame_terminator;
	extern void (*glFrameTerminatorGREMEDY)();
	#endif // GL_GREMEDY_frame_terminator
	
	#ifdef GL_GREMEDY_string_marker
	extern bool ext_GL_GREMEDY_string_marker;
	extern void (*glStringMarkerGREMEDY)(GLsizei len, const void *string);
	#endif // GL_GREMEDY_string_marker
	
	#ifdef GL_HP_convolution_border_modes
	extern bool ext_GL_HP_convolution_border_modes;
	enum {
		GL_IGNORE_BORDER_HP = 0x8150,
		GL_CONSTANT_BORDER_HP = 0x8151,
		GL_REPLICATE_BORDER_HP = 0x8153,
		GL_CONVOLUTION_BORDER_COLOR_HP = 0x8154,
	};
	#endif // GL_HP_convolution_border_modes
	
	#ifdef GL_HP_image_transform
	extern bool ext_GL_HP_image_transform;
	enum {
		GL_IMAGE_SCALE_X_HP = 0x8155,
		GL_IMAGE_SCALE_Y_HP = 0x8156,
		GL_IMAGE_TRANSLATE_X_HP = 0x8157,
		GL_IMAGE_TRANSLATE_Y_HP = 0x8158,
		GL_IMAGE_ROTATE_ANGLE_HP = 0x8159,
		GL_IMAGE_ROTATE_ORIGIN_X_HP = 0x815A,
		GL_IMAGE_ROTATE_ORIGIN_Y_HP = 0x815B,
		GL_IMAGE_MAG_FILTER_HP = 0x815C,
		GL_IMAGE_MIN_FILTER_HP = 0x815D,
		GL_IMAGE_CUBIC_WEIGHT_HP = 0x815E,
		GL_CUBIC_HP = 0x815F,
		GL_AVERAGE_HP = 0x8160,
		GL_IMAGE_TRANSFORM_2D_HP = 0x8161,
		GL_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP = 0x8162,
		GL_PROXY_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP = 0x8163,
	};
	extern void (*glGetImageTransformParameterfvHP)(GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetImageTransformParameterivHP)(GLenum target, GLenum pname, GLint *params);
	extern void (*glImageTransformParameterfHP)(GLenum target, GLenum pname, GLfloat param);
	extern void (*glImageTransformParameterfvHP)(GLenum target, GLenum pname, const GLfloat *params);
	extern void (*glImageTransformParameteriHP)(GLenum target, GLenum pname, GLint param);
	extern void (*glImageTransformParameterivHP)(GLenum target, GLenum pname, const GLint *params);
	#endif // GL_HP_image_transform
	
	#ifdef GL_HP_occlusion_test
	extern bool ext_GL_HP_occlusion_test;
	enum {
		GL_OCCLUSION_TEST_HP = 0x8165,
		GL_OCCLUSION_TEST_RESULT_HP = 0x8166,
	};
	#endif // GL_HP_occlusion_test
	
	#ifdef GL_HP_texture_lighting
	extern bool ext_GL_HP_texture_lighting;
	enum {
		GL_TEXTURE_LIGHTING_MODE_HP = 0x8167,
		GL_TEXTURE_POST_SPECULAR_HP = 0x8168,
		GL_TEXTURE_PRE_SPECULAR_HP = 0x8169,
	};
	#endif // GL_HP_texture_lighting
	
	#ifdef GL_IBM_cull_vertex
	extern bool ext_GL_IBM_cull_vertex;
	enum {
		GL_CULL_VERTEX_IBM = 103050,
	};
	#endif // GL_IBM_cull_vertex
	
	#ifdef GL_IBM_multimode_draw_arrays
	extern bool ext_GL_IBM_multimode_draw_arrays;
	extern void (*glMultiModeDrawArraysIBM)(const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride);
	extern void (*glMultiModeDrawElementsIBM)(const GLenum *mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount, GLint modestride);
	#endif // GL_IBM_multimode_draw_arrays
	
	#ifdef GL_IBM_rasterpos_clip
	extern bool ext_GL_IBM_rasterpos_clip;
	enum {
		GL_RASTER_POSITION_UNCLIPPED_IBM = 0x19262,
	};
	#endif // GL_IBM_rasterpos_clip
	
	#ifdef GL_IBM_static_data
	extern bool ext_GL_IBM_static_data;
	enum {
		GL_ALL_STATIC_DATA_IBM = 103060,
		GL_STATIC_VERTEX_ARRAY_IBM = 103061,
	};
	extern void (*glFlushStaticDataIBM)(GLenum target);
	#endif // GL_IBM_static_data
	
	#ifdef GL_IBM_texture_mirrored_repeat
	extern bool ext_GL_IBM_texture_mirrored_repeat;
	enum {
		GL_MIRRORED_REPEAT_IBM = 0x8370,
	};
	#endif // GL_IBM_texture_mirrored_repeat
	
	#ifdef GL_IBM_vertex_array_lists
	extern bool ext_GL_IBM_vertex_array_lists;
	enum {
		GL_VERTEX_ARRAY_LIST_IBM = 103070,
		GL_NORMAL_ARRAY_LIST_IBM = 103071,
		GL_COLOR_ARRAY_LIST_IBM = 103072,
		GL_INDEX_ARRAY_LIST_IBM = 103073,
		GL_TEXTURE_COORD_ARRAY_LIST_IBM = 103074,
		GL_EDGE_FLAG_ARRAY_LIST_IBM = 103075,
		GL_FOG_COORDINATE_ARRAY_LIST_IBM = 103076,
		GL_SECONDARY_COLOR_ARRAY_LIST_IBM = 103077,
		GL_VERTEX_ARRAY_LIST_STRIDE_IBM = 103080,
		GL_NORMAL_ARRAY_LIST_STRIDE_IBM = 103081,
		GL_COLOR_ARRAY_LIST_STRIDE_IBM = 103082,
		GL_INDEX_ARRAY_LIST_STRIDE_IBM = 103083,
		GL_TEXTURE_COORD_ARRAY_LIST_STRIDE_IBM = 103084,
		GL_EDGE_FLAG_ARRAY_LIST_STRIDE_IBM = 103085,
		GL_FOG_COORDINATE_ARRAY_LIST_STRIDE_IBM = 103086,
		GL_SECONDARY_COLOR_ARRAY_LIST_STRIDE_IBM = 103087,
	};
	extern void (*glColorPointerListIBM)(GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride);
	extern void (*glEdgeFlagPointerListIBM)(GLint stride, const GLboolean **pointer, GLint ptrstride);
	extern void (*glFogCoordPointerListIBM)(GLenum type, GLint stride, const void **pointer, GLint ptrstride);
	extern void (*glIndexPointerListIBM)(GLenum type, GLint stride, const void **pointer, GLint ptrstride);
	extern void (*glNormalPointerListIBM)(GLenum type, GLint stride, const void **pointer, GLint ptrstride);
	extern void (*glSecondaryColorPointerListIBM)(GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride);
	extern void (*glTexCoordPointerListIBM)(GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride);
	extern void (*glVertexPointerListIBM)(GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride);
	#endif // GL_IBM_vertex_array_lists
	
	#ifdef GL_INGR_blend_func_separate
	extern bool ext_GL_INGR_blend_func_separate;
	extern void (*glBlendFuncSeparateINGR)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
	#endif // GL_INGR_blend_func_separate
	
	#ifdef GL_INGR_color_clamp
	extern bool ext_GL_INGR_color_clamp;
	enum {
		GL_RED_MIN_CLAMP_INGR = 0x8560,
		GL_GREEN_MIN_CLAMP_INGR = 0x8561,
		GL_BLUE_MIN_CLAMP_INGR = 0x8562,
		GL_ALPHA_MIN_CLAMP_INGR = 0x8563,
		GL_RED_MAX_CLAMP_INGR = 0x8564,
		GL_GREEN_MAX_CLAMP_INGR = 0x8565,
		GL_BLUE_MAX_CLAMP_INGR = 0x8566,
		GL_ALPHA_MAX_CLAMP_INGR = 0x8567,
	};
	#endif // GL_INGR_color_clamp
	
	#ifdef GL_INGR_interlace_read
	extern bool ext_GL_INGR_interlace_read;
	enum {
		GL_INTERLACE_READ_INGR = 0x8568,
	};
	#endif // GL_INGR_interlace_read
	
	#ifdef GL_INTEL_framebuffer_CMAA
	extern bool ext_GL_INTEL_framebuffer_CMAA;
	extern void (*glApplyFramebufferAttachmentCMAAINTEL)();
	#endif // GL_INTEL_framebuffer_CMAA
	
	#ifdef GL_INTEL_map_texture
	extern bool ext_GL_INTEL_map_texture;
	enum {
		GL_LAYOUT_DEFAULT_INTEL = 0,
		GL_LAYOUT_LINEAR_CPU_CACHED_INTEL = 2,
		GL_LAYOUT_LINEAR_INTEL = 1,
		GL_TEXTURE_MEMORY_LAYOUT_INTEL = 0x83FF,
	};
	extern void *(*glMapTexture2DINTEL)(GLuint texture, GLint level, GLbitfield access, GLint *stride, GLenum *layout);
	extern void (*glSyncTextureINTEL)(GLuint texture);
	extern void (*glUnmapTexture2DINTEL)(GLuint texture, GLint level);
	#endif // GL_INTEL_map_texture
	
	#ifdef GL_INTEL_parallel_arrays
	extern bool ext_GL_INTEL_parallel_arrays;
	enum {
		GL_PARALLEL_ARRAYS_INTEL = 0x83F4,
		GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL = 0x83F5,
		GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL = 0x83F6,
		GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL = 0x83F7,
		GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL = 0x83F8,
	};
	extern void (*glColorPointervINTEL)(GLint size, GLenum type, const void **pointer);
	extern void (*glNormalPointervINTEL)(GLenum type, const void **pointer);
	extern void (*glTexCoordPointervINTEL)(GLint size, GLenum type, const void **pointer);
	extern void (*glVertexPointervINTEL)(GLint size, GLenum type, const void **pointer);
	#endif // GL_INTEL_parallel_arrays
	
	#ifdef GL_INTEL_performance_query
	extern bool ext_GL_INTEL_performance_query;
	enum {
		GL_PERFQUERY_SINGLE_CONTEXT_INTEL = 0x00000000,
		GL_PERFQUERY_GLOBAL_CONTEXT_INTEL = 0x00000001,
		GL_PERFQUERY_WAIT_INTEL = 0x83FB,
		GL_PERFQUERY_FLUSH_INTEL = 0x83FA,
		GL_PERFQUERY_DONOT_FLUSH_INTEL = 0x83F9,
		GL_PERFQUERY_COUNTER_EVENT_INTEL = 0x94F0,
		GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL = 0x94F1,
		GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL = 0x94F2,
		GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL = 0x94F3,
		GL_PERFQUERY_COUNTER_RAW_INTEL = 0x94F4,
		GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL = 0x94F5,
		GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL = 0x94F8,
		GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL = 0x94F9,
		GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL = 0x94FA,
		GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL = 0x94FB,
		GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL = 0x94FC,
		GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL = 0x94FD,
		GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL = 0x94FE,
		GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL = 0x94FF,
		GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL = 0x9500,
	};
	extern void (*glBeginPerfQueryINTEL)(GLuint queryHandle);
	extern void (*glCreatePerfQueryINTEL)(GLuint queryId, GLuint *queryHandle);
	extern void (*glDeletePerfQueryINTEL)(GLuint queryHandle);
	extern void (*glEndPerfQueryINTEL)(GLuint queryHandle);
	extern void (*glGetFirstPerfQueryIdINTEL)(GLuint *queryId);
	extern void (*glGetNextPerfQueryIdINTEL)(GLuint queryId, GLuint *nextQueryId);
	extern void (*glGetPerfCounterInfoINTEL)(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar *counterName, GLuint counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum, GLuint64 *rawCounterMaxValue);
	extern void (*glGetPerfQueryDataINTEL)(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid *data, GLuint *bytesWritten);
	extern void (*glGetPerfQueryIdByNameINTEL)(GLchar *queryName, GLuint *queryId);
	extern void (*glGetPerfQueryInfoINTEL)(GLuint queryId, GLuint queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters, GLuint *noInstances, GLuint *capsMask);
	#endif // GL_INTEL_performance_query
	
	#ifdef GL_KHR_blend_equation_advanced
	extern bool ext_GL_KHR_blend_equation_advanced;
	enum {
		GL_MULTIPLY_KHR = 0x9294,
		GL_SCREEN_KHR = 0x9295,
		GL_OVERLAY_KHR = 0x9296,
		GL_DARKEN_KHR = 0x9297,
		GL_LIGHTEN_KHR = 0x9298,
		GL_COLORDODGE_KHR = 0x9299,
		GL_COLORBURN_KHR = 0x929A,
		GL_HARDLIGHT_KHR = 0x929B,
		GL_SOFTLIGHT_KHR = 0x929C,
		GL_DIFFERENCE_KHR = 0x929E,
		GL_EXCLUSION_KHR = 0x92A0,
		GL_HSL_HUE_KHR = 0x92AD,
		GL_HSL_SATURATION_KHR = 0x92AE,
		GL_HSL_COLOR_KHR = 0x92AF,
		GL_HSL_LUMINOSITY_KHR = 0x92B0,
	};
	extern void (*glBlendBarrierKHR)();
	#endif // GL_KHR_blend_equation_advanced
	
	#ifdef GL_KHR_blend_equation_advanced_coherent
	extern bool ext_GL_KHR_blend_equation_advanced_coherent;
	enum {
		GL_BLEND_ADVANCED_COHERENT_KHR = 0x9285,
	};
	#endif // GL_KHR_blend_equation_advanced_coherent
	
	#ifdef GL_KHR_context_flush_control
	extern bool ext_GL_KHR_context_flush_control;
	enum {
		GL_CONTEXT_RELEASE_BEHAVIOR = 0x82FB,
		GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH = 0x82FC,
		GL_CONTEXT_RELEASE_BEHAVIOR_KHR = 0x82FB,
		GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR = 0x82FC,
	};
	#endif // GL_KHR_context_flush_control
	
	#ifdef GL_KHR_debug
	extern bool ext_GL_KHR_debug;
	enum {
		GL_CONTEXT_FLAG_DEBUG_BIT = 0x00000002,
		GL_CONTEXT_FLAG_DEBUG_BIT_KHR = 0x00000002,
		GL_VERTEX_ARRAY = 0x8074,
		GL_STACK_OVERFLOW = 0x0503,
		GL_STACK_UNDERFLOW = 0x0504,
		GL_DEBUG_OUTPUT_SYNCHRONOUS = 0x8242,
		GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = 0x8243,
		GL_DEBUG_CALLBACK_FUNCTION = 0x8244,
		GL_DEBUG_CALLBACK_USER_PARAM = 0x8245,
		GL_DEBUG_SOURCE_API = 0x8246,
		GL_DEBUG_SOURCE_WINDOW_SYSTEM = 0x8247,
		GL_DEBUG_SOURCE_SHADER_COMPILER = 0x8248,
		GL_DEBUG_SOURCE_THIRD_PARTY = 0x8249,
		GL_DEBUG_SOURCE_APPLICATION = 0x824A,
		GL_DEBUG_SOURCE_OTHER = 0x824B,
		GL_DEBUG_TYPE_ERROR = 0x824C,
		GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR = 0x824D,
		GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR = 0x824E,
		GL_DEBUG_TYPE_PORTABILITY = 0x824F,
		GL_DEBUG_TYPE_PERFORMANCE = 0x8250,
		GL_DEBUG_TYPE_OTHER = 0x8251,
		GL_DEBUG_TYPE_MARKER = 0x8268,
		GL_DEBUG_TYPE_PUSH_GROUP = 0x8269,
		GL_DEBUG_TYPE_POP_GROUP = 0x826A,
		GL_DEBUG_SEVERITY_NOTIFICATION = 0x826B,
		GL_MAX_DEBUG_GROUP_STACK_DEPTH = 0x826C,
		GL_DEBUG_GROUP_STACK_DEPTH = 0x826D,
		GL_BUFFER = 0x82E0,
		GL_SHADER = 0x82E1,
		GL_PROGRAM = 0x82E2,
		GL_QUERY = 0x82E3,
		GL_PROGRAM_PIPELINE = 0x82E4,
		#if !defined(GL_EXT_debug_label)
		GL_SAMPLER = 0x82E6,
		#endif
		GL_MAX_LABEL_LENGTH = 0x82E8,
		GL_MAX_DEBUG_MESSAGE_LENGTH = 0x9143,
		GL_MAX_DEBUG_LOGGED_MESSAGES = 0x9144,
		GL_DEBUG_LOGGED_MESSAGES = 0x9145,
		GL_DEBUG_SEVERITY_HIGH = 0x9146,
		GL_DEBUG_SEVERITY_MEDIUM = 0x9147,
		GL_DEBUG_SEVERITY_LOW = 0x9148,
		GL_DEBUG_OUTPUT = 0x92E0,
		GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR = 0x8242,
		GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR = 0x8243,
		GL_DEBUG_CALLBACK_FUNCTION_KHR = 0x8244,
		GL_DEBUG_CALLBACK_USER_PARAM_KHR = 0x8245,
		GL_DEBUG_SOURCE_API_KHR = 0x8246,
		GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR = 0x8247,
		GL_DEBUG_SOURCE_SHADER_COMPILER_KHR = 0x8248,
		GL_DEBUG_SOURCE_THIRD_PARTY_KHR = 0x8249,
		GL_DEBUG_SOURCE_APPLICATION_KHR = 0x824A,
		GL_DEBUG_SOURCE_OTHER_KHR = 0x824B,
		GL_DEBUG_TYPE_ERROR_KHR = 0x824C,
		GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR = 0x824D,
		GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR = 0x824E,
		GL_DEBUG_TYPE_PORTABILITY_KHR = 0x824F,
		GL_DEBUG_TYPE_PERFORMANCE_KHR = 0x8250,
		GL_DEBUG_TYPE_OTHER_KHR = 0x8251,
		GL_DEBUG_TYPE_MARKER_KHR = 0x8268,
		GL_DEBUG_TYPE_PUSH_GROUP_KHR = 0x8269,
		GL_DEBUG_TYPE_POP_GROUP_KHR = 0x826A,
		GL_DEBUG_SEVERITY_NOTIFICATION_KHR = 0x826B,
		GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR = 0x826C,
		GL_DEBUG_GROUP_STACK_DEPTH_KHR = 0x826D,
		GL_BUFFER_KHR = 0x82E0,
		GL_SHADER_KHR = 0x82E1,
		GL_PROGRAM_KHR = 0x82E2,
		GL_VERTEX_ARRAY_KHR = 0x8074,
		GL_QUERY_KHR = 0x82E3,
		GL_PROGRAM_PIPELINE_KHR = 0x82E4,
		GL_SAMPLER_KHR = 0x82E6,
		GL_MAX_LABEL_LENGTH_KHR = 0x82E8,
		GL_MAX_DEBUG_MESSAGE_LENGTH_KHR = 0x9143,
		GL_MAX_DEBUG_LOGGED_MESSAGES_KHR = 0x9144,
		GL_DEBUG_LOGGED_MESSAGES_KHR = 0x9145,
		GL_DEBUG_SEVERITY_HIGH_KHR = 0x9146,
		GL_DEBUG_SEVERITY_MEDIUM_KHR = 0x9147,
		GL_DEBUG_SEVERITY_LOW_KHR = 0x9148,
		GL_DEBUG_OUTPUT_KHR = 0x92E0,
		GL_STACK_OVERFLOW_KHR = 0x0503,
		GL_STACK_UNDERFLOW_KHR = 0x0504,
		GL_DISPLAY_LIST = 0x82E7,
	};
	extern void (*glDebugMessageCallback)(GLDEBUGPROC callback, const void *userParam);
	extern void (*glDebugMessageCallbackKHR)(GLDEBUGPROCKHR callback, const void *userParam);
	extern void (*glDebugMessageControl)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
	extern void (*glDebugMessageControlKHR)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
	extern void (*glDebugMessageInsert)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
	extern void (*glDebugMessageInsertKHR)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
	extern GLuint (*glGetDebugMessageLog)(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
	extern GLuint (*glGetDebugMessageLogKHR)(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
	extern void (*glGetObjectLabel)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
	extern void (*glGetObjectLabelKHR)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
	extern void (*glGetObjectPtrLabel)(const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
	extern void (*glGetObjectPtrLabelKHR)(const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
	extern void (*glGetPointerv)(GLenum pname, void **params);
	extern void (*glGetPointervKHR)(GLenum pname, void **params);
	extern void (*glObjectLabel)(GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
	extern void (*glObjectLabelKHR)(GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
	extern void (*glObjectPtrLabel)(const void *ptr, GLsizei length, const GLchar *label);
	extern void (*glObjectPtrLabelKHR)(const void *ptr, GLsizei length, const GLchar *label);
	extern void (*glPopDebugGroup)();
	extern void (*glPopDebugGroupKHR)();
	extern void (*glPushDebugGroup)(GLenum source, GLuint id, GLsizei length, const GLchar *message);
	extern void (*glPushDebugGroupKHR)(GLenum source, GLuint id, GLsizei length, const GLchar *message);
	#endif // GL_KHR_debug
	
	#ifdef GL_KHR_no_error
	extern bool ext_GL_KHR_no_error;
	enum {
		GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR = 0x00000008,
	};
	#endif // GL_KHR_no_error
	
	#ifdef GL_KHR_robustness
	extern bool ext_GL_KHR_robustness;
	enum {
		GL_CONTEXT_ROBUST_ACCESS = 0x90F3,
		GL_LOSE_CONTEXT_ON_RESET = 0x8252,
		GL_GUILTY_CONTEXT_RESET = 0x8253,
		GL_INNOCENT_CONTEXT_RESET = 0x8254,
		GL_UNKNOWN_CONTEXT_RESET = 0x8255,
		GL_RESET_NOTIFICATION_STRATEGY = 0x8256,
		GL_NO_RESET_NOTIFICATION = 0x8261,
		GL_CONTEXT_LOST = 0x0507,
		GL_CONTEXT_ROBUST_ACCESS_KHR = 0x90F3,
		GL_LOSE_CONTEXT_ON_RESET_KHR = 0x8252,
		GL_GUILTY_CONTEXT_RESET_KHR = 0x8253,
		GL_INNOCENT_CONTEXT_RESET_KHR = 0x8254,
		GL_UNKNOWN_CONTEXT_RESET_KHR = 0x8255,
		GL_RESET_NOTIFICATION_STRATEGY_KHR = 0x8256,
		GL_NO_RESET_NOTIFICATION_KHR = 0x8261,
		GL_CONTEXT_LOST_KHR = 0x0507,
	};
	extern GLenum (*glGetGraphicsResetStatus)();
	extern GLenum (*glGetGraphicsResetStatusKHR)();
	extern void (*glGetnUniformfv)(GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
	extern void (*glGetnUniformfvKHR)(GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
	extern void (*glGetnUniformiv)(GLuint program, GLint location, GLsizei bufSize, GLint *params);
	extern void (*glGetnUniformivKHR)(GLuint program, GLint location, GLsizei bufSize, GLint *params);
	extern void (*glGetnUniformuiv)(GLuint program, GLint location, GLsizei bufSize, GLuint *params);
	extern void (*glGetnUniformuivKHR)(GLuint program, GLint location, GLsizei bufSize, GLuint *params);
	extern void (*glReadnPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
	extern void (*glReadnPixelsKHR)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
	#endif // GL_KHR_robustness
	
	#ifdef GL_KHR_texture_compression_astc_hdr
	extern bool ext_GL_KHR_texture_compression_astc_hdr;
	enum {
		GL_COMPRESSED_RGBA_ASTC_4x4_KHR = 0x93B0,
		GL_COMPRESSED_RGBA_ASTC_5x4_KHR = 0x93B1,
		GL_COMPRESSED_RGBA_ASTC_5x5_KHR = 0x93B2,
		GL_COMPRESSED_RGBA_ASTC_6x5_KHR = 0x93B3,
		GL_COMPRESSED_RGBA_ASTC_6x6_KHR = 0x93B4,
		GL_COMPRESSED_RGBA_ASTC_8x5_KHR = 0x93B5,
		GL_COMPRESSED_RGBA_ASTC_8x6_KHR = 0x93B6,
		GL_COMPRESSED_RGBA_ASTC_8x8_KHR = 0x93B7,
		GL_COMPRESSED_RGBA_ASTC_10x5_KHR = 0x93B8,
		GL_COMPRESSED_RGBA_ASTC_10x6_KHR = 0x93B9,
		GL_COMPRESSED_RGBA_ASTC_10x8_KHR = 0x93BA,
		GL_COMPRESSED_RGBA_ASTC_10x10_KHR = 0x93BB,
		GL_COMPRESSED_RGBA_ASTC_12x10_KHR = 0x93BC,
		GL_COMPRESSED_RGBA_ASTC_12x12_KHR = 0x93BD,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR = 0x93D0,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR = 0x93D1,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR = 0x93D2,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR = 0x93D3,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR = 0x93D4,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR = 0x93D5,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR = 0x93D6,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR = 0x93D7,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR = 0x93D8,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR = 0x93D9,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR = 0x93DA,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR = 0x93DB,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR = 0x93DC,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR = 0x93DD,
	};
	#endif // GL_KHR_texture_compression_astc_hdr
	
	#ifdef GL_KHR_texture_compression_astc_ldr
	extern bool ext_GL_KHR_texture_compression_astc_ldr;
	enum {
		#if !defined(GL_KHR_texture_compression_astc_hdr)
		GL_COMPRESSED_RGBA_ASTC_4x4_KHR = 0x93B0,
		GL_COMPRESSED_RGBA_ASTC_5x4_KHR = 0x93B1,
		GL_COMPRESSED_RGBA_ASTC_5x5_KHR = 0x93B2,
		GL_COMPRESSED_RGBA_ASTC_6x5_KHR = 0x93B3,
		GL_COMPRESSED_RGBA_ASTC_6x6_KHR = 0x93B4,
		GL_COMPRESSED_RGBA_ASTC_8x5_KHR = 0x93B5,
		GL_COMPRESSED_RGBA_ASTC_8x6_KHR = 0x93B6,
		GL_COMPRESSED_RGBA_ASTC_8x8_KHR = 0x93B7,
		GL_COMPRESSED_RGBA_ASTC_10x5_KHR = 0x93B8,
		GL_COMPRESSED_RGBA_ASTC_10x6_KHR = 0x93B9,
		GL_COMPRESSED_RGBA_ASTC_10x8_KHR = 0x93BA,
		GL_COMPRESSED_RGBA_ASTC_10x10_KHR = 0x93BB,
		GL_COMPRESSED_RGBA_ASTC_12x10_KHR = 0x93BC,
		GL_COMPRESSED_RGBA_ASTC_12x12_KHR = 0x93BD,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR = 0x93D0,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR = 0x93D1,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR = 0x93D2,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR = 0x93D3,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR = 0x93D4,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR = 0x93D5,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR = 0x93D6,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR = 0x93D7,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR = 0x93D8,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR = 0x93D9,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR = 0x93DA,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR = 0x93DB,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR = 0x93DC,
		GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR = 0x93DD,
		#endif
	};
	#endif // GL_KHR_texture_compression_astc_ldr
	
	#ifdef GL_MESAX_texture_stack
	extern bool ext_GL_MESAX_texture_stack;
	enum {
		GL_TEXTURE_1D_STACK_MESAX = 0x8759,
		GL_TEXTURE_2D_STACK_MESAX = 0x875A,
		GL_PROXY_TEXTURE_1D_STACK_MESAX = 0x875B,
		GL_PROXY_TEXTURE_2D_STACK_MESAX = 0x875C,
		GL_TEXTURE_1D_STACK_BINDING_MESAX = 0x875D,
		GL_TEXTURE_2D_STACK_BINDING_MESAX = 0x875E,
	};
	#endif // GL_MESAX_texture_stack
	
	#ifdef GL_MESA_pack_invert
	extern bool ext_GL_MESA_pack_invert;
	enum {
		GL_PACK_INVERT_MESA = 0x8758,
	};
	#endif // GL_MESA_pack_invert
	
	#ifdef GL_MESA_resize_buffers
	extern bool ext_GL_MESA_resize_buffers;
	extern void (*glResizeBuffersMESA)();
	#endif // GL_MESA_resize_buffers
	
	#ifdef GL_MESA_window_pos
	extern bool ext_GL_MESA_window_pos;
	extern void (*glWindowPos2dMESA)(GLdouble x, GLdouble y);
	extern void (*glWindowPos2dvMESA)(const GLdouble *v);
	extern void (*glWindowPos2fMESA)(GLfloat x, GLfloat y);
	extern void (*glWindowPos2fvMESA)(const GLfloat *v);
	extern void (*glWindowPos2iMESA)(GLint x, GLint y);
	extern void (*glWindowPos2ivMESA)(const GLint *v);
	extern void (*glWindowPos2sMESA)(GLshort x, GLshort y);
	extern void (*glWindowPos2svMESA)(const GLshort *v);
	extern void (*glWindowPos3dMESA)(GLdouble x, GLdouble y, GLdouble z);
	extern void (*glWindowPos3dvMESA)(const GLdouble *v);
	extern void (*glWindowPos3fMESA)(GLfloat x, GLfloat y, GLfloat z);
	extern void (*glWindowPos3fvMESA)(const GLfloat *v);
	extern void (*glWindowPos3iMESA)(GLint x, GLint y, GLint z);
	extern void (*glWindowPos3ivMESA)(const GLint *v);
	extern void (*glWindowPos3sMESA)(GLshort x, GLshort y, GLshort z);
	extern void (*glWindowPos3svMESA)(const GLshort *v);
	extern void (*glWindowPos4dMESA)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glWindowPos4dvMESA)(const GLdouble *v);
	extern void (*glWindowPos4fMESA)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glWindowPos4fvMESA)(const GLfloat *v);
	extern void (*glWindowPos4iMESA)(GLint x, GLint y, GLint z, GLint w);
	extern void (*glWindowPos4ivMESA)(const GLint *v);
	extern void (*glWindowPos4sMESA)(GLshort x, GLshort y, GLshort z, GLshort w);
	extern void (*glWindowPos4svMESA)(const GLshort *v);
	#endif // GL_MESA_window_pos
	
	#ifdef GL_MESA_ycbcr_texture
	extern bool ext_GL_MESA_ycbcr_texture;
	enum {
		GL_UNSIGNED_SHORT_8_8_MESA = 0x85BA,
		GL_UNSIGNED_SHORT_8_8_REV_MESA = 0x85BB,
		GL_YCBCR_MESA = 0x8757,
	};
	#endif // GL_MESA_ycbcr_texture
	
	#ifdef GL_NVX_conditional_render
	extern bool ext_GL_NVX_conditional_render;
	extern void (*glBeginConditionalRenderNVX)(GLuint id);
	extern void (*glEndConditionalRenderNVX)();
	#endif // GL_NVX_conditional_render
	
	#ifdef GL_NVX_gpu_memory_info
	extern bool ext_GL_NVX_gpu_memory_info;
	enum {
		GL_GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX = 0x9047,
		GL_GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX = 0x9048,
		GL_GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX = 0x9049,
		GL_GPU_MEMORY_INFO_EVICTION_COUNT_NVX = 0x904A,
		GL_GPU_MEMORY_INFO_EVICTED_MEMORY_NVX = 0x904B,
	};
	#endif // GL_NVX_gpu_memory_info
	
	#ifdef GL_NV_bindless_multi_draw_indirect
	extern bool ext_GL_NV_bindless_multi_draw_indirect;
	extern void (*glMultiDrawArraysIndirectBindlessNV)(GLenum mode, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
	extern void (*glMultiDrawElementsIndirectBindlessNV)(GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
	#endif // GL_NV_bindless_multi_draw_indirect
	
	#ifdef GL_NV_bindless_multi_draw_indirect_count
	extern bool ext_GL_NV_bindless_multi_draw_indirect_count;
	extern void (*glMultiDrawArraysIndirectBindlessCountNV)(GLenum mode, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
	extern void (*glMultiDrawElementsIndirectBindlessCountNV)(GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
	#endif // GL_NV_bindless_multi_draw_indirect_count
	
	#ifdef GL_NV_bindless_texture
	extern bool ext_GL_NV_bindless_texture;
	extern GLuint64 (*glGetImageHandleNV)(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
	extern GLuint64 (*glGetTextureHandleNV)(GLuint texture);
	extern GLuint64 (*glGetTextureSamplerHandleNV)(GLuint texture, GLuint sampler);
	extern GLboolean (*glIsImageHandleResidentNV)(GLuint64 handle);
	extern GLboolean (*glIsTextureHandleResidentNV)(GLuint64 handle);
	extern void (*glMakeImageHandleNonResidentNV)(GLuint64 handle);
	extern void (*glMakeImageHandleResidentNV)(GLuint64 handle, GLenum access);
	extern void (*glMakeTextureHandleNonResidentNV)(GLuint64 handle);
	extern void (*glMakeTextureHandleResidentNV)(GLuint64 handle);
	extern void (*glProgramUniformHandleui64NV)(GLuint program, GLint location, GLuint64 value);
	extern void (*glProgramUniformHandleui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64 *values);
	extern void (*glUniformHandleui64NV)(GLint location, GLuint64 value);
	extern void (*glUniformHandleui64vNV)(GLint location, GLsizei count, const GLuint64 *value);
	#endif // GL_NV_bindless_texture
	
	#ifdef GL_NV_blend_equation_advanced
	extern bool ext_GL_NV_blend_equation_advanced;
	enum {
		GL_BLEND_OVERLAP_NV = 0x9281,
		GL_BLEND_PREMULTIPLIED_SRC_NV = 0x9280,
		GL_BLUE_NV = 0x1905,
		GL_COLORBURN_NV = 0x929A,
		GL_COLORDODGE_NV = 0x9299,
		GL_CONJOINT_NV = 0x9284,
		GL_CONTRAST_NV = 0x92A1,
		GL_DARKEN_NV = 0x9297,
		GL_DIFFERENCE_NV = 0x929E,
		GL_DISJOINT_NV = 0x9283,
		GL_DST_ATOP_NV = 0x928F,
		GL_DST_IN_NV = 0x928B,
		GL_DST_NV = 0x9287,
		GL_DST_OUT_NV = 0x928D,
		GL_DST_OVER_NV = 0x9289,
		GL_EXCLUSION_NV = 0x92A0,
		GL_GREEN_NV = 0x1904,
		GL_HARDLIGHT_NV = 0x929B,
		GL_HARDMIX_NV = 0x92A9,
		GL_HSL_COLOR_NV = 0x92AF,
		GL_HSL_HUE_NV = 0x92AD,
		GL_HSL_LUMINOSITY_NV = 0x92B0,
		GL_HSL_SATURATION_NV = 0x92AE,
		GL_INVERT_OVG_NV = 0x92B4,
		GL_INVERT_RGB_NV = 0x92A3,
		GL_LIGHTEN_NV = 0x9298,
		GL_LINEARBURN_NV = 0x92A5,
		GL_LINEARDODGE_NV = 0x92A4,
		GL_LINEARLIGHT_NV = 0x92A7,
		GL_MINUS_CLAMPED_NV = 0x92B3,
		GL_MINUS_NV = 0x929F,
		GL_MULTIPLY_NV = 0x9294,
		GL_OVERLAY_NV = 0x9296,
		GL_PINLIGHT_NV = 0x92A8,
		GL_PLUS_CLAMPED_ALPHA_NV = 0x92B2,
		GL_PLUS_CLAMPED_NV = 0x92B1,
		GL_PLUS_DARKER_NV = 0x9292,
		GL_PLUS_NV = 0x9291,
		GL_RED_NV = 0x1903,
		GL_SCREEN_NV = 0x9295,
		GL_SOFTLIGHT_NV = 0x929C,
		GL_SRC_ATOP_NV = 0x928E,
		GL_SRC_IN_NV = 0x928A,
		GL_SRC_NV = 0x9286,
		GL_SRC_OUT_NV = 0x928C,
		GL_SRC_OVER_NV = 0x9288,
		GL_UNCORRELATED_NV = 0x9282,
		GL_VIVIDLIGHT_NV = 0x92A6,
		GL_XOR_NV = 0x1506,
	};
	extern void (*glBlendBarrierNV)();
	extern void (*glBlendParameteriNV)(GLenum pname, GLint value);
	#endif // GL_NV_blend_equation_advanced
	
	#ifdef GL_NV_blend_equation_advanced_coherent
	extern bool ext_GL_NV_blend_equation_advanced_coherent;
	enum {
		GL_BLEND_ADVANCED_COHERENT_NV = 0x9285,
	};
	#endif // GL_NV_blend_equation_advanced_coherent
	
	#ifdef GL_NV_command_list
	extern bool ext_GL_NV_command_list;
	enum {
		GL_TERMINATE_SEQUENCE_COMMAND_NV = 0x0000,
		GL_NOP_COMMAND_NV = 0x0001,
		GL_DRAW_ELEMENTS_COMMAND_NV = 0x0002,
		GL_DRAW_ARRAYS_COMMAND_NV = 0x0003,
		GL_DRAW_ELEMENTS_STRIP_COMMAND_NV = 0x0004,
		GL_DRAW_ARRAYS_STRIP_COMMAND_NV = 0x0005,
		GL_DRAW_ELEMENTS_INSTANCED_COMMAND_NV = 0x0006,
		GL_DRAW_ARRAYS_INSTANCED_COMMAND_NV = 0x0007,
		GL_ELEMENT_ADDRESS_COMMAND_NV = 0x0008,
		GL_ATTRIBUTE_ADDRESS_COMMAND_NV = 0x0009,
		GL_UNIFORM_ADDRESS_COMMAND_NV = 0x000A,
		GL_BLEND_COLOR_COMMAND_NV = 0x000B,
		GL_STENCIL_REF_COMMAND_NV = 0x000C,
		GL_LINE_WIDTH_COMMAND_NV = 0x000D,
		GL_POLYGON_OFFSET_COMMAND_NV = 0x000E,
		GL_ALPHA_REF_COMMAND_NV = 0x000F,
		GL_VIEWPORT_COMMAND_NV = 0x0010,
		GL_SCISSOR_COMMAND_NV = 0x0011,
		GL_FRONT_FACE_COMMAND_NV = 0x0012,
	};
	extern void (*glCallCommandListNV)(GLuint list);
	extern void (*glCommandListSegmentsNV)(GLuint list, GLuint segments);
	extern void (*glCompileCommandListNV)(GLuint list);
	extern void (*glCreateCommandListsNV)(GLsizei n, GLuint *lists);
	extern void (*glCreateStatesNV)(GLsizei n, GLuint *states);
	extern void (*glDeleteCommandListsNV)(GLsizei n, const GLuint *lists);
	extern void (*glDeleteStatesNV)(GLsizei n, const GLuint *states);
	extern void (*glDrawCommandsAddressNV)(GLenum primitiveMode, const GLuint64 *indirects, const GLsizei *sizes, GLuint count);
	extern void (*glDrawCommandsNV)(GLenum primitiveMode, GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, GLuint count);
	extern void (*glDrawCommandsStatesAddressNV)(const GLuint64 *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
	extern void (*glDrawCommandsStatesNV)(GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
	extern GLuint (*glGetCommandHeaderNV)(GLenum tokenID, GLuint size);
	extern GLushort (*glGetStageIndexNV)(GLenum shadertype);
	extern GLboolean (*glIsCommandListNV)(GLuint list);
	extern GLboolean (*glIsStateNV)(GLuint state);
	extern void (*glListDrawCommandsStatesClientNV)(GLuint list, GLuint segment, const void **indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
	extern void (*glStateCaptureNV)(GLuint state, GLenum mode);
	#endif // GL_NV_command_list
	
	#ifdef GL_NV_compute_program5
	extern bool ext_GL_NV_compute_program5;
	enum {
		GL_COMPUTE_PROGRAM_NV = 0x90FB,
		GL_COMPUTE_PROGRAM_PARAMETER_BUFFER_NV = 0x90FC,
	};
	#endif // GL_NV_compute_program5
	
	#ifdef GL_NV_conditional_render
	extern bool ext_GL_NV_conditional_render;
	enum {
		GL_QUERY_WAIT_NV = 0x8E13,
		GL_QUERY_NO_WAIT_NV = 0x8E14,
		GL_QUERY_BY_REGION_WAIT_NV = 0x8E15,
		GL_QUERY_BY_REGION_NO_WAIT_NV = 0x8E16,
	};
	extern void (*glBeginConditionalRenderNV)(GLuint id, GLenum mode);
	extern void (*glEndConditionalRenderNV)();
	#endif // GL_NV_conditional_render
	
	#ifdef GL_NV_conservative_raster
	extern bool ext_GL_NV_conservative_raster;
	enum {
		GL_CONSERVATIVE_RASTERIZATION_NV = 0x9346,
		GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV = 0x9347,
		GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV = 0x9348,
		GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV = 0x9349,
	};
	extern void (*glSubpixelPrecisionBiasNV)(GLuint xbits, GLuint ybits);
	#endif // GL_NV_conservative_raster
	
	#ifdef GL_NV_conservative_raster_dilate
	extern bool ext_GL_NV_conservative_raster_dilate;
	enum {
		GL_CONSERVATIVE_RASTER_DILATE_NV = 0x9379,
		GL_CONSERVATIVE_RASTER_DILATE_RANGE_NV = 0x937A,
		GL_CONSERVATIVE_RASTER_DILATE_GRANULARITY_NV = 0x937B,
	};
	extern void (*glConservativeRasterParameterfNV)(GLenum pname, GLfloat value);
	#endif // GL_NV_conservative_raster_dilate
	
	#ifdef GL_NV_copy_depth_to_color
	extern bool ext_GL_NV_copy_depth_to_color;
	enum {
		GL_DEPTH_STENCIL_TO_RGBA_NV = 0x886E,
		GL_DEPTH_STENCIL_TO_BGRA_NV = 0x886F,
	};
	#endif // GL_NV_copy_depth_to_color
	
	#ifdef GL_NV_copy_image
	extern bool ext_GL_NV_copy_image;
	extern void (*glCopyImageSubDataNV)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
	#endif // GL_NV_copy_image
	
	#ifdef GL_NV_deep_texture3D
	extern bool ext_GL_NV_deep_texture3D;
	enum {
		GL_MAX_DEEP_3D_TEXTURE_WIDTH_HEIGHT_NV = 0x90D0,
		GL_MAX_DEEP_3D_TEXTURE_DEPTH_NV = 0x90D1,
	};
	#endif // GL_NV_deep_texture3D
	
	#ifdef GL_NV_depth_buffer_float
	extern bool ext_GL_NV_depth_buffer_float;
	enum {
		GL_DEPTH_COMPONENT32F_NV = 0x8DAB,
		GL_DEPTH32F_STENCIL8_NV = 0x8DAC,
		GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV = 0x8DAD,
		GL_DEPTH_BUFFER_FLOAT_MODE_NV = 0x8DAF,
	};
	extern void (*glClearDepthdNV)(GLdouble depth);
	extern void (*glDepthBoundsdNV)(GLdouble zmin, GLdouble zmax);
	extern void (*glDepthRangedNV)(GLdouble zNear, GLdouble zFar);
	#endif // GL_NV_depth_buffer_float
	
	#ifdef GL_NV_depth_clamp
	extern bool ext_GL_NV_depth_clamp;
	enum {
		GL_DEPTH_CLAMP_NV = 0x864F,
	};
	#endif // GL_NV_depth_clamp
	
	#ifdef GL_NV_draw_texture
	extern bool ext_GL_NV_draw_texture;
	extern void (*glDrawTextureNV)(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);
	#endif // GL_NV_draw_texture
	
	#ifdef GL_NV_evaluators
	extern bool ext_GL_NV_evaluators;
	enum {
		GL_EVAL_2D_NV = 0x86C0,
		GL_EVAL_TRIANGULAR_2D_NV = 0x86C1,
		GL_MAP_TESSELLATION_NV = 0x86C2,
		GL_MAP_ATTRIB_U_ORDER_NV = 0x86C3,
		GL_MAP_ATTRIB_V_ORDER_NV = 0x86C4,
		GL_EVAL_FRACTIONAL_TESSELLATION_NV = 0x86C5,
		GL_EVAL_VERTEX_ATTRIB0_NV = 0x86C6,
		GL_EVAL_VERTEX_ATTRIB1_NV = 0x86C7,
		GL_EVAL_VERTEX_ATTRIB2_NV = 0x86C8,
		GL_EVAL_VERTEX_ATTRIB3_NV = 0x86C9,
		GL_EVAL_VERTEX_ATTRIB4_NV = 0x86CA,
		GL_EVAL_VERTEX_ATTRIB5_NV = 0x86CB,
		GL_EVAL_VERTEX_ATTRIB6_NV = 0x86CC,
		GL_EVAL_VERTEX_ATTRIB7_NV = 0x86CD,
		GL_EVAL_VERTEX_ATTRIB8_NV = 0x86CE,
		GL_EVAL_VERTEX_ATTRIB9_NV = 0x86CF,
		GL_EVAL_VERTEX_ATTRIB10_NV = 0x86D0,
		GL_EVAL_VERTEX_ATTRIB11_NV = 0x86D1,
		GL_EVAL_VERTEX_ATTRIB12_NV = 0x86D2,
		GL_EVAL_VERTEX_ATTRIB13_NV = 0x86D3,
		GL_EVAL_VERTEX_ATTRIB14_NV = 0x86D4,
		GL_EVAL_VERTEX_ATTRIB15_NV = 0x86D5,
		GL_MAX_MAP_TESSELLATION_NV = 0x86D6,
		GL_MAX_RATIONAL_EVAL_ORDER_NV = 0x86D7,
	};
	extern void (*glEvalMapsNV)(GLenum target, GLenum mode);
	extern void (*glGetMapAttribParameterfvNV)(GLenum target, GLuint index, GLenum pname, GLfloat *params);
	extern void (*glGetMapAttribParameterivNV)(GLenum target, GLuint index, GLenum pname, GLint *params);
	extern void (*glGetMapControlPointsNV)(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void *points);
	extern void (*glGetMapParameterfvNV)(GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetMapParameterivNV)(GLenum target, GLenum pname, GLint *params);
	extern void (*glMapControlPointsNV)(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void *points);
	extern void (*glMapParameterfvNV)(GLenum target, GLenum pname, const GLfloat *params);
	extern void (*glMapParameterivNV)(GLenum target, GLenum pname, const GLint *params);
	#endif // GL_NV_evaluators
	
	#ifdef GL_NV_explicit_multisample
	extern bool ext_GL_NV_explicit_multisample;
	enum {
		GL_SAMPLE_POSITION_NV = 0x8E50,
		GL_SAMPLE_MASK_NV = 0x8E51,
		GL_SAMPLE_MASK_VALUE_NV = 0x8E52,
		GL_TEXTURE_BINDING_RENDERBUFFER_NV = 0x8E53,
		GL_TEXTURE_RENDERBUFFER_DATA_STORE_BINDING_NV = 0x8E54,
		GL_TEXTURE_RENDERBUFFER_NV = 0x8E55,
		GL_SAMPLER_RENDERBUFFER_NV = 0x8E56,
		GL_INT_SAMPLER_RENDERBUFFER_NV = 0x8E57,
		GL_UNSIGNED_INT_SAMPLER_RENDERBUFFER_NV = 0x8E58,
		GL_MAX_SAMPLE_MASK_WORDS_NV = 0x8E59,
	};
	extern void (*glGetMultisamplefvNV)(GLenum pname, GLuint index, GLfloat *val);
	extern void (*glSampleMaskIndexedNV)(GLuint index, GLbitfield mask);
	extern void (*glTexRenderbufferNV)(GLenum target, GLuint renderbuffer);
	#endif // GL_NV_explicit_multisample
	
	#ifdef GL_NV_fence
	extern bool ext_GL_NV_fence;
	enum {
		GL_ALL_COMPLETED_NV = 0x84F2,
		GL_FENCE_STATUS_NV = 0x84F3,
		GL_FENCE_CONDITION_NV = 0x84F4,
	};
	extern void (*glDeleteFencesNV)(GLsizei n, const GLuint *fences);
	extern void (*glFinishFenceNV)(GLuint fence);
	extern void (*glGenFencesNV)(GLsizei n, GLuint *fences);
	extern void (*glGetFenceivNV)(GLuint fence, GLenum pname, GLint *params);
	extern GLboolean (*glIsFenceNV)(GLuint fence);
	extern void (*glSetFenceNV)(GLuint fence, GLenum condition);
	extern GLboolean (*glTestFenceNV)(GLuint fence);
	#endif // GL_NV_fence
	
	#ifdef GL_NV_fill_rectangle
	extern bool ext_GL_NV_fill_rectangle;
	enum {
		GL_FILL_RECTANGLE_NV = 0x933C,
	};
	#endif // GL_NV_fill_rectangle
	
	#ifdef GL_NV_float_buffer
	extern bool ext_GL_NV_float_buffer;
	enum {
		GL_FLOAT_R_NV = 0x8880,
		GL_FLOAT_RG_NV = 0x8881,
		GL_FLOAT_RGB_NV = 0x8882,
		GL_FLOAT_RGBA_NV = 0x8883,
		GL_FLOAT_R16_NV = 0x8884,
		GL_FLOAT_R32_NV = 0x8885,
		GL_FLOAT_RG16_NV = 0x8886,
		GL_FLOAT_RG32_NV = 0x8887,
		GL_FLOAT_RGB16_NV = 0x8888,
		GL_FLOAT_RGB32_NV = 0x8889,
		GL_FLOAT_RGBA16_NV = 0x888A,
		GL_FLOAT_RGBA32_NV = 0x888B,
		GL_TEXTURE_FLOAT_COMPONENTS_NV = 0x888C,
		GL_FLOAT_CLEAR_COLOR_VALUE_NV = 0x888D,
		GL_FLOAT_RGBA_MODE_NV = 0x888E,
	};
	#endif // GL_NV_float_buffer
	
	#ifdef GL_NV_fog_distance
	extern bool ext_GL_NV_fog_distance;
	enum {
		GL_EYE_PLANE = 0x2502,
		GL_FOG_DISTANCE_MODE_NV = 0x855A,
		GL_EYE_RADIAL_NV = 0x855B,
		GL_EYE_PLANE_ABSOLUTE_NV = 0x855C,
	};
	#endif // GL_NV_fog_distance
	
	#ifdef GL_NV_fragment_coverage_to_color
	extern bool ext_GL_NV_fragment_coverage_to_color;
	enum {
		GL_FRAGMENT_COVERAGE_TO_COLOR_NV = 0x92DD,
		GL_FRAGMENT_COVERAGE_COLOR_NV = 0x92DE,
	};
	extern void (*glFragmentCoverageColorNV)(GLuint color);
	#endif // GL_NV_fragment_coverage_to_color
	
	#ifdef GL_NV_fragment_program
	extern bool ext_GL_NV_fragment_program;
	enum {
		GL_MAX_FRAGMENT_PROGRAM_LOCAL_PARAMETERS_NV = 0x8868,
		GL_FRAGMENT_PROGRAM_NV = 0x8870,
		GL_MAX_TEXTURE_COORDS_NV = 0x8871,
		GL_MAX_TEXTURE_IMAGE_UNITS_NV = 0x8872,
		GL_FRAGMENT_PROGRAM_BINDING_NV = 0x8873,
		GL_PROGRAM_ERROR_STRING_NV = 0x8874,
	};
	extern void (*glGetProgramNamedParameterdvNV)(GLuint id, GLsizei len, const GLubyte *name, GLdouble *params);
	extern void (*glGetProgramNamedParameterfvNV)(GLuint id, GLsizei len, const GLubyte *name, GLfloat *params);
	extern void (*glProgramNamedParameter4dNV)(GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glProgramNamedParameter4dvNV)(GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v);
	extern void (*glProgramNamedParameter4fNV)(GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glProgramNamedParameter4fvNV)(GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v);
	#endif // GL_NV_fragment_program
	
	#ifdef GL_NV_fragment_program2
	extern bool ext_GL_NV_fragment_program2;
	enum {
		GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV = 0x88F4,
		GL_MAX_PROGRAM_CALL_DEPTH_NV = 0x88F5,
		GL_MAX_PROGRAM_IF_DEPTH_NV = 0x88F6,
		GL_MAX_PROGRAM_LOOP_DEPTH_NV = 0x88F7,
		GL_MAX_PROGRAM_LOOP_COUNT_NV = 0x88F8,
	};
	#endif // GL_NV_fragment_program2
	
	#ifdef GL_NV_framebuffer_mixed_samples
	extern bool ext_GL_NV_framebuffer_mixed_samples;
	enum {
		#if !defined(GL_EXT_raster_multisample) || !defined(GL_EXT_texture_filter_minmax)
		GL_RASTER_MULTISAMPLE_EXT = 0x9327,
		#endif
		GL_COVERAGE_MODULATION_TABLE_NV = 0x9331,
		#if !defined(GL_EXT_raster_multisample) || !defined(GL_EXT_texture_filter_minmax)
		GL_RASTER_SAMPLES_EXT = 0x9328,
		GL_MAX_RASTER_SAMPLES_EXT = 0x9329,
		GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT = 0x932A,
		GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT = 0x932B,
		GL_EFFECTIVE_RASTER_SAMPLES_EXT = 0x932C,
		#endif
		GL_COLOR_SAMPLES_NV = 0x8E20,
		GL_DEPTH_SAMPLES_NV = 0x932D,
		GL_STENCIL_SAMPLES_NV = 0x932E,
		GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV = 0x932F,
		GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV = 0x9330,
		GL_COVERAGE_MODULATION_NV = 0x9332,
		GL_COVERAGE_MODULATION_TABLE_SIZE_NV = 0x9333,
	};
	extern void (*glCoverageModulationNV)(GLenum components);
	extern void (*glCoverageModulationTableNV)(GLsizei n, const GLfloat *v);
	extern void (*glGetCoverageModulationTableNV)(GLsizei bufsize, GLfloat *v);
	#if !defined(GL_EXT_raster_multisample) || !defined(GL_EXT_texture_filter_minmax)
	extern void (*glRasterSamplesEXT)(GLuint samples, GLboolean fixedsamplelocations);
	#endif
	#endif // GL_NV_framebuffer_mixed_samples
	
	#ifdef GL_NV_framebuffer_multisample_coverage
	extern bool ext_GL_NV_framebuffer_multisample_coverage;
	enum {
		GL_RENDERBUFFER_COVERAGE_SAMPLES_NV = 0x8CAB,
		GL_RENDERBUFFER_COLOR_SAMPLES_NV = 0x8E10,
		GL_MAX_MULTISAMPLE_COVERAGE_MODES_NV = 0x8E11,
		GL_MULTISAMPLE_COVERAGE_MODES_NV = 0x8E12,
	};
	extern void (*glRenderbufferStorageMultisampleCoverageNV)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
	#endif // GL_NV_framebuffer_multisample_coverage
	
	#ifdef GL_NV_geometry_program4
	extern bool ext_GL_NV_geometry_program4;
	enum {
		#if !defined(GL_EXT_geometry_shader4)
		GL_LINES_ADJACENCY_EXT = 0x000A,
		GL_LINE_STRIP_ADJACENCY_EXT = 0x000B,
		GL_TRIANGLES_ADJACENCY_EXT = 0x000C,
		GL_TRIANGLE_STRIP_ADJACENCY_EXT = 0x000D,
		#endif
		GL_GEOMETRY_PROGRAM_NV = 0x8C26,
		GL_MAX_PROGRAM_OUTPUT_VERTICES_NV = 0x8C27,
		GL_MAX_PROGRAM_TOTAL_OUTPUT_COMPONENTS_NV = 0x8C28,
		#if !defined(GL_EXT_geometry_shader4)
		GL_GEOMETRY_VERTICES_OUT_EXT = 0x8DDA,
		GL_GEOMETRY_INPUT_TYPE_EXT = 0x8DDB,
		GL_GEOMETRY_OUTPUT_TYPE_EXT = 0x8DDC,
		GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT = 0x8C29,
		GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT = 0x8DA7,
		GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT = 0x8DA8,
		GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT = 0x8DA9,
		#endif
		#if !defined(GL_EXT_geometry_shader4) || !defined(GL_EXT_texture_array)
		GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT = 0x8CD4,
		#endif
		#if !defined(GL_EXT_geometry_shader4)
		GL_PROGRAM_POINT_SIZE_EXT = 0x8642,
		#endif
	};
	extern void (*glFramebufferTextureEXT)(GLenum target, GLenum attachment, GLuint texture, GLint level);
	extern void (*glFramebufferTextureFaceEXT)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
	#if !defined(GL_EXT_texture_array)
	extern void (*glFramebufferTextureLayerEXT)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
	#endif
	extern void (*glProgramVertexLimitNV)(GLenum target, GLint limit);
	#endif // GL_NV_geometry_program4
	
	#ifdef GL_NV_gpu_program4
	extern bool ext_GL_NV_gpu_program4;
	enum {
		GL_MIN_PROGRAM_TEXEL_OFFSET_NV = 0x8904,
		GL_MAX_PROGRAM_TEXEL_OFFSET_NV = 0x8905,
		GL_PROGRAM_ATTRIB_COMPONENTS_NV = 0x8906,
		GL_PROGRAM_RESULT_COMPONENTS_NV = 0x8907,
		GL_MAX_PROGRAM_ATTRIB_COMPONENTS_NV = 0x8908,
		GL_MAX_PROGRAM_RESULT_COMPONENTS_NV = 0x8909,
		GL_MAX_PROGRAM_GENERIC_ATTRIBS_NV = 0x8DA5,
		GL_MAX_PROGRAM_GENERIC_RESULTS_NV = 0x8DA6,
	};
	extern void (*glGetProgramEnvParameterIivNV)(GLenum target, GLuint index, GLint *params);
	extern void (*glGetProgramEnvParameterIuivNV)(GLenum target, GLuint index, GLuint *params);
	extern void (*glGetProgramLocalParameterIivNV)(GLenum target, GLuint index, GLint *params);
	extern void (*glGetProgramLocalParameterIuivNV)(GLenum target, GLuint index, GLuint *params);
	extern void (*glProgramEnvParameterI4iNV)(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
	extern void (*glProgramEnvParameterI4ivNV)(GLenum target, GLuint index, const GLint *params);
	extern void (*glProgramEnvParameterI4uiNV)(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
	extern void (*glProgramEnvParameterI4uivNV)(GLenum target, GLuint index, const GLuint *params);
	extern void (*glProgramEnvParametersI4ivNV)(GLenum target, GLuint index, GLsizei count, const GLint *params);
	extern void (*glProgramEnvParametersI4uivNV)(GLenum target, GLuint index, GLsizei count, const GLuint *params);
	extern void (*glProgramLocalParameterI4iNV)(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
	extern void (*glProgramLocalParameterI4ivNV)(GLenum target, GLuint index, const GLint *params);
	extern void (*glProgramLocalParameterI4uiNV)(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
	extern void (*glProgramLocalParameterI4uivNV)(GLenum target, GLuint index, const GLuint *params);
	extern void (*glProgramLocalParametersI4ivNV)(GLenum target, GLuint index, GLsizei count, const GLint *params);
	extern void (*glProgramLocalParametersI4uivNV)(GLenum target, GLuint index, GLsizei count, const GLuint *params);
	#endif // GL_NV_gpu_program4
	
	#ifdef GL_NV_gpu_program5
	extern bool ext_GL_NV_gpu_program5;
	enum {
		GL_MAX_GEOMETRY_PROGRAM_INVOCATIONS_NV = 0x8E5A,
		GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_NV = 0x8E5B,
		GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_NV = 0x8E5C,
		GL_FRAGMENT_PROGRAM_INTERPOLATION_OFFSET_BITS_NV = 0x8E5D,
		GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_NV = 0x8E5E,
		GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_NV = 0x8E5F,
		GL_MAX_PROGRAM_SUBROUTINE_PARAMETERS_NV = 0x8F44,
		GL_MAX_PROGRAM_SUBROUTINE_NUM_NV = 0x8F45,
	};
	extern void (*glGetProgramSubroutineParameteruivNV)(GLenum target, GLuint index, GLuint *param);
	extern void (*glProgramSubroutineParametersuivNV)(GLenum target, GLsizei count, const GLuint *params);
	#endif // GL_NV_gpu_program5
	
	#ifdef GL_NV_gpu_shader5
	extern bool ext_GL_NV_gpu_shader5;
	enum {
		#if !defined(GL_ARB_tessellation_shader)
		GL_PATCHES = 0x000E,
		#endif
		#if !defined(GL_AMD_gpu_shader_int64)
		GL_INT64_NV = 0x140E,
		GL_UNSIGNED_INT64_NV = 0x140F,
		GL_INT8_NV = 0x8FE0,
		GL_INT8_VEC2_NV = 0x8FE1,
		GL_INT8_VEC3_NV = 0x8FE2,
		GL_INT8_VEC4_NV = 0x8FE3,
		GL_INT16_NV = 0x8FE4,
		GL_INT16_VEC2_NV = 0x8FE5,
		GL_INT16_VEC3_NV = 0x8FE6,
		GL_INT16_VEC4_NV = 0x8FE7,
		GL_INT64_VEC2_NV = 0x8FE9,
		GL_INT64_VEC3_NV = 0x8FEA,
		GL_INT64_VEC4_NV = 0x8FEB,
		GL_UNSIGNED_INT8_NV = 0x8FEC,
		GL_UNSIGNED_INT8_VEC2_NV = 0x8FED,
		GL_UNSIGNED_INT8_VEC3_NV = 0x8FEE,
		GL_UNSIGNED_INT8_VEC4_NV = 0x8FEF,
		GL_UNSIGNED_INT16_NV = 0x8FF0,
		GL_UNSIGNED_INT16_VEC2_NV = 0x8FF1,
		GL_UNSIGNED_INT16_VEC3_NV = 0x8FF2,
		GL_UNSIGNED_INT16_VEC4_NV = 0x8FF3,
		GL_UNSIGNED_INT64_VEC2_NV = 0x8FF5,
		GL_UNSIGNED_INT64_VEC3_NV = 0x8FF6,
		GL_UNSIGNED_INT64_VEC4_NV = 0x8FF7,
		GL_FLOAT16_NV = 0x8FF8,
		GL_FLOAT16_VEC2_NV = 0x8FF9,
		GL_FLOAT16_VEC3_NV = 0x8FFA,
		GL_FLOAT16_VEC4_NV = 0x8FFB,
		#endif
	};
	#if !defined(GL_AMD_gpu_shader_int64)
	extern void (*glGetUniformi64vNV)(GLuint program, GLint location, GLint64EXT *params);
	extern void (*glProgramUniform1i64NV)(GLuint program, GLint location, GLint64EXT x);
	extern void (*glProgramUniform1i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glProgramUniform1ui64NV)(GLuint program, GLint location, GLuint64EXT x);
	extern void (*glProgramUniform1ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
	extern void (*glProgramUniform2i64NV)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
	extern void (*glProgramUniform2i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glProgramUniform2ui64NV)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
	extern void (*glProgramUniform2ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
	extern void (*glProgramUniform3i64NV)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
	extern void (*glProgramUniform3i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glProgramUniform3ui64NV)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
	extern void (*glProgramUniform3ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
	extern void (*glProgramUniform4i64NV)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
	extern void (*glProgramUniform4i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glProgramUniform4ui64NV)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
	extern void (*glProgramUniform4ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
	extern void (*glUniform1i64NV)(GLint location, GLint64EXT x);
	extern void (*glUniform1i64vNV)(GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glUniform1ui64NV)(GLint location, GLuint64EXT x);
	extern void (*glUniform1ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value);
	extern void (*glUniform2i64NV)(GLint location, GLint64EXT x, GLint64EXT y);
	extern void (*glUniform2i64vNV)(GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glUniform2ui64NV)(GLint location, GLuint64EXT x, GLuint64EXT y);
	extern void (*glUniform2ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value);
	extern void (*glUniform3i64NV)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
	extern void (*glUniform3i64vNV)(GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glUniform3ui64NV)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
	extern void (*glUniform3ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value);
	extern void (*glUniform4i64NV)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
	extern void (*glUniform4i64vNV)(GLint location, GLsizei count, const GLint64EXT *value);
	extern void (*glUniform4ui64NV)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
	extern void (*glUniform4ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value);
	#endif
	#endif // GL_NV_gpu_shader5
	
	#ifdef GL_NV_half_float
	extern bool ext_GL_NV_half_float;
	enum {
		GL_HALF_FLOAT_NV = 0x140B,
	};
	extern void (*glColor3hNV)(GLhalfNV red, GLhalfNV green, GLhalfNV blue);
	extern void (*glColor3hvNV)(const GLhalfNV *v);
	extern void (*glColor4hNV)(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha);
	extern void (*glColor4hvNV)(const GLhalfNV *v);
	extern void (*glFogCoordhNV)(GLhalfNV fog);
	extern void (*glFogCoordhvNV)(const GLhalfNV *fog);
	extern void (*glMultiTexCoord1hNV)(GLenum target, GLhalfNV s);
	extern void (*glMultiTexCoord1hvNV)(GLenum target, const GLhalfNV *v);
	extern void (*glMultiTexCoord2hNV)(GLenum target, GLhalfNV s, GLhalfNV t);
	extern void (*glMultiTexCoord2hvNV)(GLenum target, const GLhalfNV *v);
	extern void (*glMultiTexCoord3hNV)(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r);
	extern void (*glMultiTexCoord3hvNV)(GLenum target, const GLhalfNV *v);
	extern void (*glMultiTexCoord4hNV)(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q);
	extern void (*glMultiTexCoord4hvNV)(GLenum target, const GLhalfNV *v);
	extern void (*glNormal3hNV)(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz);
	extern void (*glNormal3hvNV)(const GLhalfNV *v);
	extern void (*glSecondaryColor3hNV)(GLhalfNV red, GLhalfNV green, GLhalfNV blue);
	extern void (*glSecondaryColor3hvNV)(const GLhalfNV *v);
	extern void (*glTexCoord1hNV)(GLhalfNV s);
	extern void (*glTexCoord1hvNV)(const GLhalfNV *v);
	extern void (*glTexCoord2hNV)(GLhalfNV s, GLhalfNV t);
	extern void (*glTexCoord2hvNV)(const GLhalfNV *v);
	extern void (*glTexCoord3hNV)(GLhalfNV s, GLhalfNV t, GLhalfNV r);
	extern void (*glTexCoord3hvNV)(const GLhalfNV *v);
	extern void (*glTexCoord4hNV)(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q);
	extern void (*glTexCoord4hvNV)(const GLhalfNV *v);
	extern void (*glVertex2hNV)(GLhalfNV x, GLhalfNV y);
	extern void (*glVertex2hvNV)(const GLhalfNV *v);
	extern void (*glVertex3hNV)(GLhalfNV x, GLhalfNV y, GLhalfNV z);
	extern void (*glVertex3hvNV)(const GLhalfNV *v);
	extern void (*glVertex4hNV)(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w);
	extern void (*glVertex4hvNV)(const GLhalfNV *v);
	extern void (*glVertexAttrib1hNV)(GLuint index, GLhalfNV x);
	extern void (*glVertexAttrib1hvNV)(GLuint index, const GLhalfNV *v);
	extern void (*glVertexAttrib2hNV)(GLuint index, GLhalfNV x, GLhalfNV y);
	extern void (*glVertexAttrib2hvNV)(GLuint index, const GLhalfNV *v);
	extern void (*glVertexAttrib3hNV)(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z);
	extern void (*glVertexAttrib3hvNV)(GLuint index, const GLhalfNV *v);
	extern void (*glVertexAttrib4hNV)(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w);
	extern void (*glVertexAttrib4hvNV)(GLuint index, const GLhalfNV *v);
	extern void (*glVertexAttribs1hvNV)(GLuint index, GLsizei n, const GLhalfNV *v);
	extern void (*glVertexAttribs2hvNV)(GLuint index, GLsizei n, const GLhalfNV *v);
	extern void (*glVertexAttribs3hvNV)(GLuint index, GLsizei n, const GLhalfNV *v);
	extern void (*glVertexAttribs4hvNV)(GLuint index, GLsizei n, const GLhalfNV *v);
	extern void (*glVertexWeighthNV)(GLhalfNV weight);
	extern void (*glVertexWeighthvNV)(const GLhalfNV *weight);
	#endif // GL_NV_half_float
	
	#ifdef GL_NV_internalformat_sample_query
	extern bool ext_GL_NV_internalformat_sample_query;
	enum {
		GL_MULTISAMPLES_NV = 0x9371,
		GL_SUPERSAMPLE_SCALE_X_NV = 0x9372,
		GL_SUPERSAMPLE_SCALE_Y_NV = 0x9373,
		GL_CONFORMANT_NV = 0x9374,
	};
	extern void (*glGetInternalformatSampleivNV)(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint *params);
	#endif // GL_NV_internalformat_sample_query
	
	#ifdef GL_NV_light_max_exponent
	extern bool ext_GL_NV_light_max_exponent;
	enum {
		GL_MAX_SHININESS_NV = 0x8504,
		GL_MAX_SPOT_EXPONENT_NV = 0x8505,
	};
	#endif // GL_NV_light_max_exponent
	
	#ifdef GL_NV_multisample_coverage
	extern bool ext_GL_NV_multisample_coverage;
	enum {
		#if !defined(GL_ARB_multisample)
		GL_SAMPLES_ARB = 0x80A9,
		#endif
		#if !defined(GL_NV_framebuffer_mixed_samples)
		GL_COLOR_SAMPLES_NV = 0x8E20,
		#endif
	};
	#endif // GL_NV_multisample_coverage
	
	#ifdef GL_NV_multisample_filter_hint
	extern bool ext_GL_NV_multisample_filter_hint;
	enum {
		GL_MULTISAMPLE_FILTER_HINT_NV = 0x8534,
	};
	#endif // GL_NV_multisample_filter_hint
	
	#ifdef GL_NV_occlusion_query
	extern bool ext_GL_NV_occlusion_query;
	enum {
		GL_PIXEL_COUNTER_BITS_NV = 0x8864,
		GL_CURRENT_OCCLUSION_QUERY_ID_NV = 0x8865,
		GL_PIXEL_COUNT_NV = 0x8866,
		GL_PIXEL_COUNT_AVAILABLE_NV = 0x8867,
	};
	extern void (*glBeginOcclusionQueryNV)(GLuint id);
	extern void (*glDeleteOcclusionQueriesNV)(GLsizei n, const GLuint *ids);
	extern void (*glEndOcclusionQueryNV)();
	extern void (*glGenOcclusionQueriesNV)(GLsizei n, GLuint *ids);
	extern void (*glGetOcclusionQueryivNV)(GLuint id, GLenum pname, GLint *params);
	extern void (*glGetOcclusionQueryuivNV)(GLuint id, GLenum pname, GLuint *params);
	extern GLboolean (*glIsOcclusionQueryNV)(GLuint id);
	#endif // GL_NV_occlusion_query
	
	#ifdef GL_NV_packed_depth_stencil
	extern bool ext_GL_NV_packed_depth_stencil;
	enum {
		GL_DEPTH_STENCIL_NV = 0x84F9,
		GL_UNSIGNED_INT_24_8_NV = 0x84FA,
	};
	#endif // GL_NV_packed_depth_stencil
	
	#ifdef GL_NV_parameter_buffer_object
	extern bool ext_GL_NV_parameter_buffer_object;
	enum {
		GL_MAX_PROGRAM_PARAMETER_BUFFER_BINDINGS_NV = 0x8DA0,
		GL_MAX_PROGRAM_PARAMETER_BUFFER_SIZE_NV = 0x8DA1,
		GL_VERTEX_PROGRAM_PARAMETER_BUFFER_NV = 0x8DA2,
		GL_GEOMETRY_PROGRAM_PARAMETER_BUFFER_NV = 0x8DA3,
		GL_FRAGMENT_PROGRAM_PARAMETER_BUFFER_NV = 0x8DA4,
	};
	extern void (*glProgramBufferParametersIivNV)(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLint *params);
	extern void (*glProgramBufferParametersIuivNV)(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLuint *params);
	extern void (*glProgramBufferParametersfvNV)(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat *params);
	#endif // GL_NV_parameter_buffer_object
	
	#ifdef GL_NV_path_rendering
	extern bool ext_GL_NV_path_rendering;
	enum {
		GL_PATH_FORMAT_SVG_NV = 0x9070,
		GL_PATH_FORMAT_PS_NV = 0x9071,
		GL_STANDARD_FONT_NAME_NV = 0x9072,
		GL_SYSTEM_FONT_NAME_NV = 0x9073,
		GL_FILE_NAME_NV = 0x9074,
		GL_PATH_STROKE_WIDTH_NV = 0x9075,
		GL_PATH_END_CAPS_NV = 0x9076,
		GL_PATH_INITIAL_END_CAP_NV = 0x9077,
		GL_PATH_TERMINAL_END_CAP_NV = 0x9078,
		GL_PATH_JOIN_STYLE_NV = 0x9079,
		GL_PATH_MITER_LIMIT_NV = 0x907A,
		GL_PATH_DASH_CAPS_NV = 0x907B,
		GL_PATH_INITIAL_DASH_CAP_NV = 0x907C,
		GL_PATH_TERMINAL_DASH_CAP_NV = 0x907D,
		GL_PATH_DASH_OFFSET_NV = 0x907E,
		GL_PATH_CLIENT_LENGTH_NV = 0x907F,
		GL_PATH_FILL_MODE_NV = 0x9080,
		GL_PATH_FILL_MASK_NV = 0x9081,
		GL_PATH_FILL_COVER_MODE_NV = 0x9082,
		GL_PATH_STROKE_COVER_MODE_NV = 0x9083,
		GL_PATH_STROKE_MASK_NV = 0x9084,
		GL_COUNT_UP_NV = 0x9088,
		GL_COUNT_DOWN_NV = 0x9089,
		GL_PATH_OBJECT_BOUNDING_BOX_NV = 0x908A,
		GL_CONVEX_HULL_NV = 0x908B,
		GL_BOUNDING_BOX_NV = 0x908D,
		GL_TRANSLATE_X_NV = 0x908E,
		GL_TRANSLATE_Y_NV = 0x908F,
		GL_TRANSLATE_2D_NV = 0x9090,
		GL_TRANSLATE_3D_NV = 0x9091,
		GL_AFFINE_2D_NV = 0x9092,
		GL_AFFINE_3D_NV = 0x9094,
		GL_TRANSPOSE_AFFINE_2D_NV = 0x9096,
		GL_TRANSPOSE_AFFINE_3D_NV = 0x9098,
		GL_UTF8_NV = 0x909A,
		GL_UTF16_NV = 0x909B,
		GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV = 0x909C,
		GL_PATH_COMMAND_COUNT_NV = 0x909D,
		GL_PATH_COORD_COUNT_NV = 0x909E,
		GL_PATH_DASH_ARRAY_COUNT_NV = 0x909F,
		GL_PATH_COMPUTED_LENGTH_NV = 0x90A0,
		GL_PATH_FILL_BOUNDING_BOX_NV = 0x90A1,
		GL_PATH_STROKE_BOUNDING_BOX_NV = 0x90A2,
		GL_SQUARE_NV = 0x90A3,
		GL_ROUND_NV = 0x90A4,
		GL_TRIANGULAR_NV = 0x90A5,
		GL_BEVEL_NV = 0x90A6,
		GL_MITER_REVERT_NV = 0x90A7,
		GL_MITER_TRUNCATE_NV = 0x90A8,
		GL_SKIP_MISSING_GLYPH_NV = 0x90A9,
		GL_USE_MISSING_GLYPH_NV = 0x90AA,
		GL_PATH_ERROR_POSITION_NV = 0x90AB,
		GL_ACCUM_ADJACENT_PAIRS_NV = 0x90AD,
		GL_ADJACENT_PAIRS_NV = 0x90AE,
		GL_FIRST_TO_REST_NV = 0x90AF,
		GL_PATH_GEN_MODE_NV = 0x90B0,
		GL_PATH_GEN_COEFF_NV = 0x90B1,
		GL_PATH_GEN_COMPONENTS_NV = 0x90B3,
		GL_PATH_STENCIL_FUNC_NV = 0x90B7,
		GL_PATH_STENCIL_REF_NV = 0x90B8,
		GL_PATH_STENCIL_VALUE_MASK_NV = 0x90B9,
		GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV = 0x90BD,
		GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV = 0x90BE,
		GL_PATH_COVER_DEPTH_FUNC_NV = 0x90BF,
		GL_PATH_DASH_OFFSET_RESET_NV = 0x90B4,
		GL_MOVE_TO_RESETS_NV = 0x90B5,
		GL_MOVE_TO_CONTINUES_NV = 0x90B6,
		GL_CLOSE_PATH_NV = 0x00,
		GL_MOVE_TO_NV = 0x02,
		GL_RELATIVE_MOVE_TO_NV = 0x03,
		GL_LINE_TO_NV = 0x04,
		GL_RELATIVE_LINE_TO_NV = 0x05,
		GL_HORIZONTAL_LINE_TO_NV = 0x06,
		GL_RELATIVE_HORIZONTAL_LINE_TO_NV = 0x07,
		GL_VERTICAL_LINE_TO_NV = 0x08,
		GL_RELATIVE_VERTICAL_LINE_TO_NV = 0x09,
		GL_QUADRATIC_CURVE_TO_NV = 0x0A,
		GL_RELATIVE_QUADRATIC_CURVE_TO_NV = 0x0B,
		GL_CUBIC_CURVE_TO_NV = 0x0C,
		GL_RELATIVE_CUBIC_CURVE_TO_NV = 0x0D,
		GL_SMOOTH_QUADRATIC_CURVE_TO_NV = 0x0E,
		GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV = 0x0F,
		GL_SMOOTH_CUBIC_CURVE_TO_NV = 0x10,
		GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV = 0x11,
		GL_SMALL_CCW_ARC_TO_NV = 0x12,
		GL_RELATIVE_SMALL_CCW_ARC_TO_NV = 0x13,
		GL_SMALL_CW_ARC_TO_NV = 0x14,
		GL_RELATIVE_SMALL_CW_ARC_TO_NV = 0x15,
		GL_LARGE_CCW_ARC_TO_NV = 0x16,
		GL_RELATIVE_LARGE_CCW_ARC_TO_NV = 0x17,
		GL_LARGE_CW_ARC_TO_NV = 0x18,
		GL_RELATIVE_LARGE_CW_ARC_TO_NV = 0x19,
		GL_RESTART_PATH_NV = 0xF0,
		GL_DUP_FIRST_CUBIC_CURVE_TO_NV = 0xF2,
		GL_DUP_LAST_CUBIC_CURVE_TO_NV = 0xF4,
		GL_RECT_NV = 0xF6,
		GL_CIRCULAR_CCW_ARC_TO_NV = 0xF8,
		GL_CIRCULAR_CW_ARC_TO_NV = 0xFA,
		GL_CIRCULAR_TANGENT_ARC_TO_NV = 0xFC,
		GL_ARC_TO_NV = 0xFE,
		GL_RELATIVE_ARC_TO_NV = 0xFF,
		GL_BOLD_BIT_NV = 0x01,
		GL_ITALIC_BIT_NV = 0x02,
		GL_GLYPH_WIDTH_BIT_NV = 0x01,
		GL_GLYPH_HEIGHT_BIT_NV = 0x02,
		GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV = 0x04,
		GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV = 0x08,
		GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = 0x10,
		GL_GLYPH_VERTICAL_BEARING_X_BIT_NV = 0x20,
		GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV = 0x40,
		GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV = 0x80,
		GL_GLYPH_HAS_KERNING_BIT_NV = 0x100,
		GL_FONT_X_MIN_BOUNDS_BIT_NV = 0x00010000,
		GL_FONT_Y_MIN_BOUNDS_BIT_NV = 0x00020000,
		GL_FONT_X_MAX_BOUNDS_BIT_NV = 0x00040000,
		GL_FONT_Y_MAX_BOUNDS_BIT_NV = 0x00080000,
		GL_FONT_UNITS_PER_EM_BIT_NV = 0x00100000,
		GL_FONT_ASCENDER_BIT_NV = 0x00200000,
		GL_FONT_DESCENDER_BIT_NV = 0x00400000,
		GL_FONT_HEIGHT_BIT_NV = 0x00800000,
		GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV = 0x01000000,
		GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV = 0x02000000,
		GL_FONT_UNDERLINE_POSITION_BIT_NV = 0x04000000,
		GL_FONT_UNDERLINE_THICKNESS_BIT_NV = 0x08000000,
		GL_FONT_HAS_KERNING_BIT_NV = 0x10000000,
		GL_ROUNDED_RECT_NV = 0xE8,
		GL_RELATIVE_ROUNDED_RECT_NV = 0xE9,
		GL_ROUNDED_RECT2_NV = 0xEA,
		GL_RELATIVE_ROUNDED_RECT2_NV = 0xEB,
		GL_ROUNDED_RECT4_NV = 0xEC,
		GL_RELATIVE_ROUNDED_RECT4_NV = 0xED,
		GL_ROUNDED_RECT8_NV = 0xEE,
		GL_RELATIVE_ROUNDED_RECT8_NV = 0xEF,
		GL_RELATIVE_RECT_NV = 0xF7,
		GL_FONT_GLYPHS_AVAILABLE_NV = 0x9368,
		GL_FONT_TARGET_UNAVAILABLE_NV = 0x9369,
		GL_FONT_UNAVAILABLE_NV = 0x936A,
		GL_FONT_UNINTELLIGIBLE_NV = 0x936B,
		GL_CONIC_CURVE_TO_NV = 0x1A,
		GL_RELATIVE_CONIC_CURVE_TO_NV = 0x1B,
		GL_FONT_NUM_GLYPH_INDICES_BIT_NV = 0x20000000,
		GL_STANDARD_FONT_FORMAT_NV = 0x936C,
		GL_2_BYTES_NV = 0x1407,
		GL_3_BYTES_NV = 0x1408,
		GL_4_BYTES_NV = 0x1409,
		GL_EYE_LINEAR_NV = 0x2400,
		GL_OBJECT_LINEAR_NV = 0x2401,
		GL_CONSTANT_NV = 0x8576,
		GL_PATH_FOG_GEN_MODE_NV = 0x90AC,
		GL_PRIMARY_COLOR = 0x8577,
		GL_PRIMARY_COLOR_NV = 0x852C,
		GL_SECONDARY_COLOR_NV = 0x852D,
		GL_PATH_GEN_COLOR_FORMAT_NV = 0x90B2,
		GL_PATH_PROJECTION_NV = 0x1701,
		GL_PATH_MODELVIEW_NV = 0x1700,
		GL_PATH_MODELVIEW_STACK_DEPTH_NV = 0x0BA3,
		GL_PATH_MODELVIEW_MATRIX_NV = 0x0BA6,
		GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV = 0x0D36,
		GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV = 0x84E3,
		GL_PATH_PROJECTION_STACK_DEPTH_NV = 0x0BA4,
		GL_PATH_PROJECTION_MATRIX_NV = 0x0BA7,
		GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV = 0x0D38,
		GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV = 0x84E4,
		GL_FRAGMENT_INPUT_NV = 0x936D,
	};
	extern void (*glCopyPathNV)(GLuint resultPath, GLuint srcPath);
	extern void (*glCoverFillPathInstancedNV)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
	extern void (*glCoverFillPathNV)(GLuint path, GLenum coverMode);
	extern void (*glCoverStrokePathInstancedNV)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
	extern void (*glCoverStrokePathNV)(GLuint path, GLenum coverMode);
	extern void (*glDeletePathsNV)(GLuint path, GLsizei range);
	extern GLuint (*glGenPathsNV)(GLsizei range);
	extern void (*glGetPathColorGenfvNV)(GLenum color, GLenum pname, GLfloat *value);
	extern void (*glGetPathColorGenivNV)(GLenum color, GLenum pname, GLint *value);
	extern void (*glGetPathCommandsNV)(GLuint path, GLubyte *commands);
	extern void (*glGetPathCoordsNV)(GLuint path, GLfloat *coords);
	extern void (*glGetPathDashArrayNV)(GLuint path, GLfloat *dashArray);
	extern GLfloat (*glGetPathLengthNV)(GLuint path, GLsizei startSegment, GLsizei numSegments);
	extern void (*glGetPathMetricRangeNV)(GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics);
	extern void (*glGetPathMetricsNV)(GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLsizei stride, GLfloat *metrics);
	extern void (*glGetPathParameterfvNV)(GLuint path, GLenum pname, GLfloat *value);
	extern void (*glGetPathParameterivNV)(GLuint path, GLenum pname, GLint *value);
	extern void (*glGetPathSpacingNV)(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing);
	extern void (*glGetPathTexGenfvNV)(GLenum texCoordSet, GLenum pname, GLfloat *value);
	extern void (*glGetPathTexGenivNV)(GLenum texCoordSet, GLenum pname, GLint *value);
	extern void (*glGetProgramResourcefvNV)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLfloat *params);
	extern void (*glInterpolatePathsNV)(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
	extern GLboolean (*glIsPathNV)(GLuint path);
	extern GLboolean (*glIsPointInFillPathNV)(GLuint path, GLuint mask, GLfloat x, GLfloat y);
	extern GLboolean (*glIsPointInStrokePathNV)(GLuint path, GLfloat x, GLfloat y);
	extern void (*glMatrixLoad3x2fNV)(GLenum matrixMode, const GLfloat *m);
	extern void (*glMatrixLoad3x3fNV)(GLenum matrixMode, const GLfloat *m);
	extern void (*glMatrixLoadTranspose3x3fNV)(GLenum matrixMode, const GLfloat *m);
	extern void (*glMatrixMult3x2fNV)(GLenum matrixMode, const GLfloat *m);
	extern void (*glMatrixMult3x3fNV)(GLenum matrixMode, const GLfloat *m);
	extern void (*glMatrixMultTranspose3x3fNV)(GLenum matrixMode, const GLfloat *m);
	extern void (*glPathColorGenNV)(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat *coeffs);
	extern void (*glPathCommandsNV)(GLuint path, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords);
	extern void (*glPathCoordsNV)(GLuint path, GLsizei numCoords, GLenum coordType, const void *coords);
	extern void (*glPathCoverDepthFuncNV)(GLenum func);
	extern void (*glPathDashArrayNV)(GLuint path, GLsizei dashCount, const GLfloat *dashArray);
	extern void (*glPathFogGenNV)(GLenum genMode);
	extern GLenum (*glPathGlyphIndexArrayNV)(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
	extern GLenum (*glPathGlyphIndexRangeNV)(GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint baseAndCount[2]);
	extern void (*glPathGlyphRangeNV)(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
	extern void (*glPathGlyphsNV)(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void *charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
	extern GLenum (*glPathMemoryGlyphIndexArrayNV)(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void *fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
	extern void (*glPathParameterfNV)(GLuint path, GLenum pname, GLfloat value);
	extern void (*glPathParameterfvNV)(GLuint path, GLenum pname, const GLfloat *value);
	extern void (*glPathParameteriNV)(GLuint path, GLenum pname, GLint value);
	extern void (*glPathParameterivNV)(GLuint path, GLenum pname, const GLint *value);
	extern void (*glPathStencilDepthOffsetNV)(GLfloat factor, GLfloat units);
	extern void (*glPathStencilFuncNV)(GLenum func, GLint ref, GLuint mask);
	extern void (*glPathStringNV)(GLuint path, GLenum format, GLsizei length, const void *pathString);
	extern void (*glPathSubCommandsNV)(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords);
	extern void (*glPathSubCoordsNV)(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void *coords);
	extern void (*glPathTexGenNV)(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat *coeffs);
	extern GLboolean (*glPointAlongPathNV)(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY);
	extern void (*glProgramPathFragmentInputGenNV)(GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat *coeffs);
	extern void (*glStencilFillPathInstancedNV)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat *transformValues);
	extern void (*glStencilFillPathNV)(GLuint path, GLenum fillMode, GLuint mask);
	extern void (*glStencilStrokePathInstancedNV)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat *transformValues);
	extern void (*glStencilStrokePathNV)(GLuint path, GLint reference, GLuint mask);
	extern void (*glStencilThenCoverFillPathInstancedNV)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
	extern void (*glStencilThenCoverFillPathNV)(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode);
	extern void (*glStencilThenCoverStrokePathInstancedNV)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
	extern void (*glStencilThenCoverStrokePathNV)(GLuint path, GLint reference, GLuint mask, GLenum coverMode);
	extern void (*glTransformPathNV)(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat *transformValues);
	extern void (*glWeightPathsNV)(GLuint resultPath, GLsizei numPaths, const GLuint *paths, const GLfloat *weights);
	#endif // GL_NV_path_rendering
	
	#ifdef GL_NV_path_rendering_shared_edge
	extern bool ext_GL_NV_path_rendering_shared_edge;
	enum {
		GL_SHARED_EDGE_NV = 0xC0,
	};
	#endif // GL_NV_path_rendering_shared_edge
	
	#ifdef GL_NV_pixel_data_range
	extern bool ext_GL_NV_pixel_data_range;
	enum {
		GL_WRITE_PIXEL_DATA_RANGE_NV = 0x8878,
		GL_READ_PIXEL_DATA_RANGE_NV = 0x8879,
		GL_WRITE_PIXEL_DATA_RANGE_LENGTH_NV = 0x887A,
		GL_READ_PIXEL_DATA_RANGE_LENGTH_NV = 0x887B,
		GL_WRITE_PIXEL_DATA_RANGE_POINTER_NV = 0x887C,
		GL_READ_PIXEL_DATA_RANGE_POINTER_NV = 0x887D,
	};
	extern void (*glFlushPixelDataRangeNV)(GLenum target);
	extern void (*glPixelDataRangeNV)(GLenum target, GLsizei length, const void *pointer);
	#endif // GL_NV_pixel_data_range
	
	#ifdef GL_NV_point_sprite
	extern bool ext_GL_NV_point_sprite;
	enum {
		GL_POINT_SPRITE_NV = 0x8861,
		GL_COORD_REPLACE_NV = 0x8862,
		GL_POINT_SPRITE_R_MODE_NV = 0x8863,
	};
	extern void (*glPointParameteriNV)(GLenum pname, GLint param);
	extern void (*glPointParameterivNV)(GLenum pname, const GLint *params);
	#endif // GL_NV_point_sprite
	
	#ifdef GL_NV_present_video
	extern bool ext_GL_NV_present_video;
	enum {
		GL_FRAME_NV = 0x8E26,
		GL_FIELDS_NV = 0x8E27,
		GL_CURRENT_TIME_NV = 0x8E28,
		GL_NUM_FILL_STREAMS_NV = 0x8E29,
		GL_PRESENT_TIME_NV = 0x8E2A,
		GL_PRESENT_DURATION_NV = 0x8E2B,
	};
	extern void (*glGetVideoi64vNV)(GLuint video_slot, GLenum pname, GLint64EXT *params);
	extern void (*glGetVideoivNV)(GLuint video_slot, GLenum pname, GLint *params);
	extern void (*glGetVideoui64vNV)(GLuint video_slot, GLenum pname, GLuint64EXT *params);
	extern void (*glGetVideouivNV)(GLuint video_slot, GLenum pname, GLuint *params);
	extern void (*glPresentFrameDualFillNV)(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3);
	extern void (*glPresentFrameKeyedNV)(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1);
	#endif // GL_NV_present_video
	
	#ifdef GL_NV_primitive_restart
	extern bool ext_GL_NV_primitive_restart;
	enum {
		GL_PRIMITIVE_RESTART_NV = 0x8558,
		GL_PRIMITIVE_RESTART_INDEX_NV = 0x8559,
	};
	extern void (*glPrimitiveRestartIndexNV)(GLuint index);
	extern void (*glPrimitiveRestartNV)();
	#endif // GL_NV_primitive_restart
	
	#ifdef GL_NV_register_combiners
	extern bool ext_GL_NV_register_combiners;
	enum {
		GL_FOG = 0x0B60,
		GL_REGISTER_COMBINERS_NV = 0x8522,
		GL_VARIABLE_A_NV = 0x8523,
		GL_VARIABLE_B_NV = 0x8524,
		GL_VARIABLE_C_NV = 0x8525,
		GL_VARIABLE_D_NV = 0x8526,
		GL_VARIABLE_E_NV = 0x8527,
		GL_VARIABLE_F_NV = 0x8528,
		GL_VARIABLE_G_NV = 0x8529,
		GL_CONSTANT_COLOR0_NV = 0x852A,
		GL_CONSTANT_COLOR1_NV = 0x852B,
		#if !defined(GL_NV_path_rendering)
		GL_PRIMARY_COLOR_NV = 0x852C,
		GL_SECONDARY_COLOR_NV = 0x852D,
		#endif
		GL_SPARE0_NV = 0x852E,
		GL_SPARE1_NV = 0x852F,
		GL_DISCARD_NV = 0x8530,
		GL_E_TIMES_F_NV = 0x8531,
		GL_SPARE0_PLUS_SECONDARY_COLOR_NV = 0x8532,
		GL_UNSIGNED_IDENTITY_NV = 0x8536,
		GL_UNSIGNED_INVERT_NV = 0x8537,
		GL_EXPAND_NORMAL_NV = 0x8538,
		GL_EXPAND_NEGATE_NV = 0x8539,
		GL_HALF_BIAS_NORMAL_NV = 0x853A,
		GL_HALF_BIAS_NEGATE_NV = 0x853B,
		GL_SIGNED_IDENTITY_NV = 0x853C,
		GL_SIGNED_NEGATE_NV = 0x853D,
		GL_SCALE_BY_TWO_NV = 0x853E,
		GL_SCALE_BY_FOUR_NV = 0x853F,
		GL_SCALE_BY_ONE_HALF_NV = 0x8540,
		GL_BIAS_BY_NEGATIVE_ONE_HALF_NV = 0x8541,
		GL_COMBINER_INPUT_NV = 0x8542,
		GL_COMBINER_MAPPING_NV = 0x8543,
		GL_COMBINER_COMPONENT_USAGE_NV = 0x8544,
		GL_COMBINER_AB_DOT_PRODUCT_NV = 0x8545,
		GL_COMBINER_CD_DOT_PRODUCT_NV = 0x8546,
		GL_COMBINER_MUX_SUM_NV = 0x8547,
		GL_COMBINER_SCALE_NV = 0x8548,
		GL_COMBINER_BIAS_NV = 0x8549,
		GL_COMBINER_AB_OUTPUT_NV = 0x854A,
		GL_COMBINER_CD_OUTPUT_NV = 0x854B,
		GL_COMBINER_SUM_OUTPUT_NV = 0x854C,
		GL_MAX_GENERAL_COMBINERS_NV = 0x854D,
		GL_NUM_GENERAL_COMBINERS_NV = 0x854E,
		GL_COLOR_SUM_CLAMP_NV = 0x854F,
		GL_COMBINER0_NV = 0x8550,
		GL_COMBINER1_NV = 0x8551,
		GL_COMBINER2_NV = 0x8552,
		GL_COMBINER3_NV = 0x8553,
		GL_COMBINER4_NV = 0x8554,
		GL_COMBINER5_NV = 0x8555,
		GL_COMBINER6_NV = 0x8556,
		GL_COMBINER7_NV = 0x8557,
		#if !defined(GL_ARB_multitexture)
		GL_TEXTURE0_ARB = 0x84C0,
		GL_TEXTURE1_ARB = 0x84C1,
		#endif
	};
	extern void (*glCombinerInputNV)(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
	extern void (*glCombinerOutputNV)(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum);
	extern void (*glCombinerParameterfNV)(GLenum pname, GLfloat param);
	extern void (*glCombinerParameterfvNV)(GLenum pname, const GLfloat *params);
	extern void (*glCombinerParameteriNV)(GLenum pname, GLint param);
	extern void (*glCombinerParameterivNV)(GLenum pname, const GLint *params);
	extern void (*glFinalCombinerInputNV)(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
	extern void (*glGetCombinerInputParameterfvNV)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params);
	extern void (*glGetCombinerInputParameterivNV)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params);
	extern void (*glGetCombinerOutputParameterfvNV)(GLenum stage, GLenum portion, GLenum pname, GLfloat *params);
	extern void (*glGetCombinerOutputParameterivNV)(GLenum stage, GLenum portion, GLenum pname, GLint *params);
	extern void (*glGetFinalCombinerInputParameterfvNV)(GLenum variable, GLenum pname, GLfloat *params);
	extern void (*glGetFinalCombinerInputParameterivNV)(GLenum variable, GLenum pname, GLint *params);
	#endif // GL_NV_register_combiners
	
	#ifdef GL_NV_register_combiners2
	extern bool ext_GL_NV_register_combiners2;
	enum {
		GL_PER_STAGE_CONSTANTS_NV = 0x8535,
	};
	extern void (*glCombinerStageParameterfvNV)(GLenum stage, GLenum pname, const GLfloat *params);
	extern void (*glGetCombinerStageParameterfvNV)(GLenum stage, GLenum pname, GLfloat *params);
	#endif // GL_NV_register_combiners2
	
	#ifdef GL_NV_sample_locations
	extern bool ext_GL_NV_sample_locations;
	enum {
		GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV = 0x933D,
		GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV = 0x933E,
		GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV = 0x933F,
		GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV = 0x9340,
		GL_SAMPLE_LOCATION_NV = 0x8E50,
		GL_PROGRAMMABLE_SAMPLE_LOCATION_NV = 0x9341,
		GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV = 0x9342,
		GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV = 0x9343,
	};
	extern void (*glFramebufferSampleLocationsfvNV)(GLenum target, GLuint start, GLsizei count, const GLfloat *v);
	extern void (*glNamedFramebufferSampleLocationsfvNV)(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v);
	extern void (*glResolveDepthValuesNV)();
	#endif // GL_NV_sample_locations
	
	#ifdef GL_NV_shader_buffer_load
	extern bool ext_GL_NV_shader_buffer_load;
	enum {
		GL_BUFFER_GPU_ADDRESS_NV = 0x8F1D,
		GL_GPU_ADDRESS_NV = 0x8F34,
		GL_MAX_SHADER_BUFFER_ADDRESS_NV = 0x8F35,
	};
	extern void (*glGetBufferParameterui64vNV)(GLenum target, GLenum pname, GLuint64EXT *params);
	extern void (*glGetIntegerui64vNV)(GLenum value, GLuint64EXT *result);
	extern void (*glGetNamedBufferParameterui64vNV)(GLuint buffer, GLenum pname, GLuint64EXT *params);
	#if !defined(GL_AMD_gpu_shader_int64)
	extern void (*glGetUniformui64vNV)(GLuint program, GLint location, GLuint64EXT *params);
	#endif
	extern GLboolean (*glIsBufferResidentNV)(GLenum target);
	extern GLboolean (*glIsNamedBufferResidentNV)(GLuint buffer);
	extern void (*glMakeBufferNonResidentNV)(GLenum target);
	extern void (*glMakeBufferResidentNV)(GLenum target, GLenum access);
	extern void (*glMakeNamedBufferNonResidentNV)(GLuint buffer);
	extern void (*glMakeNamedBufferResidentNV)(GLuint buffer, GLenum access);
	extern void (*glProgramUniformui64NV)(GLuint program, GLint location, GLuint64EXT value);
	extern void (*glProgramUniformui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
	extern void (*glUniformui64NV)(GLint location, GLuint64EXT value);
	extern void (*glUniformui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value);
	#endif // GL_NV_shader_buffer_load
	
	#ifdef GL_NV_shader_buffer_store
	extern bool ext_GL_NV_shader_buffer_store;
	enum {
		GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV = 0x00000010,
	};
	#endif // GL_NV_shader_buffer_store
	
	#ifdef GL_NV_shader_thread_group
	extern bool ext_GL_NV_shader_thread_group;
	enum {
		GL_WARP_SIZE_NV = 0x9339,
		GL_WARPS_PER_SM_NV = 0x933A,
		GL_SM_COUNT_NV = 0x933B,
	};
	#endif // GL_NV_shader_thread_group
	
	#ifdef GL_NV_tessellation_program5
	extern bool ext_GL_NV_tessellation_program5;
	enum {
		GL_MAX_PROGRAM_PATCH_ATTRIBS_NV = 0x86D8,
		GL_TESS_CONTROL_PROGRAM_NV = 0x891E,
		GL_TESS_EVALUATION_PROGRAM_NV = 0x891F,
		GL_TESS_CONTROL_PROGRAM_PARAMETER_BUFFER_NV = 0x8C74,
		GL_TESS_EVALUATION_PROGRAM_PARAMETER_BUFFER_NV = 0x8C75,
	};
	#endif // GL_NV_tessellation_program5
	
	#ifdef GL_NV_texgen_emboss
	extern bool ext_GL_NV_texgen_emboss;
	enum {
		GL_EMBOSS_LIGHT_NV = 0x855D,
		GL_EMBOSS_CONSTANT_NV = 0x855E,
		GL_EMBOSS_MAP_NV = 0x855F,
	};
	#endif // GL_NV_texgen_emboss
	
	#ifdef GL_NV_texgen_reflection
	extern bool ext_GL_NV_texgen_reflection;
	enum {
		GL_NORMAL_MAP_NV = 0x8511,
		GL_REFLECTION_MAP_NV = 0x8512,
	};
	#endif // GL_NV_texgen_reflection
	
	#ifdef GL_NV_texture_barrier
	extern bool ext_GL_NV_texture_barrier;
	extern void (*glTextureBarrierNV)();
	#endif // GL_NV_texture_barrier
	
	#ifdef GL_NV_texture_env_combine4
	extern bool ext_GL_NV_texture_env_combine4;
	enum {
		GL_COMBINE4_NV = 0x8503,
		GL_SOURCE3_RGB_NV = 0x8583,
		GL_SOURCE3_ALPHA_NV = 0x858B,
		GL_OPERAND3_RGB_NV = 0x8593,
		GL_OPERAND3_ALPHA_NV = 0x859B,
	};
	#endif // GL_NV_texture_env_combine4
	
	#ifdef GL_NV_texture_expand_normal
	extern bool ext_GL_NV_texture_expand_normal;
	enum {
		GL_TEXTURE_UNSIGNED_REMAP_MODE_NV = 0x888F,
	};
	#endif // GL_NV_texture_expand_normal
	
	#ifdef GL_NV_texture_multisample
	extern bool ext_GL_NV_texture_multisample;
	enum {
		GL_TEXTURE_COVERAGE_SAMPLES_NV = 0x9045,
		GL_TEXTURE_COLOR_SAMPLES_NV = 0x9046,
	};
	extern void (*glTexImage2DMultisampleCoverageNV)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
	extern void (*glTexImage3DMultisampleCoverageNV)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
	extern void (*glTextureImage2DMultisampleCoverageNV)(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
	extern void (*glTextureImage2DMultisampleNV)(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
	extern void (*glTextureImage3DMultisampleCoverageNV)(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
	extern void (*glTextureImage3DMultisampleNV)(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
	#endif // GL_NV_texture_multisample
	
	#ifdef GL_NV_texture_rectangle
	extern bool ext_GL_NV_texture_rectangle;
	enum {
		GL_TEXTURE_RECTANGLE_NV = 0x84F5,
		GL_TEXTURE_BINDING_RECTANGLE_NV = 0x84F6,
		GL_PROXY_TEXTURE_RECTANGLE_NV = 0x84F7,
		GL_MAX_RECTANGLE_TEXTURE_SIZE_NV = 0x84F8,
	};
	#endif // GL_NV_texture_rectangle
	
	#ifdef GL_NV_texture_shader
	extern bool ext_GL_NV_texture_shader;
	enum {
		GL_OFFSET_TEXTURE_RECTANGLE_NV = 0x864C,
		GL_OFFSET_TEXTURE_RECTANGLE_SCALE_NV = 0x864D,
		GL_DOT_PRODUCT_TEXTURE_RECTANGLE_NV = 0x864E,
		GL_RGBA_UNSIGNED_DOT_PRODUCT_MAPPING_NV = 0x86D9,
		GL_UNSIGNED_INT_S8_S8_8_8_NV = 0x86DA,
		GL_UNSIGNED_INT_8_8_S8_S8_REV_NV = 0x86DB,
		GL_DSDT_MAG_INTENSITY_NV = 0x86DC,
		GL_SHADER_CONSISTENT_NV = 0x86DD,
		GL_TEXTURE_SHADER_NV = 0x86DE,
		GL_SHADER_OPERATION_NV = 0x86DF,
		GL_CULL_MODES_NV = 0x86E0,
		GL_OFFSET_TEXTURE_MATRIX_NV = 0x86E1,
		GL_OFFSET_TEXTURE_SCALE_NV = 0x86E2,
		GL_OFFSET_TEXTURE_BIAS_NV = 0x86E3,
		GL_OFFSET_TEXTURE_2D_MATRIX_NV = 0x86E1,
		GL_OFFSET_TEXTURE_2D_SCALE_NV = 0x86E2,
		GL_OFFSET_TEXTURE_2D_BIAS_NV = 0x86E3,
		GL_PREVIOUS_TEXTURE_INPUT_NV = 0x86E4,
		GL_CONST_EYE_NV = 0x86E5,
		GL_PASS_THROUGH_NV = 0x86E6,
		GL_CULL_FRAGMENT_NV = 0x86E7,
		GL_OFFSET_TEXTURE_2D_NV = 0x86E8,
		GL_DEPENDENT_AR_TEXTURE_2D_NV = 0x86E9,
		GL_DEPENDENT_GB_TEXTURE_2D_NV = 0x86EA,
		GL_DOT_PRODUCT_NV = 0x86EC,
		GL_DOT_PRODUCT_DEPTH_REPLACE_NV = 0x86ED,
		GL_DOT_PRODUCT_TEXTURE_2D_NV = 0x86EE,
		GL_DOT_PRODUCT_TEXTURE_CUBE_MAP_NV = 0x86F0,
		GL_DOT_PRODUCT_DIFFUSE_CUBE_MAP_NV = 0x86F1,
		GL_DOT_PRODUCT_REFLECT_CUBE_MAP_NV = 0x86F2,
		GL_DOT_PRODUCT_CONST_EYE_REFLECT_CUBE_MAP_NV = 0x86F3,
		GL_HILO_NV = 0x86F4,
		GL_DSDT_NV = 0x86F5,
		GL_DSDT_MAG_NV = 0x86F6,
		GL_DSDT_MAG_VIB_NV = 0x86F7,
		GL_HILO16_NV = 0x86F8,
		GL_SIGNED_HILO_NV = 0x86F9,
		GL_SIGNED_HILO16_NV = 0x86FA,
		GL_SIGNED_RGBA_NV = 0x86FB,
		GL_SIGNED_RGBA8_NV = 0x86FC,
		GL_SIGNED_RGB_NV = 0x86FE,
		GL_SIGNED_RGB8_NV = 0x86FF,
		GL_SIGNED_LUMINANCE_NV = 0x8701,
		GL_SIGNED_LUMINANCE8_NV = 0x8702,
		GL_SIGNED_LUMINANCE_ALPHA_NV = 0x8703,
		GL_SIGNED_LUMINANCE8_ALPHA8_NV = 0x8704,
		GL_SIGNED_ALPHA_NV = 0x8705,
		GL_SIGNED_ALPHA8_NV = 0x8706,
		GL_SIGNED_INTENSITY_NV = 0x8707,
		GL_SIGNED_INTENSITY8_NV = 0x8708,
		GL_DSDT8_NV = 0x8709,
		GL_DSDT8_MAG8_NV = 0x870A,
		GL_DSDT8_MAG8_INTENSITY8_NV = 0x870B,
		GL_SIGNED_RGB_UNSIGNED_ALPHA_NV = 0x870C,
		GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV = 0x870D,
		GL_HI_SCALE_NV = 0x870E,
		GL_LO_SCALE_NV = 0x870F,
		GL_DS_SCALE_NV = 0x8710,
		GL_DT_SCALE_NV = 0x8711,
		GL_MAGNITUDE_SCALE_NV = 0x8712,
		GL_VIBRANCE_SCALE_NV = 0x8713,
		GL_HI_BIAS_NV = 0x8714,
		GL_LO_BIAS_NV = 0x8715,
		GL_DS_BIAS_NV = 0x8716,
		GL_DT_BIAS_NV = 0x8717,
		GL_MAGNITUDE_BIAS_NV = 0x8718,
		GL_VIBRANCE_BIAS_NV = 0x8719,
		GL_TEXTURE_BORDER_VALUES_NV = 0x871A,
		GL_TEXTURE_HI_SIZE_NV = 0x871B,
		GL_TEXTURE_LO_SIZE_NV = 0x871C,
		GL_TEXTURE_DS_SIZE_NV = 0x871D,
		GL_TEXTURE_DT_SIZE_NV = 0x871E,
		GL_TEXTURE_MAG_SIZE_NV = 0x871F,
	};
	#endif // GL_NV_texture_shader
	
	#ifdef GL_NV_texture_shader2
	extern bool ext_GL_NV_texture_shader2;
	enum {
		GL_DOT_PRODUCT_TEXTURE_3D_NV = 0x86EF,
	};
	#endif // GL_NV_texture_shader2
	
	#ifdef GL_NV_texture_shader3
	extern bool ext_GL_NV_texture_shader3;
	enum {
		GL_OFFSET_PROJECTIVE_TEXTURE_2D_NV = 0x8850,
		GL_OFFSET_PROJECTIVE_TEXTURE_2D_SCALE_NV = 0x8851,
		GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_NV = 0x8852,
		GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_SCALE_NV = 0x8853,
		GL_OFFSET_HILO_TEXTURE_2D_NV = 0x8854,
		GL_OFFSET_HILO_TEXTURE_RECTANGLE_NV = 0x8855,
		GL_OFFSET_HILO_PROJECTIVE_TEXTURE_2D_NV = 0x8856,
		GL_OFFSET_HILO_PROJECTIVE_TEXTURE_RECTANGLE_NV = 0x8857,
		GL_DEPENDENT_HILO_TEXTURE_2D_NV = 0x8858,
		GL_DEPENDENT_RGB_TEXTURE_3D_NV = 0x8859,
		GL_DEPENDENT_RGB_TEXTURE_CUBE_MAP_NV = 0x885A,
		GL_DOT_PRODUCT_PASS_THROUGH_NV = 0x885B,
		GL_DOT_PRODUCT_TEXTURE_1D_NV = 0x885C,
		GL_DOT_PRODUCT_AFFINE_DEPTH_REPLACE_NV = 0x885D,
		GL_HILO8_NV = 0x885E,
		GL_SIGNED_HILO8_NV = 0x885F,
		GL_FORCE_BLUE_TO_ONE_NV = 0x8860,
	};
	#endif // GL_NV_texture_shader3
	
	#ifdef GL_NV_transform_feedback
	extern bool ext_GL_NV_transform_feedback;
	enum {
		GL_BACK_PRIMARY_COLOR_NV = 0x8C77,
		GL_BACK_SECONDARY_COLOR_NV = 0x8C78,
		GL_TEXTURE_COORD_NV = 0x8C79,
		GL_CLIP_DISTANCE_NV = 0x8C7A,
		GL_VERTEX_ID_NV = 0x8C7B,
		GL_PRIMITIVE_ID_NV = 0x8C7C,
		GL_GENERIC_ATTRIB_NV = 0x8C7D,
		GL_TRANSFORM_FEEDBACK_ATTRIBS_NV = 0x8C7E,
		GL_TRANSFORM_FEEDBACK_BUFFER_MODE_NV = 0x8C7F,
		GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_NV = 0x8C80,
		GL_ACTIVE_VARYINGS_NV = 0x8C81,
		GL_ACTIVE_VARYING_MAX_LENGTH_NV = 0x8C82,
		GL_TRANSFORM_FEEDBACK_VARYINGS_NV = 0x8C83,
		GL_TRANSFORM_FEEDBACK_BUFFER_START_NV = 0x8C84,
		GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_NV = 0x8C85,
		GL_TRANSFORM_FEEDBACK_RECORD_NV = 0x8C86,
		GL_PRIMITIVES_GENERATED_NV = 0x8C87,
		GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_NV = 0x8C88,
		GL_RASTERIZER_DISCARD_NV = 0x8C89,
		GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_NV = 0x8C8A,
		GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_NV = 0x8C8B,
		GL_INTERLEAVED_ATTRIBS_NV = 0x8C8C,
		GL_SEPARATE_ATTRIBS_NV = 0x8C8D,
		GL_TRANSFORM_FEEDBACK_BUFFER_NV = 0x8C8E,
		GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_NV = 0x8C8F,
		GL_LAYER_NV = 0x8DAA,
		GL_NEXT_BUFFER_NV = -2,
		GL_SKIP_COMPONENTS4_NV = -3,
		GL_SKIP_COMPONENTS3_NV = -4,
		GL_SKIP_COMPONENTS2_NV = -5,
		GL_SKIP_COMPONENTS1_NV = -6,
	};
	extern void (*glActiveVaryingNV)(GLuint program, const GLchar *name);
	extern void (*glBeginTransformFeedbackNV)(GLenum primitiveMode);
	extern void (*glBindBufferBaseNV)(GLenum target, GLuint index, GLuint buffer);
	extern void (*glBindBufferOffsetNV)(GLenum target, GLuint index, GLuint buffer, GLintptr offset);
	extern void (*glBindBufferRangeNV)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
	extern void (*glEndTransformFeedbackNV)();
	extern void (*glGetActiveVaryingNV)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
	extern void (*glGetTransformFeedbackVaryingNV)(GLuint program, GLuint index, GLint *location);
	extern GLint (*glGetVaryingLocationNV)(GLuint program, const GLchar *name);
	extern void (*glTransformFeedbackAttribsNV)(GLsizei count, const GLint *attribs, GLenum bufferMode);
	extern void (*glTransformFeedbackStreamAttribsNV)(GLsizei count, const GLint *attribs, GLsizei nbuffers, const GLint *bufstreams, GLenum bufferMode);
	extern void (*glTransformFeedbackVaryingsNV)(GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode);
	#endif // GL_NV_transform_feedback
	
	#ifdef GL_NV_transform_feedback2
	extern bool ext_GL_NV_transform_feedback2;
	enum {
		GL_TRANSFORM_FEEDBACK_NV = 0x8E22,
		GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED_NV = 0x8E23,
		GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE_NV = 0x8E24,
		GL_TRANSFORM_FEEDBACK_BINDING_NV = 0x8E25,
	};
	extern void (*glBindTransformFeedbackNV)(GLenum target, GLuint id);
	extern void (*glDeleteTransformFeedbacksNV)(GLsizei n, const GLuint *ids);
	extern void (*glDrawTransformFeedbackNV)(GLenum mode, GLuint id);
	extern void (*glGenTransformFeedbacksNV)(GLsizei n, GLuint *ids);
	extern GLboolean (*glIsTransformFeedbackNV)(GLuint id);
	extern void (*glPauseTransformFeedbackNV)();
	extern void (*glResumeTransformFeedbackNV)();
	#endif // GL_NV_transform_feedback2
	
	#ifdef GL_NV_uniform_buffer_unified_memory
	extern bool ext_GL_NV_uniform_buffer_unified_memory;
	enum {
		GL_UNIFORM_BUFFER_UNIFIED_NV = 0x936E,
		GL_UNIFORM_BUFFER_ADDRESS_NV = 0x936F,
		GL_UNIFORM_BUFFER_LENGTH_NV = 0x9370,
	};
	#endif // GL_NV_uniform_buffer_unified_memory
	
	#ifdef GL_NV_vdpau_interop
	extern bool ext_GL_NV_vdpau_interop;
	enum {
		GL_SURFACE_STATE_NV = 0x86EB,
		GL_SURFACE_REGISTERED_NV = 0x86FD,
		GL_SURFACE_MAPPED_NV = 0x8700,
		GL_WRITE_DISCARD_NV = 0x88BE,
	};
	extern void (*glVDPAUFiniNV)();
	extern void (*glVDPAUGetSurfaceivNV)(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
	extern void (*glVDPAUInitNV)(const void *vdpDevice, const void *getProcAddress);
	extern GLboolean (*glVDPAUIsSurfaceNV)(GLvdpauSurfaceNV surface);
	extern void (*glVDPAUMapSurfacesNV)(GLsizei numSurfaces, const GLvdpauSurfaceNV *surfaces);
	extern GLvdpauSurfaceNV (*glVDPAURegisterOutputSurfaceNV)(const void *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames);
	extern GLvdpauSurfaceNV (*glVDPAURegisterVideoSurfaceNV)(const void *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames);
	extern void (*glVDPAUSurfaceAccessNV)(GLvdpauSurfaceNV surface, GLenum access);
	extern void (*glVDPAUUnmapSurfacesNV)(GLsizei numSurface, const GLvdpauSurfaceNV *surfaces);
	extern void (*glVDPAUUnregisterSurfaceNV)(GLvdpauSurfaceNV surface);
	#endif // GL_NV_vdpau_interop
	
	#ifdef GL_NV_vertex_array_range
	extern bool ext_GL_NV_vertex_array_range;
	enum {
		GL_VERTEX_ARRAY_RANGE_NV = 0x851D,
		GL_VERTEX_ARRAY_RANGE_LENGTH_NV = 0x851E,
		GL_VERTEX_ARRAY_RANGE_VALID_NV = 0x851F,
		GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV = 0x8520,
		GL_VERTEX_ARRAY_RANGE_POINTER_NV = 0x8521,
	};
	extern void (*glFlushVertexArrayRangeNV)();
	extern void (*glVertexArrayRangeNV)(GLsizei length, const void *pointer);
	#endif // GL_NV_vertex_array_range
	
	#ifdef GL_NV_vertex_array_range2
	extern bool ext_GL_NV_vertex_array_range2;
	enum {
		GL_VERTEX_ARRAY_RANGE_WITHOUT_FLUSH_NV = 0x8533,
	};
	#endif // GL_NV_vertex_array_range2
	
	#ifdef GL_NV_vertex_attrib_integer_64bit
	extern bool ext_GL_NV_vertex_attrib_integer_64bit;
	enum {
		#if !defined(GL_AMD_gpu_shader_int64) || !defined(GL_NV_gpu_shader5)
		GL_INT64_NV = 0x140E,
		GL_UNSIGNED_INT64_NV = 0x140F,
		#endif
	};
	extern void (*glGetVertexAttribLi64vNV)(GLuint index, GLenum pname, GLint64EXT *params);
	extern void (*glGetVertexAttribLui64vNV)(GLuint index, GLenum pname, GLuint64EXT *params);
	extern void (*glVertexAttribL1i64NV)(GLuint index, GLint64EXT x);
	extern void (*glVertexAttribL1i64vNV)(GLuint index, const GLint64EXT *v);
	extern void (*glVertexAttribL1ui64NV)(GLuint index, GLuint64EXT x);
	extern void (*glVertexAttribL1ui64vNV)(GLuint index, const GLuint64EXT *v);
	extern void (*glVertexAttribL2i64NV)(GLuint index, GLint64EXT x, GLint64EXT y);
	extern void (*glVertexAttribL2i64vNV)(GLuint index, const GLint64EXT *v);
	extern void (*glVertexAttribL2ui64NV)(GLuint index, GLuint64EXT x, GLuint64EXT y);
	extern void (*glVertexAttribL2ui64vNV)(GLuint index, const GLuint64EXT *v);
	extern void (*glVertexAttribL3i64NV)(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z);
	extern void (*glVertexAttribL3i64vNV)(GLuint index, const GLint64EXT *v);
	extern void (*glVertexAttribL3ui64NV)(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
	extern void (*glVertexAttribL3ui64vNV)(GLuint index, const GLuint64EXT *v);
	extern void (*glVertexAttribL4i64NV)(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
	extern void (*glVertexAttribL4i64vNV)(GLuint index, const GLint64EXT *v);
	extern void (*glVertexAttribL4ui64NV)(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
	extern void (*glVertexAttribL4ui64vNV)(GLuint index, const GLuint64EXT *v);
	extern void (*glVertexAttribLFormatNV)(GLuint index, GLint size, GLenum type, GLsizei stride);
	#endif // GL_NV_vertex_attrib_integer_64bit
	
	#ifdef GL_NV_vertex_buffer_unified_memory
	extern bool ext_GL_NV_vertex_buffer_unified_memory;
	enum {
		GL_VERTEX_ATTRIB_ARRAY_UNIFIED_NV = 0x8F1E,
		GL_ELEMENT_ARRAY_UNIFIED_NV = 0x8F1F,
		GL_VERTEX_ATTRIB_ARRAY_ADDRESS_NV = 0x8F20,
		GL_VERTEX_ARRAY_ADDRESS_NV = 0x8F21,
		GL_NORMAL_ARRAY_ADDRESS_NV = 0x8F22,
		GL_COLOR_ARRAY_ADDRESS_NV = 0x8F23,
		GL_INDEX_ARRAY_ADDRESS_NV = 0x8F24,
		GL_TEXTURE_COORD_ARRAY_ADDRESS_NV = 0x8F25,
		GL_EDGE_FLAG_ARRAY_ADDRESS_NV = 0x8F26,
		GL_SECONDARY_COLOR_ARRAY_ADDRESS_NV = 0x8F27,
		GL_FOG_COORD_ARRAY_ADDRESS_NV = 0x8F28,
		GL_ELEMENT_ARRAY_ADDRESS_NV = 0x8F29,
		GL_VERTEX_ATTRIB_ARRAY_LENGTH_NV = 0x8F2A,
		GL_VERTEX_ARRAY_LENGTH_NV = 0x8F2B,
		GL_NORMAL_ARRAY_LENGTH_NV = 0x8F2C,
		GL_COLOR_ARRAY_LENGTH_NV = 0x8F2D,
		GL_INDEX_ARRAY_LENGTH_NV = 0x8F2E,
		GL_TEXTURE_COORD_ARRAY_LENGTH_NV = 0x8F2F,
		GL_EDGE_FLAG_ARRAY_LENGTH_NV = 0x8F30,
		GL_SECONDARY_COLOR_ARRAY_LENGTH_NV = 0x8F31,
		GL_FOG_COORD_ARRAY_LENGTH_NV = 0x8F32,
		GL_ELEMENT_ARRAY_LENGTH_NV = 0x8F33,
		GL_DRAW_INDIRECT_UNIFIED_NV = 0x8F40,
		GL_DRAW_INDIRECT_ADDRESS_NV = 0x8F41,
		GL_DRAW_INDIRECT_LENGTH_NV = 0x8F42,
	};
	extern void (*glBufferAddressRangeNV)(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length);
	extern void (*glColorFormatNV)(GLint size, GLenum type, GLsizei stride);
	extern void (*glEdgeFlagFormatNV)(GLsizei stride);
	extern void (*glFogCoordFormatNV)(GLenum type, GLsizei stride);
	extern void (*glGetIntegerui64i_vNV)(GLenum value, GLuint index, GLuint64EXT *result);
	extern void (*glIndexFormatNV)(GLenum type, GLsizei stride);
	extern void (*glNormalFormatNV)(GLenum type, GLsizei stride);
	extern void (*glSecondaryColorFormatNV)(GLint size, GLenum type, GLsizei stride);
	extern void (*glTexCoordFormatNV)(GLint size, GLenum type, GLsizei stride);
	extern void (*glVertexAttribFormatNV)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride);
	extern void (*glVertexAttribIFormatNV)(GLuint index, GLint size, GLenum type, GLsizei stride);
	extern void (*glVertexFormatNV)(GLint size, GLenum type, GLsizei stride);
	#endif // GL_NV_vertex_buffer_unified_memory
	
	#ifdef GL_NV_vertex_program
	extern bool ext_GL_NV_vertex_program;
	enum {
		GL_VERTEX_PROGRAM_NV = 0x8620,
		GL_VERTEX_STATE_PROGRAM_NV = 0x8621,
		GL_ATTRIB_ARRAY_SIZE_NV = 0x8623,
		GL_ATTRIB_ARRAY_STRIDE_NV = 0x8624,
		GL_ATTRIB_ARRAY_TYPE_NV = 0x8625,
		GL_CURRENT_ATTRIB_NV = 0x8626,
		GL_PROGRAM_LENGTH_NV = 0x8627,
		GL_PROGRAM_STRING_NV = 0x8628,
		GL_MODELVIEW_PROJECTION_NV = 0x8629,
		GL_IDENTITY_NV = 0x862A,
		GL_INVERSE_NV = 0x862B,
		GL_TRANSPOSE_NV = 0x862C,
		GL_INVERSE_TRANSPOSE_NV = 0x862D,
		GL_MAX_TRACK_MATRIX_STACK_DEPTH_NV = 0x862E,
		GL_MAX_TRACK_MATRICES_NV = 0x862F,
		GL_MATRIX0_NV = 0x8630,
		GL_MATRIX1_NV = 0x8631,
		GL_MATRIX2_NV = 0x8632,
		GL_MATRIX3_NV = 0x8633,
		GL_MATRIX4_NV = 0x8634,
		GL_MATRIX5_NV = 0x8635,
		GL_MATRIX6_NV = 0x8636,
		GL_MATRIX7_NV = 0x8637,
		GL_CURRENT_MATRIX_STACK_DEPTH_NV = 0x8640,
		GL_CURRENT_MATRIX_NV = 0x8641,
		GL_VERTEX_PROGRAM_POINT_SIZE_NV = 0x8642,
		GL_VERTEX_PROGRAM_TWO_SIDE_NV = 0x8643,
		GL_PROGRAM_PARAMETER_NV = 0x8644,
		GL_ATTRIB_ARRAY_POINTER_NV = 0x8645,
		GL_PROGRAM_TARGET_NV = 0x8646,
		GL_PROGRAM_RESIDENT_NV = 0x8647,
		GL_TRACK_MATRIX_NV = 0x8648,
		GL_TRACK_MATRIX_TRANSFORM_NV = 0x8649,
		GL_VERTEX_PROGRAM_BINDING_NV = 0x864A,
		GL_PROGRAM_ERROR_POSITION_NV = 0x864B,
		GL_VERTEX_ATTRIB_ARRAY0_NV = 0x8650,
		GL_VERTEX_ATTRIB_ARRAY1_NV = 0x8651,
		GL_VERTEX_ATTRIB_ARRAY2_NV = 0x8652,
		GL_VERTEX_ATTRIB_ARRAY3_NV = 0x8653,
		GL_VERTEX_ATTRIB_ARRAY4_NV = 0x8654,
		GL_VERTEX_ATTRIB_ARRAY5_NV = 0x8655,
		GL_VERTEX_ATTRIB_ARRAY6_NV = 0x8656,
		GL_VERTEX_ATTRIB_ARRAY7_NV = 0x8657,
		GL_VERTEX_ATTRIB_ARRAY8_NV = 0x8658,
		GL_VERTEX_ATTRIB_ARRAY9_NV = 0x8659,
		GL_VERTEX_ATTRIB_ARRAY10_NV = 0x865A,
		GL_VERTEX_ATTRIB_ARRAY11_NV = 0x865B,
		GL_VERTEX_ATTRIB_ARRAY12_NV = 0x865C,
		GL_VERTEX_ATTRIB_ARRAY13_NV = 0x865D,
		GL_VERTEX_ATTRIB_ARRAY14_NV = 0x865E,
		GL_VERTEX_ATTRIB_ARRAY15_NV = 0x865F,
		GL_MAP1_VERTEX_ATTRIB0_4_NV = 0x8660,
		GL_MAP1_VERTEX_ATTRIB1_4_NV = 0x8661,
		GL_MAP1_VERTEX_ATTRIB2_4_NV = 0x8662,
		GL_MAP1_VERTEX_ATTRIB3_4_NV = 0x8663,
		GL_MAP1_VERTEX_ATTRIB4_4_NV = 0x8664,
		GL_MAP1_VERTEX_ATTRIB5_4_NV = 0x8665,
		GL_MAP1_VERTEX_ATTRIB6_4_NV = 0x8666,
		GL_MAP1_VERTEX_ATTRIB7_4_NV = 0x8667,
		GL_MAP1_VERTEX_ATTRIB8_4_NV = 0x8668,
		GL_MAP1_VERTEX_ATTRIB9_4_NV = 0x8669,
		GL_MAP1_VERTEX_ATTRIB10_4_NV = 0x866A,
		GL_MAP1_VERTEX_ATTRIB11_4_NV = 0x866B,
		GL_MAP1_VERTEX_ATTRIB12_4_NV = 0x866C,
		GL_MAP1_VERTEX_ATTRIB13_4_NV = 0x866D,
		GL_MAP1_VERTEX_ATTRIB14_4_NV = 0x866E,
		GL_MAP1_VERTEX_ATTRIB15_4_NV = 0x866F,
		GL_MAP2_VERTEX_ATTRIB0_4_NV = 0x8670,
		GL_MAP2_VERTEX_ATTRIB1_4_NV = 0x8671,
		GL_MAP2_VERTEX_ATTRIB2_4_NV = 0x8672,
		GL_MAP2_VERTEX_ATTRIB3_4_NV = 0x8673,
		GL_MAP2_VERTEX_ATTRIB4_4_NV = 0x8674,
		GL_MAP2_VERTEX_ATTRIB5_4_NV = 0x8675,
		GL_MAP2_VERTEX_ATTRIB6_4_NV = 0x8676,
		GL_MAP2_VERTEX_ATTRIB7_4_NV = 0x8677,
		GL_MAP2_VERTEX_ATTRIB8_4_NV = 0x8678,
		GL_MAP2_VERTEX_ATTRIB9_4_NV = 0x8679,
		GL_MAP2_VERTEX_ATTRIB10_4_NV = 0x867A,
		GL_MAP2_VERTEX_ATTRIB11_4_NV = 0x867B,
		GL_MAP2_VERTEX_ATTRIB12_4_NV = 0x867C,
		GL_MAP2_VERTEX_ATTRIB13_4_NV = 0x867D,
		GL_MAP2_VERTEX_ATTRIB14_4_NV = 0x867E,
		GL_MAP2_VERTEX_ATTRIB15_4_NV = 0x867F,
	};
	extern GLboolean (*glAreProgramsResidentNV)(GLsizei n, const GLuint *programs, GLboolean *residences);
	extern void (*glBindProgramNV)(GLenum target, GLuint id);
	extern void (*glDeleteProgramsNV)(GLsizei n, const GLuint *programs);
	extern void (*glExecuteProgramNV)(GLenum target, GLuint id, const GLfloat *params);
	extern void (*glGenProgramsNV)(GLsizei n, GLuint *programs);
	extern void (*glGetProgramParameterdvNV)(GLenum target, GLuint index, GLenum pname, GLdouble *params);
	extern void (*glGetProgramParameterfvNV)(GLenum target, GLuint index, GLenum pname, GLfloat *params);
	extern void (*glGetProgramStringNV)(GLuint id, GLenum pname, GLubyte *program);
	extern void (*glGetProgramivNV)(GLuint id, GLenum pname, GLint *params);
	extern void (*glGetTrackMatrixivNV)(GLenum target, GLuint address, GLenum pname, GLint *params);
	extern void (*glGetVertexAttribPointervNV)(GLuint index, GLenum pname, void **pointer);
	extern void (*glGetVertexAttribdvNV)(GLuint index, GLenum pname, GLdouble *params);
	extern void (*glGetVertexAttribfvNV)(GLuint index, GLenum pname, GLfloat *params);
	extern void (*glGetVertexAttribivNV)(GLuint index, GLenum pname, GLint *params);
	extern GLboolean (*glIsProgramNV)(GLuint id);
	extern void (*glLoadProgramNV)(GLenum target, GLuint id, GLsizei len, const GLubyte *program);
	extern void (*glProgramParameter4dNV)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glProgramParameter4dvNV)(GLenum target, GLuint index, const GLdouble *v);
	extern void (*glProgramParameter4fNV)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glProgramParameter4fvNV)(GLenum target, GLuint index, const GLfloat *v);
	extern void (*glProgramParameters4dvNV)(GLenum target, GLuint index, GLsizei count, const GLdouble *v);
	extern void (*glProgramParameters4fvNV)(GLenum target, GLuint index, GLsizei count, const GLfloat *v);
	extern void (*glRequestResidentProgramsNV)(GLsizei n, const GLuint *programs);
	extern void (*glTrackMatrixNV)(GLenum target, GLuint address, GLenum matrix, GLenum transform);
	extern void (*glVertexAttrib1dNV)(GLuint index, GLdouble x);
	extern void (*glVertexAttrib1dvNV)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib1fNV)(GLuint index, GLfloat x);
	extern void (*glVertexAttrib1fvNV)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib1sNV)(GLuint index, GLshort x);
	extern void (*glVertexAttrib1svNV)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib2dNV)(GLuint index, GLdouble x, GLdouble y);
	extern void (*glVertexAttrib2dvNV)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib2fNV)(GLuint index, GLfloat x, GLfloat y);
	extern void (*glVertexAttrib2fvNV)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib2sNV)(GLuint index, GLshort x, GLshort y);
	extern void (*glVertexAttrib2svNV)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib3dNV)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
	extern void (*glVertexAttrib3dvNV)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib3fNV)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glVertexAttrib3fvNV)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib3sNV)(GLuint index, GLshort x, GLshort y, GLshort z);
	extern void (*glVertexAttrib3svNV)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib4dNV)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern void (*glVertexAttrib4dvNV)(GLuint index, const GLdouble *v);
	extern void (*glVertexAttrib4fNV)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glVertexAttrib4fvNV)(GLuint index, const GLfloat *v);
	extern void (*glVertexAttrib4sNV)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
	extern void (*glVertexAttrib4svNV)(GLuint index, const GLshort *v);
	extern void (*glVertexAttrib4ubNV)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
	extern void (*glVertexAttrib4ubvNV)(GLuint index, const GLubyte *v);
	extern void (*glVertexAttribPointerNV)(GLuint index, GLint fsize, GLenum type, GLsizei stride, const void *pointer);
	extern void (*glVertexAttribs1dvNV)(GLuint index, GLsizei count, const GLdouble *v);
	extern void (*glVertexAttribs1fvNV)(GLuint index, GLsizei count, const GLfloat *v);
	extern void (*glVertexAttribs1svNV)(GLuint index, GLsizei count, const GLshort *v);
	extern void (*glVertexAttribs2dvNV)(GLuint index, GLsizei count, const GLdouble *v);
	extern void (*glVertexAttribs2fvNV)(GLuint index, GLsizei count, const GLfloat *v);
	extern void (*glVertexAttribs2svNV)(GLuint index, GLsizei count, const GLshort *v);
	extern void (*glVertexAttribs3dvNV)(GLuint index, GLsizei count, const GLdouble *v);
	extern void (*glVertexAttribs3fvNV)(GLuint index, GLsizei count, const GLfloat *v);
	extern void (*glVertexAttribs3svNV)(GLuint index, GLsizei count, const GLshort *v);
	extern void (*glVertexAttribs4dvNV)(GLuint index, GLsizei count, const GLdouble *v);
	extern void (*glVertexAttribs4fvNV)(GLuint index, GLsizei count, const GLfloat *v);
	extern void (*glVertexAttribs4svNV)(GLuint index, GLsizei count, const GLshort *v);
	extern void (*glVertexAttribs4ubvNV)(GLuint index, GLsizei count, const GLubyte *v);
	#endif // GL_NV_vertex_program
	
	#ifdef GL_NV_vertex_program2_option
	extern bool ext_GL_NV_vertex_program2_option;
	enum {
		#if !defined(GL_NV_fragment_program2)
		GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV = 0x88F4,
		GL_MAX_PROGRAM_CALL_DEPTH_NV = 0x88F5,
		#endif
	};
	#endif // GL_NV_vertex_program2_option
	
	#ifdef GL_NV_vertex_program3
	extern bool ext_GL_NV_vertex_program3;
	enum {
		#if !defined(GL_ARB_vertex_shader)
		GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB = 0x8B4C,
		#endif
	};
	#endif // GL_NV_vertex_program3
	
	#ifdef GL_NV_vertex_program4
	extern bool ext_GL_NV_vertex_program4;
	enum {
		GL_VERTEX_ATTRIB_ARRAY_INTEGER_NV = 0x88FD,
	};
	extern void (*glGetVertexAttribIivEXT)(GLuint index, GLenum pname, GLint *params);
	extern void (*glGetVertexAttribIuivEXT)(GLuint index, GLenum pname, GLuint *params);
	extern void (*glVertexAttribI1iEXT)(GLuint index, GLint x);
	extern void (*glVertexAttribI1ivEXT)(GLuint index, const GLint *v);
	extern void (*glVertexAttribI1uiEXT)(GLuint index, GLuint x);
	extern void (*glVertexAttribI1uivEXT)(GLuint index, const GLuint *v);
	extern void (*glVertexAttribI2iEXT)(GLuint index, GLint x, GLint y);
	extern void (*glVertexAttribI2ivEXT)(GLuint index, const GLint *v);
	extern void (*glVertexAttribI2uiEXT)(GLuint index, GLuint x, GLuint y);
	extern void (*glVertexAttribI2uivEXT)(GLuint index, const GLuint *v);
	extern void (*glVertexAttribI3iEXT)(GLuint index, GLint x, GLint y, GLint z);
	extern void (*glVertexAttribI3ivEXT)(GLuint index, const GLint *v);
	extern void (*glVertexAttribI3uiEXT)(GLuint index, GLuint x, GLuint y, GLuint z);
	extern void (*glVertexAttribI3uivEXT)(GLuint index, const GLuint *v);
	extern void (*glVertexAttribI4bvEXT)(GLuint index, const GLbyte *v);
	extern void (*glVertexAttribI4iEXT)(GLuint index, GLint x, GLint y, GLint z, GLint w);
	extern void (*glVertexAttribI4ivEXT)(GLuint index, const GLint *v);
	extern void (*glVertexAttribI4svEXT)(GLuint index, const GLshort *v);
	extern void (*glVertexAttribI4ubvEXT)(GLuint index, const GLubyte *v);
	extern void (*glVertexAttribI4uiEXT)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
	extern void (*glVertexAttribI4uivEXT)(GLuint index, const GLuint *v);
	extern void (*glVertexAttribI4usvEXT)(GLuint index, const GLushort *v);
	extern void (*glVertexAttribIPointerEXT)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
	#endif // GL_NV_vertex_program4
	
	#ifdef GL_NV_video_capture
	extern bool ext_GL_NV_video_capture;
	enum {
		GL_VIDEO_BUFFER_NV = 0x9020,
		GL_VIDEO_BUFFER_BINDING_NV = 0x9021,
		GL_FIELD_UPPER_NV = 0x9022,
		GL_FIELD_LOWER_NV = 0x9023,
		GL_NUM_VIDEO_CAPTURE_STREAMS_NV = 0x9024,
		GL_NEXT_VIDEO_CAPTURE_BUFFER_STATUS_NV = 0x9025,
		GL_VIDEO_CAPTURE_TO_422_SUPPORTED_NV = 0x9026,
		GL_LAST_VIDEO_CAPTURE_STATUS_NV = 0x9027,
		GL_VIDEO_BUFFER_PITCH_NV = 0x9028,
		GL_VIDEO_COLOR_CONVERSION_MATRIX_NV = 0x9029,
		GL_VIDEO_COLOR_CONVERSION_MAX_NV = 0x902A,
		GL_VIDEO_COLOR_CONVERSION_MIN_NV = 0x902B,
		GL_VIDEO_COLOR_CONVERSION_OFFSET_NV = 0x902C,
		GL_VIDEO_BUFFER_INTERNAL_FORMAT_NV = 0x902D,
		GL_PARTIAL_SUCCESS_NV = 0x902E,
		GL_SUCCESS_NV = 0x902F,
		GL_FAILURE_NV = 0x9030,
		GL_YCBYCR8_422_NV = 0x9031,
		GL_YCBAYCR8A_4224_NV = 0x9032,
		GL_Z6Y10Z6CB10Z6Y10Z6CR10_422_NV = 0x9033,
		GL_Z6Y10Z6CB10Z6A10Z6Y10Z6CR10Z6A10_4224_NV = 0x9034,
		GL_Z4Y12Z4CB12Z4Y12Z4CR12_422_NV = 0x9035,
		GL_Z4Y12Z4CB12Z4A12Z4Y12Z4CR12Z4A12_4224_NV = 0x9036,
		GL_Z4Y12Z4CB12Z4CR12_444_NV = 0x9037,
		GL_VIDEO_CAPTURE_FRAME_WIDTH_NV = 0x9038,
		GL_VIDEO_CAPTURE_FRAME_HEIGHT_NV = 0x9039,
		GL_VIDEO_CAPTURE_FIELD_UPPER_HEIGHT_NV = 0x903A,
		GL_VIDEO_CAPTURE_FIELD_LOWER_HEIGHT_NV = 0x903B,
		GL_VIDEO_CAPTURE_SURFACE_ORIGIN_NV = 0x903C,
	};
	extern void (*glBeginVideoCaptureNV)(GLuint video_capture_slot);
	extern void (*glBindVideoCaptureStreamBufferNV)(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset);
	extern void (*glBindVideoCaptureStreamTextureNV)(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture);
	extern void (*glEndVideoCaptureNV)(GLuint video_capture_slot);
	extern void (*glGetVideoCaptureStreamdvNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble *params);
	extern void (*glGetVideoCaptureStreamfvNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat *params);
	extern void (*glGetVideoCaptureStreamivNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint *params);
	extern void (*glGetVideoCaptureivNV)(GLuint video_capture_slot, GLenum pname, GLint *params);
	extern GLenum (*glVideoCaptureNV)(GLuint video_capture_slot, GLuint *sequence_num, GLuint64EXT *capture_time);
	extern void (*glVideoCaptureStreamParameterdvNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble *params);
	extern void (*glVideoCaptureStreamParameterfvNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat *params);
	extern void (*glVideoCaptureStreamParameterivNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint *params);
	#endif // GL_NV_video_capture
	
	#ifdef GL_OES_byte_coordinates
	extern bool ext_GL_OES_byte_coordinates;
	extern void (*glMultiTexCoord1bOES)(GLenum texture, GLbyte s);
	extern void (*glMultiTexCoord1bvOES)(GLenum texture, const GLbyte *coords);
	extern void (*glMultiTexCoord2bOES)(GLenum texture, GLbyte s, GLbyte t);
	extern void (*glMultiTexCoord2bvOES)(GLenum texture, const GLbyte *coords);
	extern void (*glMultiTexCoord3bOES)(GLenum texture, GLbyte s, GLbyte t, GLbyte r);
	extern void (*glMultiTexCoord3bvOES)(GLenum texture, const GLbyte *coords);
	extern void (*glMultiTexCoord4bOES)(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q);
	extern void (*glMultiTexCoord4bvOES)(GLenum texture, const GLbyte *coords);
	extern void (*glTexCoord1bOES)(GLbyte s);
	extern void (*glTexCoord1bvOES)(const GLbyte *coords);
	extern void (*glTexCoord2bOES)(GLbyte s, GLbyte t);
	extern void (*glTexCoord2bvOES)(const GLbyte *coords);
	extern void (*glTexCoord3bOES)(GLbyte s, GLbyte t, GLbyte r);
	extern void (*glTexCoord3bvOES)(const GLbyte *coords);
	extern void (*glTexCoord4bOES)(GLbyte s, GLbyte t, GLbyte r, GLbyte q);
	extern void (*glTexCoord4bvOES)(const GLbyte *coords);
	extern void (*glVertex2bOES)(GLbyte x, GLbyte y);
	extern void (*glVertex2bvOES)(const GLbyte *coords);
	extern void (*glVertex3bOES)(GLbyte x, GLbyte y, GLbyte z);
	extern void (*glVertex3bvOES)(const GLbyte *coords);
	extern void (*glVertex4bOES)(GLbyte x, GLbyte y, GLbyte z, GLbyte w);
	extern void (*glVertex4bvOES)(const GLbyte *coords);
	#endif // GL_OES_byte_coordinates
	
	#ifdef GL_OES_compressed_paletted_texture
	extern bool ext_GL_OES_compressed_paletted_texture;
	enum {
		GL_PALETTE4_RGB8_OES = 0x8B90,
		GL_PALETTE4_RGBA8_OES = 0x8B91,
		GL_PALETTE4_R5_G6_B5_OES = 0x8B92,
		GL_PALETTE4_RGBA4_OES = 0x8B93,
		GL_PALETTE4_RGB5_A1_OES = 0x8B94,
		GL_PALETTE8_RGB8_OES = 0x8B95,
		GL_PALETTE8_RGBA8_OES = 0x8B96,
		GL_PALETTE8_R5_G6_B5_OES = 0x8B97,
		GL_PALETTE8_RGBA4_OES = 0x8B98,
		GL_PALETTE8_RGB5_A1_OES = 0x8B99,
	};
	#endif // GL_OES_compressed_paletted_texture
	
	#ifdef GL_OES_fixed_point
	extern bool ext_GL_OES_fixed_point;
	enum {
		GL_FIXED_OES = 0x140C,
	};
	extern void (*glAccumxOES)(GLenum op, GLfixed value);
	extern void (*glAlphaFuncxOES)(GLenum func, GLfixed ref);
	extern void (*glBitmapxOES)(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte *bitmap);
	extern void (*glBlendColorxOES)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
	extern void (*glClearAccumxOES)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
	extern void (*glClearColorxOES)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
	extern void (*glClearDepthxOES)(GLfixed depth);
	extern void (*glClipPlanexOES)(GLenum plane, const GLfixed *equation);
	extern void (*glColor3xOES)(GLfixed red, GLfixed green, GLfixed blue);
	extern void (*glColor3xvOES)(const GLfixed *components);
	extern void (*glColor4xOES)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
	extern void (*glColor4xvOES)(const GLfixed *components);
	extern void (*glConvolutionParameterxOES)(GLenum target, GLenum pname, GLfixed param);
	extern void (*glConvolutionParameterxvOES)(GLenum target, GLenum pname, const GLfixed *params);
	extern void (*glDepthRangexOES)(GLfixed n, GLfixed f);
	extern void (*glEvalCoord1xOES)(GLfixed u);
	extern void (*glEvalCoord1xvOES)(const GLfixed *coords);
	extern void (*glEvalCoord2xOES)(GLfixed u, GLfixed v);
	extern void (*glEvalCoord2xvOES)(const GLfixed *coords);
	extern void (*glFeedbackBufferxOES)(GLsizei n, GLenum type, const GLfixed *buffer);
	extern void (*glFogxOES)(GLenum pname, GLfixed param);
	extern void (*glFogxvOES)(GLenum pname, const GLfixed *param);
	extern void (*glFrustumxOES)(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
	extern void (*glGetClipPlanexOES)(GLenum plane, GLfixed *equation);
	extern void (*glGetConvolutionParameterxvOES)(GLenum target, GLenum pname, GLfixed *params);
	extern void (*glGetFixedvOES)(GLenum pname, GLfixed *params);
	extern void (*glGetHistogramParameterxvOES)(GLenum target, GLenum pname, GLfixed *params);
	extern void (*glGetLightxOES)(GLenum light, GLenum pname, GLfixed *params);
	extern void (*glGetLightxvOES)(GLenum light, GLenum pname, GLfixed *params);
	extern void (*glGetMapxvOES)(GLenum target, GLenum query, GLfixed *v);
	extern void (*glGetMaterialxOES)(GLenum face, GLenum pname, GLfixed param);
	extern void (*glGetMaterialxvOES)(GLenum face, GLenum pname, GLfixed *params);
	extern void (*glGetPixelMapxv)(GLenum map, GLint size, GLfixed *values);
	extern void (*glGetTexEnvxvOES)(GLenum target, GLenum pname, GLfixed *params);
	extern void (*glGetTexGenxvOES)(GLenum coord, GLenum pname, GLfixed *params);
	extern void (*glGetTexLevelParameterxvOES)(GLenum target, GLint level, GLenum pname, GLfixed *params);
	extern void (*glGetTexParameterxvOES)(GLenum target, GLenum pname, GLfixed *params);
	extern void (*glIndexxOES)(GLfixed component);
	extern void (*glIndexxvOES)(const GLfixed *component);
	extern void (*glLightModelxOES)(GLenum pname, GLfixed param);
	extern void (*glLightModelxvOES)(GLenum pname, const GLfixed *param);
	extern void (*glLightxOES)(GLenum light, GLenum pname, GLfixed param);
	extern void (*glLightxvOES)(GLenum light, GLenum pname, const GLfixed *params);
	extern void (*glLineWidthxOES)(GLfixed width);
	extern void (*glLoadMatrixxOES)(const GLfixed *m);
	extern void (*glLoadTransposeMatrixxOES)(const GLfixed *m);
	extern void (*glMap1xOES)(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points);
	extern void (*glMap2xOES)(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points);
	extern void (*glMapGrid1xOES)(GLint n, GLfixed u1, GLfixed u2);
	extern void (*glMapGrid2xOES)(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2);
	extern void (*glMaterialxOES)(GLenum face, GLenum pname, GLfixed param);
	extern void (*glMaterialxvOES)(GLenum face, GLenum pname, const GLfixed *param);
	extern void (*glMultMatrixxOES)(const GLfixed *m);
	extern void (*glMultTransposeMatrixxOES)(const GLfixed *m);
	extern void (*glMultiTexCoord1xOES)(GLenum texture, GLfixed s);
	extern void (*glMultiTexCoord1xvOES)(GLenum texture, const GLfixed *coords);
	extern void (*glMultiTexCoord2xOES)(GLenum texture, GLfixed s, GLfixed t);
	extern void (*glMultiTexCoord2xvOES)(GLenum texture, const GLfixed *coords);
	extern void (*glMultiTexCoord3xOES)(GLenum texture, GLfixed s, GLfixed t, GLfixed r);
	extern void (*glMultiTexCoord3xvOES)(GLenum texture, const GLfixed *coords);
	extern void (*glMultiTexCoord4xOES)(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
	extern void (*glMultiTexCoord4xvOES)(GLenum texture, const GLfixed *coords);
	extern void (*glNormal3xOES)(GLfixed nx, GLfixed ny, GLfixed nz);
	extern void (*glNormal3xvOES)(const GLfixed *coords);
	extern void (*glOrthoxOES)(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
	extern void (*glPassThroughxOES)(GLfixed token);
	extern void (*glPixelMapx)(GLenum map, GLint size, const GLfixed *values);
	extern void (*glPixelStorex)(GLenum pname, GLfixed param);
	extern void (*glPixelTransferxOES)(GLenum pname, GLfixed param);
	extern void (*glPixelZoomxOES)(GLfixed xfactor, GLfixed yfactor);
	extern void (*glPointParameterxOES)(GLenum pname, GLfixed param);
	extern void (*glPointParameterxvOES)(GLenum pname, const GLfixed *params);
	extern void (*glPointSizexOES)(GLfixed size);
	extern void (*glPolygonOffsetxOES)(GLfixed factor, GLfixed units);
	extern void (*glPrioritizeTexturesxOES)(GLsizei n, const GLuint *textures, const GLfixed *priorities);
	extern void (*glRasterPos2xOES)(GLfixed x, GLfixed y);
	extern void (*glRasterPos2xvOES)(const GLfixed *coords);
	extern void (*glRasterPos3xOES)(GLfixed x, GLfixed y, GLfixed z);
	extern void (*glRasterPos3xvOES)(const GLfixed *coords);
	extern void (*glRasterPos4xOES)(GLfixed x, GLfixed y, GLfixed z, GLfixed w);
	extern void (*glRasterPos4xvOES)(const GLfixed *coords);
	extern void (*glRectxOES)(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2);
	extern void (*glRectxvOES)(const GLfixed *v1, const GLfixed *v2);
	extern void (*glRotatexOES)(GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
	extern void (*glSampleCoveragexOES)(GLclampx value, GLboolean invert);
	extern void (*glScalexOES)(GLfixed x, GLfixed y, GLfixed z);
	extern void (*glTexCoord1xOES)(GLfixed s);
	extern void (*glTexCoord1xvOES)(const GLfixed *coords);
	extern void (*glTexCoord2xOES)(GLfixed s, GLfixed t);
	extern void (*glTexCoord2xvOES)(const GLfixed *coords);
	extern void (*glTexCoord3xOES)(GLfixed s, GLfixed t, GLfixed r);
	extern void (*glTexCoord3xvOES)(const GLfixed *coords);
	extern void (*glTexCoord4xOES)(GLfixed s, GLfixed t, GLfixed r, GLfixed q);
	extern void (*glTexCoord4xvOES)(const GLfixed *coords);
	extern void (*glTexEnvxOES)(GLenum target, GLenum pname, GLfixed param);
	extern void (*glTexEnvxvOES)(GLenum target, GLenum pname, const GLfixed *params);
	extern void (*glTexGenxOES)(GLenum coord, GLenum pname, GLfixed param);
	extern void (*glTexGenxvOES)(GLenum coord, GLenum pname, const GLfixed *params);
	extern void (*glTexParameterxOES)(GLenum target, GLenum pname, GLfixed param);
	extern void (*glTexParameterxvOES)(GLenum target, GLenum pname, const GLfixed *params);
	extern void (*glTranslatexOES)(GLfixed x, GLfixed y, GLfixed z);
	extern void (*glVertex2xOES)(GLfixed x);
	extern void (*glVertex2xvOES)(const GLfixed *coords);
	extern void (*glVertex3xOES)(GLfixed x, GLfixed y);
	extern void (*glVertex3xvOES)(const GLfixed *coords);
	extern void (*glVertex4xOES)(GLfixed x, GLfixed y, GLfixed z);
	extern void (*glVertex4xvOES)(const GLfixed *coords);
	#endif // GL_OES_fixed_point
	
	#ifdef GL_OES_query_matrix
	extern bool ext_GL_OES_query_matrix;
	extern GLbitfield (*glQueryMatrixxOES)(GLfixed *mantissa, GLint *exponent);
	#endif // GL_OES_query_matrix
	
	#ifdef GL_OES_read_format
	extern bool ext_GL_OES_read_format;
	enum {
		GL_IMPLEMENTATION_COLOR_READ_TYPE_OES = 0x8B9A,
		GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES = 0x8B9B,
	};
	#endif // GL_OES_read_format
	
	#ifdef GL_OES_single_precision
	extern bool ext_GL_OES_single_precision;
	extern void (*glClearDepthfOES)(GLclampf depth);
	extern void (*glClipPlanefOES)(GLenum plane, const GLfloat *equation);
	extern void (*glDepthRangefOES)(GLclampf n, GLclampf f);
	extern void (*glFrustumfOES)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
	extern void (*glGetClipPlanefOES)(GLenum plane, GLfloat *equation);
	extern void (*glOrthofOES)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
	#endif // GL_OES_single_precision
	
	#ifdef GL_OML_interlace
	extern bool ext_GL_OML_interlace;
	enum {
		GL_INTERLACE_OML = 0x8980,
		GL_INTERLACE_READ_OML = 0x8981,
	};
	#endif // GL_OML_interlace
	
	#ifdef GL_OML_resample
	extern bool ext_GL_OML_resample;
	enum {
		GL_PACK_RESAMPLE_OML = 0x8984,
		GL_UNPACK_RESAMPLE_OML = 0x8985,
		GL_RESAMPLE_REPLICATE_OML = 0x8986,
		GL_RESAMPLE_ZERO_FILL_OML = 0x8987,
		GL_RESAMPLE_AVERAGE_OML = 0x8988,
		GL_RESAMPLE_DECIMATE_OML = 0x8989,
	};
	#endif // GL_OML_resample
	
	#ifdef GL_OML_subsample
	extern bool ext_GL_OML_subsample;
	enum {
		GL_FORMAT_SUBSAMPLE_24_24_OML = 0x8982,
		GL_FORMAT_SUBSAMPLE_244_244_OML = 0x8983,
	};
	#endif // GL_OML_subsample
	
	#ifdef GL_OVR_multiview
	extern bool ext_GL_OVR_multiview;
	enum {
		GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR = 0x9630,
		GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR = 0x9632,
		GL_MAX_VIEWS_OVR = 0x9631,
	};
	extern void (*glFramebufferTextureMultiviewOVR)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);
	#endif // GL_OVR_multiview
	
	#ifdef GL_PGI_misc_hints
	extern bool ext_GL_PGI_misc_hints;
	enum {
		GL_ALLOW_DRAW_FRG_HINT_PGI = 0x1A210,
		GL_ALLOW_DRAW_MEM_HINT_PGI = 0x1A211,
		GL_ALLOW_DRAW_OBJ_HINT_PGI = 0x1A20E,
		GL_ALLOW_DRAW_WIN_HINT_PGI = 0x1A20F,
		GL_ALWAYS_FAST_HINT_PGI = 0x1A20C,
		GL_ALWAYS_SOFT_HINT_PGI = 0x1A20D,
		GL_BACK_NORMALS_HINT_PGI = 0x1A223,
		GL_CLIP_FAR_HINT_PGI = 0x1A221,
		GL_CLIP_NEAR_HINT_PGI = 0x1A220,
		GL_CONSERVE_MEMORY_HINT_PGI = 0x1A1FD,
		GL_FULL_STIPPLE_HINT_PGI = 0x1A219,
		GL_NATIVE_GRAPHICS_BEGIN_HINT_PGI = 0x1A203,
		GL_NATIVE_GRAPHICS_END_HINT_PGI = 0x1A204,
		GL_PREFER_DOUBLEBUFFER_HINT_PGI = 0x1A1F8,
		GL_RECLAIM_MEMORY_HINT_PGI = 0x1A1FE,
		GL_STRICT_DEPTHFUNC_HINT_PGI = 0x1A216,
		GL_STRICT_LIGHTING_HINT_PGI = 0x1A217,
		GL_STRICT_SCISSOR_HINT_PGI = 0x1A218,
		GL_WIDE_LINE_HINT_PGI = 0x1A222,
		GL_NATIVE_GRAPHICS_HANDLE_PGI = 0x1A202,
	};
	extern void (*glHintPGI)(GLenum target, GLint mode);
	#endif // GL_PGI_misc_hints
	
	#ifdef GL_PGI_vertex_hints
	extern bool ext_GL_PGI_vertex_hints;
	enum {
		GL_MATERIAL_SIDE_HINT_PGI = 0x1A22C,
		GL_MAX_VERTEX_HINT_PGI = 0x1A22D,
		GL_VERTEX_CONSISTENT_HINT_PGI = 0x1A22B,
		GL_VERTEX_DATA_HINT_PGI = 0x1A22A,
		GL_COLOR3_BIT_PGI = 0x00010000,
		GL_COLOR4_BIT_PGI = 0x00020000,
		GL_EDGEFLAG_BIT_PGI = 0x00040000,
		GL_INDEX_BIT_PGI = 0x00080000,
		GL_MAT_AMBIENT_BIT_PGI = 0x00100000,
		GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI = 0x00200000,
		GL_MAT_DIFFUSE_BIT_PGI = 0x00400000,
		GL_MAT_EMISSION_BIT_PGI = 0x00800000,
		GL_MAT_COLOR_INDEXES_BIT_PGI = 0x01000000,
		GL_MAT_SHININESS_BIT_PGI = 0x02000000,
		GL_MAT_SPECULAR_BIT_PGI = 0x04000000,
		GL_NORMAL_BIT_PGI = 0x08000000,
		GL_TEXCOORD1_BIT_PGI = 0x10000000,
		GL_TEXCOORD2_BIT_PGI = 0x20000000,
		GL_TEXCOORD3_BIT_PGI = 0x40000000,
		GL_TEXCOORD4_BIT_PGI = 0x80000000,
		GL_VERTEX23_BIT_PGI = 0x00000004,
		GL_VERTEX4_BIT_PGI = 0x00000008,
	};
	#endif // GL_PGI_vertex_hints
	
	#ifdef GL_REND_screen_coordinates
	extern bool ext_GL_REND_screen_coordinates;
	enum {
		GL_SCREEN_COORDINATES_REND = 0x8490,
		GL_INVERTED_SCREEN_W_REND = 0x8491,
	};
	#endif // GL_REND_screen_coordinates
	
	#ifdef GL_S3_s3tc
	extern bool ext_GL_S3_s3tc;
	enum {
		GL_RGB_S3TC = 0x83A0,
		GL_RGB4_S3TC = 0x83A1,
		GL_RGBA_S3TC = 0x83A2,
		GL_RGBA4_S3TC = 0x83A3,
		GL_RGBA_DXT5_S3TC = 0x83A4,
		GL_RGBA4_DXT5_S3TC = 0x83A5,
	};
	#endif // GL_S3_s3tc
	
	#ifdef GL_SGIS_detail_texture
	extern bool ext_GL_SGIS_detail_texture;
	enum {
		GL_DETAIL_TEXTURE_2D_BINDING_SGIS = 0x8096,
		GL_DETAIL_TEXTURE_FUNC_POINTS_SGIS = 0x809C,
		GL_DETAIL_TEXTURE_LEVEL_SGIS = 0x809A,
		GL_DETAIL_TEXTURE_MODE_SGIS = 0x809B,
		GL_LINEAR_DETAIL_ALPHA_SGIS = 0x8098,
		GL_LINEAR_DETAIL_COLOR_SGIS = 0x8099,
		GL_LINEAR_DETAIL_SGIS = 0x8097,
		GL_DETAIL_TEXTURE_2D_SGIS = 0x8095,
	};
	extern void (*glDetailTexFuncSGIS)(GLenum target, GLsizei n, const GLfloat *points);
	extern void (*glGetDetailTexFuncSGIS)(GLenum target, GLfloat *points);
	#endif // GL_SGIS_detail_texture
	
	#ifdef GL_SGIS_fog_function
	extern bool ext_GL_SGIS_fog_function;
	enum {
		GL_FOG_FUNC_SGIS = 0x812A,
		GL_FOG_FUNC_POINTS_SGIS = 0x812B,
		GL_MAX_FOG_FUNC_POINTS_SGIS = 0x812C,
	};
	extern void (*glFogFuncSGIS)(GLsizei n, const GLfloat *points);
	extern void (*glGetFogFuncSGIS)(GLfloat *points);
	#endif // GL_SGIS_fog_function
	
	#ifdef GL_SGIS_generate_mipmap
	extern bool ext_GL_SGIS_generate_mipmap;
	enum {
		GL_GENERATE_MIPMAP_HINT_SGIS = 0x8192,
		GL_GENERATE_MIPMAP_SGIS = 0x8191,
	};
	#endif // GL_SGIS_generate_mipmap
	
	#ifdef GL_SGIS_multisample
	extern bool ext_GL_SGIS_multisample;
	enum {
		GL_MULTISAMPLE_SGIS = 0x809D,
		GL_SAMPLE_ALPHA_TO_MASK_SGIS = 0x809E,
		GL_SAMPLE_ALPHA_TO_ONE_SGIS = 0x809F,
		GL_SAMPLE_MASK_SGIS = 0x80A0,
		GL_SAMPLES_SGIS = 0x80A9,
		GL_SAMPLE_BUFFERS_SGIS = 0x80A8,
		GL_SAMPLE_MASK_INVERT_SGIS = 0x80AB,
		GL_SAMPLE_MASK_VALUE_SGIS = 0x80AA,
		GL_SAMPLE_PATTERN_SGIS = 0x80AC,
		GL_1PASS_SGIS = 0x80A1,
		GL_2PASS_0_SGIS = 0x80A2,
		GL_2PASS_1_SGIS = 0x80A3,
		GL_4PASS_0_SGIS = 0x80A4,
		GL_4PASS_1_SGIS = 0x80A5,
		GL_4PASS_2_SGIS = 0x80A6,
		GL_4PASS_3_SGIS = 0x80A7,
	};
	extern void (*glSampleMaskSGIS)(GLclampf value, GLboolean invert);
	extern void (*glSamplePatternSGIS)(GLenum pattern);
	#endif // GL_SGIS_multisample
	
	#ifdef GL_SGIS_pixel_texture
	extern bool ext_GL_SGIS_pixel_texture;
	enum {
		GL_PIXEL_TEXTURE_SGIS = 0x8353,
		GL_PIXEL_FRAGMENT_ALPHA_SOURCE_SGIS = 0x8355,
		GL_PIXEL_FRAGMENT_RGB_SOURCE_SGIS = 0x8354,
		GL_PIXEL_GROUP_COLOR_SGIS = 0x8356,
	};
	extern void (*glGetPixelTexGenParameterfvSGIS)(GLenum pname, GLfloat *params);
	extern void (*glGetPixelTexGenParameterivSGIS)(GLenum pname, GLint *params);
	extern void (*glPixelTexGenParameterfSGIS)(GLenum pname, GLfloat param);
	extern void (*glPixelTexGenParameterfvSGIS)(GLenum pname, const GLfloat *params);
	extern void (*glPixelTexGenParameteriSGIS)(GLenum pname, GLint param);
	extern void (*glPixelTexGenParameterivSGIS)(GLenum pname, const GLint *params);
	#endif // GL_SGIS_pixel_texture
	
	#ifdef GL_SGIS_point_line_texgen
	extern bool ext_GL_SGIS_point_line_texgen;
	enum {
		GL_EYE_DISTANCE_TO_LINE_SGIS = 0x81F2,
		GL_EYE_DISTANCE_TO_POINT_SGIS = 0x81F0,
		GL_OBJECT_DISTANCE_TO_LINE_SGIS = 0x81F3,
		GL_OBJECT_DISTANCE_TO_POINT_SGIS = 0x81F1,
		GL_EYE_LINE_SGIS = 0x81F6,
		GL_EYE_POINT_SGIS = 0x81F4,
		GL_OBJECT_LINE_SGIS = 0x81F7,
		GL_OBJECT_POINT_SGIS = 0x81F5,
	};
	#endif // GL_SGIS_point_line_texgen
	
	#ifdef GL_SGIS_point_parameters
	extern bool ext_GL_SGIS_point_parameters;
	enum {
		GL_DISTANCE_ATTENUATION_SGIS = 0x8129,
		GL_POINT_FADE_THRESHOLD_SIZE_SGIS = 0x8128,
		GL_POINT_SIZE_MAX_SGIS = 0x8127,
		GL_POINT_SIZE_MIN_SGIS = 0x8126,
	};
	extern void (*glPointParameterfSGIS)(GLenum pname, GLfloat param);
	extern void (*glPointParameterfvSGIS)(GLenum pname, const GLfloat *params);
	#endif // GL_SGIS_point_parameters
	
	#ifdef GL_SGIS_sharpen_texture
	extern bool ext_GL_SGIS_sharpen_texture;
	enum {
		GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS = 0x80B0,
		GL_LINEAR_SHARPEN_ALPHA_SGIS = 0x80AE,
		GL_LINEAR_SHARPEN_COLOR_SGIS = 0x80AF,
		GL_LINEAR_SHARPEN_SGIS = 0x80AD,
	};
	extern void (*glGetSharpenTexFuncSGIS)(GLenum target, GLfloat *points);
	extern void (*glSharpenTexFuncSGIS)(GLenum target, GLsizei n, const GLfloat *points);
	#endif // GL_SGIS_sharpen_texture
	
	#ifdef GL_SGIS_texture4D
	extern bool ext_GL_SGIS_texture4D;
	enum {
		GL_TEXTURE_4D_SGIS = 0x8134,
		GL_MAX_4D_TEXTURE_SIZE_SGIS = 0x8138,
		GL_PACK_IMAGE_DEPTH_SGIS = 0x8131,
		GL_PACK_SKIP_VOLUMES_SGIS = 0x8130,
		GL_TEXTURE_4D_BINDING_SGIS = 0x814F,
		GL_UNPACK_IMAGE_DEPTH_SGIS = 0x8133,
		GL_UNPACK_SKIP_VOLUMES_SGIS = 0x8132,
		GL_TEXTURE_4DSIZE_SGIS = 0x8136,
		GL_TEXTURE_WRAP_Q_SGIS = 0x8137,
		GL_PROXY_TEXTURE_4D_SGIS = 0x8135,
	};
	extern void (*glTexImage4DSGIS)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const void *pixels);
	extern void (*glTexSubImage4DSGIS)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void *pixels);
	#endif // GL_SGIS_texture4D
	
	#ifdef GL_SGIS_texture_border_clamp
	extern bool ext_GL_SGIS_texture_border_clamp;
	enum {
		GL_CLAMP_TO_BORDER_SGIS = 0x812D,
	};
	#endif // GL_SGIS_texture_border_clamp
	
	#ifdef GL_SGIS_texture_color_mask
	extern bool ext_GL_SGIS_texture_color_mask;
	enum {
		GL_TEXTURE_COLOR_WRITEMASK_SGIS = 0x81EF,
	};
	extern void (*glTextureColorMaskSGIS)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
	#endif // GL_SGIS_texture_color_mask
	
	#ifdef GL_SGIS_texture_edge_clamp
	extern bool ext_GL_SGIS_texture_edge_clamp;
	enum {
		GL_CLAMP_TO_EDGE_SGIS = 0x812F,
	};
	#endif // GL_SGIS_texture_edge_clamp
	
	#ifdef GL_SGIS_texture_filter4
	extern bool ext_GL_SGIS_texture_filter4;
	enum {
		GL_TEXTURE_FILTER4_SIZE_SGIS = 0x8147,
		GL_FILTER4_SGIS = 0x8146,
	};
	extern void (*glGetTexFilterFuncSGIS)(GLenum target, GLenum filter, GLfloat *weights);
	extern void (*glTexFilterFuncSGIS)(GLenum target, GLenum filter, GLsizei n, const GLfloat *weights);
	#endif // GL_SGIS_texture_filter4
	
	#ifdef GL_SGIS_texture_lod
	extern bool ext_GL_SGIS_texture_lod;
	enum {
		GL_TEXTURE_BASE_LEVEL_SGIS = 0x813C,
		GL_TEXTURE_MAX_LEVEL_SGIS = 0x813D,
		GL_TEXTURE_MAX_LOD_SGIS = 0x813B,
		GL_TEXTURE_MIN_LOD_SGIS = 0x813A,
	};
	#endif // GL_SGIS_texture_lod
	
	#ifdef GL_SGIS_texture_select
	extern bool ext_GL_SGIS_texture_select;
	enum {
		GL_DUAL_TEXTURE_SELECT_SGIS = 0x8124,
		GL_QUAD_TEXTURE_SELECT_SGIS = 0x8125,
		GL_DUAL_ALPHA12_SGIS = 0x8112,
		GL_DUAL_ALPHA16_SGIS = 0x8113,
		GL_DUAL_ALPHA4_SGIS = 0x8110,
		GL_DUAL_ALPHA8_SGIS = 0x8111,
		GL_DUAL_INTENSITY12_SGIS = 0x811A,
		GL_DUAL_INTENSITY16_SGIS = 0x811B,
		GL_DUAL_INTENSITY4_SGIS = 0x8118,
		GL_DUAL_INTENSITY8_SGIS = 0x8119,
		GL_DUAL_LUMINANCE12_SGIS = 0x8116,
		GL_DUAL_LUMINANCE16_SGIS = 0x8117,
		GL_DUAL_LUMINANCE4_SGIS = 0x8114,
		GL_DUAL_LUMINANCE8_SGIS = 0x8115,
		GL_DUAL_LUMINANCE_ALPHA4_SGIS = 0x811C,
		GL_DUAL_LUMINANCE_ALPHA8_SGIS = 0x811D,
		GL_QUAD_ALPHA4_SGIS = 0x811E,
		GL_QUAD_ALPHA8_SGIS = 0x811F,
		GL_QUAD_INTENSITY4_SGIS = 0x8122,
		GL_QUAD_INTENSITY8_SGIS = 0x8123,
		GL_QUAD_LUMINANCE4_SGIS = 0x8120,
		GL_QUAD_LUMINANCE8_SGIS = 0x8121,
	};
	#endif // GL_SGIS_texture_select
	
	#ifdef GL_SGIX_async
	extern bool ext_GL_SGIX_async;
	enum {
		GL_ASYNC_MARKER_SGIX = 0x8329,
	};
	extern void (*glAsyncMarkerSGIX)(GLuint marker);
	extern void (*glDeleteAsyncMarkersSGIX)(GLuint marker, GLsizei range);
	extern GLint (*glFinishAsyncSGIX)(GLuint *markerp);
	extern GLuint (*glGenAsyncMarkersSGIX)(GLsizei range);
	extern GLboolean (*glIsAsyncMarkerSGIX)(GLuint marker);
	extern GLint (*glPollAsyncSGIX)(GLuint *markerp);
	#endif // GL_SGIX_async
	
	#ifdef GL_SGIX_async_histogram
	extern bool ext_GL_SGIX_async_histogram;
	enum {
		GL_ASYNC_HISTOGRAM_SGIX = 0x832C,
		GL_MAX_ASYNC_HISTOGRAM_SGIX = 0x832D,
	};
	#endif // GL_SGIX_async_histogram
	
	#ifdef GL_SGIX_async_pixel
	extern bool ext_GL_SGIX_async_pixel;
	enum {
		GL_ASYNC_DRAW_PIXELS_SGIX = 0x835D,
		GL_ASYNC_READ_PIXELS_SGIX = 0x835E,
		GL_ASYNC_TEX_IMAGE_SGIX = 0x835C,
		GL_MAX_ASYNC_DRAW_PIXELS_SGIX = 0x8360,
		GL_MAX_ASYNC_READ_PIXELS_SGIX = 0x8361,
		GL_MAX_ASYNC_TEX_IMAGE_SGIX = 0x835F,
	};
	#endif // GL_SGIX_async_pixel
	
	#ifdef GL_SGIX_blend_alpha_minmax
	extern bool ext_GL_SGIX_blend_alpha_minmax;
	enum {
		GL_ALPHA_MAX_SGIX = 0x8321,
		GL_ALPHA_MIN_SGIX = 0x8320,
	};
	#endif // GL_SGIX_blend_alpha_minmax
	
	#ifdef GL_SGIX_calligraphic_fragment
	extern bool ext_GL_SGIX_calligraphic_fragment;
	enum {
		GL_CALLIGRAPHIC_FRAGMENT_SGIX = 0x8183,
	};
	#endif // GL_SGIX_calligraphic_fragment
	
	#ifdef GL_SGIX_clipmap
	extern bool ext_GL_SGIX_clipmap;
	enum {
		GL_MAX_CLIPMAP_DEPTH_SGIX = 0x8177,
		GL_MAX_CLIPMAP_VIRTUAL_DEPTH_SGIX = 0x8178,
		GL_TEXTURE_CLIPMAP_CENTER_SGIX = 0x8171,
		GL_TEXTURE_CLIPMAP_DEPTH_SGIX = 0x8176,
		GL_TEXTURE_CLIPMAP_FRAME_SGIX = 0x8172,
		GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX = 0x8175,
		GL_TEXTURE_CLIPMAP_OFFSET_SGIX = 0x8173,
		GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX = 0x8174,
		GL_LINEAR_CLIPMAP_LINEAR_SGIX = 0x8170,
		GL_LINEAR_CLIPMAP_NEAREST_SGIX = 0x844F,
		GL_NEAREST_CLIPMAP_LINEAR_SGIX = 0x844E,
		GL_NEAREST_CLIPMAP_NEAREST_SGIX = 0x844D,
	};
	#endif // GL_SGIX_clipmap
	
	#ifdef GL_SGIX_convolution_accuracy
	extern bool ext_GL_SGIX_convolution_accuracy;
	enum {
		GL_CONVOLUTION_HINT_SGIX = 0x8316,
	};
	#endif // GL_SGIX_convolution_accuracy
	
	#ifdef GL_SGIX_depth_texture
	extern bool ext_GL_SGIX_depth_texture;
	enum {
		GL_DEPTH_COMPONENT16_SGIX = 0x81A5,
		GL_DEPTH_COMPONENT24_SGIX = 0x81A6,
		GL_DEPTH_COMPONENT32_SGIX = 0x81A7,
	};
	#endif // GL_SGIX_depth_texture
	
	#ifdef GL_SGIX_flush_raster
	extern bool ext_GL_SGIX_flush_raster;
	extern void (*glFlushRasterSGIX)();
	#endif // GL_SGIX_flush_raster
	
	#ifdef GL_SGIX_fog_offset
	extern bool ext_GL_SGIX_fog_offset;
	enum {
		GL_FOG_OFFSET_SGIX = 0x8198,
		GL_FOG_OFFSET_VALUE_SGIX = 0x8199,
	};
	#endif // GL_SGIX_fog_offset
	
	#ifdef GL_SGIX_fragment_lighting
	extern bool ext_GL_SGIX_fragment_lighting;
	enum {
		GL_FRAGMENT_COLOR_MATERIAL_SGIX = 0x8401,
		GL_FRAGMENT_LIGHT0_SGIX = 0x840C,
		GL_FRAGMENT_LIGHT1_SGIX = 0x840D,
		GL_FRAGMENT_LIGHT2_SGIX = 0x840E,
		GL_FRAGMENT_LIGHT3_SGIX = 0x840F,
		GL_FRAGMENT_LIGHT4_SGIX = 0x8410,
		GL_FRAGMENT_LIGHT5_SGIX = 0x8411,
		GL_FRAGMENT_LIGHT6_SGIX = 0x8412,
		GL_FRAGMENT_LIGHT7_SGIX = 0x8413,
		GL_FRAGMENT_LIGHTING_SGIX = 0x8400,
		GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX = 0x840A,
		GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX = 0x8408,
		GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX = 0x840B,
		GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX = 0x8409,
		GL_FRAGMENT_COLOR_MATERIAL_FACE_SGIX = 0x8402,
		GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_SGIX = 0x8403,
		GL_LIGHT_ENV_MODE_SGIX = 0x8407,
		GL_MAX_ACTIVE_LIGHTS_SGIX = 0x8405,
		GL_MAX_FRAGMENT_LIGHTS_SGIX = 0x8404,
		GL_CURRENT_RASTER_NORMAL_SGIX = 0x8406,
	};
	extern void (*glFragmentColorMaterialSGIX)(GLenum face, GLenum mode);
	extern void (*glFragmentLightModelfSGIX)(GLenum pname, GLfloat param);
	extern void (*glFragmentLightModelfvSGIX)(GLenum pname, const GLfloat *params);
	extern void (*glFragmentLightModeliSGIX)(GLenum pname, GLint param);
	extern void (*glFragmentLightModelivSGIX)(GLenum pname, const GLint *params);
	extern void (*glFragmentLightfSGIX)(GLenum light, GLenum pname, GLfloat param);
	extern void (*glFragmentLightfvSGIX)(GLenum light, GLenum pname, const GLfloat *params);
	extern void (*glFragmentLightiSGIX)(GLenum light, GLenum pname, GLint param);
	extern void (*glFragmentLightivSGIX)(GLenum light, GLenum pname, const GLint *params);
	extern void (*glFragmentMaterialfSGIX)(GLenum face, GLenum pname, GLfloat param);
	extern void (*glFragmentMaterialfvSGIX)(GLenum face, GLenum pname, const GLfloat *params);
	extern void (*glFragmentMaterialiSGIX)(GLenum face, GLenum pname, GLint param);
	extern void (*glFragmentMaterialivSGIX)(GLenum face, GLenum pname, const GLint *params);
	extern void (*glGetFragmentLightfvSGIX)(GLenum light, GLenum pname, GLfloat *params);
	extern void (*glGetFragmentLightivSGIX)(GLenum light, GLenum pname, GLint *params);
	extern void (*glGetFragmentMaterialfvSGIX)(GLenum face, GLenum pname, GLfloat *params);
	extern void (*glGetFragmentMaterialivSGIX)(GLenum face, GLenum pname, GLint *params);
	extern void (*glLightEnviSGIX)(GLenum pname, GLint param);
	#endif // GL_SGIX_fragment_lighting
	
	#ifdef GL_SGIX_framezoom
	extern bool ext_GL_SGIX_framezoom;
	enum {
		GL_FRAMEZOOM_SGIX = 0x818B,
		GL_FRAMEZOOM_FACTOR_SGIX = 0x818C,
		GL_MAX_FRAMEZOOM_FACTOR_SGIX = 0x818D,
	};
	extern void (*glFrameZoomSGIX)(GLint factor);
	#endif // GL_SGIX_framezoom
	
	#ifdef GL_SGIX_igloo_interface
	extern bool ext_GL_SGIX_igloo_interface;
	extern void (*glIglooInterfaceSGIX)(GLenum pname, const void *params);
	#endif // GL_SGIX_igloo_interface
	
	#ifdef GL_SGIX_instruments
	extern bool ext_GL_SGIX_instruments;
	enum {
		GL_INSTRUMENT_MEASUREMENTS_SGIX = 0x8181,
		GL_INSTRUMENT_BUFFER_POINTER_SGIX = 0x8180,
	};
	extern GLint (*glGetInstrumentsSGIX)();
	extern void (*glInstrumentsBufferSGIX)(GLsizei size, GLint *buffer);
	extern GLint (*glPollInstrumentsSGIX)(GLint *marker_p);
	extern void (*glReadInstrumentsSGIX)(GLint marker);
	extern void (*glStartInstrumentsSGIX)();
	extern void (*glStopInstrumentsSGIX)(GLint marker);
	#endif // GL_SGIX_instruments
	
	#ifdef GL_SGIX_interlace
	extern bool ext_GL_SGIX_interlace;
	enum {
		GL_INTERLACE_SGIX = 0x8094,
	};
	#endif // GL_SGIX_interlace
	
	#ifdef GL_SGIX_ir_instrument1
	extern bool ext_GL_SGIX_ir_instrument1;
	enum {
		GL_IR_INSTRUMENT1_SGIX = 0x817F,
	};
	#endif // GL_SGIX_ir_instrument1
	
	#ifdef GL_SGIX_list_priority
	extern bool ext_GL_SGIX_list_priority;
	enum {
		GL_LIST_PRIORITY_SGIX = 0x8182,
	};
	extern void (*glGetListParameterfvSGIX)(GLuint list, GLenum pname, GLfloat *params);
	extern void (*glGetListParameterivSGIX)(GLuint list, GLenum pname, GLint *params);
	extern void (*glListParameterfSGIX)(GLuint list, GLenum pname, GLfloat param);
	extern void (*glListParameterfvSGIX)(GLuint list, GLenum pname, const GLfloat *params);
	extern void (*glListParameteriSGIX)(GLuint list, GLenum pname, GLint param);
	extern void (*glListParameterivSGIX)(GLuint list, GLenum pname, const GLint *params);
	#endif // GL_SGIX_list_priority
	
	#ifdef GL_SGIX_pixel_texture
	extern bool ext_GL_SGIX_pixel_texture;
	enum {
		GL_PIXEL_TEX_GEN_SGIX = 0x8139,
		GL_PIXEL_TEX_GEN_MODE_SGIX = 0x832B,
	};
	extern void (*glPixelTexGenSGIX)(GLenum mode);
	#endif // GL_SGIX_pixel_texture
	
	#ifdef GL_SGIX_pixel_tiles
	extern bool ext_GL_SGIX_pixel_tiles;
	enum {
		GL_PIXEL_TILE_BEST_ALIGNMENT_SGIX = 0x813E,
		GL_PIXEL_TILE_CACHE_INCREMENT_SGIX = 0x813F,
		GL_PIXEL_TILE_CACHE_SIZE_SGIX = 0x8145,
		GL_PIXEL_TILE_GRID_DEPTH_SGIX = 0x8144,
		GL_PIXEL_TILE_GRID_HEIGHT_SGIX = 0x8143,
		GL_PIXEL_TILE_GRID_WIDTH_SGIX = 0x8142,
		GL_PIXEL_TILE_HEIGHT_SGIX = 0x8141,
		GL_PIXEL_TILE_WIDTH_SGIX = 0x8140,
	};
	#endif // GL_SGIX_pixel_tiles
	
	#ifdef GL_SGIX_polynomial_ffd
	extern bool ext_GL_SGIX_polynomial_ffd;
	enum {
		GL_GEOMETRY_DEFORMATION_SGIX = 0x8194,
		GL_TEXTURE_DEFORMATION_SGIX = 0x8195,
		GL_DEFORMATIONS_MASK_SGIX = 0x8196,
		GL_TEXTURE_DEFORMATION_BIT_SGIX = 0x00000001,
		GL_GEOMETRY_DEFORMATION_BIT_SGIX = 0x00000002,
		GL_MAX_DEFORMATION_ORDER_SGIX = 0x8197,
	};
	extern void (*glDeformSGIX)(GLbitfield mask);
	extern void (*glDeformationMap3dSGIX)(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble *points);
	extern void (*glDeformationMap3fSGIX)(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat *points);
	extern void (*glLoadIdentityDeformationMapSGIX)(GLbitfield mask);
	#endif // GL_SGIX_polynomial_ffd
	
	#ifdef GL_SGIX_reference_plane
	extern bool ext_GL_SGIX_reference_plane;
	enum {
		GL_REFERENCE_PLANE_SGIX = 0x817D,
		GL_REFERENCE_PLANE_EQUATION_SGIX = 0x817E,
	};
	extern void (*glReferencePlaneSGIX)(const GLdouble *equation);
	#endif // GL_SGIX_reference_plane
	
	#ifdef GL_SGIX_resample
	extern bool ext_GL_SGIX_resample;
	enum {
		GL_PACK_RESAMPLE_SGIX = 0x842E,
		GL_UNPACK_RESAMPLE_SGIX = 0x842F,
		GL_RESAMPLE_DECIMATE_SGIX = 0x8430,
		GL_RESAMPLE_REPLICATE_SGIX = 0x8433,
		GL_RESAMPLE_ZERO_FILL_SGIX = 0x8434,
	};
	#endif // GL_SGIX_resample
	
	#ifdef GL_SGIX_scalebias_hint
	extern bool ext_GL_SGIX_scalebias_hint;
	enum {
		GL_SCALEBIAS_HINT_SGIX = 0x8322,
	};
	#endif // GL_SGIX_scalebias_hint
	
	#ifdef GL_SGIX_shadow
	extern bool ext_GL_SGIX_shadow;
	enum {
		GL_TEXTURE_COMPARE_OPERATOR_SGIX = 0x819B,
		GL_TEXTURE_COMPARE_SGIX = 0x819A,
		GL_TEXTURE_GEQUAL_R_SGIX = 0x819D,
		GL_TEXTURE_LEQUAL_R_SGIX = 0x819C,
	};
	#endif // GL_SGIX_shadow
	
	#ifdef GL_SGIX_shadow_ambient
	extern bool ext_GL_SGIX_shadow_ambient;
	enum {
		GL_SHADOW_AMBIENT_SGIX = 0x80BF,
	};
	#endif // GL_SGIX_shadow_ambient
	
	#ifdef GL_SGIX_sprite
	extern bool ext_GL_SGIX_sprite;
	enum {
		GL_SPRITE_SGIX = 0x8148,
		GL_SPRITE_AXIS_SGIX = 0x814A,
		GL_SPRITE_MODE_SGIX = 0x8149,
		GL_SPRITE_TRANSLATION_SGIX = 0x814B,
		GL_SPRITE_AXIAL_SGIX = 0x814C,
		GL_SPRITE_OBJECT_ALIGNED_SGIX = 0x814D,
		GL_SPRITE_EYE_ALIGNED_SGIX = 0x814E,
	};
	extern void (*glSpriteParameterfSGIX)(GLenum pname, GLfloat param);
	extern void (*glSpriteParameterfvSGIX)(GLenum pname, const GLfloat *params);
	extern void (*glSpriteParameteriSGIX)(GLenum pname, GLint param);
	extern void (*glSpriteParameterivSGIX)(GLenum pname, const GLint *params);
	#endif // GL_SGIX_sprite
	
	#ifdef GL_SGIX_subsample
	extern bool ext_GL_SGIX_subsample;
	enum {
		GL_PACK_SUBSAMPLE_RATE_SGIX = 0x85A0,
		GL_UNPACK_SUBSAMPLE_RATE_SGIX = 0x85A1,
		GL_PIXEL_SUBSAMPLE_2424_SGIX = 0x85A3,
		GL_PIXEL_SUBSAMPLE_4242_SGIX = 0x85A4,
		GL_PIXEL_SUBSAMPLE_4444_SGIX = 0x85A2,
	};
	#endif // GL_SGIX_subsample
	
	#ifdef GL_SGIX_tag_sample_buffer
	extern bool ext_GL_SGIX_tag_sample_buffer;
	extern void (*glTagSampleBufferSGIX)();
	#endif // GL_SGIX_tag_sample_buffer
	
	#ifdef GL_SGIX_texture_add_env
	extern bool ext_GL_SGIX_texture_add_env;
	enum {
		GL_TEXTURE_ENV_BIAS_SGIX = 0x80BE,
	};
	#endif // GL_SGIX_texture_add_env
	
	#ifdef GL_SGIX_texture_coordinate_clamp
	extern bool ext_GL_SGIX_texture_coordinate_clamp;
	enum {
		GL_TEXTURE_MAX_CLAMP_R_SGIX = 0x836B,
		GL_TEXTURE_MAX_CLAMP_S_SGIX = 0x8369,
		GL_TEXTURE_MAX_CLAMP_T_SGIX = 0x836A,
	};
	#endif // GL_SGIX_texture_coordinate_clamp
	
	#ifdef GL_SGIX_texture_lod_bias
	extern bool ext_GL_SGIX_texture_lod_bias;
	enum {
		GL_TEXTURE_LOD_BIAS_R_SGIX = 0x8190,
		GL_TEXTURE_LOD_BIAS_S_SGIX = 0x818E,
		GL_TEXTURE_LOD_BIAS_T_SGIX = 0x818F,
	};
	#endif // GL_SGIX_texture_lod_bias
	
	#ifdef GL_SGIX_texture_multi_buffer
	extern bool ext_GL_SGIX_texture_multi_buffer;
	enum {
		GL_TEXTURE_MULTI_BUFFER_HINT_SGIX = 0x812E,
	};
	#endif // GL_SGIX_texture_multi_buffer
	
	#ifdef GL_SGIX_texture_scale_bias
	extern bool ext_GL_SGIX_texture_scale_bias;
	enum {
		GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX = 0x817B,
		GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX = 0x817C,
		GL_POST_TEXTURE_FILTER_BIAS_SGIX = 0x8179,
		GL_POST_TEXTURE_FILTER_SCALE_SGIX = 0x817A,
	};
	#endif // GL_SGIX_texture_scale_bias
	
	#ifdef GL_SGIX_vertex_preclip
	extern bool ext_GL_SGIX_vertex_preclip;
	enum {
		GL_VERTEX_PRECLIP_HINT_SGIX = 0x83EF,
		GL_VERTEX_PRECLIP_SGIX = 0x83EE,
	};
	#endif // GL_SGIX_vertex_preclip
	
	#ifdef GL_SGIX_ycrcb
	extern bool ext_GL_SGIX_ycrcb;
	enum {
		GL_YCRCB_422_SGIX = 0x81BB,
		GL_YCRCB_444_SGIX = 0x81BC,
	};
	#endif // GL_SGIX_ycrcb
	
	#ifdef GL_SGIX_ycrcba
	extern bool ext_GL_SGIX_ycrcba;
	enum {
		GL_YCRCB_SGIX = 0x8318,
		GL_YCRCBA_SGIX = 0x8319,
	};
	#endif // GL_SGIX_ycrcba
	
	#ifdef GL_SGI_color_matrix
	extern bool ext_GL_SGI_color_matrix;
	enum {
		GL_COLOR_MATRIX_SGI = 0x80B1,
		GL_COLOR_MATRIX_STACK_DEPTH_SGI = 0x80B2,
		GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI = 0x80B3,
		GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI = 0x80BB,
		GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI = 0x80B7,
		GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI = 0x80BA,
		GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI = 0x80B6,
		GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI = 0x80B9,
		GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI = 0x80B5,
		GL_POST_COLOR_MATRIX_RED_BIAS_SGI = 0x80B8,
		GL_POST_COLOR_MATRIX_RED_SCALE_SGI = 0x80B4,
	};
	#endif // GL_SGI_color_matrix
	
	#ifdef GL_SGI_color_table
	extern bool ext_GL_SGI_color_table;
	enum {
		GL_COLOR_TABLE_BIAS_SGI = 0x80D7,
		GL_COLOR_TABLE_SCALE_SGI = 0x80D6,
		GL_COLOR_TABLE_SGI = 0x80D0,
		GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI = 0x80D2,
		GL_POST_CONVOLUTION_COLOR_TABLE_SGI = 0x80D1,
		GL_PROXY_COLOR_TABLE_SGI = 0x80D3,
		GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI = 0x80D5,
		GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI = 0x80D4,
		GL_COLOR_TABLE_ALPHA_SIZE_SGI = 0x80DD,
		GL_COLOR_TABLE_BLUE_SIZE_SGI = 0x80DC,
		GL_COLOR_TABLE_FORMAT_SGI = 0x80D8,
		GL_COLOR_TABLE_GREEN_SIZE_SGI = 0x80DB,
		GL_COLOR_TABLE_INTENSITY_SIZE_SGI = 0x80DF,
		GL_COLOR_TABLE_LUMINANCE_SIZE_SGI = 0x80DE,
		GL_COLOR_TABLE_RED_SIZE_SGI = 0x80DA,
		GL_COLOR_TABLE_WIDTH_SGI = 0x80D9,
	};
	extern void (*glColorTableParameterfvSGI)(GLenum target, GLenum pname, const GLfloat *params);
	extern void (*glColorTableParameterivSGI)(GLenum target, GLenum pname, const GLint *params);
	extern void (*glColorTableSGI)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *table);
	extern void (*glCopyColorTableSGI)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
	extern void (*glGetColorTableParameterfvSGI)(GLenum target, GLenum pname, GLfloat *params);
	extern void (*glGetColorTableParameterivSGI)(GLenum target, GLenum pname, GLint *params);
	extern void (*glGetColorTableSGI)(GLenum target, GLenum format, GLenum type, void *table);
	#endif // GL_SGI_color_table
	
	#ifdef GL_SGI_texture_color_table
	extern bool ext_GL_SGI_texture_color_table;
	enum {
		GL_PROXY_TEXTURE_COLOR_TABLE_SGI = 0x80BD,
		GL_TEXTURE_COLOR_TABLE_SGI = 0x80BC,
	};
	#endif // GL_SGI_texture_color_table
	
	#ifdef GL_SUNX_constant_data
	extern bool ext_GL_SUNX_constant_data;
	enum {
		GL_UNPACK_CONSTANT_DATA_SUNX = 0x81D5,
		GL_TEXTURE_CONSTANT_DATA_SUNX = 0x81D6,
	};
	extern void (*glFinishTextureSUNX)();
	#endif // GL_SUNX_constant_data
	
	#ifdef GL_SUN_convolution_border_modes
	extern bool ext_GL_SUN_convolution_border_modes;
	enum {
		GL_WRAP_BORDER_SUN = 0x81D4,
	};
	#endif // GL_SUN_convolution_border_modes
	
	#ifdef GL_SUN_global_alpha
	extern bool ext_GL_SUN_global_alpha;
	enum {
		GL_GLOBAL_ALPHA_SUN = 0x81D9,
		GL_GLOBAL_ALPHA_FACTOR_SUN = 0x81DA,
	};
	extern void (*glGlobalAlphaFactorbSUN)(GLbyte factor);
	extern void (*glGlobalAlphaFactordSUN)(GLdouble factor);
	extern void (*glGlobalAlphaFactorfSUN)(GLfloat factor);
	extern void (*glGlobalAlphaFactoriSUN)(GLint factor);
	extern void (*glGlobalAlphaFactorsSUN)(GLshort factor);
	extern void (*glGlobalAlphaFactorubSUN)(GLubyte factor);
	extern void (*glGlobalAlphaFactoruiSUN)(GLuint factor);
	extern void (*glGlobalAlphaFactorusSUN)(GLushort factor);
	#endif // GL_SUN_global_alpha
	
	#ifdef GL_SUN_mesh_array
	extern bool ext_GL_SUN_mesh_array;
	enum {
		GL_QUAD_MESH_SUN = 0x8614,
		GL_TRIANGLE_MESH_SUN = 0x8615,
	};
	extern void (*glDrawMeshArraysSUN)(GLenum mode, GLint first, GLsizei count, GLsizei width);
	#endif // GL_SUN_mesh_array
	
	#ifdef GL_SUN_slice_accum
	extern bool ext_GL_SUN_slice_accum;
	enum {
		GL_SLICE_ACCUM_SUN = 0x85CC,
	};
	#endif // GL_SUN_slice_accum
	
	#ifdef GL_SUN_triangle_list
	extern bool ext_GL_SUN_triangle_list;
	enum {
		GL_RESTART_SUN = 0x0001,
		GL_REPLACE_MIDDLE_SUN = 0x0002,
		GL_REPLACE_OLDEST_SUN = 0x0003,
		GL_TRIANGLE_LIST_SUN = 0x81D7,
		GL_REPLACEMENT_CODE_SUN = 0x81D8,
		GL_REPLACEMENT_CODE_ARRAY_SUN = 0x85C0,
		GL_REPLACEMENT_CODE_ARRAY_TYPE_SUN = 0x85C1,
		GL_REPLACEMENT_CODE_ARRAY_STRIDE_SUN = 0x85C2,
		GL_REPLACEMENT_CODE_ARRAY_POINTER_SUN = 0x85C3,
		GL_R1UI_V3F_SUN = 0x85C4,
		GL_R1UI_C4UB_V3F_SUN = 0x85C5,
		GL_R1UI_C3F_V3F_SUN = 0x85C6,
		GL_R1UI_N3F_V3F_SUN = 0x85C7,
		GL_R1UI_C4F_N3F_V3F_SUN = 0x85C8,
		GL_R1UI_T2F_V3F_SUN = 0x85C9,
		GL_R1UI_T2F_N3F_V3F_SUN = 0x85CA,
		GL_R1UI_T2F_C4F_N3F_V3F_SUN = 0x85CB,
	};
	extern void (*glReplacementCodePointerSUN)(GLenum type, GLsizei stride, const void **pointer);
	extern void (*glReplacementCodeubSUN)(GLubyte code);
	extern void (*glReplacementCodeubvSUN)(const GLubyte *code);
	extern void (*glReplacementCodeuiSUN)(GLuint code);
	extern void (*glReplacementCodeuivSUN)(const GLuint *code);
	extern void (*glReplacementCodeusSUN)(GLushort code);
	extern void (*glReplacementCodeusvSUN)(const GLushort *code);
	#endif // GL_SUN_triangle_list
	
	#ifdef GL_SUN_vertex
	extern bool ext_GL_SUN_vertex;
	extern void (*glColor3fVertex3fSUN)(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glColor3fVertex3fvSUN)(const GLfloat *c, const GLfloat *v);
	extern void (*glColor4fNormal3fVertex3fSUN)(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glColor4fNormal3fVertex3fvSUN)(const GLfloat *c, const GLfloat *n, const GLfloat *v);
	extern void (*glColor4ubVertex2fSUN)(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y);
	extern void (*glColor4ubVertex2fvSUN)(const GLubyte *c, const GLfloat *v);
	extern void (*glColor4ubVertex3fSUN)(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glColor4ubVertex3fvSUN)(const GLubyte *c, const GLfloat *v);
	extern void (*glNormal3fVertex3fSUN)(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glNormal3fVertex3fvSUN)(const GLfloat *n, const GLfloat *v);
	extern void (*glReplacementCodeuiColor3fVertex3fSUN)(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glReplacementCodeuiColor3fVertex3fvSUN)(const GLuint *rc, const GLfloat *c, const GLfloat *v);
	extern void (*glReplacementCodeuiColor4fNormal3fVertex3fSUN)(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glReplacementCodeuiColor4fNormal3fVertex3fvSUN)(const GLuint *rc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
	extern void (*glReplacementCodeuiColor4ubVertex3fSUN)(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glReplacementCodeuiColor4ubVertex3fvSUN)(const GLuint *rc, const GLubyte *c, const GLfloat *v);
	extern void (*glReplacementCodeuiNormal3fVertex3fSUN)(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glReplacementCodeuiNormal3fVertex3fvSUN)(const GLuint *rc, const GLfloat *n, const GLfloat *v);
	extern void (*glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN)(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN)(const GLuint *rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
	extern void (*glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN)(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN)(const GLuint *rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v);
	extern void (*glReplacementCodeuiTexCoord2fVertex3fSUN)(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glReplacementCodeuiTexCoord2fVertex3fvSUN)(const GLuint *rc, const GLfloat *tc, const GLfloat *v);
	extern void (*glReplacementCodeuiVertex3fSUN)(GLuint rc, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glReplacementCodeuiVertex3fvSUN)(const GLuint *rc, const GLfloat *v);
	extern void (*glTexCoord2fColor3fVertex3fSUN)(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glTexCoord2fColor3fVertex3fvSUN)(const GLfloat *tc, const GLfloat *c, const GLfloat *v);
	extern void (*glTexCoord2fColor4fNormal3fVertex3fSUN)(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glTexCoord2fColor4fNormal3fVertex3fvSUN)(const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
	extern void (*glTexCoord2fColor4ubVertex3fSUN)(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glTexCoord2fColor4ubVertex3fvSUN)(const GLfloat *tc, const GLubyte *c, const GLfloat *v);
	extern void (*glTexCoord2fNormal3fVertex3fSUN)(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glTexCoord2fNormal3fVertex3fvSUN)(const GLfloat *tc, const GLfloat *n, const GLfloat *v);
	extern void (*glTexCoord2fVertex3fSUN)(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
	extern void (*glTexCoord2fVertex3fvSUN)(const GLfloat *tc, const GLfloat *v);
	extern void (*glTexCoord4fColor4fNormal3fVertex4fSUN)(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glTexCoord4fColor4fNormal3fVertex4fvSUN)(const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
	extern void (*glTexCoord4fVertex4fSUN)(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern void (*glTexCoord4fVertex4fvSUN)(const GLfloat *tc, const GLfloat *v);
	#endif // GL_SUN_vertex
	
	#ifdef GL_WIN_phong_shading
	extern bool ext_GL_WIN_phong_shading;
	enum {
		GL_PHONG_HINT_WIN = 0x80EB,
		GL_PHONG_WIN = 0x80EA,
	};
	#endif // GL_WIN_phong_shading
	
	#ifdef GL_WIN_specular_fog
	extern bool ext_GL_WIN_specular_fog;
	enum {
		GL_FOG_SPECULAR_TEXTURE_WIN = 0x80EC,
	};
	#endif // GL_WIN_specular_fog
	
}

#endif // _GL_CORE_3_3_
