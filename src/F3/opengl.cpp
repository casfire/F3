#include "opengl.hpp"
#include <stdexcept>

#ifdef _WIN32
	#define WIN32_LEAN_AND_MEAN 1
	#include <windows.h>
#else
	#include <dlfcn.h>
	#define HMODULE void*
	#define GetProcAddress dlsym
	#define FreeLibrary dlclose
#endif

namespace GL {
	
	void (*glActiveTexture)(GLenum texture) = nullptr;
	void (*glAttachShader)(GLuint program, GLuint shader) = nullptr;
	void (*glBeginConditionalRender)(GLuint id, GLenum mode) = nullptr;
	void (*glBeginQuery)(GLenum target, GLuint id) = nullptr;
	void (*glBeginTransformFeedback)(GLenum primitiveMode) = nullptr;
	void (*glBindAttribLocation)(GLuint program, GLuint index, const GLchar *name) = nullptr;
	void (*glBindBuffer)(GLenum target, GLuint buffer) = nullptr;
	void (*glBindBufferBase)(GLenum target, GLuint index, GLuint buffer) = nullptr;
	void (*glBindBufferRange)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) = nullptr;
	void (*glBindFragDataLocation)(GLuint program, GLuint color, const GLchar *name) = nullptr;
	void (*glBindFragDataLocationIndexed)(GLuint program, GLuint colorNumber, GLuint index, const GLchar *name) = nullptr;
	void (*glBindFramebuffer)(GLenum target, GLuint framebuffer) = nullptr;
	void (*glBindRenderbuffer)(GLenum target, GLuint renderbuffer) = nullptr;
	void (*glBindSampler)(GLuint unit, GLuint sampler) = nullptr;
	void (*glBindTexture)(GLenum target, GLuint texture) = nullptr;
	void (*glBindVertexArray)(GLuint array) = nullptr;
	void (*glBlendColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) = nullptr;
	void (*glBlendEquation)(GLenum mode) = nullptr;
	void (*glBlendEquationSeparate)(GLenum modeRGB, GLenum modeAlpha) = nullptr;
	void (*glBlendFunc)(GLenum sfactor, GLenum dfactor) = nullptr;
	void (*glBlendFuncSeparate)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) = nullptr;
	void (*glBlitFramebuffer)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) = nullptr;
	void (*glBufferData)(GLenum target, GLsizeiptr size, const void *data, GLenum usage) = nullptr;
	void (*glBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, const void *data) = nullptr;
	GLenum (*glCheckFramebufferStatus)(GLenum target) = nullptr;
	void (*glClampColor)(GLenum target, GLenum clamp) = nullptr;
	void (*glClear)(GLbitfield mask) = nullptr;
	void (*glClearBufferfi)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) = nullptr;
	void (*glClearBufferfv)(GLenum buffer, GLint drawbuffer, const GLfloat *value) = nullptr;
	void (*glClearBufferiv)(GLenum buffer, GLint drawbuffer, const GLint *value) = nullptr;
	void (*glClearBufferuiv)(GLenum buffer, GLint drawbuffer, const GLuint *value) = nullptr;
	void (*glClearColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) = nullptr;
	void (*glClearDepth)(GLdouble depth) = nullptr;
	void (*glClearStencil)(GLint s) = nullptr;
	GLenum (*glClientWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout) = nullptr;
	void (*glColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) = nullptr;
	void (*glColorMaski)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) = nullptr;
	void (*glCompileShader)(GLuint shader) = nullptr;
	void (*glCompressedTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data) = nullptr;
	void (*glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data) = nullptr;
	void (*glCompressedTexImage3D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data) = nullptr;
	void (*glCompressedTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data) = nullptr;
	void (*glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) = nullptr;
	void (*glCompressedTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) = nullptr;
	void (*glCopyBufferSubData)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) = nullptr;
	void (*glCopyTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) = nullptr;
	void (*glCopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) = nullptr;
	void (*glCopyTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) = nullptr;
	void (*glCopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	void (*glCopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	GLuint (*glCreateProgram)() = nullptr;
	GLuint (*glCreateShader)(GLenum type) = nullptr;
	void (*glCullFace)(GLenum mode) = nullptr;
	void (*glDeleteBuffers)(GLsizei n, const GLuint *buffers) = nullptr;
	void (*glDeleteFramebuffers)(GLsizei n, const GLuint *framebuffers) = nullptr;
	void (*glDeleteProgram)(GLuint program) = nullptr;
	void (*glDeleteQueries)(GLsizei n, const GLuint *ids) = nullptr;
	void (*glDeleteRenderbuffers)(GLsizei n, const GLuint *renderbuffers) = nullptr;
	void (*glDeleteSamplers)(GLsizei count, const GLuint *samplers) = nullptr;
	void (*glDeleteShader)(GLuint shader) = nullptr;
	void (*glDeleteSync)(GLsync sync) = nullptr;
	void (*glDeleteTextures)(GLsizei n, const GLuint *textures) = nullptr;
	void (*glDeleteVertexArrays)(GLsizei n, const GLuint *arrays) = nullptr;
	void (*glDepthFunc)(GLenum func) = nullptr;
	void (*glDepthMask)(GLboolean flag) = nullptr;
	void (*glDepthRange)(GLdouble near, GLdouble far) = nullptr;
	void (*glDetachShader)(GLuint program, GLuint shader) = nullptr;
	void (*glDisable)(GLenum cap) = nullptr;
	void (*glDisableVertexAttribArray)(GLuint index) = nullptr;
	void (*glDisablei)(GLenum target, GLuint index) = nullptr;
	void (*glDrawArrays)(GLenum mode, GLint first, GLsizei count) = nullptr;
	void (*glDrawArraysInstanced)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount) = nullptr;
	void (*glDrawBuffer)(GLenum buf) = nullptr;
	void (*glDrawBuffers)(GLsizei n, const GLenum *bufs) = nullptr;
	void (*glDrawElements)(GLenum mode, GLsizei count, GLenum type, const void *indices) = nullptr;
	void (*glDrawElementsBaseVertex)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex) = nullptr;
	void (*glDrawElementsInstanced)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount) = nullptr;
	void (*glDrawElementsInstancedBaseVertex)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex) = nullptr;
	void (*glDrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices) = nullptr;
	void (*glDrawRangeElementsBaseVertex)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex) = nullptr;
	void (*glEnable)(GLenum cap) = nullptr;
	void (*glEnableVertexAttribArray)(GLuint index) = nullptr;
	void (*glEnablei)(GLenum target, GLuint index) = nullptr;
	void (*glEndConditionalRender)() = nullptr;
	void (*glEndQuery)(GLenum target) = nullptr;
	void (*glEndTransformFeedback)() = nullptr;
	GLsync (*glFenceSync)(GLenum condition, GLbitfield flags) = nullptr;
	void (*glFinish)() = nullptr;
	void (*glFlush)() = nullptr;
	void (*glFlushMappedBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length) = nullptr;
	void (*glFramebufferRenderbuffer)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) = nullptr;
	void (*glFramebufferTexture)(GLenum target, GLenum attachment, GLuint texture, GLint level) = nullptr;
	void (*glFramebufferTexture1D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) = nullptr;
	void (*glFramebufferTexture2D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) = nullptr;
	void (*glFramebufferTexture3D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) = nullptr;
	void (*glFramebufferTextureLayer)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) = nullptr;
	void (*glFrontFace)(GLenum mode) = nullptr;
	void (*glGenBuffers)(GLsizei n, GLuint *buffers) = nullptr;
	void (*glGenFramebuffers)(GLsizei n, GLuint *framebuffers) = nullptr;
	void (*glGenQueries)(GLsizei n, GLuint *ids) = nullptr;
	void (*glGenRenderbuffers)(GLsizei n, GLuint *renderbuffers) = nullptr;
	void (*glGenSamplers)(GLsizei count, GLuint *samplers) = nullptr;
	void (*glGenTextures)(GLsizei n, GLuint *textures) = nullptr;
	void (*glGenVertexArrays)(GLsizei n, GLuint *arrays) = nullptr;
	void (*glGenerateMipmap)(GLenum target) = nullptr;
	void (*glGetActiveAttrib)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) = nullptr;
	void (*glGetActiveUniform)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) = nullptr;
	void (*glGetActiveUniformBlockName)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName) = nullptr;
	void (*glGetActiveUniformBlockiv)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params) = nullptr;
	void (*glGetActiveUniformName)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName) = nullptr;
	void (*glGetActiveUniformsiv)(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params) = nullptr;
	void (*glGetAttachedShaders)(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders) = nullptr;
	GLint (*glGetAttribLocation)(GLuint program, const GLchar *name) = nullptr;
	void (*glGetBooleani_v)(GLenum target, GLuint index, GLboolean *data) = nullptr;
	void (*glGetBooleanv)(GLenum pname, GLboolean *data) = nullptr;
	void (*glGetBufferParameteri64v)(GLenum target, GLenum pname, GLint64 *params) = nullptr;
	void (*glGetBufferParameteriv)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetBufferPointerv)(GLenum target, GLenum pname, void **params) = nullptr;
	void (*glGetBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, void *data) = nullptr;
	void (*glGetCompressedTexImage)(GLenum target, GLint level, void *img) = nullptr;
	void (*glGetDoublev)(GLenum pname, GLdouble *data) = nullptr;
	GLenum (*glGetError)() = nullptr;
	void (*glGetFloatv)(GLenum pname, GLfloat *data) = nullptr;
	GLint (*glGetFragDataIndex)(GLuint program, const GLchar *name) = nullptr;
	GLint (*glGetFragDataLocation)(GLuint program, const GLchar *name) = nullptr;
	void (*glGetFramebufferAttachmentParameteriv)(GLenum target, GLenum attachment, GLenum pname, GLint *params) = nullptr;
	void (*glGetInteger64i_v)(GLenum target, GLuint index, GLint64 *data) = nullptr;
	void (*glGetInteger64v)(GLenum pname, GLint64 *data) = nullptr;
	void (*glGetIntegeri_v)(GLenum target, GLuint index, GLint *data) = nullptr;
	void (*glGetIntegerv)(GLenum pname, GLint *data) = nullptr;
	void (*glGetMultisamplefv)(GLenum pname, GLuint index, GLfloat *val) = nullptr;
	void (*glGetProgramInfoLog)(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog) = nullptr;
	void (*glGetProgramiv)(GLuint program, GLenum pname, GLint *params) = nullptr;
	void (*glGetQueryObjecti64v)(GLuint id, GLenum pname, GLint64 *params) = nullptr;
	void (*glGetQueryObjectiv)(GLuint id, GLenum pname, GLint *params) = nullptr;
	void (*glGetQueryObjectui64v)(GLuint id, GLenum pname, GLuint64 *params) = nullptr;
	void (*glGetQueryObjectuiv)(GLuint id, GLenum pname, GLuint *params) = nullptr;
	void (*glGetQueryiv)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetRenderbufferParameteriv)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetSamplerParameterIiv)(GLuint sampler, GLenum pname, GLint *params) = nullptr;
	void (*glGetSamplerParameterIuiv)(GLuint sampler, GLenum pname, GLuint *params) = nullptr;
	void (*glGetSamplerParameterfv)(GLuint sampler, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetSamplerParameteriv)(GLuint sampler, GLenum pname, GLint *params) = nullptr;
	void (*glGetShaderInfoLog)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog) = nullptr;
	void (*glGetShaderSource)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source) = nullptr;
	void (*glGetShaderiv)(GLuint shader, GLenum pname, GLint *params) = nullptr;
	const GLubyte *(*glGetString)(GLenum name) = nullptr;
	const GLubyte *(*glGetStringi)(GLenum name, GLuint index) = nullptr;
	void (*glGetSynciv)(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values) = nullptr;
	void (*glGetTexImage)(GLenum target, GLint level, GLenum format, GLenum type, void *pixels) = nullptr;
	void (*glGetTexLevelParameterfv)(GLenum target, GLint level, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetTexLevelParameteriv)(GLenum target, GLint level, GLenum pname, GLint *params) = nullptr;
	void (*glGetTexParameterIiv)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetTexParameterIuiv)(GLenum target, GLenum pname, GLuint *params) = nullptr;
	void (*glGetTexParameterfv)(GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetTexParameteriv)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetTransformFeedbackVarying)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) = nullptr;
	GLuint (*glGetUniformBlockIndex)(GLuint program, const GLchar *uniformBlockName) = nullptr;
	void (*glGetUniformIndices)(GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices) = nullptr;
	GLint (*glGetUniformLocation)(GLuint program, const GLchar *name) = nullptr;
	void (*glGetUniformfv)(GLuint program, GLint location, GLfloat *params) = nullptr;
	void (*glGetUniformiv)(GLuint program, GLint location, GLint *params) = nullptr;
	void (*glGetUniformuiv)(GLuint program, GLint location, GLuint *params) = nullptr;
	void (*glGetVertexAttribIiv)(GLuint index, GLenum pname, GLint *params) = nullptr;
	void (*glGetVertexAttribIuiv)(GLuint index, GLenum pname, GLuint *params) = nullptr;
	void (*glGetVertexAttribPointerv)(GLuint index, GLenum pname, void **pointer) = nullptr;
	void (*glGetVertexAttribdv)(GLuint index, GLenum pname, GLdouble *params) = nullptr;
	void (*glGetVertexAttribfv)(GLuint index, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetVertexAttribiv)(GLuint index, GLenum pname, GLint *params) = nullptr;
	void (*glHint)(GLenum target, GLenum mode) = nullptr;
	GLboolean (*glIsBuffer)(GLuint buffer) = nullptr;
	GLboolean (*glIsEnabled)(GLenum cap) = nullptr;
	GLboolean (*glIsEnabledi)(GLenum target, GLuint index) = nullptr;
	GLboolean (*glIsFramebuffer)(GLuint framebuffer) = nullptr;
	GLboolean (*glIsProgram)(GLuint program) = nullptr;
	GLboolean (*glIsQuery)(GLuint id) = nullptr;
	GLboolean (*glIsRenderbuffer)(GLuint renderbuffer) = nullptr;
	GLboolean (*glIsSampler)(GLuint sampler) = nullptr;
	GLboolean (*glIsShader)(GLuint shader) = nullptr;
	GLboolean (*glIsSync)(GLsync sync) = nullptr;
	GLboolean (*glIsTexture)(GLuint texture) = nullptr;
	GLboolean (*glIsVertexArray)(GLuint array) = nullptr;
	void (*glLineWidth)(GLfloat width) = nullptr;
	void (*glLinkProgram)(GLuint program) = nullptr;
	void (*glLogicOp)(GLenum opcode) = nullptr;
	void *(*glMapBuffer)(GLenum target, GLenum access) = nullptr;
	void *(*glMapBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) = nullptr;
	void (*glMultiDrawArrays)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount) = nullptr;
	void (*glMultiDrawElements)(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount) = nullptr;
	void (*glMultiDrawElementsBaseVertex)(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex) = nullptr;
	void (*glPixelStoref)(GLenum pname, GLfloat param) = nullptr;
	void (*glPixelStorei)(GLenum pname, GLint param) = nullptr;
	void (*glPointParameterf)(GLenum pname, GLfloat param) = nullptr;
	void (*glPointParameterfv)(GLenum pname, const GLfloat *params) = nullptr;
	void (*glPointParameteri)(GLenum pname, GLint param) = nullptr;
	void (*glPointParameteriv)(GLenum pname, const GLint *params) = nullptr;
	void (*glPointSize)(GLfloat size) = nullptr;
	void (*glPolygonMode)(GLenum face, GLenum mode) = nullptr;
	void (*glPolygonOffset)(GLfloat factor, GLfloat units) = nullptr;
	void (*glPrimitiveRestartIndex)(GLuint index) = nullptr;
	void (*glProvokingVertex)(GLenum mode) = nullptr;
	void (*glQueryCounter)(GLuint id, GLenum target) = nullptr;
	void (*glReadBuffer)(GLenum src) = nullptr;
	void (*glReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels) = nullptr;
	void (*glRenderbufferStorage)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	void (*glRenderbufferStorageMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	void (*glSampleCoverage)(GLfloat value, GLboolean invert) = nullptr;
	void (*glSampleMaski)(GLuint maskNumber, GLbitfield mask) = nullptr;
	void (*glSamplerParameterIiv)(GLuint sampler, GLenum pname, const GLint *param) = nullptr;
	void (*glSamplerParameterIuiv)(GLuint sampler, GLenum pname, const GLuint *param) = nullptr;
	void (*glSamplerParameterf)(GLuint sampler, GLenum pname, GLfloat param) = nullptr;
	void (*glSamplerParameterfv)(GLuint sampler, GLenum pname, const GLfloat *param) = nullptr;
	void (*glSamplerParameteri)(GLuint sampler, GLenum pname, GLint param) = nullptr;
	void (*glSamplerParameteriv)(GLuint sampler, GLenum pname, const GLint *param) = nullptr;
	void (*glScissor)(GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	void (*glShaderSource)(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length) = nullptr;
	void (*glStencilFunc)(GLenum func, GLint ref, GLuint mask) = nullptr;
	void (*glStencilFuncSeparate)(GLenum face, GLenum func, GLint ref, GLuint mask) = nullptr;
	void (*glStencilMask)(GLuint mask) = nullptr;
	void (*glStencilMaskSeparate)(GLenum face, GLuint mask) = nullptr;
	void (*glStencilOp)(GLenum fail, GLenum zfail, GLenum zpass) = nullptr;
	void (*glStencilOpSeparate)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) = nullptr;
	void (*glTexBuffer)(GLenum target, GLenum internalformat, GLuint buffer) = nullptr;
	void (*glTexImage1D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTexImage2D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTexImage2DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) = nullptr;
	void (*glTexImage3D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTexImage3DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) = nullptr;
	void (*glTexParameterIiv)(GLenum target, GLenum pname, const GLint *params) = nullptr;
	void (*glTexParameterIuiv)(GLenum target, GLenum pname, const GLuint *params) = nullptr;
	void (*glTexParameterf)(GLenum target, GLenum pname, GLfloat param) = nullptr;
	void (*glTexParameterfv)(GLenum target, GLenum pname, const GLfloat *params) = nullptr;
	void (*glTexParameteri)(GLenum target, GLenum pname, GLint param) = nullptr;
	void (*glTexParameteriv)(GLenum target, GLenum pname, const GLint *params) = nullptr;
	void (*glTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTransformFeedbackVaryings)(GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode) = nullptr;
	void (*glUniform1f)(GLint location, GLfloat v0) = nullptr;
	void (*glUniform1fv)(GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glUniform1i)(GLint location, GLint v0) = nullptr;
	void (*glUniform1iv)(GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glUniform1ui)(GLint location, GLuint v0) = nullptr;
	void (*glUniform1uiv)(GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glUniform2f)(GLint location, GLfloat v0, GLfloat v1) = nullptr;
	void (*glUniform2fv)(GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glUniform2i)(GLint location, GLint v0, GLint v1) = nullptr;
	void (*glUniform2iv)(GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glUniform2ui)(GLint location, GLuint v0, GLuint v1) = nullptr;
	void (*glUniform2uiv)(GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glUniform3f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) = nullptr;
	void (*glUniform3fv)(GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glUniform3i)(GLint location, GLint v0, GLint v1, GLint v2) = nullptr;
	void (*glUniform3iv)(GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glUniform3ui)(GLint location, GLuint v0, GLuint v1, GLuint v2) = nullptr;
	void (*glUniform3uiv)(GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glUniform4f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) = nullptr;
	void (*glUniform4fv)(GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glUniform4i)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) = nullptr;
	void (*glUniform4iv)(GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glUniform4ui)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) = nullptr;
	void (*glUniform4uiv)(GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glUniformBlockBinding)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) = nullptr;
	void (*glUniformMatrix2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glUniformMatrix2x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glUniformMatrix2x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glUniformMatrix3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glUniformMatrix3x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glUniformMatrix3x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glUniformMatrix4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glUniformMatrix4x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glUniformMatrix4x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	GLboolean (*glUnmapBuffer)(GLenum target) = nullptr;
	void (*glUseProgram)(GLuint program) = nullptr;
	void (*glValidateProgram)(GLuint program) = nullptr;
	void (*glVertexAttrib1d)(GLuint index, GLdouble x) = nullptr;
	void (*glVertexAttrib1dv)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib1f)(GLuint index, GLfloat x) = nullptr;
	void (*glVertexAttrib1fv)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib1s)(GLuint index, GLshort x) = nullptr;
	void (*glVertexAttrib1sv)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib2d)(GLuint index, GLdouble x, GLdouble y) = nullptr;
	void (*glVertexAttrib2dv)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib2f)(GLuint index, GLfloat x, GLfloat y) = nullptr;
	void (*glVertexAttrib2fv)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib2s)(GLuint index, GLshort x, GLshort y) = nullptr;
	void (*glVertexAttrib2sv)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z) = nullptr;
	void (*glVertexAttrib3dv)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib3f)(GLuint index, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glVertexAttrib3fv)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib3s)(GLuint index, GLshort x, GLshort y, GLshort z) = nullptr;
	void (*glVertexAttrib3sv)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib4Nbv)(GLuint index, const GLbyte *v) = nullptr;
	void (*glVertexAttrib4Niv)(GLuint index, const GLint *v) = nullptr;
	void (*glVertexAttrib4Nsv)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib4Nub)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) = nullptr;
	void (*glVertexAttrib4Nubv)(GLuint index, const GLubyte *v) = nullptr;
	void (*glVertexAttrib4Nuiv)(GLuint index, const GLuint *v) = nullptr;
	void (*glVertexAttrib4Nusv)(GLuint index, const GLushort *v) = nullptr;
	void (*glVertexAttrib4bv)(GLuint index, const GLbyte *v) = nullptr;
	void (*glVertexAttrib4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glVertexAttrib4dv)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib4f)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	void (*glVertexAttrib4fv)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib4iv)(GLuint index, const GLint *v) = nullptr;
	void (*glVertexAttrib4s)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) = nullptr;
	void (*glVertexAttrib4sv)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib4ubv)(GLuint index, const GLubyte *v) = nullptr;
	void (*glVertexAttrib4uiv)(GLuint index, const GLuint *v) = nullptr;
	void (*glVertexAttrib4usv)(GLuint index, const GLushort *v) = nullptr;
	void (*glVertexAttribDivisor)(GLuint index, GLuint divisor) = nullptr;
	void (*glVertexAttribI1i)(GLuint index, GLint x) = nullptr;
	void (*glVertexAttribI1iv)(GLuint index, const GLint *v) = nullptr;
	void (*glVertexAttribI1ui)(GLuint index, GLuint x) = nullptr;
	void (*glVertexAttribI1uiv)(GLuint index, const GLuint *v) = nullptr;
	void (*glVertexAttribI2i)(GLuint index, GLint x, GLint y) = nullptr;
	void (*glVertexAttribI2iv)(GLuint index, const GLint *v) = nullptr;
	void (*glVertexAttribI2ui)(GLuint index, GLuint x, GLuint y) = nullptr;
	void (*glVertexAttribI2uiv)(GLuint index, const GLuint *v) = nullptr;
	void (*glVertexAttribI3i)(GLuint index, GLint x, GLint y, GLint z) = nullptr;
	void (*glVertexAttribI3iv)(GLuint index, const GLint *v) = nullptr;
	void (*glVertexAttribI3ui)(GLuint index, GLuint x, GLuint y, GLuint z) = nullptr;
	void (*glVertexAttribI3uiv)(GLuint index, const GLuint *v) = nullptr;
	void (*glVertexAttribI4bv)(GLuint index, const GLbyte *v) = nullptr;
	void (*glVertexAttribI4i)(GLuint index, GLint x, GLint y, GLint z, GLint w) = nullptr;
	void (*glVertexAttribI4iv)(GLuint index, const GLint *v) = nullptr;
	void (*glVertexAttribI4sv)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttribI4ubv)(GLuint index, const GLubyte *v) = nullptr;
	void (*glVertexAttribI4ui)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) = nullptr;
	void (*glVertexAttribI4uiv)(GLuint index, const GLuint *v) = nullptr;
	void (*glVertexAttribI4usv)(GLuint index, const GLushort *v) = nullptr;
	void (*glVertexAttribIPointer)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) = nullptr;
	void (*glVertexAttribP1ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) = nullptr;
	void (*glVertexAttribP1uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value) = nullptr;
	void (*glVertexAttribP2ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) = nullptr;
	void (*glVertexAttribP2uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value) = nullptr;
	void (*glVertexAttribP3ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) = nullptr;
	void (*glVertexAttribP3uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value) = nullptr;
	void (*glVertexAttribP4ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) = nullptr;
	void (*glVertexAttribP4uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint *value) = nullptr;
	void (*glVertexAttribPointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer) = nullptr;
	void (*glViewport)(GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	void (*glWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout) = nullptr;
	
	#ifdef GL_3DFX_multisample
	bool ext_GL_3DFX_multisample = false;
	#endif // GL_3DFX_multisample
	#ifdef GL_3DFX_tbuffer
	bool ext_GL_3DFX_tbuffer = false;
	void (*glTbufferMask3DFX)(GLuint mask) = nullptr;
	#endif // GL_3DFX_tbuffer
	#ifdef GL_3DFX_texture_compression_FXT1
	bool ext_GL_3DFX_texture_compression_FXT1 = false;
	#endif // GL_3DFX_texture_compression_FXT1
	#ifdef GL_AMD_blend_minmax_factor
	bool ext_GL_AMD_blend_minmax_factor = false;
	#endif // GL_AMD_blend_minmax_factor
	#ifdef GL_AMD_debug_output
	bool ext_GL_AMD_debug_output = false;
	void (*glDebugMessageCallbackAMD)(GLDEBUGPROCAMD callback, void *userParam) = nullptr;
	void (*glDebugMessageEnableAMD)(GLenum category, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) = nullptr;
	void (*glDebugMessageInsertAMD)(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar *buf) = nullptr;
	GLuint (*glGetDebugMessageLogAMD)(GLuint count, GLsizei bufsize, GLenum *categories, GLuint *severities, GLuint *ids, GLsizei *lengths, GLchar *message) = nullptr;
	#endif // GL_AMD_debug_output
	#ifdef GL_AMD_depth_clamp_separate
	bool ext_GL_AMD_depth_clamp_separate = false;
	#endif // GL_AMD_depth_clamp_separate
	#ifdef GL_AMD_draw_buffers_blend
	bool ext_GL_AMD_draw_buffers_blend = false;
	void (*glBlendEquationIndexedAMD)(GLuint buf, GLenum mode) = nullptr;
	void (*glBlendEquationSeparateIndexedAMD)(GLuint buf, GLenum modeRGB, GLenum modeAlpha) = nullptr;
	void (*glBlendFuncIndexedAMD)(GLuint buf, GLenum src, GLenum dst) = nullptr;
	void (*glBlendFuncSeparateIndexedAMD)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) = nullptr;
	#endif // GL_AMD_draw_buffers_blend
	#ifdef GL_AMD_gpu_shader_int64
	bool ext_GL_AMD_gpu_shader_int64 = false;
	void (*glGetUniformi64vNV)(GLuint program, GLint location, GLint64EXT *params) = nullptr;
	void (*glGetUniformui64vNV)(GLuint program, GLint location, GLuint64EXT *params) = nullptr;
	void (*glProgramUniform1i64NV)(GLuint program, GLint location, GLint64EXT x) = nullptr;
	void (*glProgramUniform1i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glProgramUniform1ui64NV)(GLuint program, GLint location, GLuint64EXT x) = nullptr;
	void (*glProgramUniform1ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	void (*glProgramUniform2i64NV)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y) = nullptr;
	void (*glProgramUniform2i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glProgramUniform2ui64NV)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y) = nullptr;
	void (*glProgramUniform2ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	void (*glProgramUniform3i64NV)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) = nullptr;
	void (*glProgramUniform3i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glProgramUniform3ui64NV)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) = nullptr;
	void (*glProgramUniform3ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	void (*glProgramUniform4i64NV)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) = nullptr;
	void (*glProgramUniform4i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glProgramUniform4ui64NV)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) = nullptr;
	void (*glProgramUniform4ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	void (*glUniform1i64NV)(GLint location, GLint64EXT x) = nullptr;
	void (*glUniform1i64vNV)(GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glUniform1ui64NV)(GLint location, GLuint64EXT x) = nullptr;
	void (*glUniform1ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	void (*glUniform2i64NV)(GLint location, GLint64EXT x, GLint64EXT y) = nullptr;
	void (*glUniform2i64vNV)(GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glUniform2ui64NV)(GLint location, GLuint64EXT x, GLuint64EXT y) = nullptr;
	void (*glUniform2ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	void (*glUniform3i64NV)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) = nullptr;
	void (*glUniform3i64vNV)(GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glUniform3ui64NV)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) = nullptr;
	void (*glUniform3ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	void (*glUniform4i64NV)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) = nullptr;
	void (*glUniform4i64vNV)(GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glUniform4ui64NV)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) = nullptr;
	void (*glUniform4ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	#endif // GL_AMD_gpu_shader_int64
	#ifdef GL_AMD_interleaved_elements
	bool ext_GL_AMD_interleaved_elements = false;
	void (*glVertexAttribParameteriAMD)(GLuint index, GLenum pname, GLint param) = nullptr;
	#endif // GL_AMD_interleaved_elements
	#ifdef GL_AMD_multi_draw_indirect
	bool ext_GL_AMD_multi_draw_indirect = false;
	void (*glMultiDrawArraysIndirectAMD)(GLenum mode, const void *indirect, GLsizei primcount, GLsizei stride) = nullptr;
	void (*glMultiDrawElementsIndirectAMD)(GLenum mode, GLenum type, const void *indirect, GLsizei primcount, GLsizei stride) = nullptr;
	#endif // GL_AMD_multi_draw_indirect
	#ifdef GL_AMD_name_gen_delete
	bool ext_GL_AMD_name_gen_delete = false;
	void (*glDeleteNamesAMD)(GLenum identifier, GLuint num, const GLuint *names) = nullptr;
	void (*glGenNamesAMD)(GLenum identifier, GLuint num, GLuint *names) = nullptr;
	GLboolean (*glIsNameAMD)(GLenum identifier, GLuint name) = nullptr;
	#endif // GL_AMD_name_gen_delete
	#ifdef GL_AMD_occlusion_query_event
	bool ext_GL_AMD_occlusion_query_event = false;
	void (*glQueryObjectParameteruiAMD)(GLenum target, GLuint id, GLenum pname, GLuint param) = nullptr;
	#endif // GL_AMD_occlusion_query_event
	#ifdef GL_AMD_performance_monitor
	bool ext_GL_AMD_performance_monitor = false;
	void (*glBeginPerfMonitorAMD)(GLuint monitor) = nullptr;
	void (*glDeletePerfMonitorsAMD)(GLsizei n, GLuint *monitors) = nullptr;
	void (*glEndPerfMonitorAMD)(GLuint monitor) = nullptr;
	void (*glGenPerfMonitorsAMD)(GLsizei n, GLuint *monitors) = nullptr;
	void (*glGetPerfMonitorCounterDataAMD)(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten) = nullptr;
	void (*glGetPerfMonitorCounterInfoAMD)(GLuint group, GLuint counter, GLenum pname, void *data) = nullptr;
	void (*glGetPerfMonitorCounterStringAMD)(GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString) = nullptr;
	void (*glGetPerfMonitorCountersAMD)(GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters) = nullptr;
	void (*glGetPerfMonitorGroupStringAMD)(GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString) = nullptr;
	void (*glGetPerfMonitorGroupsAMD)(GLint *numGroups, GLsizei groupsSize, GLuint *groups) = nullptr;
	void (*glSelectPerfMonitorCountersAMD)(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList) = nullptr;
	#endif // GL_AMD_performance_monitor
	#ifdef GL_AMD_pinned_memory
	bool ext_GL_AMD_pinned_memory = false;
	#endif // GL_AMD_pinned_memory
	#ifdef GL_AMD_query_buffer_object
	bool ext_GL_AMD_query_buffer_object = false;
	#endif // GL_AMD_query_buffer_object
	#ifdef GL_AMD_sample_positions
	bool ext_GL_AMD_sample_positions = false;
	void (*glSetMultisamplefvAMD)(GLenum pname, GLuint index, const GLfloat *val) = nullptr;
	#endif // GL_AMD_sample_positions
	#ifdef GL_AMD_sparse_texture
	bool ext_GL_AMD_sparse_texture = false;
	void (*glTexStorageSparseAMD)(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags) = nullptr;
	void (*glTextureStorageSparseAMD)(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags) = nullptr;
	#endif // GL_AMD_sparse_texture
	#ifdef GL_AMD_stencil_operation_extended
	bool ext_GL_AMD_stencil_operation_extended = false;
	void (*glStencilOpValueAMD)(GLenum face, GLuint value) = nullptr;
	#endif // GL_AMD_stencil_operation_extended
	#ifdef GL_AMD_transform_feedback4
	bool ext_GL_AMD_transform_feedback4 = false;
	#endif // GL_AMD_transform_feedback4
	#ifdef GL_AMD_vertex_shader_tessellator
	bool ext_GL_AMD_vertex_shader_tessellator = false;
	void (*glTessellationFactorAMD)(GLfloat factor) = nullptr;
	void (*glTessellationModeAMD)(GLenum mode) = nullptr;
	#endif // GL_AMD_vertex_shader_tessellator
	#ifdef GL_APPLE_aux_depth_stencil
	bool ext_GL_APPLE_aux_depth_stencil = false;
	#endif // GL_APPLE_aux_depth_stencil
	#ifdef GL_APPLE_client_storage
	bool ext_GL_APPLE_client_storage = false;
	#endif // GL_APPLE_client_storage
	#ifdef GL_APPLE_element_array
	bool ext_GL_APPLE_element_array = false;
	void (*glDrawElementArrayAPPLE)(GLenum mode, GLint first, GLsizei count) = nullptr;
	void (*glDrawRangeElementArrayAPPLE)(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count) = nullptr;
	void (*glElementPointerAPPLE)(GLenum type, const void *pointer) = nullptr;
	void (*glMultiDrawElementArrayAPPLE)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount) = nullptr;
	void (*glMultiDrawRangeElementArrayAPPLE)(GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount) = nullptr;
	#endif // GL_APPLE_element_array
	#ifdef GL_APPLE_fence
	bool ext_GL_APPLE_fence = false;
	void (*glDeleteFencesAPPLE)(GLsizei n, const GLuint *fences) = nullptr;
	void (*glFinishFenceAPPLE)(GLuint fence) = nullptr;
	void (*glFinishObjectAPPLE)(GLenum object, GLint name) = nullptr;
	void (*glGenFencesAPPLE)(GLsizei n, GLuint *fences) = nullptr;
	GLboolean (*glIsFenceAPPLE)(GLuint fence) = nullptr;
	void (*glSetFenceAPPLE)(GLuint fence) = nullptr;
	GLboolean (*glTestFenceAPPLE)(GLuint fence) = nullptr;
	GLboolean (*glTestObjectAPPLE)(GLenum object, GLuint name) = nullptr;
	#endif // GL_APPLE_fence
	#ifdef GL_APPLE_float_pixels
	bool ext_GL_APPLE_float_pixels = false;
	#endif // GL_APPLE_float_pixels
	#ifdef GL_APPLE_flush_buffer_range
	bool ext_GL_APPLE_flush_buffer_range = false;
	void (*glBufferParameteriAPPLE)(GLenum target, GLenum pname, GLint param) = nullptr;
	void (*glFlushMappedBufferRangeAPPLE)(GLenum target, GLintptr offset, GLsizeiptr size) = nullptr;
	#endif // GL_APPLE_flush_buffer_range
	#ifdef GL_APPLE_object_purgeable
	bool ext_GL_APPLE_object_purgeable = false;
	void (*glGetObjectParameterivAPPLE)(GLenum objectType, GLuint name, GLenum pname, GLint *params) = nullptr;
	GLenum (*glObjectPurgeableAPPLE)(GLenum objectType, GLuint name, GLenum option) = nullptr;
	GLenum (*glObjectUnpurgeableAPPLE)(GLenum objectType, GLuint name, GLenum option) = nullptr;
	#endif // GL_APPLE_object_purgeable
	#ifdef GL_APPLE_rgb_422
	bool ext_GL_APPLE_rgb_422 = false;
	#endif // GL_APPLE_rgb_422
	#ifdef GL_APPLE_row_bytes
	bool ext_GL_APPLE_row_bytes = false;
	#endif // GL_APPLE_row_bytes
	#ifdef GL_APPLE_specular_vector
	bool ext_GL_APPLE_specular_vector = false;
	#endif // GL_APPLE_specular_vector
	#ifdef GL_APPLE_texture_range
	bool ext_GL_APPLE_texture_range = false;
	void (*glGetTexParameterPointervAPPLE)(GLenum target, GLenum pname, void **params) = nullptr;
	void (*glTextureRangeAPPLE)(GLenum target, GLsizei length, const void *pointer) = nullptr;
	#endif // GL_APPLE_texture_range
	#ifdef GL_APPLE_transform_hint
	bool ext_GL_APPLE_transform_hint = false;
	#endif // GL_APPLE_transform_hint
	#ifdef GL_APPLE_vertex_array_object
	bool ext_GL_APPLE_vertex_array_object = false;
	void (*glBindVertexArrayAPPLE)(GLuint array) = nullptr;
	void (*glDeleteVertexArraysAPPLE)(GLsizei n, const GLuint *arrays) = nullptr;
	void (*glGenVertexArraysAPPLE)(GLsizei n, GLuint *arrays) = nullptr;
	GLboolean (*glIsVertexArrayAPPLE)(GLuint array) = nullptr;
	#endif // GL_APPLE_vertex_array_object
	#ifdef GL_APPLE_vertex_array_range
	bool ext_GL_APPLE_vertex_array_range = false;
	void (*glFlushVertexArrayRangeAPPLE)(GLsizei length, void *pointer) = nullptr;
	void (*glVertexArrayParameteriAPPLE)(GLenum pname, GLint param) = nullptr;
	void (*glVertexArrayRangeAPPLE)(GLsizei length, void *pointer) = nullptr;
	#endif // GL_APPLE_vertex_array_range
	#ifdef GL_APPLE_vertex_program_evaluators
	bool ext_GL_APPLE_vertex_program_evaluators = false;
	void (*glDisableVertexAttribAPPLE)(GLuint index, GLenum pname) = nullptr;
	void (*glEnableVertexAttribAPPLE)(GLuint index, GLenum pname) = nullptr;
	GLboolean (*glIsVertexAttribEnabledAPPLE)(GLuint index, GLenum pname) = nullptr;
	void (*glMapVertexAttrib1dAPPLE)(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points) = nullptr;
	void (*glMapVertexAttrib1fAPPLE)(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points) = nullptr;
	void (*glMapVertexAttrib2dAPPLE)(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points) = nullptr;
	void (*glMapVertexAttrib2fAPPLE)(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points) = nullptr;
	#endif // GL_APPLE_vertex_program_evaluators
	#ifdef GL_APPLE_ycbcr_422
	bool ext_GL_APPLE_ycbcr_422 = false;
	#endif // GL_APPLE_ycbcr_422
	#ifdef GL_ARB_ES2_compatibility
	bool ext_GL_ARB_ES2_compatibility = false;
	void (*glClearDepthf)(GLfloat d) = nullptr;
	void (*glDepthRangef)(GLfloat n, GLfloat f) = nullptr;
	void (*glGetShaderPrecisionFormat)(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision) = nullptr;
	void (*glReleaseShaderCompiler)() = nullptr;
	void (*glShaderBinary)(GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length) = nullptr;
	#endif // GL_ARB_ES2_compatibility
	#ifdef GL_ARB_ES3_1_compatibility
	bool ext_GL_ARB_ES3_1_compatibility = false;
	void (*glMemoryBarrierByRegion)(GLbitfield barriers) = nullptr;
	#endif // GL_ARB_ES3_1_compatibility
	#ifdef GL_ARB_ES3_2_compatibility
	bool ext_GL_ARB_ES3_2_compatibility = false;
	void (*glPrimitiveBoundingBoxARB)(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW) = nullptr;
	#endif // GL_ARB_ES3_2_compatibility
	#ifdef GL_ARB_ES3_compatibility
	bool ext_GL_ARB_ES3_compatibility = false;
	#endif // GL_ARB_ES3_compatibility
	#ifdef GL_ARB_base_instance
	bool ext_GL_ARB_base_instance = false;
	void (*glDrawArraysInstancedBaseInstance)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance) = nullptr;
	void (*glDrawElementsInstancedBaseInstance)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance) = nullptr;
	void (*glDrawElementsInstancedBaseVertexBaseInstance)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance) = nullptr;
	#endif // GL_ARB_base_instance
	#ifdef GL_ARB_bindless_texture
	bool ext_GL_ARB_bindless_texture = false;
	GLuint64 (*glGetImageHandleARB)(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format) = nullptr;
	GLuint64 (*glGetTextureHandleARB)(GLuint texture) = nullptr;
	GLuint64 (*glGetTextureSamplerHandleARB)(GLuint texture, GLuint sampler) = nullptr;
	void (*glGetVertexAttribLui64vARB)(GLuint index, GLenum pname, GLuint64EXT *params) = nullptr;
	GLboolean (*glIsImageHandleResidentARB)(GLuint64 handle) = nullptr;
	GLboolean (*glIsTextureHandleResidentARB)(GLuint64 handle) = nullptr;
	void (*glMakeImageHandleNonResidentARB)(GLuint64 handle) = nullptr;
	void (*glMakeImageHandleResidentARB)(GLuint64 handle, GLenum access) = nullptr;
	void (*glMakeTextureHandleNonResidentARB)(GLuint64 handle) = nullptr;
	void (*glMakeTextureHandleResidentARB)(GLuint64 handle) = nullptr;
	void (*glProgramUniformHandleui64ARB)(GLuint program, GLint location, GLuint64 value) = nullptr;
	void (*glProgramUniformHandleui64vARB)(GLuint program, GLint location, GLsizei count, const GLuint64 *values) = nullptr;
	void (*glUniformHandleui64ARB)(GLint location, GLuint64 value) = nullptr;
	void (*glUniformHandleui64vARB)(GLint location, GLsizei count, const GLuint64 *value) = nullptr;
	void (*glVertexAttribL1ui64ARB)(GLuint index, GLuint64EXT x) = nullptr;
	void (*glVertexAttribL1ui64vARB)(GLuint index, const GLuint64EXT *v) = nullptr;
	#endif // GL_ARB_bindless_texture
	#ifdef GL_ARB_buffer_storage
	bool ext_GL_ARB_buffer_storage = false;
	void (*glBufferStorage)(GLenum target, GLsizeiptr size, const void *data, GLbitfield flags) = nullptr;
	#endif // GL_ARB_buffer_storage
	#ifdef GL_ARB_cl_event
	bool ext_GL_ARB_cl_event = false;
	GLsync (*glCreateSyncFromCLeventARB)(struct _cl_context *context, struct _cl_event *event, GLbitfield flags) = nullptr;
	#endif // GL_ARB_cl_event
	#ifdef GL_ARB_clear_buffer_object
	bool ext_GL_ARB_clear_buffer_object = false;
	void (*glClearBufferData)(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data) = nullptr;
	void (*glClearBufferSubData)(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) = nullptr;
	#endif // GL_ARB_clear_buffer_object
	#ifdef GL_ARB_clear_texture
	bool ext_GL_ARB_clear_texture = false;
	void (*glClearTexImage)(GLuint texture, GLint level, GLenum format, GLenum type, const void *data) = nullptr;
	void (*glClearTexSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data) = nullptr;
	#endif // GL_ARB_clear_texture
	#ifdef GL_ARB_clip_control
	bool ext_GL_ARB_clip_control = false;
	void (*glClipControl)(GLenum origin, GLenum depth) = nullptr;
	#endif // GL_ARB_clip_control
	#ifdef GL_ARB_color_buffer_float
	bool ext_GL_ARB_color_buffer_float = false;
	void (*glClampColorARB)(GLenum target, GLenum clamp) = nullptr;
	#endif // GL_ARB_color_buffer_float
	#ifdef GL_ARB_compressed_texture_pixel_storage
	bool ext_GL_ARB_compressed_texture_pixel_storage = false;
	#endif // GL_ARB_compressed_texture_pixel_storage
	#ifdef GL_ARB_compute_shader
	bool ext_GL_ARB_compute_shader = false;
	void (*glDispatchCompute)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) = nullptr;
	void (*glDispatchComputeIndirect)(GLintptr indirect) = nullptr;
	#endif // GL_ARB_compute_shader
	#ifdef GL_ARB_compute_variable_group_size
	bool ext_GL_ARB_compute_variable_group_size = false;
	void (*glDispatchComputeGroupSizeARB)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z) = nullptr;
	#endif // GL_ARB_compute_variable_group_size
	#ifdef GL_ARB_conditional_render_inverted
	bool ext_GL_ARB_conditional_render_inverted = false;
	#endif // GL_ARB_conditional_render_inverted
	#ifdef GL_ARB_copy_image
	bool ext_GL_ARB_copy_image = false;
	void (*glCopyImageSubData)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) = nullptr;
	#endif // GL_ARB_copy_image
	#ifdef GL_ARB_cull_distance
	bool ext_GL_ARB_cull_distance = false;
	#endif // GL_ARB_cull_distance
	#ifdef GL_ARB_debug_output
	bool ext_GL_ARB_debug_output = false;
	void (*glDebugMessageCallbackARB)(GLDEBUGPROCARB callback, const void *userParam) = nullptr;
	void (*glDebugMessageControlARB)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) = nullptr;
	void (*glDebugMessageInsertARB)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf) = nullptr;
	GLuint (*glGetDebugMessageLogARB)(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog) = nullptr;
	#endif // GL_ARB_debug_output
	#ifdef GL_ARB_depth_texture
	bool ext_GL_ARB_depth_texture = false;
	#endif // GL_ARB_depth_texture
	#ifdef GL_ARB_direct_state_access
	bool ext_GL_ARB_direct_state_access = false;
	void (*glBindTextureUnit)(GLuint unit, GLuint texture) = nullptr;
	void (*glBlitNamedFramebuffer)(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) = nullptr;
	GLenum (*glCheckNamedFramebufferStatus)(GLuint framebuffer, GLenum target) = nullptr;
	void (*glClearNamedBufferData)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data) = nullptr;
	void (*glClearNamedBufferSubData)(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) = nullptr;
	void (*glClearNamedFramebufferfi)(GLuint framebuffer, GLenum buffer, const GLfloat depth, GLint stencil) = nullptr;
	void (*glClearNamedFramebufferfv)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value) = nullptr;
	void (*glClearNamedFramebufferiv)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value) = nullptr;
	void (*glClearNamedFramebufferuiv)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value) = nullptr;
	void (*glCompressedTextureSubImage1D)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data) = nullptr;
	void (*glCompressedTextureSubImage2D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) = nullptr;
	void (*glCompressedTextureSubImage3D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) = nullptr;
	void (*glCopyNamedBufferSubData)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) = nullptr;
	void (*glCopyTextureSubImage1D)(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) = nullptr;
	void (*glCopyTextureSubImage2D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	void (*glCopyTextureSubImage3D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	void (*glCreateBuffers)(GLsizei n, GLuint *buffers) = nullptr;
	void (*glCreateFramebuffers)(GLsizei n, GLuint *framebuffers) = nullptr;
	void (*glCreateProgramPipelines)(GLsizei n, GLuint *pipelines) = nullptr;
	void (*glCreateQueries)(GLenum target, GLsizei n, GLuint *ids) = nullptr;
	void (*glCreateRenderbuffers)(GLsizei n, GLuint *renderbuffers) = nullptr;
	void (*glCreateSamplers)(GLsizei n, GLuint *samplers) = nullptr;
	void (*glCreateTextures)(GLenum target, GLsizei n, GLuint *textures) = nullptr;
	void (*glCreateTransformFeedbacks)(GLsizei n, GLuint *ids) = nullptr;
	void (*glCreateVertexArrays)(GLsizei n, GLuint *arrays) = nullptr;
	void (*glDisableVertexArrayAttrib)(GLuint vaobj, GLuint index) = nullptr;
	void (*glEnableVertexArrayAttrib)(GLuint vaobj, GLuint index) = nullptr;
	void (*glFlushMappedNamedBufferRange)(GLuint buffer, GLintptr offset, GLsizeiptr length) = nullptr;
	void (*glGenerateTextureMipmap)(GLuint texture) = nullptr;
	void (*glGetCompressedTextureImage)(GLuint texture, GLint level, GLsizei bufSize, void *pixels) = nullptr;
	void (*glGetNamedBufferParameteri64v)(GLuint buffer, GLenum pname, GLint64 *params) = nullptr;
	void (*glGetNamedBufferParameteriv)(GLuint buffer, GLenum pname, GLint *params) = nullptr;
	void (*glGetNamedBufferPointerv)(GLuint buffer, GLenum pname, void **params) = nullptr;
	void (*glGetNamedBufferSubData)(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data) = nullptr;
	void (*glGetNamedFramebufferAttachmentParameteriv)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params) = nullptr;
	void (*glGetNamedFramebufferParameteriv)(GLuint framebuffer, GLenum pname, GLint *param) = nullptr;
	void (*glGetNamedRenderbufferParameteriv)(GLuint renderbuffer, GLenum pname, GLint *params) = nullptr;
	void (*glGetQueryBufferObjecti64v)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) = nullptr;
	void (*glGetQueryBufferObjectiv)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) = nullptr;
	void (*glGetQueryBufferObjectui64v)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) = nullptr;
	void (*glGetQueryBufferObjectuiv)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) = nullptr;
	void (*glGetTextureImage)(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels) = nullptr;
	void (*glGetTextureLevelParameterfv)(GLuint texture, GLint level, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetTextureLevelParameteriv)(GLuint texture, GLint level, GLenum pname, GLint *params) = nullptr;
	void (*glGetTextureParameterIiv)(GLuint texture, GLenum pname, GLint *params) = nullptr;
	void (*glGetTextureParameterIuiv)(GLuint texture, GLenum pname, GLuint *params) = nullptr;
	void (*glGetTextureParameterfv)(GLuint texture, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetTextureParameteriv)(GLuint texture, GLenum pname, GLint *params) = nullptr;
	void (*glGetTransformFeedbacki64_v)(GLuint xfb, GLenum pname, GLuint index, GLint64 *param) = nullptr;
	void (*glGetTransformFeedbacki_v)(GLuint xfb, GLenum pname, GLuint index, GLint *param) = nullptr;
	void (*glGetTransformFeedbackiv)(GLuint xfb, GLenum pname, GLint *param) = nullptr;
	void (*glGetVertexArrayIndexed64iv)(GLuint vaobj, GLuint index, GLenum pname, GLint64 *param) = nullptr;
	void (*glGetVertexArrayIndexediv)(GLuint vaobj, GLuint index, GLenum pname, GLint *param) = nullptr;
	void (*glGetVertexArrayiv)(GLuint vaobj, GLenum pname, GLint *param) = nullptr;
	void (*glInvalidateNamedFramebufferData)(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments) = nullptr;
	void (*glInvalidateNamedFramebufferSubData)(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	void *(*glMapNamedBuffer)(GLuint buffer, GLenum access) = nullptr;
	void *(*glMapNamedBufferRange)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access) = nullptr;
	void (*glNamedBufferData)(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage) = nullptr;
	void (*glNamedBufferStorage)(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags) = nullptr;
	void (*glNamedBufferSubData)(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data) = nullptr;
	void (*glNamedFramebufferDrawBuffer)(GLuint framebuffer, GLenum buf) = nullptr;
	void (*glNamedFramebufferDrawBuffers)(GLuint framebuffer, GLsizei n, const GLenum *bufs) = nullptr;
	void (*glNamedFramebufferParameteri)(GLuint framebuffer, GLenum pname, GLint param) = nullptr;
	void (*glNamedFramebufferReadBuffer)(GLuint framebuffer, GLenum src) = nullptr;
	void (*glNamedFramebufferRenderbuffer)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) = nullptr;
	void (*glNamedFramebufferTexture)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level) = nullptr;
	void (*glNamedFramebufferTextureLayer)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer) = nullptr;
	void (*glNamedRenderbufferStorage)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	void (*glNamedRenderbufferStorageMultisample)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	void (*glTextureBuffer)(GLuint texture, GLenum internalformat, GLuint buffer) = nullptr;
	void (*glTextureBufferRange)(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) = nullptr;
	void (*glTextureParameterIiv)(GLuint texture, GLenum pname, const GLint *params) = nullptr;
	void (*glTextureParameterIuiv)(GLuint texture, GLenum pname, const GLuint *params) = nullptr;
	void (*glTextureParameterf)(GLuint texture, GLenum pname, GLfloat param) = nullptr;
	void (*glTextureParameterfv)(GLuint texture, GLenum pname, const GLfloat *param) = nullptr;
	void (*glTextureParameteri)(GLuint texture, GLenum pname, GLint param) = nullptr;
	void (*glTextureParameteriv)(GLuint texture, GLenum pname, const GLint *param) = nullptr;
	void (*glTextureStorage1D)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width) = nullptr;
	void (*glTextureStorage2D)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	void (*glTextureStorage2DMultisample)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) = nullptr;
	void (*glTextureStorage3D)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) = nullptr;
	void (*glTextureStorage3DMultisample)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) = nullptr;
	void (*glTextureSubImage1D)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTextureSubImage2D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTextureSubImage3D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTransformFeedbackBufferBase)(GLuint xfb, GLuint index, GLuint buffer) = nullptr;
	void (*glTransformFeedbackBufferRange)(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) = nullptr;
	GLboolean (*glUnmapNamedBuffer)(GLuint buffer) = nullptr;
	void (*glVertexArrayAttribBinding)(GLuint vaobj, GLuint attribindex, GLuint bindingindex) = nullptr;
	void (*glVertexArrayAttribFormat)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) = nullptr;
	void (*glVertexArrayAttribIFormat)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) = nullptr;
	void (*glVertexArrayAttribLFormat)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) = nullptr;
	void (*glVertexArrayBindingDivisor)(GLuint vaobj, GLuint bindingindex, GLuint divisor) = nullptr;
	void (*glVertexArrayElementBuffer)(GLuint vaobj, GLuint buffer) = nullptr;
	void (*glVertexArrayVertexBuffer)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) = nullptr;
	void (*glVertexArrayVertexBuffers)(GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides) = nullptr;
	#endif // GL_ARB_direct_state_access
	#ifdef GL_ARB_draw_buffers
	bool ext_GL_ARB_draw_buffers = false;
	void (*glDrawBuffersARB)(GLsizei n, const GLenum *bufs) = nullptr;
	#endif // GL_ARB_draw_buffers
	#ifdef GL_ARB_draw_buffers_blend
	bool ext_GL_ARB_draw_buffers_blend = false;
	void (*glBlendEquationSeparateiARB)(GLuint buf, GLenum modeRGB, GLenum modeAlpha) = nullptr;
	void (*glBlendEquationiARB)(GLuint buf, GLenum mode) = nullptr;
	void (*glBlendFuncSeparateiARB)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) = nullptr;
	void (*glBlendFunciARB)(GLuint buf, GLenum src, GLenum dst) = nullptr;
	#endif // GL_ARB_draw_buffers_blend
	#ifdef GL_ARB_draw_indirect
	bool ext_GL_ARB_draw_indirect = false;
	void (*glDrawArraysIndirect)(GLenum mode, const void *indirect) = nullptr;
	void (*glDrawElementsIndirect)(GLenum mode, GLenum type, const void *indirect) = nullptr;
	#endif // GL_ARB_draw_indirect
	#ifdef GL_ARB_draw_instanced
	bool ext_GL_ARB_draw_instanced = false;
	void (*glDrawArraysInstancedARB)(GLenum mode, GLint first, GLsizei count, GLsizei primcount) = nullptr;
	void (*glDrawElementsInstancedARB)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount) = nullptr;
	#endif // GL_ARB_draw_instanced
	#ifdef GL_ARB_enhanced_layouts
	bool ext_GL_ARB_enhanced_layouts = false;
	#endif // GL_ARB_enhanced_layouts
	#ifdef GL_ARB_explicit_uniform_location
	bool ext_GL_ARB_explicit_uniform_location = false;
	#endif // GL_ARB_explicit_uniform_location
	#ifdef GL_ARB_fragment_program
	bool ext_GL_ARB_fragment_program = false;
	void (*glBindProgramARB)(GLenum target, GLuint program) = nullptr;
	void (*glDeleteProgramsARB)(GLsizei n, const GLuint *programs) = nullptr;
	void (*glGenProgramsARB)(GLsizei n, GLuint *programs) = nullptr;
	void (*glGetProgramEnvParameterdvARB)(GLenum target, GLuint index, GLdouble *params) = nullptr;
	void (*glGetProgramEnvParameterfvARB)(GLenum target, GLuint index, GLfloat *params) = nullptr;
	void (*glGetProgramLocalParameterdvARB)(GLenum target, GLuint index, GLdouble *params) = nullptr;
	void (*glGetProgramLocalParameterfvARB)(GLenum target, GLuint index, GLfloat *params) = nullptr;
	void (*glGetProgramStringARB)(GLenum target, GLenum pname, void *string) = nullptr;
	void (*glGetProgramivARB)(GLenum target, GLenum pname, GLint *params) = nullptr;
	GLboolean (*glIsProgramARB)(GLuint program) = nullptr;
	void (*glProgramEnvParameter4dARB)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glProgramEnvParameter4dvARB)(GLenum target, GLuint index, const GLdouble *params) = nullptr;
	void (*glProgramEnvParameter4fARB)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	void (*glProgramEnvParameter4fvARB)(GLenum target, GLuint index, const GLfloat *params) = nullptr;
	void (*glProgramLocalParameter4dARB)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glProgramLocalParameter4dvARB)(GLenum target, GLuint index, const GLdouble *params) = nullptr;
	void (*glProgramLocalParameter4fARB)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	void (*glProgramLocalParameter4fvARB)(GLenum target, GLuint index, const GLfloat *params) = nullptr;
	void (*glProgramStringARB)(GLenum target, GLenum format, GLsizei len, const void *string) = nullptr;
	#endif // GL_ARB_fragment_program
	#ifdef GL_ARB_fragment_shader
	bool ext_GL_ARB_fragment_shader = false;
	#endif // GL_ARB_fragment_shader
	#ifdef GL_ARB_framebuffer_no_attachments
	bool ext_GL_ARB_framebuffer_no_attachments = false;
	void (*glFramebufferParameteri)(GLenum target, GLenum pname, GLint param) = nullptr;
	void (*glGetFramebufferParameteriv)(GLenum target, GLenum pname, GLint *params) = nullptr;
	#endif // GL_ARB_framebuffer_no_attachments
	#ifdef GL_ARB_framebuffer_object
	bool ext_GL_ARB_framebuffer_object = false;
	#endif // GL_ARB_framebuffer_object
	#ifdef GL_ARB_geometry_shader4
	bool ext_GL_ARB_geometry_shader4 = false;
	void (*glFramebufferTextureARB)(GLenum target, GLenum attachment, GLuint texture, GLint level) = nullptr;
	void (*glFramebufferTextureFaceARB)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face) = nullptr;
	void (*glFramebufferTextureLayerARB)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) = nullptr;
	void (*glProgramParameteriARB)(GLuint program, GLenum pname, GLint value) = nullptr;
	#endif // GL_ARB_geometry_shader4
	#ifdef GL_ARB_get_program_binary
	bool ext_GL_ARB_get_program_binary = false;
	void (*glGetProgramBinary)(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary) = nullptr;
	void (*glProgramBinary)(GLuint program, GLenum binaryFormat, const void *binary, GLsizei length) = nullptr;
	void (*glProgramParameteri)(GLuint program, GLenum pname, GLint value) = nullptr;
	#endif // GL_ARB_get_program_binary
	#ifdef GL_ARB_get_texture_sub_image
	bool ext_GL_ARB_get_texture_sub_image = false;
	void (*glGetCompressedTextureSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels) = nullptr;
	void (*glGetTextureSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels) = nullptr;
	#endif // GL_ARB_get_texture_sub_image
	#ifdef GL_ARB_gpu_shader5
	bool ext_GL_ARB_gpu_shader5 = false;
	#endif // GL_ARB_gpu_shader5
	#ifdef GL_ARB_gpu_shader_fp64
	bool ext_GL_ARB_gpu_shader_fp64 = false;
	void (*glGetUniformdv)(GLuint program, GLint location, GLdouble *params) = nullptr;
	void (*glUniform1d)(GLint location, GLdouble x) = nullptr;
	void (*glUniform1dv)(GLint location, GLsizei count, const GLdouble *value) = nullptr;
	void (*glUniform2d)(GLint location, GLdouble x, GLdouble y) = nullptr;
	void (*glUniform2dv)(GLint location, GLsizei count, const GLdouble *value) = nullptr;
	void (*glUniform3d)(GLint location, GLdouble x, GLdouble y, GLdouble z) = nullptr;
	void (*glUniform3dv)(GLint location, GLsizei count, const GLdouble *value) = nullptr;
	void (*glUniform4d)(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glUniform4dv)(GLint location, GLsizei count, const GLdouble *value) = nullptr;
	void (*glUniformMatrix2dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glUniformMatrix2x3dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glUniformMatrix2x4dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glUniformMatrix3dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glUniformMatrix3x2dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glUniformMatrix3x4dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glUniformMatrix4dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glUniformMatrix4x2dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glUniformMatrix4x3dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	#endif // GL_ARB_gpu_shader_fp64
	#ifdef GL_ARB_gpu_shader_int64
	bool ext_GL_ARB_gpu_shader_int64 = false;
	void (*glGetUniformi64vARB)(GLuint program, GLint location, GLint64 *params) = nullptr;
	void (*glGetUniformui64vARB)(GLuint program, GLint location, GLuint64 *params) = nullptr;
	void (*glGetnUniformi64vARB)(GLuint program, GLint location, GLsizei bufSize, GLint64 *params) = nullptr;
	void (*glGetnUniformui64vARB)(GLuint program, GLint location, GLsizei bufSize, GLuint64 *params) = nullptr;
	void (*glProgramUniform1i64ARB)(GLuint program, GLint location, GLint64 x) = nullptr;
	void (*glProgramUniform1i64vARB)(GLuint program, GLint location, GLsizei count, const GLint64 *value) = nullptr;
	void (*glProgramUniform1ui64ARB)(GLuint program, GLint location, GLuint64 x) = nullptr;
	void (*glProgramUniform1ui64vARB)(GLuint program, GLint location, GLsizei count, const GLuint64 *value) = nullptr;
	void (*glProgramUniform2i64ARB)(GLuint program, GLint location, GLint64 x, GLint64 y) = nullptr;
	void (*glProgramUniform2i64vARB)(GLuint program, GLint location, GLsizei count, const GLint64 *value) = nullptr;
	void (*glProgramUniform2ui64ARB)(GLuint program, GLint location, GLuint64 x, GLuint64 y) = nullptr;
	void (*glProgramUniform2ui64vARB)(GLuint program, GLint location, GLsizei count, const GLuint64 *value) = nullptr;
	void (*glProgramUniform3i64ARB)(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z) = nullptr;
	void (*glProgramUniform3i64vARB)(GLuint program, GLint location, GLsizei count, const GLint64 *value) = nullptr;
	void (*glProgramUniform3ui64ARB)(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z) = nullptr;
	void (*glProgramUniform3ui64vARB)(GLuint program, GLint location, GLsizei count, const GLuint64 *value) = nullptr;
	void (*glProgramUniform4i64ARB)(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w) = nullptr;
	void (*glProgramUniform4i64vARB)(GLuint program, GLint location, GLsizei count, const GLint64 *value) = nullptr;
	void (*glProgramUniform4ui64ARB)(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w) = nullptr;
	void (*glProgramUniform4ui64vARB)(GLuint program, GLint location, GLsizei count, const GLuint64 *value) = nullptr;
	void (*glUniform1i64ARB)(GLint location, GLint64 x) = nullptr;
	void (*glUniform1i64vARB)(GLint location, GLsizei count, const GLint64 *value) = nullptr;
	void (*glUniform1ui64ARB)(GLint location, GLuint64 x) = nullptr;
	void (*glUniform1ui64vARB)(GLint location, GLsizei count, const GLuint64 *value) = nullptr;
	void (*glUniform2i64ARB)(GLint location, GLint64 x, GLint64 y) = nullptr;
	void (*glUniform2i64vARB)(GLint location, GLsizei count, const GLint64 *value) = nullptr;
	void (*glUniform2ui64ARB)(GLint location, GLuint64 x, GLuint64 y) = nullptr;
	void (*glUniform2ui64vARB)(GLint location, GLsizei count, const GLuint64 *value) = nullptr;
	void (*glUniform3i64ARB)(GLint location, GLint64 x, GLint64 y, GLint64 z) = nullptr;
	void (*glUniform3i64vARB)(GLint location, GLsizei count, const GLint64 *value) = nullptr;
	void (*glUniform3ui64ARB)(GLint location, GLuint64 x, GLuint64 y, GLuint64 z) = nullptr;
	void (*glUniform3ui64vARB)(GLint location, GLsizei count, const GLuint64 *value) = nullptr;
	void (*glUniform4i64ARB)(GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w) = nullptr;
	void (*glUniform4i64vARB)(GLint location, GLsizei count, const GLint64 *value) = nullptr;
	void (*glUniform4ui64ARB)(GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w) = nullptr;
	void (*glUniform4ui64vARB)(GLint location, GLsizei count, const GLuint64 *value) = nullptr;
	#endif // GL_ARB_gpu_shader_int64
	#ifdef GL_ARB_half_float_pixel
	bool ext_GL_ARB_half_float_pixel = false;
	#endif // GL_ARB_half_float_pixel
	#ifdef GL_ARB_imaging
	bool ext_GL_ARB_imaging = false;
	void (*glColorSubTable)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void *data) = nullptr;
	void (*glColorTable)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *table) = nullptr;
	void (*glColorTableParameterfv)(GLenum target, GLenum pname, const GLfloat *params) = nullptr;
	void (*glColorTableParameteriv)(GLenum target, GLenum pname, const GLint *params) = nullptr;
	void (*glConvolutionFilter1D)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *image) = nullptr;
	void (*glConvolutionFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *image) = nullptr;
	void (*glConvolutionParameterf)(GLenum target, GLenum pname, GLfloat params) = nullptr;
	void (*glConvolutionParameterfv)(GLenum target, GLenum pname, const GLfloat *params) = nullptr;
	void (*glConvolutionParameteri)(GLenum target, GLenum pname, GLint params) = nullptr;
	void (*glConvolutionParameteriv)(GLenum target, GLenum pname, const GLint *params) = nullptr;
	void (*glCopyColorSubTable)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width) = nullptr;
	void (*glCopyColorTable)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) = nullptr;
	void (*glCopyConvolutionFilter1D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) = nullptr;
	void (*glCopyConvolutionFilter2D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	void (*glGetColorTable)(GLenum target, GLenum format, GLenum type, void *table) = nullptr;
	void (*glGetColorTableParameterfv)(GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetColorTableParameteriv)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetConvolutionFilter)(GLenum target, GLenum format, GLenum type, void *image) = nullptr;
	void (*glGetConvolutionParameterfv)(GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetConvolutionParameteriv)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetHistogram)(GLenum target, GLboolean reset, GLenum format, GLenum type, void *values) = nullptr;
	void (*glGetHistogramParameterfv)(GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetHistogramParameteriv)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetMinmax)(GLenum target, GLboolean reset, GLenum format, GLenum type, void *values) = nullptr;
	void (*glGetMinmaxParameterfv)(GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetMinmaxParameteriv)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetSeparableFilter)(GLenum target, GLenum format, GLenum type, void *row, void *column, void *span) = nullptr;
	void (*glHistogram)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink) = nullptr;
	void (*glMinmax)(GLenum target, GLenum internalformat, GLboolean sink) = nullptr;
	void (*glResetHistogram)(GLenum target) = nullptr;
	void (*glResetMinmax)(GLenum target) = nullptr;
	void (*glSeparableFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *row, const void *column) = nullptr;
	#endif // GL_ARB_imaging
	#ifdef GL_ARB_indirect_parameters
	bool ext_GL_ARB_indirect_parameters = false;
	void (*glMultiDrawArraysIndirectCountARB)(GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) = nullptr;
	void (*glMultiDrawElementsIndirectCountARB)(GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) = nullptr;
	#endif // GL_ARB_indirect_parameters
	#ifdef GL_ARB_instanced_arrays
	bool ext_GL_ARB_instanced_arrays = false;
	void (*glVertexAttribDivisorARB)(GLuint index, GLuint divisor) = nullptr;
	#endif // GL_ARB_instanced_arrays
	#ifdef GL_ARB_internalformat_query
	bool ext_GL_ARB_internalformat_query = false;
	void (*glGetInternalformativ)(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params) = nullptr;
	#endif // GL_ARB_internalformat_query
	#ifdef GL_ARB_internalformat_query2
	bool ext_GL_ARB_internalformat_query2 = false;
	void (*glGetInternalformati64v)(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params) = nullptr;
	#endif // GL_ARB_internalformat_query2
	#ifdef GL_ARB_invalidate_subdata
	bool ext_GL_ARB_invalidate_subdata = false;
	void (*glInvalidateBufferData)(GLuint buffer) = nullptr;
	void (*glInvalidateBufferSubData)(GLuint buffer, GLintptr offset, GLsizeiptr length) = nullptr;
	void (*glInvalidateFramebuffer)(GLenum target, GLsizei numAttachments, const GLenum *attachments) = nullptr;
	void (*glInvalidateSubFramebuffer)(GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	void (*glInvalidateTexImage)(GLuint texture, GLint level) = nullptr;
	void (*glInvalidateTexSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth) = nullptr;
	#endif // GL_ARB_invalidate_subdata
	#ifdef GL_ARB_map_buffer_alignment
	bool ext_GL_ARB_map_buffer_alignment = false;
	#endif // GL_ARB_map_buffer_alignment
	#ifdef GL_ARB_matrix_palette
	bool ext_GL_ARB_matrix_palette = false;
	void (*glCurrentPaletteMatrixARB)(GLint index) = nullptr;
	void (*glMatrixIndexPointerARB)(GLint size, GLenum type, GLsizei stride, const void *pointer) = nullptr;
	void (*glMatrixIndexubvARB)(GLint size, const GLubyte *indices) = nullptr;
	void (*glMatrixIndexuivARB)(GLint size, const GLuint *indices) = nullptr;
	void (*glMatrixIndexusvARB)(GLint size, const GLushort *indices) = nullptr;
	#endif // GL_ARB_matrix_palette
	#ifdef GL_ARB_multi_bind
	bool ext_GL_ARB_multi_bind = false;
	void (*glBindBuffersBase)(GLenum target, GLuint first, GLsizei count, const GLuint *buffers) = nullptr;
	void (*glBindBuffersRange)(GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes) = nullptr;
	void (*glBindImageTextures)(GLuint first, GLsizei count, const GLuint *textures) = nullptr;
	void (*glBindSamplers)(GLuint first, GLsizei count, const GLuint *samplers) = nullptr;
	void (*glBindTextures)(GLuint first, GLsizei count, const GLuint *textures) = nullptr;
	void (*glBindVertexBuffers)(GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides) = nullptr;
	#endif // GL_ARB_multi_bind
	#ifdef GL_ARB_multi_draw_indirect
	bool ext_GL_ARB_multi_draw_indirect = false;
	void (*glMultiDrawArraysIndirect)(GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride) = nullptr;
	void (*glMultiDrawElementsIndirect)(GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride) = nullptr;
	#endif // GL_ARB_multi_draw_indirect
	#ifdef GL_ARB_multisample
	bool ext_GL_ARB_multisample = false;
	void (*glSampleCoverageARB)(GLfloat value, GLboolean invert) = nullptr;
	#endif // GL_ARB_multisample
	#ifdef GL_ARB_multitexture
	bool ext_GL_ARB_multitexture = false;
	void (*glActiveTextureARB)(GLenum texture) = nullptr;
	void (*glClientActiveTextureARB)(GLenum texture) = nullptr;
	void (*glMultiTexCoord1dARB)(GLenum target, GLdouble s) = nullptr;
	void (*glMultiTexCoord1dvARB)(GLenum target, const GLdouble *v) = nullptr;
	void (*glMultiTexCoord1fARB)(GLenum target, GLfloat s) = nullptr;
	void (*glMultiTexCoord1fvARB)(GLenum target, const GLfloat *v) = nullptr;
	void (*glMultiTexCoord1iARB)(GLenum target, GLint s) = nullptr;
	void (*glMultiTexCoord1ivARB)(GLenum target, const GLint *v) = nullptr;
	void (*glMultiTexCoord1sARB)(GLenum target, GLshort s) = nullptr;
	void (*glMultiTexCoord1svARB)(GLenum target, const GLshort *v) = nullptr;
	void (*glMultiTexCoord2dARB)(GLenum target, GLdouble s, GLdouble t) = nullptr;
	void (*glMultiTexCoord2dvARB)(GLenum target, const GLdouble *v) = nullptr;
	void (*glMultiTexCoord2fARB)(GLenum target, GLfloat s, GLfloat t) = nullptr;
	void (*glMultiTexCoord2fvARB)(GLenum target, const GLfloat *v) = nullptr;
	void (*glMultiTexCoord2iARB)(GLenum target, GLint s, GLint t) = nullptr;
	void (*glMultiTexCoord2ivARB)(GLenum target, const GLint *v) = nullptr;
	void (*glMultiTexCoord2sARB)(GLenum target, GLshort s, GLshort t) = nullptr;
	void (*glMultiTexCoord2svARB)(GLenum target, const GLshort *v) = nullptr;
	void (*glMultiTexCoord3dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r) = nullptr;
	void (*glMultiTexCoord3dvARB)(GLenum target, const GLdouble *v) = nullptr;
	void (*glMultiTexCoord3fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r) = nullptr;
	void (*glMultiTexCoord3fvARB)(GLenum target, const GLfloat *v) = nullptr;
	void (*glMultiTexCoord3iARB)(GLenum target, GLint s, GLint t, GLint r) = nullptr;
	void (*glMultiTexCoord3ivARB)(GLenum target, const GLint *v) = nullptr;
	void (*glMultiTexCoord3sARB)(GLenum target, GLshort s, GLshort t, GLshort r) = nullptr;
	void (*glMultiTexCoord3svARB)(GLenum target, const GLshort *v) = nullptr;
	void (*glMultiTexCoord4dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) = nullptr;
	void (*glMultiTexCoord4dvARB)(GLenum target, const GLdouble *v) = nullptr;
	void (*glMultiTexCoord4fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) = nullptr;
	void (*glMultiTexCoord4fvARB)(GLenum target, const GLfloat *v) = nullptr;
	void (*glMultiTexCoord4iARB)(GLenum target, GLint s, GLint t, GLint r, GLint q) = nullptr;
	void (*glMultiTexCoord4ivARB)(GLenum target, const GLint *v) = nullptr;
	void (*glMultiTexCoord4sARB)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) = nullptr;
	void (*glMultiTexCoord4svARB)(GLenum target, const GLshort *v) = nullptr;
	#endif // GL_ARB_multitexture
	#ifdef GL_ARB_occlusion_query
	bool ext_GL_ARB_occlusion_query = false;
	void (*glBeginQueryARB)(GLenum target, GLuint id) = nullptr;
	void (*glDeleteQueriesARB)(GLsizei n, const GLuint *ids) = nullptr;
	void (*glEndQueryARB)(GLenum target) = nullptr;
	void (*glGenQueriesARB)(GLsizei n, GLuint *ids) = nullptr;
	void (*glGetQueryObjectivARB)(GLuint id, GLenum pname, GLint *params) = nullptr;
	void (*glGetQueryObjectuivARB)(GLuint id, GLenum pname, GLuint *params) = nullptr;
	void (*glGetQueryivARB)(GLenum target, GLenum pname, GLint *params) = nullptr;
	GLboolean (*glIsQueryARB)(GLuint id) = nullptr;
	#endif // GL_ARB_occlusion_query
	#ifdef GL_ARB_parallel_shader_compile
	bool ext_GL_ARB_parallel_shader_compile = false;
	void (*glMaxShaderCompilerThreadsARB)(GLuint count) = nullptr;
	#endif // GL_ARB_parallel_shader_compile
	#ifdef GL_ARB_pipeline_statistics_query
	bool ext_GL_ARB_pipeline_statistics_query = false;
	#endif // GL_ARB_pipeline_statistics_query
	#ifdef GL_ARB_pixel_buffer_object
	bool ext_GL_ARB_pixel_buffer_object = false;
	#endif // GL_ARB_pixel_buffer_object
	#ifdef GL_ARB_point_parameters
	bool ext_GL_ARB_point_parameters = false;
	void (*glPointParameterfARB)(GLenum pname, GLfloat param) = nullptr;
	void (*glPointParameterfvARB)(GLenum pname, const GLfloat *params) = nullptr;
	#endif // GL_ARB_point_parameters
	#ifdef GL_ARB_point_sprite
	bool ext_GL_ARB_point_sprite = false;
	#endif // GL_ARB_point_sprite
	#ifdef GL_ARB_program_interface_query
	bool ext_GL_ARB_program_interface_query = false;
	void (*glGetProgramInterfaceiv)(GLuint program, GLenum programInterface, GLenum pname, GLint *params) = nullptr;
	GLuint (*glGetProgramResourceIndex)(GLuint program, GLenum programInterface, const GLchar *name) = nullptr;
	GLint (*glGetProgramResourceLocation)(GLuint program, GLenum programInterface, const GLchar *name) = nullptr;
	GLint (*glGetProgramResourceLocationIndex)(GLuint program, GLenum programInterface, const GLchar *name) = nullptr;
	void (*glGetProgramResourceName)(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name) = nullptr;
	void (*glGetProgramResourceiv)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params) = nullptr;
	#endif // GL_ARB_program_interface_query
	#ifdef GL_ARB_query_buffer_object
	bool ext_GL_ARB_query_buffer_object = false;
	#endif // GL_ARB_query_buffer_object
	#ifdef GL_ARB_robustness
	bool ext_GL_ARB_robustness = false;
	GLenum (*glGetGraphicsResetStatusARB)() = nullptr;
	void (*glGetnColorTableARB)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table) = nullptr;
	void (*glGetnCompressedTexImageARB)(GLenum target, GLint lod, GLsizei bufSize, void *img) = nullptr;
	void (*glGetnConvolutionFilterARB)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image) = nullptr;
	void (*glGetnHistogramARB)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values) = nullptr;
	void (*glGetnMapdvARB)(GLenum target, GLenum query, GLsizei bufSize, GLdouble *v) = nullptr;
	void (*glGetnMapfvARB)(GLenum target, GLenum query, GLsizei bufSize, GLfloat *v) = nullptr;
	void (*glGetnMapivARB)(GLenum target, GLenum query, GLsizei bufSize, GLint *v) = nullptr;
	void (*glGetnMinmaxARB)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values) = nullptr;
	void (*glGetnPixelMapfvARB)(GLenum map, GLsizei bufSize, GLfloat *values) = nullptr;
	void (*glGetnPixelMapuivARB)(GLenum map, GLsizei bufSize, GLuint *values) = nullptr;
	void (*glGetnPixelMapusvARB)(GLenum map, GLsizei bufSize, GLushort *values) = nullptr;
	void (*glGetnPolygonStippleARB)(GLsizei bufSize, GLubyte *pattern) = nullptr;
	void (*glGetnSeparableFilterARB)(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void *column, void *span) = nullptr;
	void (*glGetnTexImageARB)(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *img) = nullptr;
	void (*glGetnUniformdvARB)(GLuint program, GLint location, GLsizei bufSize, GLdouble *params) = nullptr;
	void (*glGetnUniformfvARB)(GLuint program, GLint location, GLsizei bufSize, GLfloat *params) = nullptr;
	void (*glGetnUniformivARB)(GLuint program, GLint location, GLsizei bufSize, GLint *params) = nullptr;
	void (*glGetnUniformuivARB)(GLuint program, GLint location, GLsizei bufSize, GLuint *params) = nullptr;
	void (*glReadnPixelsARB)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data) = nullptr;
	#endif // GL_ARB_robustness
	#ifdef GL_ARB_sample_locations
	bool ext_GL_ARB_sample_locations = false;
	void (*glEvaluateDepthValuesARB)() = nullptr;
	void (*glFramebufferSampleLocationsfvARB)(GLenum target, GLuint start, GLsizei count, const GLfloat *v) = nullptr;
	void (*glNamedFramebufferSampleLocationsfvARB)(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v) = nullptr;
	#endif // GL_ARB_sample_locations
	#ifdef GL_ARB_sample_shading
	bool ext_GL_ARB_sample_shading = false;
	void (*glMinSampleShadingARB)(GLfloat value) = nullptr;
	#endif // GL_ARB_sample_shading
	#ifdef GL_ARB_separate_shader_objects
	bool ext_GL_ARB_separate_shader_objects = false;
	void (*glActiveShaderProgram)(GLuint pipeline, GLuint program) = nullptr;
	void (*glBindProgramPipeline)(GLuint pipeline) = nullptr;
	GLuint (*glCreateShaderProgramv)(GLenum type, GLsizei count, const GLchar *const*strings) = nullptr;
	void (*glDeleteProgramPipelines)(GLsizei n, const GLuint *pipelines) = nullptr;
	void (*glGenProgramPipelines)(GLsizei n, GLuint *pipelines) = nullptr;
	void (*glGetProgramPipelineInfoLog)(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog) = nullptr;
	void (*glGetProgramPipelineiv)(GLuint pipeline, GLenum pname, GLint *params) = nullptr;
	GLboolean (*glIsProgramPipeline)(GLuint pipeline) = nullptr;
	void (*glProgramUniform1d)(GLuint program, GLint location, GLdouble v0) = nullptr;
	void (*glProgramUniform1dv)(GLuint program, GLint location, GLsizei count, const GLdouble *value) = nullptr;
	void (*glProgramUniform1f)(GLuint program, GLint location, GLfloat v0) = nullptr;
	void (*glProgramUniform1fv)(GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glProgramUniform1i)(GLuint program, GLint location, GLint v0) = nullptr;
	void (*glProgramUniform1iv)(GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glProgramUniform1ui)(GLuint program, GLint location, GLuint v0) = nullptr;
	void (*glProgramUniform1uiv)(GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glProgramUniform2d)(GLuint program, GLint location, GLdouble v0, GLdouble v1) = nullptr;
	void (*glProgramUniform2dv)(GLuint program, GLint location, GLsizei count, const GLdouble *value) = nullptr;
	void (*glProgramUniform2f)(GLuint program, GLint location, GLfloat v0, GLfloat v1) = nullptr;
	void (*glProgramUniform2fv)(GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glProgramUniform2i)(GLuint program, GLint location, GLint v0, GLint v1) = nullptr;
	void (*glProgramUniform2iv)(GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glProgramUniform2ui)(GLuint program, GLint location, GLuint v0, GLuint v1) = nullptr;
	void (*glProgramUniform2uiv)(GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glProgramUniform3d)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2) = nullptr;
	void (*glProgramUniform3dv)(GLuint program, GLint location, GLsizei count, const GLdouble *value) = nullptr;
	void (*glProgramUniform3f)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) = nullptr;
	void (*glProgramUniform3fv)(GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glProgramUniform3i)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) = nullptr;
	void (*glProgramUniform3iv)(GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glProgramUniform3ui)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) = nullptr;
	void (*glProgramUniform3uiv)(GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glProgramUniform4d)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3) = nullptr;
	void (*glProgramUniform4dv)(GLuint program, GLint location, GLsizei count, const GLdouble *value) = nullptr;
	void (*glProgramUniform4f)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) = nullptr;
	void (*glProgramUniform4fv)(GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glProgramUniform4i)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) = nullptr;
	void (*glProgramUniform4iv)(GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glProgramUniform4ui)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) = nullptr;
	void (*glProgramUniform4uiv)(GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glProgramUniformMatrix2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix2x3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix2x3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix2x4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix2x4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix3x2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix3x2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix3x4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix3x4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix4x2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix4x2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix4x3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix4x3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glUseProgramStages)(GLuint pipeline, GLbitfield stages, GLuint program) = nullptr;
	void (*glValidateProgramPipeline)(GLuint pipeline) = nullptr;
	#endif // GL_ARB_separate_shader_objects
	#ifdef GL_ARB_shader_atomic_counters
	bool ext_GL_ARB_shader_atomic_counters = false;
	void (*glGetActiveAtomicCounterBufferiv)(GLuint program, GLuint bufferIndex, GLenum pname, GLint *params) = nullptr;
	#endif // GL_ARB_shader_atomic_counters
	#ifdef GL_ARB_shader_image_load_store
	bool ext_GL_ARB_shader_image_load_store = false;
	void (*glBindImageTexture)(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) = nullptr;
	void (*glMemoryBarrier)(GLbitfield barriers) = nullptr;
	#endif // GL_ARB_shader_image_load_store
	#ifdef GL_ARB_shader_objects
	bool ext_GL_ARB_shader_objects = false;
	void (*glAttachObjectARB)(GLhandleARB containerObj, GLhandleARB obj) = nullptr;
	void (*glCompileShaderARB)(GLhandleARB shaderObj) = nullptr;
	GLhandleARB (*glCreateProgramObjectARB)() = nullptr;
	GLhandleARB (*glCreateShaderObjectARB)(GLenum shaderType) = nullptr;
	void (*glDeleteObjectARB)(GLhandleARB obj) = nullptr;
	void (*glDetachObjectARB)(GLhandleARB containerObj, GLhandleARB attachedObj) = nullptr;
	void (*glGetActiveUniformARB)(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name) = nullptr;
	void (*glGetAttachedObjectsARB)(GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj) = nullptr;
	GLhandleARB (*glGetHandleARB)(GLenum pname) = nullptr;
	void (*glGetInfoLogARB)(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog) = nullptr;
	void (*glGetObjectParameterfvARB)(GLhandleARB obj, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetObjectParameterivARB)(GLhandleARB obj, GLenum pname, GLint *params) = nullptr;
	void (*glGetShaderSourceARB)(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source) = nullptr;
	GLint (*glGetUniformLocationARB)(GLhandleARB programObj, const GLcharARB *name) = nullptr;
	void (*glGetUniformfvARB)(GLhandleARB programObj, GLint location, GLfloat *params) = nullptr;
	void (*glGetUniformivARB)(GLhandleARB programObj, GLint location, GLint *params) = nullptr;
	void (*glLinkProgramARB)(GLhandleARB programObj) = nullptr;
	void (*glShaderSourceARB)(GLhandleARB shaderObj, GLsizei count, const GLcharARB **string, const GLint *length) = nullptr;
	void (*glUniform1fARB)(GLint location, GLfloat v0) = nullptr;
	void (*glUniform1fvARB)(GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glUniform1iARB)(GLint location, GLint v0) = nullptr;
	void (*glUniform1ivARB)(GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glUniform2fARB)(GLint location, GLfloat v0, GLfloat v1) = nullptr;
	void (*glUniform2fvARB)(GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glUniform2iARB)(GLint location, GLint v0, GLint v1) = nullptr;
	void (*glUniform2ivARB)(GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glUniform3fARB)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) = nullptr;
	void (*glUniform3fvARB)(GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glUniform3iARB)(GLint location, GLint v0, GLint v1, GLint v2) = nullptr;
	void (*glUniform3ivARB)(GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glUniform4fARB)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) = nullptr;
	void (*glUniform4fvARB)(GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glUniform4iARB)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) = nullptr;
	void (*glUniform4ivARB)(GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glUniformMatrix2fvARB)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glUniformMatrix3fvARB)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glUniformMatrix4fvARB)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glUseProgramObjectARB)(GLhandleARB programObj) = nullptr;
	void (*glValidateProgramARB)(GLhandleARB programObj) = nullptr;
	#endif // GL_ARB_shader_objects
	#ifdef GL_ARB_shader_storage_buffer_object
	bool ext_GL_ARB_shader_storage_buffer_object = false;
	void (*glShaderStorageBlockBinding)(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding) = nullptr;
	#endif // GL_ARB_shader_storage_buffer_object
	#ifdef GL_ARB_shader_subroutine
	bool ext_GL_ARB_shader_subroutine = false;
	void (*glGetActiveSubroutineName)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name) = nullptr;
	void (*glGetActiveSubroutineUniformName)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name) = nullptr;
	void (*glGetActiveSubroutineUniformiv)(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values) = nullptr;
	void (*glGetProgramStageiv)(GLuint program, GLenum shadertype, GLenum pname, GLint *values) = nullptr;
	GLuint (*glGetSubroutineIndex)(GLuint program, GLenum shadertype, const GLchar *name) = nullptr;
	GLint (*glGetSubroutineUniformLocation)(GLuint program, GLenum shadertype, const GLchar *name) = nullptr;
	void (*glGetUniformSubroutineuiv)(GLenum shadertype, GLint location, GLuint *params) = nullptr;
	void (*glUniformSubroutinesuiv)(GLenum shadertype, GLsizei count, const GLuint *indices) = nullptr;
	#endif // GL_ARB_shader_subroutine
	#ifdef GL_ARB_shading_language_100
	bool ext_GL_ARB_shading_language_100 = false;
	#endif // GL_ARB_shading_language_100
	#ifdef GL_ARB_shading_language_include
	bool ext_GL_ARB_shading_language_include = false;
	void (*glCompileShaderIncludeARB)(GLuint shader, GLsizei count, const GLchar *const*path, const GLint *length) = nullptr;
	void (*glDeleteNamedStringARB)(GLint namelen, const GLchar *name) = nullptr;
	void (*glGetNamedStringARB)(GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string) = nullptr;
	void (*glGetNamedStringivARB)(GLint namelen, const GLchar *name, GLenum pname, GLint *params) = nullptr;
	GLboolean (*glIsNamedStringARB)(GLint namelen, const GLchar *name) = nullptr;
	void (*glNamedStringARB)(GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string) = nullptr;
	#endif // GL_ARB_shading_language_include
	#ifdef GL_ARB_shadow
	bool ext_GL_ARB_shadow = false;
	#endif // GL_ARB_shadow
	#ifdef GL_ARB_shadow_ambient
	bool ext_GL_ARB_shadow_ambient = false;
	#endif // GL_ARB_shadow_ambient
	#ifdef GL_ARB_sparse_buffer
	bool ext_GL_ARB_sparse_buffer = false;
	void (*glBufferPageCommitmentARB)(GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit) = nullptr;
	void (*glNamedBufferPageCommitmentARB)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit) = nullptr;
	void (*glNamedBufferPageCommitmentEXT)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit) = nullptr;
	#endif // GL_ARB_sparse_buffer
	#ifdef GL_ARB_sparse_texture
	bool ext_GL_ARB_sparse_texture = false;
	void (*glTexPageCommitmentARB)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit) = nullptr;
	#endif // GL_ARB_sparse_texture
	#ifdef GL_ARB_stencil_texturing
	bool ext_GL_ARB_stencil_texturing = false;
	#endif // GL_ARB_stencil_texturing
	#ifdef GL_ARB_tessellation_shader
	bool ext_GL_ARB_tessellation_shader = false;
	void (*glPatchParameterfv)(GLenum pname, const GLfloat *values) = nullptr;
	void (*glPatchParameteri)(GLenum pname, GLint value) = nullptr;
	#endif // GL_ARB_tessellation_shader
	#ifdef GL_ARB_texture_barrier
	bool ext_GL_ARB_texture_barrier = false;
	void (*glTextureBarrier)() = nullptr;
	#endif // GL_ARB_texture_barrier
	#ifdef GL_ARB_texture_border_clamp
	bool ext_GL_ARB_texture_border_clamp = false;
	#endif // GL_ARB_texture_border_clamp
	#ifdef GL_ARB_texture_buffer_object
	bool ext_GL_ARB_texture_buffer_object = false;
	void (*glTexBufferARB)(GLenum target, GLenum internalformat, GLuint buffer) = nullptr;
	#endif // GL_ARB_texture_buffer_object
	#ifdef GL_ARB_texture_buffer_range
	bool ext_GL_ARB_texture_buffer_range = false;
	void (*glTexBufferRange)(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) = nullptr;
	#endif // GL_ARB_texture_buffer_range
	#ifdef GL_ARB_texture_compression
	bool ext_GL_ARB_texture_compression = false;
	void (*glCompressedTexImage1DARB)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data) = nullptr;
	void (*glCompressedTexImage2DARB)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data) = nullptr;
	void (*glCompressedTexImage3DARB)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data) = nullptr;
	void (*glCompressedTexSubImage1DARB)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data) = nullptr;
	void (*glCompressedTexSubImage2DARB)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) = nullptr;
	void (*glCompressedTexSubImage3DARB)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) = nullptr;
	void (*glGetCompressedTexImageARB)(GLenum target, GLint level, void *img) = nullptr;
	#endif // GL_ARB_texture_compression
	#ifdef GL_ARB_texture_compression_bptc
	bool ext_GL_ARB_texture_compression_bptc = false;
	#endif // GL_ARB_texture_compression_bptc
	#ifdef GL_ARB_texture_cube_map
	bool ext_GL_ARB_texture_cube_map = false;
	#endif // GL_ARB_texture_cube_map
	#ifdef GL_ARB_texture_cube_map_array
	bool ext_GL_ARB_texture_cube_map_array = false;
	#endif // GL_ARB_texture_cube_map_array
	#ifdef GL_ARB_texture_env_combine
	bool ext_GL_ARB_texture_env_combine = false;
	#endif // GL_ARB_texture_env_combine
	#ifdef GL_ARB_texture_env_dot3
	bool ext_GL_ARB_texture_env_dot3 = false;
	#endif // GL_ARB_texture_env_dot3
	#ifdef GL_ARB_texture_filter_minmax
	bool ext_GL_ARB_texture_filter_minmax = false;
	#endif // GL_ARB_texture_filter_minmax
	#ifdef GL_ARB_texture_float
	bool ext_GL_ARB_texture_float = false;
	#endif // GL_ARB_texture_float
	#ifdef GL_ARB_texture_gather
	bool ext_GL_ARB_texture_gather = false;
	#endif // GL_ARB_texture_gather
	#ifdef GL_ARB_texture_mirror_clamp_to_edge
	bool ext_GL_ARB_texture_mirror_clamp_to_edge = false;
	#endif // GL_ARB_texture_mirror_clamp_to_edge
	#ifdef GL_ARB_texture_mirrored_repeat
	bool ext_GL_ARB_texture_mirrored_repeat = false;
	#endif // GL_ARB_texture_mirrored_repeat
	#ifdef GL_ARB_texture_rectangle
	bool ext_GL_ARB_texture_rectangle = false;
	#endif // GL_ARB_texture_rectangle
	#ifdef GL_ARB_texture_storage
	bool ext_GL_ARB_texture_storage = false;
	void (*glTexStorage1D)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) = nullptr;
	void (*glTexStorage2D)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	void (*glTexStorage3D)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) = nullptr;
	#endif // GL_ARB_texture_storage
	#ifdef GL_ARB_texture_storage_multisample
	bool ext_GL_ARB_texture_storage_multisample = false;
	void (*glTexStorage2DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) = nullptr;
	void (*glTexStorage3DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) = nullptr;
	#endif // GL_ARB_texture_storage_multisample
	#ifdef GL_ARB_texture_view
	bool ext_GL_ARB_texture_view = false;
	void (*glTextureView)(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers) = nullptr;
	#endif // GL_ARB_texture_view
	#ifdef GL_ARB_transform_feedback2
	bool ext_GL_ARB_transform_feedback2 = false;
	void (*glBindTransformFeedback)(GLenum target, GLuint id) = nullptr;
	void (*glDeleteTransformFeedbacks)(GLsizei n, const GLuint *ids) = nullptr;
	void (*glDrawTransformFeedback)(GLenum mode, GLuint id) = nullptr;
	void (*glGenTransformFeedbacks)(GLsizei n, GLuint *ids) = nullptr;
	GLboolean (*glIsTransformFeedback)(GLuint id) = nullptr;
	void (*glPauseTransformFeedback)() = nullptr;
	void (*glResumeTransformFeedback)() = nullptr;
	#endif // GL_ARB_transform_feedback2
	#ifdef GL_ARB_transform_feedback3
	bool ext_GL_ARB_transform_feedback3 = false;
	void (*glBeginQueryIndexed)(GLenum target, GLuint index, GLuint id) = nullptr;
	void (*glDrawTransformFeedbackStream)(GLenum mode, GLuint id, GLuint stream) = nullptr;
	void (*glEndQueryIndexed)(GLenum target, GLuint index) = nullptr;
	void (*glGetQueryIndexediv)(GLenum target, GLuint index, GLenum pname, GLint *params) = nullptr;
	#endif // GL_ARB_transform_feedback3
	#ifdef GL_ARB_transform_feedback_instanced
	bool ext_GL_ARB_transform_feedback_instanced = false;
	void (*glDrawTransformFeedbackInstanced)(GLenum mode, GLuint id, GLsizei instancecount) = nullptr;
	void (*glDrawTransformFeedbackStreamInstanced)(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount) = nullptr;
	#endif // GL_ARB_transform_feedback_instanced
	#ifdef GL_ARB_transform_feedback_overflow_query
	bool ext_GL_ARB_transform_feedback_overflow_query = false;
	#endif // GL_ARB_transform_feedback_overflow_query
	#ifdef GL_ARB_transpose_matrix
	bool ext_GL_ARB_transpose_matrix = false;
	void (*glLoadTransposeMatrixdARB)(const GLdouble *m) = nullptr;
	void (*glLoadTransposeMatrixfARB)(const GLfloat *m) = nullptr;
	void (*glMultTransposeMatrixdARB)(const GLdouble *m) = nullptr;
	void (*glMultTransposeMatrixfARB)(const GLfloat *m) = nullptr;
	#endif // GL_ARB_transpose_matrix
	#ifdef GL_ARB_vertex_attrib_64bit
	bool ext_GL_ARB_vertex_attrib_64bit = false;
	void (*glGetVertexAttribLdv)(GLuint index, GLenum pname, GLdouble *params) = nullptr;
	void (*glVertexAttribL1d)(GLuint index, GLdouble x) = nullptr;
	void (*glVertexAttribL1dv)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttribL2d)(GLuint index, GLdouble x, GLdouble y) = nullptr;
	void (*glVertexAttribL2dv)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttribL3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z) = nullptr;
	void (*glVertexAttribL3dv)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttribL4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glVertexAttribL4dv)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttribLPointer)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) = nullptr;
	#endif // GL_ARB_vertex_attrib_64bit
	#ifdef GL_ARB_vertex_attrib_binding
	bool ext_GL_ARB_vertex_attrib_binding = false;
	void (*glBindVertexBuffer)(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) = nullptr;
	void (*glVertexAttribBinding)(GLuint attribindex, GLuint bindingindex) = nullptr;
	void (*glVertexAttribFormat)(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) = nullptr;
	void (*glVertexAttribIFormat)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) = nullptr;
	void (*glVertexAttribLFormat)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) = nullptr;
	void (*glVertexBindingDivisor)(GLuint bindingindex, GLuint divisor) = nullptr;
	#endif // GL_ARB_vertex_attrib_binding
	#ifdef GL_ARB_vertex_blend
	bool ext_GL_ARB_vertex_blend = false;
	void (*glVertexBlendARB)(GLint count) = nullptr;
	void (*glWeightPointerARB)(GLint size, GLenum type, GLsizei stride, const void *pointer) = nullptr;
	void (*glWeightbvARB)(GLint size, const GLbyte *weights) = nullptr;
	void (*glWeightdvARB)(GLint size, const GLdouble *weights) = nullptr;
	void (*glWeightfvARB)(GLint size, const GLfloat *weights) = nullptr;
	void (*glWeightivARB)(GLint size, const GLint *weights) = nullptr;
	void (*glWeightsvARB)(GLint size, const GLshort *weights) = nullptr;
	void (*glWeightubvARB)(GLint size, const GLubyte *weights) = nullptr;
	void (*glWeightuivARB)(GLint size, const GLuint *weights) = nullptr;
	void (*glWeightusvARB)(GLint size, const GLushort *weights) = nullptr;
	#endif // GL_ARB_vertex_blend
	#ifdef GL_ARB_vertex_buffer_object
	bool ext_GL_ARB_vertex_buffer_object = false;
	void (*glBindBufferARB)(GLenum target, GLuint buffer) = nullptr;
	void (*glBufferDataARB)(GLenum target, GLsizeiptrARB size, const void *data, GLenum usage) = nullptr;
	void (*glBufferSubDataARB)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void *data) = nullptr;
	void (*glDeleteBuffersARB)(GLsizei n, const GLuint *buffers) = nullptr;
	void (*glGenBuffersARB)(GLsizei n, GLuint *buffers) = nullptr;
	void (*glGetBufferParameterivARB)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetBufferPointervARB)(GLenum target, GLenum pname, void **params) = nullptr;
	void (*glGetBufferSubDataARB)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void *data) = nullptr;
	GLboolean (*glIsBufferARB)(GLuint buffer) = nullptr;
	void *(*glMapBufferARB)(GLenum target, GLenum access) = nullptr;
	GLboolean (*glUnmapBufferARB)(GLenum target) = nullptr;
	#endif // GL_ARB_vertex_buffer_object
	#ifdef GL_ARB_vertex_program
	bool ext_GL_ARB_vertex_program = false;
	#if !defined(GL_ARB_fragment_program)
	void (*glBindProgramARB)(GLenum target, GLuint program) = nullptr;
	void (*glDeleteProgramsARB)(GLsizei n, const GLuint *programs) = nullptr;
	#endif
	void (*glDisableVertexAttribArrayARB)(GLuint index) = nullptr;
	void (*glEnableVertexAttribArrayARB)(GLuint index) = nullptr;
	#if !defined(GL_ARB_fragment_program)
	void (*glGenProgramsARB)(GLsizei n, GLuint *programs) = nullptr;
	void (*glGetProgramEnvParameterdvARB)(GLenum target, GLuint index, GLdouble *params) = nullptr;
	void (*glGetProgramEnvParameterfvARB)(GLenum target, GLuint index, GLfloat *params) = nullptr;
	void (*glGetProgramLocalParameterdvARB)(GLenum target, GLuint index, GLdouble *params) = nullptr;
	void (*glGetProgramLocalParameterfvARB)(GLenum target, GLuint index, GLfloat *params) = nullptr;
	void (*glGetProgramStringARB)(GLenum target, GLenum pname, void *string) = nullptr;
	void (*glGetProgramivARB)(GLenum target, GLenum pname, GLint *params) = nullptr;
	#endif
	void (*glGetVertexAttribPointervARB)(GLuint index, GLenum pname, void **pointer) = nullptr;
	void (*glGetVertexAttribdvARB)(GLuint index, GLenum pname, GLdouble *params) = nullptr;
	void (*glGetVertexAttribfvARB)(GLuint index, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetVertexAttribivARB)(GLuint index, GLenum pname, GLint *params) = nullptr;
	#if !defined(GL_ARB_fragment_program)
	GLboolean (*glIsProgramARB)(GLuint program) = nullptr;
	void (*glProgramEnvParameter4dARB)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glProgramEnvParameter4dvARB)(GLenum target, GLuint index, const GLdouble *params) = nullptr;
	void (*glProgramEnvParameter4fARB)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	void (*glProgramEnvParameter4fvARB)(GLenum target, GLuint index, const GLfloat *params) = nullptr;
	void (*glProgramLocalParameter4dARB)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glProgramLocalParameter4dvARB)(GLenum target, GLuint index, const GLdouble *params) = nullptr;
	void (*glProgramLocalParameter4fARB)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	void (*glProgramLocalParameter4fvARB)(GLenum target, GLuint index, const GLfloat *params) = nullptr;
	void (*glProgramStringARB)(GLenum target, GLenum format, GLsizei len, const void *string) = nullptr;
	#endif
	void (*glVertexAttrib1dARB)(GLuint index, GLdouble x) = nullptr;
	void (*glVertexAttrib1dvARB)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib1fARB)(GLuint index, GLfloat x) = nullptr;
	void (*glVertexAttrib1fvARB)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib1sARB)(GLuint index, GLshort x) = nullptr;
	void (*glVertexAttrib1svARB)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib2dARB)(GLuint index, GLdouble x, GLdouble y) = nullptr;
	void (*glVertexAttrib2dvARB)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib2fARB)(GLuint index, GLfloat x, GLfloat y) = nullptr;
	void (*glVertexAttrib2fvARB)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib2sARB)(GLuint index, GLshort x, GLshort y) = nullptr;
	void (*glVertexAttrib2svARB)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib3dARB)(GLuint index, GLdouble x, GLdouble y, GLdouble z) = nullptr;
	void (*glVertexAttrib3dvARB)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib3fARB)(GLuint index, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glVertexAttrib3fvARB)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib3sARB)(GLuint index, GLshort x, GLshort y, GLshort z) = nullptr;
	void (*glVertexAttrib3svARB)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib4NbvARB)(GLuint index, const GLbyte *v) = nullptr;
	void (*glVertexAttrib4NivARB)(GLuint index, const GLint *v) = nullptr;
	void (*glVertexAttrib4NsvARB)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib4NubARB)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) = nullptr;
	void (*glVertexAttrib4NubvARB)(GLuint index, const GLubyte *v) = nullptr;
	void (*glVertexAttrib4NuivARB)(GLuint index, const GLuint *v) = nullptr;
	void (*glVertexAttrib4NusvARB)(GLuint index, const GLushort *v) = nullptr;
	void (*glVertexAttrib4bvARB)(GLuint index, const GLbyte *v) = nullptr;
	void (*glVertexAttrib4dARB)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glVertexAttrib4dvARB)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib4fARB)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	void (*glVertexAttrib4fvARB)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib4ivARB)(GLuint index, const GLint *v) = nullptr;
	void (*glVertexAttrib4sARB)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) = nullptr;
	void (*glVertexAttrib4svARB)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib4ubvARB)(GLuint index, const GLubyte *v) = nullptr;
	void (*glVertexAttrib4uivARB)(GLuint index, const GLuint *v) = nullptr;
	void (*glVertexAttrib4usvARB)(GLuint index, const GLushort *v) = nullptr;
	void (*glVertexAttribPointerARB)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer) = nullptr;
	#endif // GL_ARB_vertex_program
	#ifdef GL_ARB_vertex_shader
	bool ext_GL_ARB_vertex_shader = false;
	void (*glBindAttribLocationARB)(GLhandleARB programObj, GLuint index, const GLcharARB *name) = nullptr;
	#if !defined(GL_ARB_vertex_program)
	void (*glDisableVertexAttribArrayARB)(GLuint index) = nullptr;
	void (*glEnableVertexAttribArrayARB)(GLuint index) = nullptr;
	#endif
	void (*glGetActiveAttribARB)(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name) = nullptr;
	GLint (*glGetAttribLocationARB)(GLhandleARB programObj, const GLcharARB *name) = nullptr;
	#if !defined(GL_ARB_vertex_program)
	void (*glGetVertexAttribPointervARB)(GLuint index, GLenum pname, void **pointer) = nullptr;
	void (*glGetVertexAttribdvARB)(GLuint index, GLenum pname, GLdouble *params) = nullptr;
	void (*glGetVertexAttribfvARB)(GLuint index, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetVertexAttribivARB)(GLuint index, GLenum pname, GLint *params) = nullptr;
	void (*glVertexAttrib1dARB)(GLuint index, GLdouble x) = nullptr;
	void (*glVertexAttrib1dvARB)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib1fARB)(GLuint index, GLfloat x) = nullptr;
	void (*glVertexAttrib1fvARB)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib1sARB)(GLuint index, GLshort x) = nullptr;
	void (*glVertexAttrib1svARB)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib2dARB)(GLuint index, GLdouble x, GLdouble y) = nullptr;
	void (*glVertexAttrib2dvARB)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib2fARB)(GLuint index, GLfloat x, GLfloat y) = nullptr;
	void (*glVertexAttrib2fvARB)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib2sARB)(GLuint index, GLshort x, GLshort y) = nullptr;
	void (*glVertexAttrib2svARB)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib3dARB)(GLuint index, GLdouble x, GLdouble y, GLdouble z) = nullptr;
	void (*glVertexAttrib3dvARB)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib3fARB)(GLuint index, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glVertexAttrib3fvARB)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib3sARB)(GLuint index, GLshort x, GLshort y, GLshort z) = nullptr;
	void (*glVertexAttrib3svARB)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib4NbvARB)(GLuint index, const GLbyte *v) = nullptr;
	void (*glVertexAttrib4NivARB)(GLuint index, const GLint *v) = nullptr;
	void (*glVertexAttrib4NsvARB)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib4NubARB)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) = nullptr;
	void (*glVertexAttrib4NubvARB)(GLuint index, const GLubyte *v) = nullptr;
	void (*glVertexAttrib4NuivARB)(GLuint index, const GLuint *v) = nullptr;
	void (*glVertexAttrib4NusvARB)(GLuint index, const GLushort *v) = nullptr;
	void (*glVertexAttrib4bvARB)(GLuint index, const GLbyte *v) = nullptr;
	void (*glVertexAttrib4dARB)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glVertexAttrib4dvARB)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib4fARB)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	void (*glVertexAttrib4fvARB)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib4ivARB)(GLuint index, const GLint *v) = nullptr;
	void (*glVertexAttrib4sARB)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) = nullptr;
	void (*glVertexAttrib4svARB)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib4ubvARB)(GLuint index, const GLubyte *v) = nullptr;
	void (*glVertexAttrib4uivARB)(GLuint index, const GLuint *v) = nullptr;
	void (*glVertexAttrib4usvARB)(GLuint index, const GLushort *v) = nullptr;
	void (*glVertexAttribPointerARB)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer) = nullptr;
	#endif
	#endif // GL_ARB_vertex_shader
	#ifdef GL_ARB_vertex_type_2_10_10_10_rev
	bool ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
	void (*glColorP3ui)(GLenum type, GLuint color) = nullptr;
	void (*glColorP3uiv)(GLenum type, const GLuint *color) = nullptr;
	void (*glColorP4ui)(GLenum type, GLuint color) = nullptr;
	void (*glColorP4uiv)(GLenum type, const GLuint *color) = nullptr;
	void (*glMultiTexCoordP1ui)(GLenum texture, GLenum type, GLuint coords) = nullptr;
	void (*glMultiTexCoordP1uiv)(GLenum texture, GLenum type, const GLuint *coords) = nullptr;
	void (*glMultiTexCoordP2ui)(GLenum texture, GLenum type, GLuint coords) = nullptr;
	void (*glMultiTexCoordP2uiv)(GLenum texture, GLenum type, const GLuint *coords) = nullptr;
	void (*glMultiTexCoordP3ui)(GLenum texture, GLenum type, GLuint coords) = nullptr;
	void (*glMultiTexCoordP3uiv)(GLenum texture, GLenum type, const GLuint *coords) = nullptr;
	void (*glMultiTexCoordP4ui)(GLenum texture, GLenum type, GLuint coords) = nullptr;
	void (*glMultiTexCoordP4uiv)(GLenum texture, GLenum type, const GLuint *coords) = nullptr;
	void (*glNormalP3ui)(GLenum type, GLuint coords) = nullptr;
	void (*glNormalP3uiv)(GLenum type, const GLuint *coords) = nullptr;
	void (*glSecondaryColorP3ui)(GLenum type, GLuint color) = nullptr;
	void (*glSecondaryColorP3uiv)(GLenum type, const GLuint *color) = nullptr;
	void (*glTexCoordP1ui)(GLenum type, GLuint coords) = nullptr;
	void (*glTexCoordP1uiv)(GLenum type, const GLuint *coords) = nullptr;
	void (*glTexCoordP2ui)(GLenum type, GLuint coords) = nullptr;
	void (*glTexCoordP2uiv)(GLenum type, const GLuint *coords) = nullptr;
	void (*glTexCoordP3ui)(GLenum type, GLuint coords) = nullptr;
	void (*glTexCoordP3uiv)(GLenum type, const GLuint *coords) = nullptr;
	void (*glTexCoordP4ui)(GLenum type, GLuint coords) = nullptr;
	void (*glTexCoordP4uiv)(GLenum type, const GLuint *coords) = nullptr;
	void (*glVertexP2ui)(GLenum type, GLuint value) = nullptr;
	void (*glVertexP2uiv)(GLenum type, const GLuint *value) = nullptr;
	void (*glVertexP3ui)(GLenum type, GLuint value) = nullptr;
	void (*glVertexP3uiv)(GLenum type, const GLuint *value) = nullptr;
	void (*glVertexP4ui)(GLenum type, GLuint value) = nullptr;
	void (*glVertexP4uiv)(GLenum type, const GLuint *value) = nullptr;
	#endif // GL_ARB_vertex_type_2_10_10_10_rev
	#ifdef GL_ARB_viewport_array
	bool ext_GL_ARB_viewport_array = false;
	void (*glDepthRangeArrayv)(GLuint first, GLsizei count, const GLdouble *v) = nullptr;
	void (*glDepthRangeIndexed)(GLuint index, GLdouble n, GLdouble f) = nullptr;
	void (*glGetDoublei_v)(GLenum target, GLuint index, GLdouble *data) = nullptr;
	void (*glGetFloati_v)(GLenum target, GLuint index, GLfloat *data) = nullptr;
	void (*glScissorArrayv)(GLuint first, GLsizei count, const GLint *v) = nullptr;
	void (*glScissorIndexed)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) = nullptr;
	void (*glScissorIndexedv)(GLuint index, const GLint *v) = nullptr;
	void (*glViewportArrayv)(GLuint first, GLsizei count, const GLfloat *v) = nullptr;
	void (*glViewportIndexedf)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) = nullptr;
	void (*glViewportIndexedfv)(GLuint index, const GLfloat *v) = nullptr;
	#endif // GL_ARB_viewport_array
	#ifdef GL_ARB_window_pos
	bool ext_GL_ARB_window_pos = false;
	void (*glWindowPos2dARB)(GLdouble x, GLdouble y) = nullptr;
	void (*glWindowPos2dvARB)(const GLdouble *v) = nullptr;
	void (*glWindowPos2fARB)(GLfloat x, GLfloat y) = nullptr;
	void (*glWindowPos2fvARB)(const GLfloat *v) = nullptr;
	void (*glWindowPos2iARB)(GLint x, GLint y) = nullptr;
	void (*glWindowPos2ivARB)(const GLint *v) = nullptr;
	void (*glWindowPos2sARB)(GLshort x, GLshort y) = nullptr;
	void (*glWindowPos2svARB)(const GLshort *v) = nullptr;
	void (*glWindowPos3dARB)(GLdouble x, GLdouble y, GLdouble z) = nullptr;
	void (*glWindowPos3dvARB)(const GLdouble *v) = nullptr;
	void (*glWindowPos3fARB)(GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glWindowPos3fvARB)(const GLfloat *v) = nullptr;
	void (*glWindowPos3iARB)(GLint x, GLint y, GLint z) = nullptr;
	void (*glWindowPos3ivARB)(const GLint *v) = nullptr;
	void (*glWindowPos3sARB)(GLshort x, GLshort y, GLshort z) = nullptr;
	void (*glWindowPos3svARB)(const GLshort *v) = nullptr;
	#endif // GL_ARB_window_pos
	#ifdef GL_ATI_draw_buffers
	bool ext_GL_ATI_draw_buffers = false;
	void (*glDrawBuffersATI)(GLsizei n, const GLenum *bufs) = nullptr;
	#endif // GL_ATI_draw_buffers
	#ifdef GL_ATI_element_array
	bool ext_GL_ATI_element_array = false;
	void (*glDrawElementArrayATI)(GLenum mode, GLsizei count) = nullptr;
	void (*glDrawRangeElementArrayATI)(GLenum mode, GLuint start, GLuint end, GLsizei count) = nullptr;
	void (*glElementPointerATI)(GLenum type, const void *pointer) = nullptr;
	#endif // GL_ATI_element_array
	#ifdef GL_ATI_envmap_bumpmap
	bool ext_GL_ATI_envmap_bumpmap = false;
	void (*glGetTexBumpParameterfvATI)(GLenum pname, GLfloat *param) = nullptr;
	void (*glGetTexBumpParameterivATI)(GLenum pname, GLint *param) = nullptr;
	void (*glTexBumpParameterfvATI)(GLenum pname, const GLfloat *param) = nullptr;
	void (*glTexBumpParameterivATI)(GLenum pname, const GLint *param) = nullptr;
	#endif // GL_ATI_envmap_bumpmap
	#ifdef GL_ATI_fragment_shader
	bool ext_GL_ATI_fragment_shader = false;
	void (*glAlphaFragmentOp1ATI)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod) = nullptr;
	void (*glAlphaFragmentOp2ATI)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod) = nullptr;
	void (*glAlphaFragmentOp3ATI)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod) = nullptr;
	void (*glBeginFragmentShaderATI)() = nullptr;
	void (*glBindFragmentShaderATI)(GLuint id) = nullptr;
	void (*glColorFragmentOp1ATI)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod) = nullptr;
	void (*glColorFragmentOp2ATI)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod) = nullptr;
	void (*glColorFragmentOp3ATI)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod) = nullptr;
	void (*glDeleteFragmentShaderATI)(GLuint id) = nullptr;
	void (*glEndFragmentShaderATI)() = nullptr;
	GLuint (*glGenFragmentShadersATI)(GLuint range) = nullptr;
	void (*glPassTexCoordATI)(GLuint dst, GLuint coord, GLenum swizzle) = nullptr;
	void (*glSampleMapATI)(GLuint dst, GLuint interp, GLenum swizzle) = nullptr;
	void (*glSetFragmentShaderConstantATI)(GLuint dst, const GLfloat *value) = nullptr;
	#endif // GL_ATI_fragment_shader
	#ifdef GL_ATI_map_object_buffer
	bool ext_GL_ATI_map_object_buffer = false;
	void *(*glMapObjectBufferATI)(GLuint buffer) = nullptr;
	void (*glUnmapObjectBufferATI)(GLuint buffer) = nullptr;
	#endif // GL_ATI_map_object_buffer
	#ifdef GL_ATI_meminfo
	bool ext_GL_ATI_meminfo = false;
	#endif // GL_ATI_meminfo
	#ifdef GL_ATI_pixel_format_float
	bool ext_GL_ATI_pixel_format_float = false;
	#endif // GL_ATI_pixel_format_float
	#ifdef GL_ATI_pn_triangles
	bool ext_GL_ATI_pn_triangles = false;
	void (*glPNTrianglesfATI)(GLenum pname, GLfloat param) = nullptr;
	void (*glPNTrianglesiATI)(GLenum pname, GLint param) = nullptr;
	#endif // GL_ATI_pn_triangles
	#ifdef GL_ATI_separate_stencil
	bool ext_GL_ATI_separate_stencil = false;
	void (*glStencilFuncSeparateATI)(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask) = nullptr;
	void (*glStencilOpSeparateATI)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) = nullptr;
	#endif // GL_ATI_separate_stencil
	#ifdef GL_ATI_text_fragment_shader
	bool ext_GL_ATI_text_fragment_shader = false;
	#endif // GL_ATI_text_fragment_shader
	#ifdef GL_ATI_texture_env_combine3
	bool ext_GL_ATI_texture_env_combine3 = false;
	#endif // GL_ATI_texture_env_combine3
	#ifdef GL_ATI_texture_float
	bool ext_GL_ATI_texture_float = false;
	#endif // GL_ATI_texture_float
	#ifdef GL_ATI_texture_mirror_once
	bool ext_GL_ATI_texture_mirror_once = false;
	#endif // GL_ATI_texture_mirror_once
	#ifdef GL_ATI_vertex_array_object
	bool ext_GL_ATI_vertex_array_object = false;
	void (*glArrayObjectATI)(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset) = nullptr;
	void (*glFreeObjectBufferATI)(GLuint buffer) = nullptr;
	void (*glGetArrayObjectfvATI)(GLenum array, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetArrayObjectivATI)(GLenum array, GLenum pname, GLint *params) = nullptr;
	void (*glGetObjectBufferfvATI)(GLuint buffer, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetObjectBufferivATI)(GLuint buffer, GLenum pname, GLint *params) = nullptr;
	void (*glGetVariantArrayObjectfvATI)(GLuint id, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetVariantArrayObjectivATI)(GLuint id, GLenum pname, GLint *params) = nullptr;
	GLboolean (*glIsObjectBufferATI)(GLuint buffer) = nullptr;
	GLuint (*glNewObjectBufferATI)(GLsizei size, const void *pointer, GLenum usage) = nullptr;
	void (*glUpdateObjectBufferATI)(GLuint buffer, GLuint offset, GLsizei size, const void *pointer, GLenum preserve) = nullptr;
	void (*glVariantArrayObjectATI)(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset) = nullptr;
	#endif // GL_ATI_vertex_array_object
	#ifdef GL_ATI_vertex_attrib_array_object
	bool ext_GL_ATI_vertex_attrib_array_object = false;
	void (*glGetVertexAttribArrayObjectfvATI)(GLuint index, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetVertexAttribArrayObjectivATI)(GLuint index, GLenum pname, GLint *params) = nullptr;
	void (*glVertexAttribArrayObjectATI)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset) = nullptr;
	#endif // GL_ATI_vertex_attrib_array_object
	#ifdef GL_ATI_vertex_streams
	bool ext_GL_ATI_vertex_streams = false;
	void (*glClientActiveVertexStreamATI)(GLenum stream) = nullptr;
	void (*glNormalStream3bATI)(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz) = nullptr;
	void (*glNormalStream3bvATI)(GLenum stream, const GLbyte *coords) = nullptr;
	void (*glNormalStream3dATI)(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz) = nullptr;
	void (*glNormalStream3dvATI)(GLenum stream, const GLdouble *coords) = nullptr;
	void (*glNormalStream3fATI)(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz) = nullptr;
	void (*glNormalStream3fvATI)(GLenum stream, const GLfloat *coords) = nullptr;
	void (*glNormalStream3iATI)(GLenum stream, GLint nx, GLint ny, GLint nz) = nullptr;
	void (*glNormalStream3ivATI)(GLenum stream, const GLint *coords) = nullptr;
	void (*glNormalStream3sATI)(GLenum stream, GLshort nx, GLshort ny, GLshort nz) = nullptr;
	void (*glNormalStream3svATI)(GLenum stream, const GLshort *coords) = nullptr;
	void (*glVertexBlendEnvfATI)(GLenum pname, GLfloat param) = nullptr;
	void (*glVertexBlendEnviATI)(GLenum pname, GLint param) = nullptr;
	void (*glVertexStream1dATI)(GLenum stream, GLdouble x) = nullptr;
	void (*glVertexStream1dvATI)(GLenum stream, const GLdouble *coords) = nullptr;
	void (*glVertexStream1fATI)(GLenum stream, GLfloat x) = nullptr;
	void (*glVertexStream1fvATI)(GLenum stream, const GLfloat *coords) = nullptr;
	void (*glVertexStream1iATI)(GLenum stream, GLint x) = nullptr;
	void (*glVertexStream1ivATI)(GLenum stream, const GLint *coords) = nullptr;
	void (*glVertexStream1sATI)(GLenum stream, GLshort x) = nullptr;
	void (*glVertexStream1svATI)(GLenum stream, const GLshort *coords) = nullptr;
	void (*glVertexStream2dATI)(GLenum stream, GLdouble x, GLdouble y) = nullptr;
	void (*glVertexStream2dvATI)(GLenum stream, const GLdouble *coords) = nullptr;
	void (*glVertexStream2fATI)(GLenum stream, GLfloat x, GLfloat y) = nullptr;
	void (*glVertexStream2fvATI)(GLenum stream, const GLfloat *coords) = nullptr;
	void (*glVertexStream2iATI)(GLenum stream, GLint x, GLint y) = nullptr;
	void (*glVertexStream2ivATI)(GLenum stream, const GLint *coords) = nullptr;
	void (*glVertexStream2sATI)(GLenum stream, GLshort x, GLshort y) = nullptr;
	void (*glVertexStream2svATI)(GLenum stream, const GLshort *coords) = nullptr;
	void (*glVertexStream3dATI)(GLenum stream, GLdouble x, GLdouble y, GLdouble z) = nullptr;
	void (*glVertexStream3dvATI)(GLenum stream, const GLdouble *coords) = nullptr;
	void (*glVertexStream3fATI)(GLenum stream, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glVertexStream3fvATI)(GLenum stream, const GLfloat *coords) = nullptr;
	void (*glVertexStream3iATI)(GLenum stream, GLint x, GLint y, GLint z) = nullptr;
	void (*glVertexStream3ivATI)(GLenum stream, const GLint *coords) = nullptr;
	void (*glVertexStream3sATI)(GLenum stream, GLshort x, GLshort y, GLshort z) = nullptr;
	void (*glVertexStream3svATI)(GLenum stream, const GLshort *coords) = nullptr;
	void (*glVertexStream4dATI)(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glVertexStream4dvATI)(GLenum stream, const GLdouble *coords) = nullptr;
	void (*glVertexStream4fATI)(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	void (*glVertexStream4fvATI)(GLenum stream, const GLfloat *coords) = nullptr;
	void (*glVertexStream4iATI)(GLenum stream, GLint x, GLint y, GLint z, GLint w) = nullptr;
	void (*glVertexStream4ivATI)(GLenum stream, const GLint *coords) = nullptr;
	void (*glVertexStream4sATI)(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w) = nullptr;
	void (*glVertexStream4svATI)(GLenum stream, const GLshort *coords) = nullptr;
	#endif // GL_ATI_vertex_streams
	#ifdef GL_EXT_422_pixels
	bool ext_GL_EXT_422_pixels = false;
	#endif // GL_EXT_422_pixels
	#ifdef GL_EXT_abgr
	bool ext_GL_EXT_abgr = false;
	#endif // GL_EXT_abgr
	#ifdef GL_EXT_bgra
	bool ext_GL_EXT_bgra = false;
	#endif // GL_EXT_bgra
	#ifdef GL_EXT_bindable_uniform
	bool ext_GL_EXT_bindable_uniform = false;
	GLint (*glGetUniformBufferSizeEXT)(GLuint program, GLint location) = nullptr;
	GLintptr (*glGetUniformOffsetEXT)(GLuint program, GLint location) = nullptr;
	void (*glUniformBufferEXT)(GLuint program, GLint location, GLuint buffer) = nullptr;
	#endif // GL_EXT_bindable_uniform
	#ifdef GL_EXT_blend_color
	bool ext_GL_EXT_blend_color = false;
	void (*glBlendColorEXT)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) = nullptr;
	#endif // GL_EXT_blend_color
	#ifdef GL_EXT_blend_equation_separate
	bool ext_GL_EXT_blend_equation_separate = false;
	void (*glBlendEquationSeparateEXT)(GLenum modeRGB, GLenum modeAlpha) = nullptr;
	#endif // GL_EXT_blend_equation_separate
	#ifdef GL_EXT_blend_func_separate
	bool ext_GL_EXT_blend_func_separate = false;
	void (*glBlendFuncSeparateEXT)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) = nullptr;
	#endif // GL_EXT_blend_func_separate
	#ifdef GL_EXT_blend_minmax
	bool ext_GL_EXT_blend_minmax = false;
	void (*glBlendEquationEXT)(GLenum mode) = nullptr;
	#endif // GL_EXT_blend_minmax
	#ifdef GL_EXT_blend_subtract
	bool ext_GL_EXT_blend_subtract = false;
	#endif // GL_EXT_blend_subtract
	#ifdef GL_EXT_clip_volume_hint
	bool ext_GL_EXT_clip_volume_hint = false;
	#endif // GL_EXT_clip_volume_hint
	#ifdef GL_EXT_cmyka
	bool ext_GL_EXT_cmyka = false;
	#endif // GL_EXT_cmyka
	#ifdef GL_EXT_color_subtable
	bool ext_GL_EXT_color_subtable = false;
	void (*glColorSubTableEXT)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void *data) = nullptr;
	void (*glCopyColorSubTableEXT)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width) = nullptr;
	#endif // GL_EXT_color_subtable
	#ifdef GL_EXT_compiled_vertex_array
	bool ext_GL_EXT_compiled_vertex_array = false;
	void (*glLockArraysEXT)(GLint first, GLsizei count) = nullptr;
	void (*glUnlockArraysEXT)() = nullptr;
	#endif // GL_EXT_compiled_vertex_array
	#ifdef GL_EXT_convolution
	bool ext_GL_EXT_convolution = false;
	void (*glConvolutionFilter1DEXT)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *image) = nullptr;
	void (*glConvolutionFilter2DEXT)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *image) = nullptr;
	void (*glConvolutionParameterfEXT)(GLenum target, GLenum pname, GLfloat params) = nullptr;
	void (*glConvolutionParameterfvEXT)(GLenum target, GLenum pname, const GLfloat *params) = nullptr;
	void (*glConvolutionParameteriEXT)(GLenum target, GLenum pname, GLint params) = nullptr;
	void (*glConvolutionParameterivEXT)(GLenum target, GLenum pname, const GLint *params) = nullptr;
	void (*glCopyConvolutionFilter1DEXT)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) = nullptr;
	void (*glCopyConvolutionFilter2DEXT)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	void (*glGetConvolutionFilterEXT)(GLenum target, GLenum format, GLenum type, void *image) = nullptr;
	void (*glGetConvolutionParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetConvolutionParameterivEXT)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetSeparableFilterEXT)(GLenum target, GLenum format, GLenum type, void *row, void *column, void *span) = nullptr;
	void (*glSeparableFilter2DEXT)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *row, const void *column) = nullptr;
	#endif // GL_EXT_convolution
	#ifdef GL_EXT_coordinate_frame
	bool ext_GL_EXT_coordinate_frame = false;
	void (*glBinormal3bEXT)(GLbyte bx, GLbyte by, GLbyte bz) = nullptr;
	void (*glBinormal3bvEXT)(const GLbyte *v) = nullptr;
	void (*glBinormal3dEXT)(GLdouble bx, GLdouble by, GLdouble bz) = nullptr;
	void (*glBinormal3dvEXT)(const GLdouble *v) = nullptr;
	void (*glBinormal3fEXT)(GLfloat bx, GLfloat by, GLfloat bz) = nullptr;
	void (*glBinormal3fvEXT)(const GLfloat *v) = nullptr;
	void (*glBinormal3iEXT)(GLint bx, GLint by, GLint bz) = nullptr;
	void (*glBinormal3ivEXT)(const GLint *v) = nullptr;
	void (*glBinormal3sEXT)(GLshort bx, GLshort by, GLshort bz) = nullptr;
	void (*glBinormal3svEXT)(const GLshort *v) = nullptr;
	void (*glBinormalPointerEXT)(GLenum type, GLsizei stride, const void *pointer) = nullptr;
	void (*glTangent3bEXT)(GLbyte tx, GLbyte ty, GLbyte tz) = nullptr;
	void (*glTangent3bvEXT)(const GLbyte *v) = nullptr;
	void (*glTangent3dEXT)(GLdouble tx, GLdouble ty, GLdouble tz) = nullptr;
	void (*glTangent3dvEXT)(const GLdouble *v) = nullptr;
	void (*glTangent3fEXT)(GLfloat tx, GLfloat ty, GLfloat tz) = nullptr;
	void (*glTangent3fvEXT)(const GLfloat *v) = nullptr;
	void (*glTangent3iEXT)(GLint tx, GLint ty, GLint tz) = nullptr;
	void (*glTangent3ivEXT)(const GLint *v) = nullptr;
	void (*glTangent3sEXT)(GLshort tx, GLshort ty, GLshort tz) = nullptr;
	void (*glTangent3svEXT)(const GLshort *v) = nullptr;
	void (*glTangentPointerEXT)(GLenum type, GLsizei stride, const void *pointer) = nullptr;
	#endif // GL_EXT_coordinate_frame
	#ifdef GL_EXT_copy_texture
	bool ext_GL_EXT_copy_texture = false;
	void (*glCopyTexImage1DEXT)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) = nullptr;
	void (*glCopyTexImage2DEXT)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) = nullptr;
	void (*glCopyTexSubImage1DEXT)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) = nullptr;
	void (*glCopyTexSubImage2DEXT)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	void (*glCopyTexSubImage3DEXT)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	#endif // GL_EXT_copy_texture
	#ifdef GL_EXT_cull_vertex
	bool ext_GL_EXT_cull_vertex = false;
	void (*glCullParameterdvEXT)(GLenum pname, GLdouble *params) = nullptr;
	void (*glCullParameterfvEXT)(GLenum pname, GLfloat *params) = nullptr;
	#endif // GL_EXT_cull_vertex
	#ifdef GL_EXT_debug_label
	bool ext_GL_EXT_debug_label = false;
	void (*glGetObjectLabelEXT)(GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label) = nullptr;
	void (*glLabelObjectEXT)(GLenum type, GLuint object, GLsizei length, const GLchar *label) = nullptr;
	#endif // GL_EXT_debug_label
	#ifdef GL_EXT_debug_marker
	bool ext_GL_EXT_debug_marker = false;
	void (*glInsertEventMarkerEXT)(GLsizei length, const GLchar *marker) = nullptr;
	void (*glPopGroupMarkerEXT)() = nullptr;
	void (*glPushGroupMarkerEXT)(GLsizei length, const GLchar *marker) = nullptr;
	#endif // GL_EXT_debug_marker
	#ifdef GL_EXT_depth_bounds_test
	bool ext_GL_EXT_depth_bounds_test = false;
	void (*glDepthBoundsEXT)(GLclampd zmin, GLclampd zmax) = nullptr;
	#endif // GL_EXT_depth_bounds_test
	#ifdef GL_EXT_direct_state_access
	bool ext_GL_EXT_direct_state_access = false;
	void (*glBindMultiTextureEXT)(GLenum texunit, GLenum target, GLuint texture) = nullptr;
	GLenum (*glCheckNamedFramebufferStatusEXT)(GLuint framebuffer, GLenum target) = nullptr;
	void (*glClearNamedBufferDataEXT)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data) = nullptr;
	void (*glClearNamedBufferSubDataEXT)(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) = nullptr;
	void (*glClientAttribDefaultEXT)(GLbitfield mask) = nullptr;
	void (*glCompressedMultiTexImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits) = nullptr;
	void (*glCompressedMultiTexImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits) = nullptr;
	void (*glCompressedMultiTexImage3DEXT)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits) = nullptr;
	void (*glCompressedMultiTexSubImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits) = nullptr;
	void (*glCompressedMultiTexSubImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits) = nullptr;
	void (*glCompressedMultiTexSubImage3DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits) = nullptr;
	void (*glCompressedTextureImage1DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits) = nullptr;
	void (*glCompressedTextureImage2DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits) = nullptr;
	void (*glCompressedTextureImage3DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits) = nullptr;
	void (*glCompressedTextureSubImage1DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits) = nullptr;
	void (*glCompressedTextureSubImage2DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits) = nullptr;
	void (*glCompressedTextureSubImage3DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits) = nullptr;
	void (*glCopyMultiTexImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) = nullptr;
	void (*glCopyMultiTexImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) = nullptr;
	void (*glCopyMultiTexSubImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) = nullptr;
	void (*glCopyMultiTexSubImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	void (*glCopyMultiTexSubImage3DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	void (*glCopyTextureImage1DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) = nullptr;
	void (*glCopyTextureImage2DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) = nullptr;
	void (*glCopyTextureSubImage1DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) = nullptr;
	void (*glCopyTextureSubImage2DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	void (*glCopyTextureSubImage3DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	void (*glDisableClientStateIndexedEXT)(GLenum array, GLuint index) = nullptr;
	void (*glDisableClientStateiEXT)(GLenum array, GLuint index) = nullptr;
	void (*glDisableIndexedEXT)(GLenum target, GLuint index) = nullptr;
	void (*glDisableVertexArrayAttribEXT)(GLuint vaobj, GLuint index) = nullptr;
	void (*glDisableVertexArrayEXT)(GLuint vaobj, GLenum array) = nullptr;
	void (*glEnableClientStateIndexedEXT)(GLenum array, GLuint index) = nullptr;
	void (*glEnableClientStateiEXT)(GLenum array, GLuint index) = nullptr;
	void (*glEnableIndexedEXT)(GLenum target, GLuint index) = nullptr;
	void (*glEnableVertexArrayAttribEXT)(GLuint vaobj, GLuint index) = nullptr;
	void (*glEnableVertexArrayEXT)(GLuint vaobj, GLenum array) = nullptr;
	void (*glFlushMappedNamedBufferRangeEXT)(GLuint buffer, GLintptr offset, GLsizeiptr length) = nullptr;
	void (*glFramebufferDrawBufferEXT)(GLuint framebuffer, GLenum mode) = nullptr;
	void (*glFramebufferDrawBuffersEXT)(GLuint framebuffer, GLsizei n, const GLenum *bufs) = nullptr;
	void (*glFramebufferReadBufferEXT)(GLuint framebuffer, GLenum mode) = nullptr;
	void (*glGenerateMultiTexMipmapEXT)(GLenum texunit, GLenum target) = nullptr;
	void (*glGenerateTextureMipmapEXT)(GLuint texture, GLenum target) = nullptr;
	void (*glGetBooleanIndexedvEXT)(GLenum target, GLuint index, GLboolean *data) = nullptr;
	void (*glGetCompressedMultiTexImageEXT)(GLenum texunit, GLenum target, GLint lod, void *img) = nullptr;
	void (*glGetCompressedTextureImageEXT)(GLuint texture, GLenum target, GLint lod, void *img) = nullptr;
	void (*glGetDoubleIndexedvEXT)(GLenum target, GLuint index, GLdouble *data) = nullptr;
	void (*glGetDoublei_vEXT)(GLenum pname, GLuint index, GLdouble *params) = nullptr;
	void (*glGetFloatIndexedvEXT)(GLenum target, GLuint index, GLfloat *data) = nullptr;
	void (*glGetFloati_vEXT)(GLenum pname, GLuint index, GLfloat *params) = nullptr;
	void (*glGetFramebufferParameterivEXT)(GLuint framebuffer, GLenum pname, GLint *params) = nullptr;
	void (*glGetIntegerIndexedvEXT)(GLenum target, GLuint index, GLint *data) = nullptr;
	void (*glGetMultiTexEnvfvEXT)(GLenum texunit, GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetMultiTexEnvivEXT)(GLenum texunit, GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetMultiTexGendvEXT)(GLenum texunit, GLenum coord, GLenum pname, GLdouble *params) = nullptr;
	void (*glGetMultiTexGenfvEXT)(GLenum texunit, GLenum coord, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetMultiTexGenivEXT)(GLenum texunit, GLenum coord, GLenum pname, GLint *params) = nullptr;
	void (*glGetMultiTexImageEXT)(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void *pixels) = nullptr;
	void (*glGetMultiTexLevelParameterfvEXT)(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetMultiTexLevelParameterivEXT)(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params) = nullptr;
	void (*glGetMultiTexParameterIivEXT)(GLenum texunit, GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetMultiTexParameterIuivEXT)(GLenum texunit, GLenum target, GLenum pname, GLuint *params) = nullptr;
	void (*glGetMultiTexParameterfvEXT)(GLenum texunit, GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetMultiTexParameterivEXT)(GLenum texunit, GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetNamedBufferParameterivEXT)(GLuint buffer, GLenum pname, GLint *params) = nullptr;
	void (*glGetNamedBufferPointervEXT)(GLuint buffer, GLenum pname, void **params) = nullptr;
	void (*glGetNamedBufferSubDataEXT)(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data) = nullptr;
	void (*glGetNamedFramebufferAttachmentParameterivEXT)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params) = nullptr;
	void (*glGetNamedFramebufferParameterivEXT)(GLuint framebuffer, GLenum pname, GLint *params) = nullptr;
	void (*glGetNamedProgramLocalParameterIivEXT)(GLuint program, GLenum target, GLuint index, GLint *params) = nullptr;
	void (*glGetNamedProgramLocalParameterIuivEXT)(GLuint program, GLenum target, GLuint index, GLuint *params) = nullptr;
	void (*glGetNamedProgramLocalParameterdvEXT)(GLuint program, GLenum target, GLuint index, GLdouble *params) = nullptr;
	void (*glGetNamedProgramLocalParameterfvEXT)(GLuint program, GLenum target, GLuint index, GLfloat *params) = nullptr;
	void (*glGetNamedProgramStringEXT)(GLuint program, GLenum target, GLenum pname, void *string) = nullptr;
	void (*glGetNamedProgramivEXT)(GLuint program, GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetNamedRenderbufferParameterivEXT)(GLuint renderbuffer, GLenum pname, GLint *params) = nullptr;
	void (*glGetPointerIndexedvEXT)(GLenum target, GLuint index, void **data) = nullptr;
	void (*glGetPointeri_vEXT)(GLenum pname, GLuint index, void **params) = nullptr;
	void (*glGetTextureImageEXT)(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void *pixels) = nullptr;
	void (*glGetTextureLevelParameterfvEXT)(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetTextureLevelParameterivEXT)(GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params) = nullptr;
	void (*glGetTextureParameterIivEXT)(GLuint texture, GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetTextureParameterIuivEXT)(GLuint texture, GLenum target, GLenum pname, GLuint *params) = nullptr;
	void (*glGetTextureParameterfvEXT)(GLuint texture, GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetTextureParameterivEXT)(GLuint texture, GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetVertexArrayIntegeri_vEXT)(GLuint vaobj, GLuint index, GLenum pname, GLint *param) = nullptr;
	void (*glGetVertexArrayIntegervEXT)(GLuint vaobj, GLenum pname, GLint *param) = nullptr;
	void (*glGetVertexArrayPointeri_vEXT)(GLuint vaobj, GLuint index, GLenum pname, void **param) = nullptr;
	void (*glGetVertexArrayPointervEXT)(GLuint vaobj, GLenum pname, void **param) = nullptr;
	GLboolean (*glIsEnabledIndexedEXT)(GLenum target, GLuint index) = nullptr;
	void *(*glMapNamedBufferEXT)(GLuint buffer, GLenum access) = nullptr;
	void *(*glMapNamedBufferRangeEXT)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access) = nullptr;
	void (*glMatrixFrustumEXT)(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) = nullptr;
	void (*glMatrixLoadIdentityEXT)(GLenum mode) = nullptr;
	void (*glMatrixLoadTransposedEXT)(GLenum mode, const GLdouble *m) = nullptr;
	void (*glMatrixLoadTransposefEXT)(GLenum mode, const GLfloat *m) = nullptr;
	void (*glMatrixLoaddEXT)(GLenum mode, const GLdouble *m) = nullptr;
	void (*glMatrixLoadfEXT)(GLenum mode, const GLfloat *m) = nullptr;
	void (*glMatrixMultTransposedEXT)(GLenum mode, const GLdouble *m) = nullptr;
	void (*glMatrixMultTransposefEXT)(GLenum mode, const GLfloat *m) = nullptr;
	void (*glMatrixMultdEXT)(GLenum mode, const GLdouble *m) = nullptr;
	void (*glMatrixMultfEXT)(GLenum mode, const GLfloat *m) = nullptr;
	void (*glMatrixOrthoEXT)(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) = nullptr;
	void (*glMatrixPopEXT)(GLenum mode) = nullptr;
	void (*glMatrixPushEXT)(GLenum mode) = nullptr;
	void (*glMatrixRotatedEXT)(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z) = nullptr;
	void (*glMatrixRotatefEXT)(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glMatrixScaledEXT)(GLenum mode, GLdouble x, GLdouble y, GLdouble z) = nullptr;
	void (*glMatrixScalefEXT)(GLenum mode, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glMatrixTranslatedEXT)(GLenum mode, GLdouble x, GLdouble y, GLdouble z) = nullptr;
	void (*glMatrixTranslatefEXT)(GLenum mode, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glMultiTexBufferEXT)(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer) = nullptr;
	void (*glMultiTexCoordPointerEXT)(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void *pointer) = nullptr;
	void (*glMultiTexEnvfEXT)(GLenum texunit, GLenum target, GLenum pname, GLfloat param) = nullptr;
	void (*glMultiTexEnvfvEXT)(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params) = nullptr;
	void (*glMultiTexEnviEXT)(GLenum texunit, GLenum target, GLenum pname, GLint param) = nullptr;
	void (*glMultiTexEnvivEXT)(GLenum texunit, GLenum target, GLenum pname, const GLint *params) = nullptr;
	void (*glMultiTexGendEXT)(GLenum texunit, GLenum coord, GLenum pname, GLdouble param) = nullptr;
	void (*glMultiTexGendvEXT)(GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params) = nullptr;
	void (*glMultiTexGenfEXT)(GLenum texunit, GLenum coord, GLenum pname, GLfloat param) = nullptr;
	void (*glMultiTexGenfvEXT)(GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params) = nullptr;
	void (*glMultiTexGeniEXT)(GLenum texunit, GLenum coord, GLenum pname, GLint param) = nullptr;
	void (*glMultiTexGenivEXT)(GLenum texunit, GLenum coord, GLenum pname, const GLint *params) = nullptr;
	void (*glMultiTexImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glMultiTexImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glMultiTexImage3DEXT)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glMultiTexParameterIivEXT)(GLenum texunit, GLenum target, GLenum pname, const GLint *params) = nullptr;
	void (*glMultiTexParameterIuivEXT)(GLenum texunit, GLenum target, GLenum pname, const GLuint *params) = nullptr;
	void (*glMultiTexParameterfEXT)(GLenum texunit, GLenum target, GLenum pname, GLfloat param) = nullptr;
	void (*glMultiTexParameterfvEXT)(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params) = nullptr;
	void (*glMultiTexParameteriEXT)(GLenum texunit, GLenum target, GLenum pname, GLint param) = nullptr;
	void (*glMultiTexParameterivEXT)(GLenum texunit, GLenum target, GLenum pname, const GLint *params) = nullptr;
	void (*glMultiTexRenderbufferEXT)(GLenum texunit, GLenum target, GLuint renderbuffer) = nullptr;
	void (*glMultiTexSubImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glMultiTexSubImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glMultiTexSubImage3DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glNamedBufferDataEXT)(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage) = nullptr;
	void (*glNamedBufferStorageEXT)(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags) = nullptr;
	void (*glNamedBufferSubDataEXT)(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data) = nullptr;
	void (*glNamedCopyBufferSubDataEXT)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) = nullptr;
	void (*glNamedFramebufferParameteriEXT)(GLuint framebuffer, GLenum pname, GLint param) = nullptr;
	void (*glNamedFramebufferRenderbufferEXT)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) = nullptr;
	void (*glNamedFramebufferTexture1DEXT)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level) = nullptr;
	void (*glNamedFramebufferTexture2DEXT)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level) = nullptr;
	void (*glNamedFramebufferTexture3DEXT)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) = nullptr;
	void (*glNamedFramebufferTextureEXT)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level) = nullptr;
	void (*glNamedFramebufferTextureFaceEXT)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face) = nullptr;
	void (*glNamedFramebufferTextureLayerEXT)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer) = nullptr;
	void (*glNamedProgramLocalParameter4dEXT)(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glNamedProgramLocalParameter4dvEXT)(GLuint program, GLenum target, GLuint index, const GLdouble *params) = nullptr;
	void (*glNamedProgramLocalParameter4fEXT)(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	void (*glNamedProgramLocalParameter4fvEXT)(GLuint program, GLenum target, GLuint index, const GLfloat *params) = nullptr;
	void (*glNamedProgramLocalParameterI4iEXT)(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w) = nullptr;
	void (*glNamedProgramLocalParameterI4ivEXT)(GLuint program, GLenum target, GLuint index, const GLint *params) = nullptr;
	void (*glNamedProgramLocalParameterI4uiEXT)(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) = nullptr;
	void (*glNamedProgramLocalParameterI4uivEXT)(GLuint program, GLenum target, GLuint index, const GLuint *params) = nullptr;
	void (*glNamedProgramLocalParameters4fvEXT)(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params) = nullptr;
	void (*glNamedProgramLocalParametersI4ivEXT)(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params) = nullptr;
	void (*glNamedProgramLocalParametersI4uivEXT)(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params) = nullptr;
	void (*glNamedProgramStringEXT)(GLuint program, GLenum target, GLenum format, GLsizei len, const void *string) = nullptr;
	void (*glNamedRenderbufferStorageEXT)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	void (*glNamedRenderbufferStorageMultisampleCoverageEXT)(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	void (*glNamedRenderbufferStorageMultisampleEXT)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	void (*glProgramUniform1dEXT)(GLuint program, GLint location, GLdouble x) = nullptr;
	void (*glProgramUniform1dvEXT)(GLuint program, GLint location, GLsizei count, const GLdouble *value) = nullptr;
	void (*glProgramUniform1fEXT)(GLuint program, GLint location, GLfloat v0) = nullptr;
	void (*glProgramUniform1fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glProgramUniform1iEXT)(GLuint program, GLint location, GLint v0) = nullptr;
	void (*glProgramUniform1ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glProgramUniform1uiEXT)(GLuint program, GLint location, GLuint v0) = nullptr;
	void (*glProgramUniform1uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glProgramUniform2dEXT)(GLuint program, GLint location, GLdouble x, GLdouble y) = nullptr;
	void (*glProgramUniform2dvEXT)(GLuint program, GLint location, GLsizei count, const GLdouble *value) = nullptr;
	void (*glProgramUniform2fEXT)(GLuint program, GLint location, GLfloat v0, GLfloat v1) = nullptr;
	void (*glProgramUniform2fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glProgramUniform2iEXT)(GLuint program, GLint location, GLint v0, GLint v1) = nullptr;
	void (*glProgramUniform2ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glProgramUniform2uiEXT)(GLuint program, GLint location, GLuint v0, GLuint v1) = nullptr;
	void (*glProgramUniform2uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glProgramUniform3dEXT)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z) = nullptr;
	void (*glProgramUniform3dvEXT)(GLuint program, GLint location, GLsizei count, const GLdouble *value) = nullptr;
	void (*glProgramUniform3fEXT)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) = nullptr;
	void (*glProgramUniform3fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glProgramUniform3iEXT)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) = nullptr;
	void (*glProgramUniform3ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glProgramUniform3uiEXT)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) = nullptr;
	void (*glProgramUniform3uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glProgramUniform4dEXT)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glProgramUniform4dvEXT)(GLuint program, GLint location, GLsizei count, const GLdouble *value) = nullptr;
	void (*glProgramUniform4fEXT)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) = nullptr;
	void (*glProgramUniform4fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glProgramUniform4iEXT)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) = nullptr;
	void (*glProgramUniform4ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glProgramUniform4uiEXT)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) = nullptr;
	void (*glProgramUniform4uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glProgramUniformMatrix2dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix2fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix2x3dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix2x3fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix2x4dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix2x4fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix3dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix3fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix3x2dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix3x2fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix3x4dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix3x4fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix4dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix4fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix4x2dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix4x2fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix4x3dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) = nullptr;
	void (*glProgramUniformMatrix4x3fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glPushClientAttribDefaultEXT)(GLbitfield mask) = nullptr;
	void (*glTextureBufferEXT)(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer) = nullptr;
	void (*glTextureBufferRangeEXT)(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) = nullptr;
	void (*glTextureImage1DEXT)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTextureImage2DEXT)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTextureImage3DEXT)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTexturePageCommitmentEXT)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit) = nullptr;
	void (*glTextureParameterIivEXT)(GLuint texture, GLenum target, GLenum pname, const GLint *params) = nullptr;
	void (*glTextureParameterIuivEXT)(GLuint texture, GLenum target, GLenum pname, const GLuint *params) = nullptr;
	void (*glTextureParameterfEXT)(GLuint texture, GLenum target, GLenum pname, GLfloat param) = nullptr;
	void (*glTextureParameterfvEXT)(GLuint texture, GLenum target, GLenum pname, const GLfloat *params) = nullptr;
	void (*glTextureParameteriEXT)(GLuint texture, GLenum target, GLenum pname, GLint param) = nullptr;
	void (*glTextureParameterivEXT)(GLuint texture, GLenum target, GLenum pname, const GLint *params) = nullptr;
	void (*glTextureRenderbufferEXT)(GLuint texture, GLenum target, GLuint renderbuffer) = nullptr;
	void (*glTextureStorage1DEXT)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) = nullptr;
	void (*glTextureStorage2DEXT)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	void (*glTextureStorage2DMultisampleEXT)(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) = nullptr;
	void (*glTextureStorage3DEXT)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) = nullptr;
	void (*glTextureStorage3DMultisampleEXT)(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) = nullptr;
	void (*glTextureSubImage1DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTextureSubImage2DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTextureSubImage3DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) = nullptr;
	GLboolean (*glUnmapNamedBufferEXT)(GLuint buffer) = nullptr;
	void (*glVertexArrayBindVertexBufferEXT)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) = nullptr;
	void (*glVertexArrayColorOffsetEXT)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) = nullptr;
	void (*glVertexArrayEdgeFlagOffsetEXT)(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset) = nullptr;
	void (*glVertexArrayFogCoordOffsetEXT)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset) = nullptr;
	void (*glVertexArrayIndexOffsetEXT)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset) = nullptr;
	void (*glVertexArrayMultiTexCoordOffsetEXT)(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset) = nullptr;
	void (*glVertexArrayNormalOffsetEXT)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset) = nullptr;
	void (*glVertexArraySecondaryColorOffsetEXT)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) = nullptr;
	void (*glVertexArrayTexCoordOffsetEXT)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) = nullptr;
	void (*glVertexArrayVertexAttribBindingEXT)(GLuint vaobj, GLuint attribindex, GLuint bindingindex) = nullptr;
	void (*glVertexArrayVertexAttribDivisorEXT)(GLuint vaobj, GLuint index, GLuint divisor) = nullptr;
	void (*glVertexArrayVertexAttribFormatEXT)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) = nullptr;
	void (*glVertexArrayVertexAttribIFormatEXT)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) = nullptr;
	void (*glVertexArrayVertexAttribIOffsetEXT)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset) = nullptr;
	void (*glVertexArrayVertexAttribLFormatEXT)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) = nullptr;
	void (*glVertexArrayVertexAttribLOffsetEXT)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset) = nullptr;
	void (*glVertexArrayVertexAttribOffsetEXT)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset) = nullptr;
	void (*glVertexArrayVertexBindingDivisorEXT)(GLuint vaobj, GLuint bindingindex, GLuint divisor) = nullptr;
	void (*glVertexArrayVertexOffsetEXT)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) = nullptr;
	#endif // GL_EXT_direct_state_access
	#ifdef GL_EXT_draw_buffers2
	bool ext_GL_EXT_draw_buffers2 = false;
	void (*glColorMaskIndexedEXT)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) = nullptr;
	#if !defined(GL_EXT_direct_state_access)
	void (*glDisableIndexedEXT)(GLenum target, GLuint index) = nullptr;
	void (*glEnableIndexedEXT)(GLenum target, GLuint index) = nullptr;
	void (*glGetBooleanIndexedvEXT)(GLenum target, GLuint index, GLboolean *data) = nullptr;
	void (*glGetIntegerIndexedvEXT)(GLenum target, GLuint index, GLint *data) = nullptr;
	GLboolean (*glIsEnabledIndexedEXT)(GLenum target, GLuint index) = nullptr;
	#endif
	#endif // GL_EXT_draw_buffers2
	#ifdef GL_EXT_draw_instanced
	bool ext_GL_EXT_draw_instanced = false;
	void (*glDrawArraysInstancedEXT)(GLenum mode, GLint start, GLsizei count, GLsizei primcount) = nullptr;
	void (*glDrawElementsInstancedEXT)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount) = nullptr;
	#endif // GL_EXT_draw_instanced
	#ifdef GL_EXT_draw_range_elements
	bool ext_GL_EXT_draw_range_elements = false;
	void (*glDrawRangeElementsEXT)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices) = nullptr;
	#endif // GL_EXT_draw_range_elements
	#ifdef GL_EXT_fog_coord
	bool ext_GL_EXT_fog_coord = false;
	void (*glFogCoordPointerEXT)(GLenum type, GLsizei stride, const void *pointer) = nullptr;
	void (*glFogCoorddEXT)(GLdouble coord) = nullptr;
	void (*glFogCoorddvEXT)(const GLdouble *coord) = nullptr;
	void (*glFogCoordfEXT)(GLfloat coord) = nullptr;
	void (*glFogCoordfvEXT)(const GLfloat *coord) = nullptr;
	#endif // GL_EXT_fog_coord
	#ifdef GL_EXT_framebuffer_blit
	bool ext_GL_EXT_framebuffer_blit = false;
	void (*glBlitFramebufferEXT)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) = nullptr;
	#endif // GL_EXT_framebuffer_blit
	#ifdef GL_EXT_framebuffer_multisample
	bool ext_GL_EXT_framebuffer_multisample = false;
	void (*glRenderbufferStorageMultisampleEXT)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	#endif // GL_EXT_framebuffer_multisample
	#ifdef GL_EXT_framebuffer_multisample_blit_scaled
	bool ext_GL_EXT_framebuffer_multisample_blit_scaled = false;
	#endif // GL_EXT_framebuffer_multisample_blit_scaled
	#ifdef GL_EXT_framebuffer_object
	bool ext_GL_EXT_framebuffer_object = false;
	void (*glBindFramebufferEXT)(GLenum target, GLuint framebuffer) = nullptr;
	void (*glBindRenderbufferEXT)(GLenum target, GLuint renderbuffer) = nullptr;
	GLenum (*glCheckFramebufferStatusEXT)(GLenum target) = nullptr;
	void (*glDeleteFramebuffersEXT)(GLsizei n, const GLuint *framebuffers) = nullptr;
	void (*glDeleteRenderbuffersEXT)(GLsizei n, const GLuint *renderbuffers) = nullptr;
	void (*glFramebufferRenderbufferEXT)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) = nullptr;
	void (*glFramebufferTexture1DEXT)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) = nullptr;
	void (*glFramebufferTexture2DEXT)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) = nullptr;
	void (*glFramebufferTexture3DEXT)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) = nullptr;
	void (*glGenFramebuffersEXT)(GLsizei n, GLuint *framebuffers) = nullptr;
	void (*glGenRenderbuffersEXT)(GLsizei n, GLuint *renderbuffers) = nullptr;
	void (*glGenerateMipmapEXT)(GLenum target) = nullptr;
	void (*glGetFramebufferAttachmentParameterivEXT)(GLenum target, GLenum attachment, GLenum pname, GLint *params) = nullptr;
	void (*glGetRenderbufferParameterivEXT)(GLenum target, GLenum pname, GLint *params) = nullptr;
	GLboolean (*glIsFramebufferEXT)(GLuint framebuffer) = nullptr;
	GLboolean (*glIsRenderbufferEXT)(GLuint renderbuffer) = nullptr;
	void (*glRenderbufferStorageEXT)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	#endif // GL_EXT_framebuffer_object
	#ifdef GL_EXT_framebuffer_sRGB
	bool ext_GL_EXT_framebuffer_sRGB = false;
	#endif // GL_EXT_framebuffer_sRGB
	#ifdef GL_EXT_geometry_shader4
	bool ext_GL_EXT_geometry_shader4 = false;
	void (*glProgramParameteriEXT)(GLuint program, GLenum pname, GLint value) = nullptr;
	#endif // GL_EXT_geometry_shader4
	#ifdef GL_EXT_gpu_program_parameters
	bool ext_GL_EXT_gpu_program_parameters = false;
	void (*glProgramEnvParameters4fvEXT)(GLenum target, GLuint index, GLsizei count, const GLfloat *params) = nullptr;
	void (*glProgramLocalParameters4fvEXT)(GLenum target, GLuint index, GLsizei count, const GLfloat *params) = nullptr;
	#endif // GL_EXT_gpu_program_parameters
	#ifdef GL_EXT_gpu_shader4
	bool ext_GL_EXT_gpu_shader4 = false;
	void (*glBindFragDataLocationEXT)(GLuint program, GLuint color, const GLchar *name) = nullptr;
	GLint (*glGetFragDataLocationEXT)(GLuint program, const GLchar *name) = nullptr;
	void (*glGetUniformuivEXT)(GLuint program, GLint location, GLuint *params) = nullptr;
	void (*glUniform1uiEXT)(GLint location, GLuint v0) = nullptr;
	void (*glUniform1uivEXT)(GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glUniform2uiEXT)(GLint location, GLuint v0, GLuint v1) = nullptr;
	void (*glUniform2uivEXT)(GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glUniform3uiEXT)(GLint location, GLuint v0, GLuint v1, GLuint v2) = nullptr;
	void (*glUniform3uivEXT)(GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glUniform4uiEXT)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) = nullptr;
	void (*glUniform4uivEXT)(GLint location, GLsizei count, const GLuint *value) = nullptr;
	#endif // GL_EXT_gpu_shader4
	#ifdef GL_EXT_histogram
	bool ext_GL_EXT_histogram = false;
	void (*glGetHistogramEXT)(GLenum target, GLboolean reset, GLenum format, GLenum type, void *values) = nullptr;
	void (*glGetHistogramParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetHistogramParameterivEXT)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetMinmaxEXT)(GLenum target, GLboolean reset, GLenum format, GLenum type, void *values) = nullptr;
	void (*glGetMinmaxParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetMinmaxParameterivEXT)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glHistogramEXT)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink) = nullptr;
	void (*glMinmaxEXT)(GLenum target, GLenum internalformat, GLboolean sink) = nullptr;
	void (*glResetHistogramEXT)(GLenum target) = nullptr;
	void (*glResetMinmaxEXT)(GLenum target) = nullptr;
	#endif // GL_EXT_histogram
	#ifdef GL_EXT_index_array_formats
	bool ext_GL_EXT_index_array_formats = false;
	#endif // GL_EXT_index_array_formats
	#ifdef GL_EXT_index_func
	bool ext_GL_EXT_index_func = false;
	void (*glIndexFuncEXT)(GLenum func, GLclampf ref) = nullptr;
	#endif // GL_EXT_index_func
	#ifdef GL_EXT_index_material
	bool ext_GL_EXT_index_material = false;
	void (*glIndexMaterialEXT)(GLenum face, GLenum mode) = nullptr;
	#endif // GL_EXT_index_material
	#ifdef GL_EXT_light_texture
	bool ext_GL_EXT_light_texture = false;
	void (*glApplyTextureEXT)(GLenum mode) = nullptr;
	void (*glTextureLightEXT)(GLenum pname) = nullptr;
	void (*glTextureMaterialEXT)(GLenum face, GLenum mode) = nullptr;
	#endif // GL_EXT_light_texture
	#ifdef GL_EXT_multi_draw_arrays
	bool ext_GL_EXT_multi_draw_arrays = false;
	void (*glMultiDrawArraysEXT)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount) = nullptr;
	void (*glMultiDrawElementsEXT)(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount) = nullptr;
	#endif // GL_EXT_multi_draw_arrays
	#ifdef GL_EXT_multisample
	bool ext_GL_EXT_multisample = false;
	void (*glSampleMaskEXT)(GLclampf value, GLboolean invert) = nullptr;
	void (*glSamplePatternEXT)(GLenum pattern) = nullptr;
	#endif // GL_EXT_multisample
	#ifdef GL_EXT_packed_depth_stencil
	bool ext_GL_EXT_packed_depth_stencil = false;
	#endif // GL_EXT_packed_depth_stencil
	#ifdef GL_EXT_packed_float
	bool ext_GL_EXT_packed_float = false;
	#endif // GL_EXT_packed_float
	#ifdef GL_EXT_packed_pixels
	bool ext_GL_EXT_packed_pixels = false;
	#endif // GL_EXT_packed_pixels
	#ifdef GL_EXT_paletted_texture
	bool ext_GL_EXT_paletted_texture = false;
	void (*glColorTableEXT)(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void *table) = nullptr;
	void (*glGetColorTableEXT)(GLenum target, GLenum format, GLenum type, void *data) = nullptr;
	void (*glGetColorTableParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetColorTableParameterivEXT)(GLenum target, GLenum pname, GLint *params) = nullptr;
	#endif // GL_EXT_paletted_texture
	#ifdef GL_EXT_pixel_buffer_object
	bool ext_GL_EXT_pixel_buffer_object = false;
	#endif // GL_EXT_pixel_buffer_object
	#ifdef GL_EXT_pixel_transform
	bool ext_GL_EXT_pixel_transform = false;
	void (*glGetPixelTransformParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetPixelTransformParameterivEXT)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glPixelTransformParameterfEXT)(GLenum target, GLenum pname, GLfloat param) = nullptr;
	void (*glPixelTransformParameterfvEXT)(GLenum target, GLenum pname, const GLfloat *params) = nullptr;
	void (*glPixelTransformParameteriEXT)(GLenum target, GLenum pname, GLint param) = nullptr;
	void (*glPixelTransformParameterivEXT)(GLenum target, GLenum pname, const GLint *params) = nullptr;
	#endif // GL_EXT_pixel_transform
	#ifdef GL_EXT_point_parameters
	bool ext_GL_EXT_point_parameters = false;
	void (*glPointParameterfEXT)(GLenum pname, GLfloat param) = nullptr;
	void (*glPointParameterfvEXT)(GLenum pname, const GLfloat *params) = nullptr;
	#endif // GL_EXT_point_parameters
	#ifdef GL_EXT_polygon_offset
	bool ext_GL_EXT_polygon_offset = false;
	void (*glPolygonOffsetEXT)(GLfloat factor, GLfloat bias) = nullptr;
	#endif // GL_EXT_polygon_offset
	#ifdef GL_EXT_polygon_offset_clamp
	bool ext_GL_EXT_polygon_offset_clamp = false;
	void (*glPolygonOffsetClampEXT)(GLfloat factor, GLfloat units, GLfloat clamp) = nullptr;
	#endif // GL_EXT_polygon_offset_clamp
	#ifdef GL_EXT_provoking_vertex
	bool ext_GL_EXT_provoking_vertex = false;
	void (*glProvokingVertexEXT)(GLenum mode) = nullptr;
	#endif // GL_EXT_provoking_vertex
	#ifdef GL_EXT_raster_multisample
	bool ext_GL_EXT_raster_multisample = false;
	void (*glRasterSamplesEXT)(GLuint samples, GLboolean fixedsamplelocations) = nullptr;
	#endif // GL_EXT_raster_multisample
	#ifdef GL_EXT_rescale_normal
	bool ext_GL_EXT_rescale_normal = false;
	#endif // GL_EXT_rescale_normal
	#ifdef GL_EXT_secondary_color
	bool ext_GL_EXT_secondary_color = false;
	void (*glSecondaryColor3bEXT)(GLbyte red, GLbyte green, GLbyte blue) = nullptr;
	void (*glSecondaryColor3bvEXT)(const GLbyte *v) = nullptr;
	void (*glSecondaryColor3dEXT)(GLdouble red, GLdouble green, GLdouble blue) = nullptr;
	void (*glSecondaryColor3dvEXT)(const GLdouble *v) = nullptr;
	void (*glSecondaryColor3fEXT)(GLfloat red, GLfloat green, GLfloat blue) = nullptr;
	void (*glSecondaryColor3fvEXT)(const GLfloat *v) = nullptr;
	void (*glSecondaryColor3iEXT)(GLint red, GLint green, GLint blue) = nullptr;
	void (*glSecondaryColor3ivEXT)(const GLint *v) = nullptr;
	void (*glSecondaryColor3sEXT)(GLshort red, GLshort green, GLshort blue) = nullptr;
	void (*glSecondaryColor3svEXT)(const GLshort *v) = nullptr;
	void (*glSecondaryColor3ubEXT)(GLubyte red, GLubyte green, GLubyte blue) = nullptr;
	void (*glSecondaryColor3ubvEXT)(const GLubyte *v) = nullptr;
	void (*glSecondaryColor3uiEXT)(GLuint red, GLuint green, GLuint blue) = nullptr;
	void (*glSecondaryColor3uivEXT)(const GLuint *v) = nullptr;
	void (*glSecondaryColor3usEXT)(GLushort red, GLushort green, GLushort blue) = nullptr;
	void (*glSecondaryColor3usvEXT)(const GLushort *v) = nullptr;
	void (*glSecondaryColorPointerEXT)(GLint size, GLenum type, GLsizei stride, const void *pointer) = nullptr;
	#endif // GL_EXT_secondary_color
	#ifdef GL_EXT_separate_shader_objects
	bool ext_GL_EXT_separate_shader_objects = false;
	void (*glActiveProgramEXT)(GLuint program) = nullptr;
	void (*glActiveShaderProgramEXT)(GLuint pipeline, GLuint program) = nullptr;
	void (*glBindProgramPipelineEXT)(GLuint pipeline) = nullptr;
	GLuint (*glCreateShaderProgramEXT)(GLenum type, const GLchar *string) = nullptr;
	GLuint (*glCreateShaderProgramvEXT)(GLenum type, GLsizei count, const GLchar **strings) = nullptr;
	void (*glDeleteProgramPipelinesEXT)(GLsizei n, const GLuint *pipelines) = nullptr;
	void (*glGenProgramPipelinesEXT)(GLsizei n, GLuint *pipelines) = nullptr;
	void (*glGetProgramPipelineInfoLogEXT)(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog) = nullptr;
	void (*glGetProgramPipelineivEXT)(GLuint pipeline, GLenum pname, GLint *params) = nullptr;
	GLboolean (*glIsProgramPipelineEXT)(GLuint pipeline) = nullptr;
	#if !defined(GL_EXT_geometry_shader4)
	void (*glProgramParameteriEXT)(GLuint program, GLenum pname, GLint value) = nullptr;
	#endif
	#if !defined(GL_EXT_direct_state_access)
	void (*glProgramUniform1fEXT)(GLuint program, GLint location, GLfloat v0) = nullptr;
	void (*glProgramUniform1fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glProgramUniform1iEXT)(GLuint program, GLint location, GLint v0) = nullptr;
	void (*glProgramUniform1ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glProgramUniform1uiEXT)(GLuint program, GLint location, GLuint v0) = nullptr;
	void (*glProgramUniform1uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glProgramUniform2fEXT)(GLuint program, GLint location, GLfloat v0, GLfloat v1) = nullptr;
	void (*glProgramUniform2fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glProgramUniform2iEXT)(GLuint program, GLint location, GLint v0, GLint v1) = nullptr;
	void (*glProgramUniform2ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glProgramUniform2uiEXT)(GLuint program, GLint location, GLuint v0, GLuint v1) = nullptr;
	void (*glProgramUniform2uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glProgramUniform3fEXT)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) = nullptr;
	void (*glProgramUniform3fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glProgramUniform3iEXT)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) = nullptr;
	void (*glProgramUniform3ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glProgramUniform3uiEXT)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) = nullptr;
	void (*glProgramUniform3uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glProgramUniform4fEXT)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) = nullptr;
	void (*glProgramUniform4fvEXT)(GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	void (*glProgramUniform4iEXT)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) = nullptr;
	void (*glProgramUniform4ivEXT)(GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	void (*glProgramUniform4uiEXT)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) = nullptr;
	void (*glProgramUniform4uivEXT)(GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	void (*glProgramUniformMatrix2fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix2x3fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix2x4fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix3fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix3x2fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix3x4fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix4fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix4x2fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	void (*glProgramUniformMatrix4x3fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	#endif
	void (*glUseProgramStagesEXT)(GLuint pipeline, GLbitfield stages, GLuint program) = nullptr;
	void (*glUseShaderProgramEXT)(GLenum type, GLuint program) = nullptr;
	void (*glValidateProgramPipelineEXT)(GLuint pipeline) = nullptr;
	#endif // GL_EXT_separate_shader_objects
	#ifdef GL_EXT_separate_specular_color
	bool ext_GL_EXT_separate_specular_color = false;
	#endif // GL_EXT_separate_specular_color
	#ifdef GL_EXT_shader_image_load_store
	bool ext_GL_EXT_shader_image_load_store = false;
	void (*glBindImageTextureEXT)(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format) = nullptr;
	void (*glMemoryBarrierEXT)(GLbitfield barriers) = nullptr;
	#endif // GL_EXT_shader_image_load_store
	#ifdef GL_EXT_shared_texture_palette
	bool ext_GL_EXT_shared_texture_palette = false;
	#endif // GL_EXT_shared_texture_palette
	#ifdef GL_EXT_stencil_clear_tag
	bool ext_GL_EXT_stencil_clear_tag = false;
	void (*glStencilClearTagEXT)(GLsizei stencilTagBits, GLuint stencilClearTag) = nullptr;
	#endif // GL_EXT_stencil_clear_tag
	#ifdef GL_EXT_stencil_two_side
	bool ext_GL_EXT_stencil_two_side = false;
	void (*glActiveStencilFaceEXT)(GLenum face) = nullptr;
	#endif // GL_EXT_stencil_two_side
	#ifdef GL_EXT_stencil_wrap
	bool ext_GL_EXT_stencil_wrap = false;
	#endif // GL_EXT_stencil_wrap
	#ifdef GL_EXT_subtexture
	bool ext_GL_EXT_subtexture = false;
	void (*glTexSubImage1DEXT)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTexSubImage2DEXT)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) = nullptr;
	#endif // GL_EXT_subtexture
	#ifdef GL_EXT_texture
	bool ext_GL_EXT_texture = false;
	#endif // GL_EXT_texture
	#ifdef GL_EXT_texture3D
	bool ext_GL_EXT_texture3D = false;
	void (*glTexImage3DEXT)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTexSubImage3DEXT)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) = nullptr;
	#endif // GL_EXT_texture3D
	#ifdef GL_EXT_texture_array
	bool ext_GL_EXT_texture_array = false;
	void (*glFramebufferTextureLayerEXT)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) = nullptr;
	#endif // GL_EXT_texture_array
	#ifdef GL_EXT_texture_buffer_object
	bool ext_GL_EXT_texture_buffer_object = false;
	void (*glTexBufferEXT)(GLenum target, GLenum internalformat, GLuint buffer) = nullptr;
	#endif // GL_EXT_texture_buffer_object
	#ifdef GL_EXT_texture_compression_latc
	bool ext_GL_EXT_texture_compression_latc = false;
	#endif // GL_EXT_texture_compression_latc
	#ifdef GL_EXT_texture_compression_rgtc
	bool ext_GL_EXT_texture_compression_rgtc = false;
	#endif // GL_EXT_texture_compression_rgtc
	#ifdef GL_EXT_texture_compression_s3tc
	bool ext_GL_EXT_texture_compression_s3tc = false;
	#endif // GL_EXT_texture_compression_s3tc
	#ifdef GL_EXT_texture_cube_map
	bool ext_GL_EXT_texture_cube_map = false;
	#endif // GL_EXT_texture_cube_map
	#ifdef GL_EXT_texture_env_combine
	bool ext_GL_EXT_texture_env_combine = false;
	#endif // GL_EXT_texture_env_combine
	#ifdef GL_EXT_texture_env_dot3
	bool ext_GL_EXT_texture_env_dot3 = false;
	#endif // GL_EXT_texture_env_dot3
	#ifdef GL_EXT_texture_filter_anisotropic
	bool ext_GL_EXT_texture_filter_anisotropic = false;
	#endif // GL_EXT_texture_filter_anisotropic
	#ifdef GL_EXT_texture_filter_minmax
	bool ext_GL_EXT_texture_filter_minmax = false;
	#if !defined(GL_EXT_raster_multisample)
	void (*glRasterSamplesEXT)(GLuint samples, GLboolean fixedsamplelocations) = nullptr;
	#endif
	#endif // GL_EXT_texture_filter_minmax
	#ifdef GL_EXT_texture_integer
	bool ext_GL_EXT_texture_integer = false;
	void (*glClearColorIiEXT)(GLint red, GLint green, GLint blue, GLint alpha) = nullptr;
	void (*glClearColorIuiEXT)(GLuint red, GLuint green, GLuint blue, GLuint alpha) = nullptr;
	void (*glGetTexParameterIivEXT)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetTexParameterIuivEXT)(GLenum target, GLenum pname, GLuint *params) = nullptr;
	void (*glTexParameterIivEXT)(GLenum target, GLenum pname, const GLint *params) = nullptr;
	void (*glTexParameterIuivEXT)(GLenum target, GLenum pname, const GLuint *params) = nullptr;
	#endif // GL_EXT_texture_integer
	#ifdef GL_EXT_texture_lod_bias
	bool ext_GL_EXT_texture_lod_bias = false;
	#endif // GL_EXT_texture_lod_bias
	#ifdef GL_EXT_texture_mirror_clamp
	bool ext_GL_EXT_texture_mirror_clamp = false;
	#endif // GL_EXT_texture_mirror_clamp
	#ifdef GL_EXT_texture_object
	bool ext_GL_EXT_texture_object = false;
	GLboolean (*glAreTexturesResidentEXT)(GLsizei n, const GLuint *textures, GLboolean *residences) = nullptr;
	void (*glBindTextureEXT)(GLenum target, GLuint texture) = nullptr;
	void (*glDeleteTexturesEXT)(GLsizei n, const GLuint *textures) = nullptr;
	void (*glGenTexturesEXT)(GLsizei n, GLuint *textures) = nullptr;
	GLboolean (*glIsTextureEXT)(GLuint texture) = nullptr;
	void (*glPrioritizeTexturesEXT)(GLsizei n, const GLuint *textures, const GLclampf *priorities) = nullptr;
	#endif // GL_EXT_texture_object
	#ifdef GL_EXT_texture_perturb_normal
	bool ext_GL_EXT_texture_perturb_normal = false;
	void (*glTextureNormalEXT)(GLenum mode) = nullptr;
	#endif // GL_EXT_texture_perturb_normal
	#ifdef GL_EXT_texture_sRGB
	bool ext_GL_EXT_texture_sRGB = false;
	#endif // GL_EXT_texture_sRGB
	#ifdef GL_EXT_texture_sRGB_decode
	bool ext_GL_EXT_texture_sRGB_decode = false;
	#endif // GL_EXT_texture_sRGB_decode
	#ifdef GL_EXT_texture_shared_exponent
	bool ext_GL_EXT_texture_shared_exponent = false;
	#endif // GL_EXT_texture_shared_exponent
	#ifdef GL_EXT_texture_snorm
	bool ext_GL_EXT_texture_snorm = false;
	#endif // GL_EXT_texture_snorm
	#ifdef GL_EXT_texture_swizzle
	bool ext_GL_EXT_texture_swizzle = false;
	#endif // GL_EXT_texture_swizzle
	#ifdef GL_EXT_timer_query
	bool ext_GL_EXT_timer_query = false;
	void (*glGetQueryObjecti64vEXT)(GLuint id, GLenum pname, GLint64 *params) = nullptr;
	void (*glGetQueryObjectui64vEXT)(GLuint id, GLenum pname, GLuint64 *params) = nullptr;
	#endif // GL_EXT_timer_query
	#ifdef GL_EXT_transform_feedback
	bool ext_GL_EXT_transform_feedback = false;
	void (*glBeginTransformFeedbackEXT)(GLenum primitiveMode) = nullptr;
	void (*glBindBufferBaseEXT)(GLenum target, GLuint index, GLuint buffer) = nullptr;
	void (*glBindBufferOffsetEXT)(GLenum target, GLuint index, GLuint buffer, GLintptr offset) = nullptr;
	void (*glBindBufferRangeEXT)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) = nullptr;
	void (*glEndTransformFeedbackEXT)() = nullptr;
	void (*glGetTransformFeedbackVaryingEXT)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) = nullptr;
	void (*glTransformFeedbackVaryingsEXT)(GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode) = nullptr;
	#endif // GL_EXT_transform_feedback
	#ifdef GL_EXT_vertex_array
	bool ext_GL_EXT_vertex_array = false;
	void (*glArrayElementEXT)(GLint i) = nullptr;
	void (*glColorPointerEXT)(GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer) = nullptr;
	void (*glDrawArraysEXT)(GLenum mode, GLint first, GLsizei count) = nullptr;
	void (*glEdgeFlagPointerEXT)(GLsizei stride, GLsizei count, const GLboolean *pointer) = nullptr;
	void (*glGetPointervEXT)(GLenum pname, void **params) = nullptr;
	void (*glIndexPointerEXT)(GLenum type, GLsizei stride, GLsizei count, const void *pointer) = nullptr;
	void (*glNormalPointerEXT)(GLenum type, GLsizei stride, GLsizei count, const void *pointer) = nullptr;
	void (*glTexCoordPointerEXT)(GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer) = nullptr;
	void (*glVertexPointerEXT)(GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer) = nullptr;
	#endif // GL_EXT_vertex_array
	#ifdef GL_EXT_vertex_attrib_64bit
	bool ext_GL_EXT_vertex_attrib_64bit = false;
	void (*glGetVertexAttribLdvEXT)(GLuint index, GLenum pname, GLdouble *params) = nullptr;
	void (*glVertexAttribL1dEXT)(GLuint index, GLdouble x) = nullptr;
	void (*glVertexAttribL1dvEXT)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttribL2dEXT)(GLuint index, GLdouble x, GLdouble y) = nullptr;
	void (*glVertexAttribL2dvEXT)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttribL3dEXT)(GLuint index, GLdouble x, GLdouble y, GLdouble z) = nullptr;
	void (*glVertexAttribL3dvEXT)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttribL4dEXT)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glVertexAttribL4dvEXT)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttribLPointerEXT)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) = nullptr;
	#endif // GL_EXT_vertex_attrib_64bit
	#ifdef GL_EXT_vertex_shader
	bool ext_GL_EXT_vertex_shader = false;
	void (*glBeginVertexShaderEXT)() = nullptr;
	GLuint (*glBindLightParameterEXT)(GLenum light, GLenum value) = nullptr;
	GLuint (*glBindMaterialParameterEXT)(GLenum face, GLenum value) = nullptr;
	GLuint (*glBindParameterEXT)(GLenum value) = nullptr;
	GLuint (*glBindTexGenParameterEXT)(GLenum unit, GLenum coord, GLenum value) = nullptr;
	GLuint (*glBindTextureUnitParameterEXT)(GLenum unit, GLenum value) = nullptr;
	void (*glBindVertexShaderEXT)(GLuint id) = nullptr;
	void (*glDeleteVertexShaderEXT)(GLuint id) = nullptr;
	void (*glDisableVariantClientStateEXT)(GLuint id) = nullptr;
	void (*glEnableVariantClientStateEXT)(GLuint id) = nullptr;
	void (*glEndVertexShaderEXT)() = nullptr;
	void (*glExtractComponentEXT)(GLuint res, GLuint src, GLuint num) = nullptr;
	GLuint (*glGenSymbolsEXT)(GLenum datatype, GLenum storagetype, GLenum range, GLuint components) = nullptr;
	GLuint (*glGenVertexShadersEXT)(GLuint range) = nullptr;
	void (*glGetInvariantBooleanvEXT)(GLuint id, GLenum value, GLboolean *data) = nullptr;
	void (*glGetInvariantFloatvEXT)(GLuint id, GLenum value, GLfloat *data) = nullptr;
	void (*glGetInvariantIntegervEXT)(GLuint id, GLenum value, GLint *data) = nullptr;
	void (*glGetLocalConstantBooleanvEXT)(GLuint id, GLenum value, GLboolean *data) = nullptr;
	void (*glGetLocalConstantFloatvEXT)(GLuint id, GLenum value, GLfloat *data) = nullptr;
	void (*glGetLocalConstantIntegervEXT)(GLuint id, GLenum value, GLint *data) = nullptr;
	void (*glGetVariantBooleanvEXT)(GLuint id, GLenum value, GLboolean *data) = nullptr;
	void (*glGetVariantFloatvEXT)(GLuint id, GLenum value, GLfloat *data) = nullptr;
	void (*glGetVariantIntegervEXT)(GLuint id, GLenum value, GLint *data) = nullptr;
	void (*glGetVariantPointervEXT)(GLuint id, GLenum value, void **data) = nullptr;
	void (*glInsertComponentEXT)(GLuint res, GLuint src, GLuint num) = nullptr;
	GLboolean (*glIsVariantEnabledEXT)(GLuint id, GLenum cap) = nullptr;
	void (*glSetInvariantEXT)(GLuint id, GLenum type, const void *addr) = nullptr;
	void (*glSetLocalConstantEXT)(GLuint id, GLenum type, const void *addr) = nullptr;
	void (*glShaderOp1EXT)(GLenum op, GLuint res, GLuint arg1) = nullptr;
	void (*glShaderOp2EXT)(GLenum op, GLuint res, GLuint arg1, GLuint arg2) = nullptr;
	void (*glShaderOp3EXT)(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3) = nullptr;
	void (*glSwizzleEXT)(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW) = nullptr;
	void (*glVariantPointerEXT)(GLuint id, GLenum type, GLuint stride, const void *addr) = nullptr;
	void (*glVariantbvEXT)(GLuint id, const GLbyte *addr) = nullptr;
	void (*glVariantdvEXT)(GLuint id, const GLdouble *addr) = nullptr;
	void (*glVariantfvEXT)(GLuint id, const GLfloat *addr) = nullptr;
	void (*glVariantivEXT)(GLuint id, const GLint *addr) = nullptr;
	void (*glVariantsvEXT)(GLuint id, const GLshort *addr) = nullptr;
	void (*glVariantubvEXT)(GLuint id, const GLubyte *addr) = nullptr;
	void (*glVariantuivEXT)(GLuint id, const GLuint *addr) = nullptr;
	void (*glVariantusvEXT)(GLuint id, const GLushort *addr) = nullptr;
	void (*glWriteMaskEXT)(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW) = nullptr;
	#endif // GL_EXT_vertex_shader
	#ifdef GL_EXT_vertex_weighting
	bool ext_GL_EXT_vertex_weighting = false;
	void (*glVertexWeightPointerEXT)(GLint size, GLenum type, GLsizei stride, const void *pointer) = nullptr;
	void (*glVertexWeightfEXT)(GLfloat weight) = nullptr;
	void (*glVertexWeightfvEXT)(const GLfloat *weight) = nullptr;
	#endif // GL_EXT_vertex_weighting
	#ifdef GL_EXT_x11_sync_object
	bool ext_GL_EXT_x11_sync_object = false;
	GLsync (*glImportSyncEXT)(GLenum external_sync_type, GLintptr external_sync, GLbitfield flags) = nullptr;
	#endif // GL_EXT_x11_sync_object
	#ifdef GL_GREMEDY_frame_terminator
	bool ext_GL_GREMEDY_frame_terminator = false;
	void (*glFrameTerminatorGREMEDY)() = nullptr;
	#endif // GL_GREMEDY_frame_terminator
	#ifdef GL_GREMEDY_string_marker
	bool ext_GL_GREMEDY_string_marker = false;
	void (*glStringMarkerGREMEDY)(GLsizei len, const void *string) = nullptr;
	#endif // GL_GREMEDY_string_marker
	#ifdef GL_HP_convolution_border_modes
	bool ext_GL_HP_convolution_border_modes = false;
	#endif // GL_HP_convolution_border_modes
	#ifdef GL_HP_image_transform
	bool ext_GL_HP_image_transform = false;
	void (*glGetImageTransformParameterfvHP)(GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetImageTransformParameterivHP)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glImageTransformParameterfHP)(GLenum target, GLenum pname, GLfloat param) = nullptr;
	void (*glImageTransformParameterfvHP)(GLenum target, GLenum pname, const GLfloat *params) = nullptr;
	void (*glImageTransformParameteriHP)(GLenum target, GLenum pname, GLint param) = nullptr;
	void (*glImageTransformParameterivHP)(GLenum target, GLenum pname, const GLint *params) = nullptr;
	#endif // GL_HP_image_transform
	#ifdef GL_HP_occlusion_test
	bool ext_GL_HP_occlusion_test = false;
	#endif // GL_HP_occlusion_test
	#ifdef GL_HP_texture_lighting
	bool ext_GL_HP_texture_lighting = false;
	#endif // GL_HP_texture_lighting
	#ifdef GL_IBM_cull_vertex
	bool ext_GL_IBM_cull_vertex = false;
	#endif // GL_IBM_cull_vertex
	#ifdef GL_IBM_multimode_draw_arrays
	bool ext_GL_IBM_multimode_draw_arrays = false;
	void (*glMultiModeDrawArraysIBM)(const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride) = nullptr;
	void (*glMultiModeDrawElementsIBM)(const GLenum *mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount, GLint modestride) = nullptr;
	#endif // GL_IBM_multimode_draw_arrays
	#ifdef GL_IBM_rasterpos_clip
	bool ext_GL_IBM_rasterpos_clip = false;
	#endif // GL_IBM_rasterpos_clip
	#ifdef GL_IBM_static_data
	bool ext_GL_IBM_static_data = false;
	void (*glFlushStaticDataIBM)(GLenum target) = nullptr;
	#endif // GL_IBM_static_data
	#ifdef GL_IBM_texture_mirrored_repeat
	bool ext_GL_IBM_texture_mirrored_repeat = false;
	#endif // GL_IBM_texture_mirrored_repeat
	#ifdef GL_IBM_vertex_array_lists
	bool ext_GL_IBM_vertex_array_lists = false;
	void (*glColorPointerListIBM)(GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride) = nullptr;
	void (*glEdgeFlagPointerListIBM)(GLint stride, const GLboolean **pointer, GLint ptrstride) = nullptr;
	void (*glFogCoordPointerListIBM)(GLenum type, GLint stride, const void **pointer, GLint ptrstride) = nullptr;
	void (*glIndexPointerListIBM)(GLenum type, GLint stride, const void **pointer, GLint ptrstride) = nullptr;
	void (*glNormalPointerListIBM)(GLenum type, GLint stride, const void **pointer, GLint ptrstride) = nullptr;
	void (*glSecondaryColorPointerListIBM)(GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride) = nullptr;
	void (*glTexCoordPointerListIBM)(GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride) = nullptr;
	void (*glVertexPointerListIBM)(GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride) = nullptr;
	#endif // GL_IBM_vertex_array_lists
	#ifdef GL_INGR_blend_func_separate
	bool ext_GL_INGR_blend_func_separate = false;
	void (*glBlendFuncSeparateINGR)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) = nullptr;
	#endif // GL_INGR_blend_func_separate
	#ifdef GL_INGR_color_clamp
	bool ext_GL_INGR_color_clamp = false;
	#endif // GL_INGR_color_clamp
	#ifdef GL_INGR_interlace_read
	bool ext_GL_INGR_interlace_read = false;
	#endif // GL_INGR_interlace_read
	#ifdef GL_INTEL_framebuffer_CMAA
	bool ext_GL_INTEL_framebuffer_CMAA = false;
	void (*glApplyFramebufferAttachmentCMAAINTEL)() = nullptr;
	#endif // GL_INTEL_framebuffer_CMAA
	#ifdef GL_INTEL_map_texture
	bool ext_GL_INTEL_map_texture = false;
	void *(*glMapTexture2DINTEL)(GLuint texture, GLint level, GLbitfield access, GLint *stride, GLenum *layout) = nullptr;
	void (*glSyncTextureINTEL)(GLuint texture) = nullptr;
	void (*glUnmapTexture2DINTEL)(GLuint texture, GLint level) = nullptr;
	#endif // GL_INTEL_map_texture
	#ifdef GL_INTEL_parallel_arrays
	bool ext_GL_INTEL_parallel_arrays = false;
	void (*glColorPointervINTEL)(GLint size, GLenum type, const void **pointer) = nullptr;
	void (*glNormalPointervINTEL)(GLenum type, const void **pointer) = nullptr;
	void (*glTexCoordPointervINTEL)(GLint size, GLenum type, const void **pointer) = nullptr;
	void (*glVertexPointervINTEL)(GLint size, GLenum type, const void **pointer) = nullptr;
	#endif // GL_INTEL_parallel_arrays
	#ifdef GL_INTEL_performance_query
	bool ext_GL_INTEL_performance_query = false;
	void (*glBeginPerfQueryINTEL)(GLuint queryHandle) = nullptr;
	void (*glCreatePerfQueryINTEL)(GLuint queryId, GLuint *queryHandle) = nullptr;
	void (*glDeletePerfQueryINTEL)(GLuint queryHandle) = nullptr;
	void (*glEndPerfQueryINTEL)(GLuint queryHandle) = nullptr;
	void (*glGetFirstPerfQueryIdINTEL)(GLuint *queryId) = nullptr;
	void (*glGetNextPerfQueryIdINTEL)(GLuint queryId, GLuint *nextQueryId) = nullptr;
	void (*glGetPerfCounterInfoINTEL)(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar *counterName, GLuint counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum, GLuint64 *rawCounterMaxValue) = nullptr;
	void (*glGetPerfQueryDataINTEL)(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid *data, GLuint *bytesWritten) = nullptr;
	void (*glGetPerfQueryIdByNameINTEL)(GLchar *queryName, GLuint *queryId) = nullptr;
	void (*glGetPerfQueryInfoINTEL)(GLuint queryId, GLuint queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters, GLuint *noInstances, GLuint *capsMask) = nullptr;
	#endif // GL_INTEL_performance_query
	#ifdef GL_KHR_blend_equation_advanced
	bool ext_GL_KHR_blend_equation_advanced = false;
	void (*glBlendBarrierKHR)() = nullptr;
	#endif // GL_KHR_blend_equation_advanced
	#ifdef GL_KHR_blend_equation_advanced_coherent
	bool ext_GL_KHR_blend_equation_advanced_coherent = false;
	#endif // GL_KHR_blend_equation_advanced_coherent
	#ifdef GL_KHR_context_flush_control
	bool ext_GL_KHR_context_flush_control = false;
	#endif // GL_KHR_context_flush_control
	#ifdef GL_KHR_debug
	bool ext_GL_KHR_debug = false;
	void (*glDebugMessageCallback)(GLDEBUGPROC callback, const void *userParam) = nullptr;
	void (*glDebugMessageCallbackKHR)(GLDEBUGPROCKHR callback, const void *userParam) = nullptr;
	void (*glDebugMessageControl)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) = nullptr;
	void (*glDebugMessageControlKHR)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) = nullptr;
	void (*glDebugMessageInsert)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf) = nullptr;
	void (*glDebugMessageInsertKHR)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf) = nullptr;
	GLuint (*glGetDebugMessageLog)(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog) = nullptr;
	GLuint (*glGetDebugMessageLogKHR)(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog) = nullptr;
	void (*glGetObjectLabel)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label) = nullptr;
	void (*glGetObjectLabelKHR)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label) = nullptr;
	void (*glGetObjectPtrLabel)(const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label) = nullptr;
	void (*glGetObjectPtrLabelKHR)(const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label) = nullptr;
	void (*glGetPointerv)(GLenum pname, void **params) = nullptr;
	void (*glGetPointervKHR)(GLenum pname, void **params) = nullptr;
	void (*glObjectLabel)(GLenum identifier, GLuint name, GLsizei length, const GLchar *label) = nullptr;
	void (*glObjectLabelKHR)(GLenum identifier, GLuint name, GLsizei length, const GLchar *label) = nullptr;
	void (*glObjectPtrLabel)(const void *ptr, GLsizei length, const GLchar *label) = nullptr;
	void (*glObjectPtrLabelKHR)(const void *ptr, GLsizei length, const GLchar *label) = nullptr;
	void (*glPopDebugGroup)() = nullptr;
	void (*glPopDebugGroupKHR)() = nullptr;
	void (*glPushDebugGroup)(GLenum source, GLuint id, GLsizei length, const GLchar *message) = nullptr;
	void (*glPushDebugGroupKHR)(GLenum source, GLuint id, GLsizei length, const GLchar *message) = nullptr;
	#endif // GL_KHR_debug
	#ifdef GL_KHR_no_error
	bool ext_GL_KHR_no_error = false;
	#endif // GL_KHR_no_error
	#ifdef GL_KHR_robustness
	bool ext_GL_KHR_robustness = false;
	GLenum (*glGetGraphicsResetStatus)() = nullptr;
	GLenum (*glGetGraphicsResetStatusKHR)() = nullptr;
	void (*glGetnUniformfv)(GLuint program, GLint location, GLsizei bufSize, GLfloat *params) = nullptr;
	void (*glGetnUniformfvKHR)(GLuint program, GLint location, GLsizei bufSize, GLfloat *params) = nullptr;
	void (*glGetnUniformiv)(GLuint program, GLint location, GLsizei bufSize, GLint *params) = nullptr;
	void (*glGetnUniformivKHR)(GLuint program, GLint location, GLsizei bufSize, GLint *params) = nullptr;
	void (*glGetnUniformuiv)(GLuint program, GLint location, GLsizei bufSize, GLuint *params) = nullptr;
	void (*glGetnUniformuivKHR)(GLuint program, GLint location, GLsizei bufSize, GLuint *params) = nullptr;
	void (*glReadnPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data) = nullptr;
	void (*glReadnPixelsKHR)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data) = nullptr;
	#endif // GL_KHR_robustness
	#ifdef GL_KHR_texture_compression_astc_hdr
	bool ext_GL_KHR_texture_compression_astc_hdr = false;
	#endif // GL_KHR_texture_compression_astc_hdr
	#ifdef GL_KHR_texture_compression_astc_ldr
	bool ext_GL_KHR_texture_compression_astc_ldr = false;
	#endif // GL_KHR_texture_compression_astc_ldr
	#ifdef GL_MESAX_texture_stack
	bool ext_GL_MESAX_texture_stack = false;
	#endif // GL_MESAX_texture_stack
	#ifdef GL_MESA_pack_invert
	bool ext_GL_MESA_pack_invert = false;
	#endif // GL_MESA_pack_invert
	#ifdef GL_MESA_resize_buffers
	bool ext_GL_MESA_resize_buffers = false;
	void (*glResizeBuffersMESA)() = nullptr;
	#endif // GL_MESA_resize_buffers
	#ifdef GL_MESA_window_pos
	bool ext_GL_MESA_window_pos = false;
	void (*glWindowPos2dMESA)(GLdouble x, GLdouble y) = nullptr;
	void (*glWindowPos2dvMESA)(const GLdouble *v) = nullptr;
	void (*glWindowPos2fMESA)(GLfloat x, GLfloat y) = nullptr;
	void (*glWindowPos2fvMESA)(const GLfloat *v) = nullptr;
	void (*glWindowPos2iMESA)(GLint x, GLint y) = nullptr;
	void (*glWindowPos2ivMESA)(const GLint *v) = nullptr;
	void (*glWindowPos2sMESA)(GLshort x, GLshort y) = nullptr;
	void (*glWindowPos2svMESA)(const GLshort *v) = nullptr;
	void (*glWindowPos3dMESA)(GLdouble x, GLdouble y, GLdouble z) = nullptr;
	void (*glWindowPos3dvMESA)(const GLdouble *v) = nullptr;
	void (*glWindowPos3fMESA)(GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glWindowPos3fvMESA)(const GLfloat *v) = nullptr;
	void (*glWindowPos3iMESA)(GLint x, GLint y, GLint z) = nullptr;
	void (*glWindowPos3ivMESA)(const GLint *v) = nullptr;
	void (*glWindowPos3sMESA)(GLshort x, GLshort y, GLshort z) = nullptr;
	void (*glWindowPos3svMESA)(const GLshort *v) = nullptr;
	void (*glWindowPos4dMESA)(GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glWindowPos4dvMESA)(const GLdouble *v) = nullptr;
	void (*glWindowPos4fMESA)(GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	void (*glWindowPos4fvMESA)(const GLfloat *v) = nullptr;
	void (*glWindowPos4iMESA)(GLint x, GLint y, GLint z, GLint w) = nullptr;
	void (*glWindowPos4ivMESA)(const GLint *v) = nullptr;
	void (*glWindowPos4sMESA)(GLshort x, GLshort y, GLshort z, GLshort w) = nullptr;
	void (*glWindowPos4svMESA)(const GLshort *v) = nullptr;
	#endif // GL_MESA_window_pos
	#ifdef GL_MESA_ycbcr_texture
	bool ext_GL_MESA_ycbcr_texture = false;
	#endif // GL_MESA_ycbcr_texture
	#ifdef GL_NVX_conditional_render
	bool ext_GL_NVX_conditional_render = false;
	void (*glBeginConditionalRenderNVX)(GLuint id) = nullptr;
	void (*glEndConditionalRenderNVX)() = nullptr;
	#endif // GL_NVX_conditional_render
	#ifdef GL_NVX_gpu_memory_info
	bool ext_GL_NVX_gpu_memory_info = false;
	#endif // GL_NVX_gpu_memory_info
	#ifdef GL_NV_bindless_multi_draw_indirect
	bool ext_GL_NV_bindless_multi_draw_indirect = false;
	void (*glMultiDrawArraysIndirectBindlessNV)(GLenum mode, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount) = nullptr;
	void (*glMultiDrawElementsIndirectBindlessNV)(GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount) = nullptr;
	#endif // GL_NV_bindless_multi_draw_indirect
	#ifdef GL_NV_bindless_multi_draw_indirect_count
	bool ext_GL_NV_bindless_multi_draw_indirect_count = false;
	void (*glMultiDrawArraysIndirectBindlessCountNV)(GLenum mode, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount) = nullptr;
	void (*glMultiDrawElementsIndirectBindlessCountNV)(GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount) = nullptr;
	#endif // GL_NV_bindless_multi_draw_indirect_count
	#ifdef GL_NV_bindless_texture
	bool ext_GL_NV_bindless_texture = false;
	GLuint64 (*glGetImageHandleNV)(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format) = nullptr;
	GLuint64 (*glGetTextureHandleNV)(GLuint texture) = nullptr;
	GLuint64 (*glGetTextureSamplerHandleNV)(GLuint texture, GLuint sampler) = nullptr;
	GLboolean (*glIsImageHandleResidentNV)(GLuint64 handle) = nullptr;
	GLboolean (*glIsTextureHandleResidentNV)(GLuint64 handle) = nullptr;
	void (*glMakeImageHandleNonResidentNV)(GLuint64 handle) = nullptr;
	void (*glMakeImageHandleResidentNV)(GLuint64 handle, GLenum access) = nullptr;
	void (*glMakeTextureHandleNonResidentNV)(GLuint64 handle) = nullptr;
	void (*glMakeTextureHandleResidentNV)(GLuint64 handle) = nullptr;
	void (*glProgramUniformHandleui64NV)(GLuint program, GLint location, GLuint64 value) = nullptr;
	void (*glProgramUniformHandleui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64 *values) = nullptr;
	void (*glUniformHandleui64NV)(GLint location, GLuint64 value) = nullptr;
	void (*glUniformHandleui64vNV)(GLint location, GLsizei count, const GLuint64 *value) = nullptr;
	#endif // GL_NV_bindless_texture
	#ifdef GL_NV_blend_equation_advanced
	bool ext_GL_NV_blend_equation_advanced = false;
	void (*glBlendBarrierNV)() = nullptr;
	void (*glBlendParameteriNV)(GLenum pname, GLint value) = nullptr;
	#endif // GL_NV_blend_equation_advanced
	#ifdef GL_NV_blend_equation_advanced_coherent
	bool ext_GL_NV_blend_equation_advanced_coherent = false;
	#endif // GL_NV_blend_equation_advanced_coherent
	#ifdef GL_NV_command_list
	bool ext_GL_NV_command_list = false;
	void (*glCallCommandListNV)(GLuint list) = nullptr;
	void (*glCommandListSegmentsNV)(GLuint list, GLuint segments) = nullptr;
	void (*glCompileCommandListNV)(GLuint list) = nullptr;
	void (*glCreateCommandListsNV)(GLsizei n, GLuint *lists) = nullptr;
	void (*glCreateStatesNV)(GLsizei n, GLuint *states) = nullptr;
	void (*glDeleteCommandListsNV)(GLsizei n, const GLuint *lists) = nullptr;
	void (*glDeleteStatesNV)(GLsizei n, const GLuint *states) = nullptr;
	void (*glDrawCommandsAddressNV)(GLenum primitiveMode, const GLuint64 *indirects, const GLsizei *sizes, GLuint count) = nullptr;
	void (*glDrawCommandsNV)(GLenum primitiveMode, GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, GLuint count) = nullptr;
	void (*glDrawCommandsStatesAddressNV)(const GLuint64 *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count) = nullptr;
	void (*glDrawCommandsStatesNV)(GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count) = nullptr;
	GLuint (*glGetCommandHeaderNV)(GLenum tokenID, GLuint size) = nullptr;
	GLushort (*glGetStageIndexNV)(GLenum shadertype) = nullptr;
	GLboolean (*glIsCommandListNV)(GLuint list) = nullptr;
	GLboolean (*glIsStateNV)(GLuint state) = nullptr;
	void (*glListDrawCommandsStatesClientNV)(GLuint list, GLuint segment, const void **indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count) = nullptr;
	void (*glStateCaptureNV)(GLuint state, GLenum mode) = nullptr;
	#endif // GL_NV_command_list
	#ifdef GL_NV_compute_program5
	bool ext_GL_NV_compute_program5 = false;
	#endif // GL_NV_compute_program5
	#ifdef GL_NV_conditional_render
	bool ext_GL_NV_conditional_render = false;
	void (*glBeginConditionalRenderNV)(GLuint id, GLenum mode) = nullptr;
	void (*glEndConditionalRenderNV)() = nullptr;
	#endif // GL_NV_conditional_render
	#ifdef GL_NV_conservative_raster
	bool ext_GL_NV_conservative_raster = false;
	void (*glSubpixelPrecisionBiasNV)(GLuint xbits, GLuint ybits) = nullptr;
	#endif // GL_NV_conservative_raster
	#ifdef GL_NV_conservative_raster_dilate
	bool ext_GL_NV_conservative_raster_dilate = false;
	void (*glConservativeRasterParameterfNV)(GLenum pname, GLfloat value) = nullptr;
	#endif // GL_NV_conservative_raster_dilate
	#ifdef GL_NV_copy_depth_to_color
	bool ext_GL_NV_copy_depth_to_color = false;
	#endif // GL_NV_copy_depth_to_color
	#ifdef GL_NV_copy_image
	bool ext_GL_NV_copy_image = false;
	void (*glCopyImageSubDataNV)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth) = nullptr;
	#endif // GL_NV_copy_image
	#ifdef GL_NV_deep_texture3D
	bool ext_GL_NV_deep_texture3D = false;
	#endif // GL_NV_deep_texture3D
	#ifdef GL_NV_depth_buffer_float
	bool ext_GL_NV_depth_buffer_float = false;
	void (*glClearDepthdNV)(GLdouble depth) = nullptr;
	void (*glDepthBoundsdNV)(GLdouble zmin, GLdouble zmax) = nullptr;
	void (*glDepthRangedNV)(GLdouble zNear, GLdouble zFar) = nullptr;
	#endif // GL_NV_depth_buffer_float
	#ifdef GL_NV_depth_clamp
	bool ext_GL_NV_depth_clamp = false;
	#endif // GL_NV_depth_clamp
	#ifdef GL_NV_draw_texture
	bool ext_GL_NV_draw_texture = false;
	void (*glDrawTextureNV)(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1) = nullptr;
	#endif // GL_NV_draw_texture
	#ifdef GL_NV_evaluators
	bool ext_GL_NV_evaluators = false;
	void (*glEvalMapsNV)(GLenum target, GLenum mode) = nullptr;
	void (*glGetMapAttribParameterfvNV)(GLenum target, GLuint index, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetMapAttribParameterivNV)(GLenum target, GLuint index, GLenum pname, GLint *params) = nullptr;
	void (*glGetMapControlPointsNV)(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void *points) = nullptr;
	void (*glGetMapParameterfvNV)(GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetMapParameterivNV)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glMapControlPointsNV)(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void *points) = nullptr;
	void (*glMapParameterfvNV)(GLenum target, GLenum pname, const GLfloat *params) = nullptr;
	void (*glMapParameterivNV)(GLenum target, GLenum pname, const GLint *params) = nullptr;
	#endif // GL_NV_evaluators
	#ifdef GL_NV_explicit_multisample
	bool ext_GL_NV_explicit_multisample = false;
	void (*glGetMultisamplefvNV)(GLenum pname, GLuint index, GLfloat *val) = nullptr;
	void (*glSampleMaskIndexedNV)(GLuint index, GLbitfield mask) = nullptr;
	void (*glTexRenderbufferNV)(GLenum target, GLuint renderbuffer) = nullptr;
	#endif // GL_NV_explicit_multisample
	#ifdef GL_NV_fence
	bool ext_GL_NV_fence = false;
	void (*glDeleteFencesNV)(GLsizei n, const GLuint *fences) = nullptr;
	void (*glFinishFenceNV)(GLuint fence) = nullptr;
	void (*glGenFencesNV)(GLsizei n, GLuint *fences) = nullptr;
	void (*glGetFenceivNV)(GLuint fence, GLenum pname, GLint *params) = nullptr;
	GLboolean (*glIsFenceNV)(GLuint fence) = nullptr;
	void (*glSetFenceNV)(GLuint fence, GLenum condition) = nullptr;
	GLboolean (*glTestFenceNV)(GLuint fence) = nullptr;
	#endif // GL_NV_fence
	#ifdef GL_NV_fill_rectangle
	bool ext_GL_NV_fill_rectangle = false;
	#endif // GL_NV_fill_rectangle
	#ifdef GL_NV_float_buffer
	bool ext_GL_NV_float_buffer = false;
	#endif // GL_NV_float_buffer
	#ifdef GL_NV_fog_distance
	bool ext_GL_NV_fog_distance = false;
	#endif // GL_NV_fog_distance
	#ifdef GL_NV_fragment_coverage_to_color
	bool ext_GL_NV_fragment_coverage_to_color = false;
	void (*glFragmentCoverageColorNV)(GLuint color) = nullptr;
	#endif // GL_NV_fragment_coverage_to_color
	#ifdef GL_NV_fragment_program
	bool ext_GL_NV_fragment_program = false;
	void (*glGetProgramNamedParameterdvNV)(GLuint id, GLsizei len, const GLubyte *name, GLdouble *params) = nullptr;
	void (*glGetProgramNamedParameterfvNV)(GLuint id, GLsizei len, const GLubyte *name, GLfloat *params) = nullptr;
	void (*glProgramNamedParameter4dNV)(GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glProgramNamedParameter4dvNV)(GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v) = nullptr;
	void (*glProgramNamedParameter4fNV)(GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	void (*glProgramNamedParameter4fvNV)(GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v) = nullptr;
	#endif // GL_NV_fragment_program
	#ifdef GL_NV_fragment_program2
	bool ext_GL_NV_fragment_program2 = false;
	#endif // GL_NV_fragment_program2
	#ifdef GL_NV_framebuffer_mixed_samples
	bool ext_GL_NV_framebuffer_mixed_samples = false;
	void (*glCoverageModulationNV)(GLenum components) = nullptr;
	void (*glCoverageModulationTableNV)(GLsizei n, const GLfloat *v) = nullptr;
	void (*glGetCoverageModulationTableNV)(GLsizei bufsize, GLfloat *v) = nullptr;
	#if !defined(GL_EXT_raster_multisample) || !defined(GL_EXT_texture_filter_minmax)
	void (*glRasterSamplesEXT)(GLuint samples, GLboolean fixedsamplelocations) = nullptr;
	#endif
	#endif // GL_NV_framebuffer_mixed_samples
	#ifdef GL_NV_framebuffer_multisample_coverage
	bool ext_GL_NV_framebuffer_multisample_coverage = false;
	void (*glRenderbufferStorageMultisampleCoverageNV)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	#endif // GL_NV_framebuffer_multisample_coverage
	#ifdef GL_NV_geometry_program4
	bool ext_GL_NV_geometry_program4 = false;
	void (*glFramebufferTextureEXT)(GLenum target, GLenum attachment, GLuint texture, GLint level) = nullptr;
	void (*glFramebufferTextureFaceEXT)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face) = nullptr;
	#if !defined(GL_EXT_texture_array)
	void (*glFramebufferTextureLayerEXT)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) = nullptr;
	#endif
	void (*glProgramVertexLimitNV)(GLenum target, GLint limit) = nullptr;
	#endif // GL_NV_geometry_program4
	#ifdef GL_NV_gpu_program4
	bool ext_GL_NV_gpu_program4 = false;
	void (*glGetProgramEnvParameterIivNV)(GLenum target, GLuint index, GLint *params) = nullptr;
	void (*glGetProgramEnvParameterIuivNV)(GLenum target, GLuint index, GLuint *params) = nullptr;
	void (*glGetProgramLocalParameterIivNV)(GLenum target, GLuint index, GLint *params) = nullptr;
	void (*glGetProgramLocalParameterIuivNV)(GLenum target, GLuint index, GLuint *params) = nullptr;
	void (*glProgramEnvParameterI4iNV)(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w) = nullptr;
	void (*glProgramEnvParameterI4ivNV)(GLenum target, GLuint index, const GLint *params) = nullptr;
	void (*glProgramEnvParameterI4uiNV)(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) = nullptr;
	void (*glProgramEnvParameterI4uivNV)(GLenum target, GLuint index, const GLuint *params) = nullptr;
	void (*glProgramEnvParametersI4ivNV)(GLenum target, GLuint index, GLsizei count, const GLint *params) = nullptr;
	void (*glProgramEnvParametersI4uivNV)(GLenum target, GLuint index, GLsizei count, const GLuint *params) = nullptr;
	void (*glProgramLocalParameterI4iNV)(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w) = nullptr;
	void (*glProgramLocalParameterI4ivNV)(GLenum target, GLuint index, const GLint *params) = nullptr;
	void (*glProgramLocalParameterI4uiNV)(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) = nullptr;
	void (*glProgramLocalParameterI4uivNV)(GLenum target, GLuint index, const GLuint *params) = nullptr;
	void (*glProgramLocalParametersI4ivNV)(GLenum target, GLuint index, GLsizei count, const GLint *params) = nullptr;
	void (*glProgramLocalParametersI4uivNV)(GLenum target, GLuint index, GLsizei count, const GLuint *params) = nullptr;
	#endif // GL_NV_gpu_program4
	#ifdef GL_NV_gpu_program5
	bool ext_GL_NV_gpu_program5 = false;
	void (*glGetProgramSubroutineParameteruivNV)(GLenum target, GLuint index, GLuint *param) = nullptr;
	void (*glProgramSubroutineParametersuivNV)(GLenum target, GLsizei count, const GLuint *params) = nullptr;
	#endif // GL_NV_gpu_program5
	#ifdef GL_NV_gpu_shader5
	bool ext_GL_NV_gpu_shader5 = false;
	#if !defined(GL_AMD_gpu_shader_int64)
	void (*glGetUniformi64vNV)(GLuint program, GLint location, GLint64EXT *params) = nullptr;
	void (*glProgramUniform1i64NV)(GLuint program, GLint location, GLint64EXT x) = nullptr;
	void (*glProgramUniform1i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glProgramUniform1ui64NV)(GLuint program, GLint location, GLuint64EXT x) = nullptr;
	void (*glProgramUniform1ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	void (*glProgramUniform2i64NV)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y) = nullptr;
	void (*glProgramUniform2i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glProgramUniform2ui64NV)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y) = nullptr;
	void (*glProgramUniform2ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	void (*glProgramUniform3i64NV)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) = nullptr;
	void (*glProgramUniform3i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glProgramUniform3ui64NV)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) = nullptr;
	void (*glProgramUniform3ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	void (*glProgramUniform4i64NV)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) = nullptr;
	void (*glProgramUniform4i64vNV)(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glProgramUniform4ui64NV)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) = nullptr;
	void (*glProgramUniform4ui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	void (*glUniform1i64NV)(GLint location, GLint64EXT x) = nullptr;
	void (*glUniform1i64vNV)(GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glUniform1ui64NV)(GLint location, GLuint64EXT x) = nullptr;
	void (*glUniform1ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	void (*glUniform2i64NV)(GLint location, GLint64EXT x, GLint64EXT y) = nullptr;
	void (*glUniform2i64vNV)(GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glUniform2ui64NV)(GLint location, GLuint64EXT x, GLuint64EXT y) = nullptr;
	void (*glUniform2ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	void (*glUniform3i64NV)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) = nullptr;
	void (*glUniform3i64vNV)(GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glUniform3ui64NV)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) = nullptr;
	void (*glUniform3ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	void (*glUniform4i64NV)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) = nullptr;
	void (*glUniform4i64vNV)(GLint location, GLsizei count, const GLint64EXT *value) = nullptr;
	void (*glUniform4ui64NV)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) = nullptr;
	void (*glUniform4ui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	#endif
	#endif // GL_NV_gpu_shader5
	#ifdef GL_NV_half_float
	bool ext_GL_NV_half_float = false;
	void (*glColor3hNV)(GLhalfNV red, GLhalfNV green, GLhalfNV blue) = nullptr;
	void (*glColor3hvNV)(const GLhalfNV *v) = nullptr;
	void (*glColor4hNV)(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha) = nullptr;
	void (*glColor4hvNV)(const GLhalfNV *v) = nullptr;
	void (*glFogCoordhNV)(GLhalfNV fog) = nullptr;
	void (*glFogCoordhvNV)(const GLhalfNV *fog) = nullptr;
	void (*glMultiTexCoord1hNV)(GLenum target, GLhalfNV s) = nullptr;
	void (*glMultiTexCoord1hvNV)(GLenum target, const GLhalfNV *v) = nullptr;
	void (*glMultiTexCoord2hNV)(GLenum target, GLhalfNV s, GLhalfNV t) = nullptr;
	void (*glMultiTexCoord2hvNV)(GLenum target, const GLhalfNV *v) = nullptr;
	void (*glMultiTexCoord3hNV)(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r) = nullptr;
	void (*glMultiTexCoord3hvNV)(GLenum target, const GLhalfNV *v) = nullptr;
	void (*glMultiTexCoord4hNV)(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q) = nullptr;
	void (*glMultiTexCoord4hvNV)(GLenum target, const GLhalfNV *v) = nullptr;
	void (*glNormal3hNV)(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz) = nullptr;
	void (*glNormal3hvNV)(const GLhalfNV *v) = nullptr;
	void (*glSecondaryColor3hNV)(GLhalfNV red, GLhalfNV green, GLhalfNV blue) = nullptr;
	void (*glSecondaryColor3hvNV)(const GLhalfNV *v) = nullptr;
	void (*glTexCoord1hNV)(GLhalfNV s) = nullptr;
	void (*glTexCoord1hvNV)(const GLhalfNV *v) = nullptr;
	void (*glTexCoord2hNV)(GLhalfNV s, GLhalfNV t) = nullptr;
	void (*glTexCoord2hvNV)(const GLhalfNV *v) = nullptr;
	void (*glTexCoord3hNV)(GLhalfNV s, GLhalfNV t, GLhalfNV r) = nullptr;
	void (*glTexCoord3hvNV)(const GLhalfNV *v) = nullptr;
	void (*glTexCoord4hNV)(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q) = nullptr;
	void (*glTexCoord4hvNV)(const GLhalfNV *v) = nullptr;
	void (*glVertex2hNV)(GLhalfNV x, GLhalfNV y) = nullptr;
	void (*glVertex2hvNV)(const GLhalfNV *v) = nullptr;
	void (*glVertex3hNV)(GLhalfNV x, GLhalfNV y, GLhalfNV z) = nullptr;
	void (*glVertex3hvNV)(const GLhalfNV *v) = nullptr;
	void (*glVertex4hNV)(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w) = nullptr;
	void (*glVertex4hvNV)(const GLhalfNV *v) = nullptr;
	void (*glVertexAttrib1hNV)(GLuint index, GLhalfNV x) = nullptr;
	void (*glVertexAttrib1hvNV)(GLuint index, const GLhalfNV *v) = nullptr;
	void (*glVertexAttrib2hNV)(GLuint index, GLhalfNV x, GLhalfNV y) = nullptr;
	void (*glVertexAttrib2hvNV)(GLuint index, const GLhalfNV *v) = nullptr;
	void (*glVertexAttrib3hNV)(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z) = nullptr;
	void (*glVertexAttrib3hvNV)(GLuint index, const GLhalfNV *v) = nullptr;
	void (*glVertexAttrib4hNV)(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w) = nullptr;
	void (*glVertexAttrib4hvNV)(GLuint index, const GLhalfNV *v) = nullptr;
	void (*glVertexAttribs1hvNV)(GLuint index, GLsizei n, const GLhalfNV *v) = nullptr;
	void (*glVertexAttribs2hvNV)(GLuint index, GLsizei n, const GLhalfNV *v) = nullptr;
	void (*glVertexAttribs3hvNV)(GLuint index, GLsizei n, const GLhalfNV *v) = nullptr;
	void (*glVertexAttribs4hvNV)(GLuint index, GLsizei n, const GLhalfNV *v) = nullptr;
	void (*glVertexWeighthNV)(GLhalfNV weight) = nullptr;
	void (*glVertexWeighthvNV)(const GLhalfNV *weight) = nullptr;
	#endif // GL_NV_half_float
	#ifdef GL_NV_internalformat_sample_query
	bool ext_GL_NV_internalformat_sample_query = false;
	void (*glGetInternalformatSampleivNV)(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint *params) = nullptr;
	#endif // GL_NV_internalformat_sample_query
	#ifdef GL_NV_light_max_exponent
	bool ext_GL_NV_light_max_exponent = false;
	#endif // GL_NV_light_max_exponent
	#ifdef GL_NV_multisample_coverage
	bool ext_GL_NV_multisample_coverage = false;
	#endif // GL_NV_multisample_coverage
	#ifdef GL_NV_multisample_filter_hint
	bool ext_GL_NV_multisample_filter_hint = false;
	#endif // GL_NV_multisample_filter_hint
	#ifdef GL_NV_occlusion_query
	bool ext_GL_NV_occlusion_query = false;
	void (*glBeginOcclusionQueryNV)(GLuint id) = nullptr;
	void (*glDeleteOcclusionQueriesNV)(GLsizei n, const GLuint *ids) = nullptr;
	void (*glEndOcclusionQueryNV)() = nullptr;
	void (*glGenOcclusionQueriesNV)(GLsizei n, GLuint *ids) = nullptr;
	void (*glGetOcclusionQueryivNV)(GLuint id, GLenum pname, GLint *params) = nullptr;
	void (*glGetOcclusionQueryuivNV)(GLuint id, GLenum pname, GLuint *params) = nullptr;
	GLboolean (*glIsOcclusionQueryNV)(GLuint id) = nullptr;
	#endif // GL_NV_occlusion_query
	#ifdef GL_NV_packed_depth_stencil
	bool ext_GL_NV_packed_depth_stencil = false;
	#endif // GL_NV_packed_depth_stencil
	#ifdef GL_NV_parameter_buffer_object
	bool ext_GL_NV_parameter_buffer_object = false;
	void (*glProgramBufferParametersIivNV)(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLint *params) = nullptr;
	void (*glProgramBufferParametersIuivNV)(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLuint *params) = nullptr;
	void (*glProgramBufferParametersfvNV)(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat *params) = nullptr;
	#endif // GL_NV_parameter_buffer_object
	#ifdef GL_NV_path_rendering
	bool ext_GL_NV_path_rendering = false;
	void (*glCopyPathNV)(GLuint resultPath, GLuint srcPath) = nullptr;
	void (*glCoverFillPathInstancedNV)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) = nullptr;
	void (*glCoverFillPathNV)(GLuint path, GLenum coverMode) = nullptr;
	void (*glCoverStrokePathInstancedNV)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) = nullptr;
	void (*glCoverStrokePathNV)(GLuint path, GLenum coverMode) = nullptr;
	void (*glDeletePathsNV)(GLuint path, GLsizei range) = nullptr;
	GLuint (*glGenPathsNV)(GLsizei range) = nullptr;
	void (*glGetPathColorGenfvNV)(GLenum color, GLenum pname, GLfloat *value) = nullptr;
	void (*glGetPathColorGenivNV)(GLenum color, GLenum pname, GLint *value) = nullptr;
	void (*glGetPathCommandsNV)(GLuint path, GLubyte *commands) = nullptr;
	void (*glGetPathCoordsNV)(GLuint path, GLfloat *coords) = nullptr;
	void (*glGetPathDashArrayNV)(GLuint path, GLfloat *dashArray) = nullptr;
	GLfloat (*glGetPathLengthNV)(GLuint path, GLsizei startSegment, GLsizei numSegments) = nullptr;
	void (*glGetPathMetricRangeNV)(GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics) = nullptr;
	void (*glGetPathMetricsNV)(GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLsizei stride, GLfloat *metrics) = nullptr;
	void (*glGetPathParameterfvNV)(GLuint path, GLenum pname, GLfloat *value) = nullptr;
	void (*glGetPathParameterivNV)(GLuint path, GLenum pname, GLint *value) = nullptr;
	void (*glGetPathSpacingNV)(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing) = nullptr;
	void (*glGetPathTexGenfvNV)(GLenum texCoordSet, GLenum pname, GLfloat *value) = nullptr;
	void (*glGetPathTexGenivNV)(GLenum texCoordSet, GLenum pname, GLint *value) = nullptr;
	void (*glGetProgramResourcefvNV)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLfloat *params) = nullptr;
	void (*glInterpolatePathsNV)(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight) = nullptr;
	GLboolean (*glIsPathNV)(GLuint path) = nullptr;
	GLboolean (*glIsPointInFillPathNV)(GLuint path, GLuint mask, GLfloat x, GLfloat y) = nullptr;
	GLboolean (*glIsPointInStrokePathNV)(GLuint path, GLfloat x, GLfloat y) = nullptr;
	void (*glMatrixLoad3x2fNV)(GLenum matrixMode, const GLfloat *m) = nullptr;
	void (*glMatrixLoad3x3fNV)(GLenum matrixMode, const GLfloat *m) = nullptr;
	void (*glMatrixLoadTranspose3x3fNV)(GLenum matrixMode, const GLfloat *m) = nullptr;
	void (*glMatrixMult3x2fNV)(GLenum matrixMode, const GLfloat *m) = nullptr;
	void (*glMatrixMult3x3fNV)(GLenum matrixMode, const GLfloat *m) = nullptr;
	void (*glMatrixMultTranspose3x3fNV)(GLenum matrixMode, const GLfloat *m) = nullptr;
	void (*glPathColorGenNV)(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat *coeffs) = nullptr;
	void (*glPathCommandsNV)(GLuint path, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords) = nullptr;
	void (*glPathCoordsNV)(GLuint path, GLsizei numCoords, GLenum coordType, const void *coords) = nullptr;
	void (*glPathCoverDepthFuncNV)(GLenum func) = nullptr;
	void (*glPathDashArrayNV)(GLuint path, GLsizei dashCount, const GLfloat *dashArray) = nullptr;
	void (*glPathFogGenNV)(GLenum genMode) = nullptr;
	GLenum (*glPathGlyphIndexArrayNV)(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale) = nullptr;
	GLenum (*glPathGlyphIndexRangeNV)(GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint baseAndCount[2]) = nullptr;
	void (*glPathGlyphRangeNV)(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) = nullptr;
	void (*glPathGlyphsNV)(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void *charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) = nullptr;
	GLenum (*glPathMemoryGlyphIndexArrayNV)(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void *fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale) = nullptr;
	void (*glPathParameterfNV)(GLuint path, GLenum pname, GLfloat value) = nullptr;
	void (*glPathParameterfvNV)(GLuint path, GLenum pname, const GLfloat *value) = nullptr;
	void (*glPathParameteriNV)(GLuint path, GLenum pname, GLint value) = nullptr;
	void (*glPathParameterivNV)(GLuint path, GLenum pname, const GLint *value) = nullptr;
	void (*glPathStencilDepthOffsetNV)(GLfloat factor, GLfloat units) = nullptr;
	void (*glPathStencilFuncNV)(GLenum func, GLint ref, GLuint mask) = nullptr;
	void (*glPathStringNV)(GLuint path, GLenum format, GLsizei length, const void *pathString) = nullptr;
	void (*glPathSubCommandsNV)(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords) = nullptr;
	void (*glPathSubCoordsNV)(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void *coords) = nullptr;
	void (*glPathTexGenNV)(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat *coeffs) = nullptr;
	GLboolean (*glPointAlongPathNV)(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY) = nullptr;
	void (*glProgramPathFragmentInputGenNV)(GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat *coeffs) = nullptr;
	void (*glStencilFillPathInstancedNV)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat *transformValues) = nullptr;
	void (*glStencilFillPathNV)(GLuint path, GLenum fillMode, GLuint mask) = nullptr;
	void (*glStencilStrokePathInstancedNV)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat *transformValues) = nullptr;
	void (*glStencilStrokePathNV)(GLuint path, GLint reference, GLuint mask) = nullptr;
	void (*glStencilThenCoverFillPathInstancedNV)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) = nullptr;
	void (*glStencilThenCoverFillPathNV)(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode) = nullptr;
	void (*glStencilThenCoverStrokePathInstancedNV)(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) = nullptr;
	void (*glStencilThenCoverStrokePathNV)(GLuint path, GLint reference, GLuint mask, GLenum coverMode) = nullptr;
	void (*glTransformPathNV)(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat *transformValues) = nullptr;
	void (*glWeightPathsNV)(GLuint resultPath, GLsizei numPaths, const GLuint *paths, const GLfloat *weights) = nullptr;
	#endif // GL_NV_path_rendering
	#ifdef GL_NV_path_rendering_shared_edge
	bool ext_GL_NV_path_rendering_shared_edge = false;
	#endif // GL_NV_path_rendering_shared_edge
	#ifdef GL_NV_pixel_data_range
	bool ext_GL_NV_pixel_data_range = false;
	void (*glFlushPixelDataRangeNV)(GLenum target) = nullptr;
	void (*glPixelDataRangeNV)(GLenum target, GLsizei length, const void *pointer) = nullptr;
	#endif // GL_NV_pixel_data_range
	#ifdef GL_NV_point_sprite
	bool ext_GL_NV_point_sprite = false;
	void (*glPointParameteriNV)(GLenum pname, GLint param) = nullptr;
	void (*glPointParameterivNV)(GLenum pname, const GLint *params) = nullptr;
	#endif // GL_NV_point_sprite
	#ifdef GL_NV_present_video
	bool ext_GL_NV_present_video = false;
	void (*glGetVideoi64vNV)(GLuint video_slot, GLenum pname, GLint64EXT *params) = nullptr;
	void (*glGetVideoivNV)(GLuint video_slot, GLenum pname, GLint *params) = nullptr;
	void (*glGetVideoui64vNV)(GLuint video_slot, GLenum pname, GLuint64EXT *params) = nullptr;
	void (*glGetVideouivNV)(GLuint video_slot, GLenum pname, GLuint *params) = nullptr;
	void (*glPresentFrameDualFillNV)(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3) = nullptr;
	void (*glPresentFrameKeyedNV)(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1) = nullptr;
	#endif // GL_NV_present_video
	#ifdef GL_NV_primitive_restart
	bool ext_GL_NV_primitive_restart = false;
	void (*glPrimitiveRestartIndexNV)(GLuint index) = nullptr;
	void (*glPrimitiveRestartNV)() = nullptr;
	#endif // GL_NV_primitive_restart
	#ifdef GL_NV_register_combiners
	bool ext_GL_NV_register_combiners = false;
	void (*glCombinerInputNV)(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage) = nullptr;
	void (*glCombinerOutputNV)(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum) = nullptr;
	void (*glCombinerParameterfNV)(GLenum pname, GLfloat param) = nullptr;
	void (*glCombinerParameterfvNV)(GLenum pname, const GLfloat *params) = nullptr;
	void (*glCombinerParameteriNV)(GLenum pname, GLint param) = nullptr;
	void (*glCombinerParameterivNV)(GLenum pname, const GLint *params) = nullptr;
	void (*glFinalCombinerInputNV)(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage) = nullptr;
	void (*glGetCombinerInputParameterfvNV)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetCombinerInputParameterivNV)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params) = nullptr;
	void (*glGetCombinerOutputParameterfvNV)(GLenum stage, GLenum portion, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetCombinerOutputParameterivNV)(GLenum stage, GLenum portion, GLenum pname, GLint *params) = nullptr;
	void (*glGetFinalCombinerInputParameterfvNV)(GLenum variable, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetFinalCombinerInputParameterivNV)(GLenum variable, GLenum pname, GLint *params) = nullptr;
	#endif // GL_NV_register_combiners
	#ifdef GL_NV_register_combiners2
	bool ext_GL_NV_register_combiners2 = false;
	void (*glCombinerStageParameterfvNV)(GLenum stage, GLenum pname, const GLfloat *params) = nullptr;
	void (*glGetCombinerStageParameterfvNV)(GLenum stage, GLenum pname, GLfloat *params) = nullptr;
	#endif // GL_NV_register_combiners2
	#ifdef GL_NV_sample_locations
	bool ext_GL_NV_sample_locations = false;
	void (*glFramebufferSampleLocationsfvNV)(GLenum target, GLuint start, GLsizei count, const GLfloat *v) = nullptr;
	void (*glNamedFramebufferSampleLocationsfvNV)(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v) = nullptr;
	void (*glResolveDepthValuesNV)() = nullptr;
	#endif // GL_NV_sample_locations
	#ifdef GL_NV_shader_buffer_load
	bool ext_GL_NV_shader_buffer_load = false;
	void (*glGetBufferParameterui64vNV)(GLenum target, GLenum pname, GLuint64EXT *params) = nullptr;
	void (*glGetIntegerui64vNV)(GLenum value, GLuint64EXT *result) = nullptr;
	void (*glGetNamedBufferParameterui64vNV)(GLuint buffer, GLenum pname, GLuint64EXT *params) = nullptr;
	#if !defined(GL_AMD_gpu_shader_int64)
	void (*glGetUniformui64vNV)(GLuint program, GLint location, GLuint64EXT *params) = nullptr;
	#endif
	GLboolean (*glIsBufferResidentNV)(GLenum target) = nullptr;
	GLboolean (*glIsNamedBufferResidentNV)(GLuint buffer) = nullptr;
	void (*glMakeBufferNonResidentNV)(GLenum target) = nullptr;
	void (*glMakeBufferResidentNV)(GLenum target, GLenum access) = nullptr;
	void (*glMakeNamedBufferNonResidentNV)(GLuint buffer) = nullptr;
	void (*glMakeNamedBufferResidentNV)(GLuint buffer, GLenum access) = nullptr;
	void (*glProgramUniformui64NV)(GLuint program, GLint location, GLuint64EXT value) = nullptr;
	void (*glProgramUniformui64vNV)(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	void (*glUniformui64NV)(GLint location, GLuint64EXT value) = nullptr;
	void (*glUniformui64vNV)(GLint location, GLsizei count, const GLuint64EXT *value) = nullptr;
	#endif // GL_NV_shader_buffer_load
	#ifdef GL_NV_shader_buffer_store
	bool ext_GL_NV_shader_buffer_store = false;
	#endif // GL_NV_shader_buffer_store
	#ifdef GL_NV_shader_thread_group
	bool ext_GL_NV_shader_thread_group = false;
	#endif // GL_NV_shader_thread_group
	#ifdef GL_NV_tessellation_program5
	bool ext_GL_NV_tessellation_program5 = false;
	#endif // GL_NV_tessellation_program5
	#ifdef GL_NV_texgen_emboss
	bool ext_GL_NV_texgen_emboss = false;
	#endif // GL_NV_texgen_emboss
	#ifdef GL_NV_texgen_reflection
	bool ext_GL_NV_texgen_reflection = false;
	#endif // GL_NV_texgen_reflection
	#ifdef GL_NV_texture_barrier
	bool ext_GL_NV_texture_barrier = false;
	void (*glTextureBarrierNV)() = nullptr;
	#endif // GL_NV_texture_barrier
	#ifdef GL_NV_texture_env_combine4
	bool ext_GL_NV_texture_env_combine4 = false;
	#endif // GL_NV_texture_env_combine4
	#ifdef GL_NV_texture_expand_normal
	bool ext_GL_NV_texture_expand_normal = false;
	#endif // GL_NV_texture_expand_normal
	#ifdef GL_NV_texture_multisample
	bool ext_GL_NV_texture_multisample = false;
	void (*glTexImage2DMultisampleCoverageNV)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations) = nullptr;
	void (*glTexImage3DMultisampleCoverageNV)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations) = nullptr;
	void (*glTextureImage2DMultisampleCoverageNV)(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations) = nullptr;
	void (*glTextureImage2DMultisampleNV)(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations) = nullptr;
	void (*glTextureImage3DMultisampleCoverageNV)(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations) = nullptr;
	void (*glTextureImage3DMultisampleNV)(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations) = nullptr;
	#endif // GL_NV_texture_multisample
	#ifdef GL_NV_texture_rectangle
	bool ext_GL_NV_texture_rectangle = false;
	#endif // GL_NV_texture_rectangle
	#ifdef GL_NV_texture_shader
	bool ext_GL_NV_texture_shader = false;
	#endif // GL_NV_texture_shader
	#ifdef GL_NV_texture_shader2
	bool ext_GL_NV_texture_shader2 = false;
	#endif // GL_NV_texture_shader2
	#ifdef GL_NV_texture_shader3
	bool ext_GL_NV_texture_shader3 = false;
	#endif // GL_NV_texture_shader3
	#ifdef GL_NV_transform_feedback
	bool ext_GL_NV_transform_feedback = false;
	void (*glActiveVaryingNV)(GLuint program, const GLchar *name) = nullptr;
	void (*glBeginTransformFeedbackNV)(GLenum primitiveMode) = nullptr;
	void (*glBindBufferBaseNV)(GLenum target, GLuint index, GLuint buffer) = nullptr;
	void (*glBindBufferOffsetNV)(GLenum target, GLuint index, GLuint buffer, GLintptr offset) = nullptr;
	void (*glBindBufferRangeNV)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) = nullptr;
	void (*glEndTransformFeedbackNV)() = nullptr;
	void (*glGetActiveVaryingNV)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) = nullptr;
	void (*glGetTransformFeedbackVaryingNV)(GLuint program, GLuint index, GLint *location) = nullptr;
	GLint (*glGetVaryingLocationNV)(GLuint program, const GLchar *name) = nullptr;
	void (*glTransformFeedbackAttribsNV)(GLsizei count, const GLint *attribs, GLenum bufferMode) = nullptr;
	void (*glTransformFeedbackStreamAttribsNV)(GLsizei count, const GLint *attribs, GLsizei nbuffers, const GLint *bufstreams, GLenum bufferMode) = nullptr;
	void (*glTransformFeedbackVaryingsNV)(GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode) = nullptr;
	#endif // GL_NV_transform_feedback
	#ifdef GL_NV_transform_feedback2
	bool ext_GL_NV_transform_feedback2 = false;
	void (*glBindTransformFeedbackNV)(GLenum target, GLuint id) = nullptr;
	void (*glDeleteTransformFeedbacksNV)(GLsizei n, const GLuint *ids) = nullptr;
	void (*glDrawTransformFeedbackNV)(GLenum mode, GLuint id) = nullptr;
	void (*glGenTransformFeedbacksNV)(GLsizei n, GLuint *ids) = nullptr;
	GLboolean (*glIsTransformFeedbackNV)(GLuint id) = nullptr;
	void (*glPauseTransformFeedbackNV)() = nullptr;
	void (*glResumeTransformFeedbackNV)() = nullptr;
	#endif // GL_NV_transform_feedback2
	#ifdef GL_NV_uniform_buffer_unified_memory
	bool ext_GL_NV_uniform_buffer_unified_memory = false;
	#endif // GL_NV_uniform_buffer_unified_memory
	#ifdef GL_NV_vdpau_interop
	bool ext_GL_NV_vdpau_interop = false;
	void (*glVDPAUFiniNV)() = nullptr;
	void (*glVDPAUGetSurfaceivNV)(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values) = nullptr;
	void (*glVDPAUInitNV)(const void *vdpDevice, const void *getProcAddress) = nullptr;
	GLboolean (*glVDPAUIsSurfaceNV)(GLvdpauSurfaceNV surface) = nullptr;
	void (*glVDPAUMapSurfacesNV)(GLsizei numSurfaces, const GLvdpauSurfaceNV *surfaces) = nullptr;
	GLvdpauSurfaceNV (*glVDPAURegisterOutputSurfaceNV)(const void *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames) = nullptr;
	GLvdpauSurfaceNV (*glVDPAURegisterVideoSurfaceNV)(const void *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames) = nullptr;
	void (*glVDPAUSurfaceAccessNV)(GLvdpauSurfaceNV surface, GLenum access) = nullptr;
	void (*glVDPAUUnmapSurfacesNV)(GLsizei numSurface, const GLvdpauSurfaceNV *surfaces) = nullptr;
	void (*glVDPAUUnregisterSurfaceNV)(GLvdpauSurfaceNV surface) = nullptr;
	#endif // GL_NV_vdpau_interop
	#ifdef GL_NV_vertex_array_range
	bool ext_GL_NV_vertex_array_range = false;
	void (*glFlushVertexArrayRangeNV)() = nullptr;
	void (*glVertexArrayRangeNV)(GLsizei length, const void *pointer) = nullptr;
	#endif // GL_NV_vertex_array_range
	#ifdef GL_NV_vertex_array_range2
	bool ext_GL_NV_vertex_array_range2 = false;
	#endif // GL_NV_vertex_array_range2
	#ifdef GL_NV_vertex_attrib_integer_64bit
	bool ext_GL_NV_vertex_attrib_integer_64bit = false;
	void (*glGetVertexAttribLi64vNV)(GLuint index, GLenum pname, GLint64EXT *params) = nullptr;
	void (*glGetVertexAttribLui64vNV)(GLuint index, GLenum pname, GLuint64EXT *params) = nullptr;
	void (*glVertexAttribL1i64NV)(GLuint index, GLint64EXT x) = nullptr;
	void (*glVertexAttribL1i64vNV)(GLuint index, const GLint64EXT *v) = nullptr;
	void (*glVertexAttribL1ui64NV)(GLuint index, GLuint64EXT x) = nullptr;
	void (*glVertexAttribL1ui64vNV)(GLuint index, const GLuint64EXT *v) = nullptr;
	void (*glVertexAttribL2i64NV)(GLuint index, GLint64EXT x, GLint64EXT y) = nullptr;
	void (*glVertexAttribL2i64vNV)(GLuint index, const GLint64EXT *v) = nullptr;
	void (*glVertexAttribL2ui64NV)(GLuint index, GLuint64EXT x, GLuint64EXT y) = nullptr;
	void (*glVertexAttribL2ui64vNV)(GLuint index, const GLuint64EXT *v) = nullptr;
	void (*glVertexAttribL3i64NV)(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z) = nullptr;
	void (*glVertexAttribL3i64vNV)(GLuint index, const GLint64EXT *v) = nullptr;
	void (*glVertexAttribL3ui64NV)(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) = nullptr;
	void (*glVertexAttribL3ui64vNV)(GLuint index, const GLuint64EXT *v) = nullptr;
	void (*glVertexAttribL4i64NV)(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) = nullptr;
	void (*glVertexAttribL4i64vNV)(GLuint index, const GLint64EXT *v) = nullptr;
	void (*glVertexAttribL4ui64NV)(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) = nullptr;
	void (*glVertexAttribL4ui64vNV)(GLuint index, const GLuint64EXT *v) = nullptr;
	void (*glVertexAttribLFormatNV)(GLuint index, GLint size, GLenum type, GLsizei stride) = nullptr;
	#endif // GL_NV_vertex_attrib_integer_64bit
	#ifdef GL_NV_vertex_buffer_unified_memory
	bool ext_GL_NV_vertex_buffer_unified_memory = false;
	void (*glBufferAddressRangeNV)(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length) = nullptr;
	void (*glColorFormatNV)(GLint size, GLenum type, GLsizei stride) = nullptr;
	void (*glEdgeFlagFormatNV)(GLsizei stride) = nullptr;
	void (*glFogCoordFormatNV)(GLenum type, GLsizei stride) = nullptr;
	void (*glGetIntegerui64i_vNV)(GLenum value, GLuint index, GLuint64EXT *result) = nullptr;
	void (*glIndexFormatNV)(GLenum type, GLsizei stride) = nullptr;
	void (*glNormalFormatNV)(GLenum type, GLsizei stride) = nullptr;
	void (*glSecondaryColorFormatNV)(GLint size, GLenum type, GLsizei stride) = nullptr;
	void (*glTexCoordFormatNV)(GLint size, GLenum type, GLsizei stride) = nullptr;
	void (*glVertexAttribFormatNV)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride) = nullptr;
	void (*glVertexAttribIFormatNV)(GLuint index, GLint size, GLenum type, GLsizei stride) = nullptr;
	void (*glVertexFormatNV)(GLint size, GLenum type, GLsizei stride) = nullptr;
	#endif // GL_NV_vertex_buffer_unified_memory
	#ifdef GL_NV_vertex_program
	bool ext_GL_NV_vertex_program = false;
	GLboolean (*glAreProgramsResidentNV)(GLsizei n, const GLuint *programs, GLboolean *residences) = nullptr;
	void (*glBindProgramNV)(GLenum target, GLuint id) = nullptr;
	void (*glDeleteProgramsNV)(GLsizei n, const GLuint *programs) = nullptr;
	void (*glExecuteProgramNV)(GLenum target, GLuint id, const GLfloat *params) = nullptr;
	void (*glGenProgramsNV)(GLsizei n, GLuint *programs) = nullptr;
	void (*glGetProgramParameterdvNV)(GLenum target, GLuint index, GLenum pname, GLdouble *params) = nullptr;
	void (*glGetProgramParameterfvNV)(GLenum target, GLuint index, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetProgramStringNV)(GLuint id, GLenum pname, GLubyte *program) = nullptr;
	void (*glGetProgramivNV)(GLuint id, GLenum pname, GLint *params) = nullptr;
	void (*glGetTrackMatrixivNV)(GLenum target, GLuint address, GLenum pname, GLint *params) = nullptr;
	void (*glGetVertexAttribPointervNV)(GLuint index, GLenum pname, void **pointer) = nullptr;
	void (*glGetVertexAttribdvNV)(GLuint index, GLenum pname, GLdouble *params) = nullptr;
	void (*glGetVertexAttribfvNV)(GLuint index, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetVertexAttribivNV)(GLuint index, GLenum pname, GLint *params) = nullptr;
	GLboolean (*glIsProgramNV)(GLuint id) = nullptr;
	void (*glLoadProgramNV)(GLenum target, GLuint id, GLsizei len, const GLubyte *program) = nullptr;
	void (*glProgramParameter4dNV)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glProgramParameter4dvNV)(GLenum target, GLuint index, const GLdouble *v) = nullptr;
	void (*glProgramParameter4fNV)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	void (*glProgramParameter4fvNV)(GLenum target, GLuint index, const GLfloat *v) = nullptr;
	void (*glProgramParameters4dvNV)(GLenum target, GLuint index, GLsizei count, const GLdouble *v) = nullptr;
	void (*glProgramParameters4fvNV)(GLenum target, GLuint index, GLsizei count, const GLfloat *v) = nullptr;
	void (*glRequestResidentProgramsNV)(GLsizei n, const GLuint *programs) = nullptr;
	void (*glTrackMatrixNV)(GLenum target, GLuint address, GLenum matrix, GLenum transform) = nullptr;
	void (*glVertexAttrib1dNV)(GLuint index, GLdouble x) = nullptr;
	void (*glVertexAttrib1dvNV)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib1fNV)(GLuint index, GLfloat x) = nullptr;
	void (*glVertexAttrib1fvNV)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib1sNV)(GLuint index, GLshort x) = nullptr;
	void (*glVertexAttrib1svNV)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib2dNV)(GLuint index, GLdouble x, GLdouble y) = nullptr;
	void (*glVertexAttrib2dvNV)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib2fNV)(GLuint index, GLfloat x, GLfloat y) = nullptr;
	void (*glVertexAttrib2fvNV)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib2sNV)(GLuint index, GLshort x, GLshort y) = nullptr;
	void (*glVertexAttrib2svNV)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib3dNV)(GLuint index, GLdouble x, GLdouble y, GLdouble z) = nullptr;
	void (*glVertexAttrib3dvNV)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib3fNV)(GLuint index, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glVertexAttrib3fvNV)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib3sNV)(GLuint index, GLshort x, GLshort y, GLshort z) = nullptr;
	void (*glVertexAttrib3svNV)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib4dNV)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = nullptr;
	void (*glVertexAttrib4dvNV)(GLuint index, const GLdouble *v) = nullptr;
	void (*glVertexAttrib4fNV)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	void (*glVertexAttrib4fvNV)(GLuint index, const GLfloat *v) = nullptr;
	void (*glVertexAttrib4sNV)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) = nullptr;
	void (*glVertexAttrib4svNV)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttrib4ubNV)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) = nullptr;
	void (*glVertexAttrib4ubvNV)(GLuint index, const GLubyte *v) = nullptr;
	void (*glVertexAttribPointerNV)(GLuint index, GLint fsize, GLenum type, GLsizei stride, const void *pointer) = nullptr;
	void (*glVertexAttribs1dvNV)(GLuint index, GLsizei count, const GLdouble *v) = nullptr;
	void (*glVertexAttribs1fvNV)(GLuint index, GLsizei count, const GLfloat *v) = nullptr;
	void (*glVertexAttribs1svNV)(GLuint index, GLsizei count, const GLshort *v) = nullptr;
	void (*glVertexAttribs2dvNV)(GLuint index, GLsizei count, const GLdouble *v) = nullptr;
	void (*glVertexAttribs2fvNV)(GLuint index, GLsizei count, const GLfloat *v) = nullptr;
	void (*glVertexAttribs2svNV)(GLuint index, GLsizei count, const GLshort *v) = nullptr;
	void (*glVertexAttribs3dvNV)(GLuint index, GLsizei count, const GLdouble *v) = nullptr;
	void (*glVertexAttribs3fvNV)(GLuint index, GLsizei count, const GLfloat *v) = nullptr;
	void (*glVertexAttribs3svNV)(GLuint index, GLsizei count, const GLshort *v) = nullptr;
	void (*glVertexAttribs4dvNV)(GLuint index, GLsizei count, const GLdouble *v) = nullptr;
	void (*glVertexAttribs4fvNV)(GLuint index, GLsizei count, const GLfloat *v) = nullptr;
	void (*glVertexAttribs4svNV)(GLuint index, GLsizei count, const GLshort *v) = nullptr;
	void (*glVertexAttribs4ubvNV)(GLuint index, GLsizei count, const GLubyte *v) = nullptr;
	#endif // GL_NV_vertex_program
	#ifdef GL_NV_vertex_program2_option
	bool ext_GL_NV_vertex_program2_option = false;
	#endif // GL_NV_vertex_program2_option
	#ifdef GL_NV_vertex_program3
	bool ext_GL_NV_vertex_program3 = false;
	#endif // GL_NV_vertex_program3
	#ifdef GL_NV_vertex_program4
	bool ext_GL_NV_vertex_program4 = false;
	void (*glGetVertexAttribIivEXT)(GLuint index, GLenum pname, GLint *params) = nullptr;
	void (*glGetVertexAttribIuivEXT)(GLuint index, GLenum pname, GLuint *params) = nullptr;
	void (*glVertexAttribI1iEXT)(GLuint index, GLint x) = nullptr;
	void (*glVertexAttribI1ivEXT)(GLuint index, const GLint *v) = nullptr;
	void (*glVertexAttribI1uiEXT)(GLuint index, GLuint x) = nullptr;
	void (*glVertexAttribI1uivEXT)(GLuint index, const GLuint *v) = nullptr;
	void (*glVertexAttribI2iEXT)(GLuint index, GLint x, GLint y) = nullptr;
	void (*glVertexAttribI2ivEXT)(GLuint index, const GLint *v) = nullptr;
	void (*glVertexAttribI2uiEXT)(GLuint index, GLuint x, GLuint y) = nullptr;
	void (*glVertexAttribI2uivEXT)(GLuint index, const GLuint *v) = nullptr;
	void (*glVertexAttribI3iEXT)(GLuint index, GLint x, GLint y, GLint z) = nullptr;
	void (*glVertexAttribI3ivEXT)(GLuint index, const GLint *v) = nullptr;
	void (*glVertexAttribI3uiEXT)(GLuint index, GLuint x, GLuint y, GLuint z) = nullptr;
	void (*glVertexAttribI3uivEXT)(GLuint index, const GLuint *v) = nullptr;
	void (*glVertexAttribI4bvEXT)(GLuint index, const GLbyte *v) = nullptr;
	void (*glVertexAttribI4iEXT)(GLuint index, GLint x, GLint y, GLint z, GLint w) = nullptr;
	void (*glVertexAttribI4ivEXT)(GLuint index, const GLint *v) = nullptr;
	void (*glVertexAttribI4svEXT)(GLuint index, const GLshort *v) = nullptr;
	void (*glVertexAttribI4ubvEXT)(GLuint index, const GLubyte *v) = nullptr;
	void (*glVertexAttribI4uiEXT)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) = nullptr;
	void (*glVertexAttribI4uivEXT)(GLuint index, const GLuint *v) = nullptr;
	void (*glVertexAttribI4usvEXT)(GLuint index, const GLushort *v) = nullptr;
	void (*glVertexAttribIPointerEXT)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) = nullptr;
	#endif // GL_NV_vertex_program4
	#ifdef GL_NV_video_capture
	bool ext_GL_NV_video_capture = false;
	void (*glBeginVideoCaptureNV)(GLuint video_capture_slot) = nullptr;
	void (*glBindVideoCaptureStreamBufferNV)(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset) = nullptr;
	void (*glBindVideoCaptureStreamTextureNV)(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture) = nullptr;
	void (*glEndVideoCaptureNV)(GLuint video_capture_slot) = nullptr;
	void (*glGetVideoCaptureStreamdvNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble *params) = nullptr;
	void (*glGetVideoCaptureStreamfvNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetVideoCaptureStreamivNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint *params) = nullptr;
	void (*glGetVideoCaptureivNV)(GLuint video_capture_slot, GLenum pname, GLint *params) = nullptr;
	GLenum (*glVideoCaptureNV)(GLuint video_capture_slot, GLuint *sequence_num, GLuint64EXT *capture_time) = nullptr;
	void (*glVideoCaptureStreamParameterdvNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble *params) = nullptr;
	void (*glVideoCaptureStreamParameterfvNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat *params) = nullptr;
	void (*glVideoCaptureStreamParameterivNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint *params) = nullptr;
	#endif // GL_NV_video_capture
	#ifdef GL_OES_byte_coordinates
	bool ext_GL_OES_byte_coordinates = false;
	void (*glMultiTexCoord1bOES)(GLenum texture, GLbyte s) = nullptr;
	void (*glMultiTexCoord1bvOES)(GLenum texture, const GLbyte *coords) = nullptr;
	void (*glMultiTexCoord2bOES)(GLenum texture, GLbyte s, GLbyte t) = nullptr;
	void (*glMultiTexCoord2bvOES)(GLenum texture, const GLbyte *coords) = nullptr;
	void (*glMultiTexCoord3bOES)(GLenum texture, GLbyte s, GLbyte t, GLbyte r) = nullptr;
	void (*glMultiTexCoord3bvOES)(GLenum texture, const GLbyte *coords) = nullptr;
	void (*glMultiTexCoord4bOES)(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q) = nullptr;
	void (*glMultiTexCoord4bvOES)(GLenum texture, const GLbyte *coords) = nullptr;
	void (*glTexCoord1bOES)(GLbyte s) = nullptr;
	void (*glTexCoord1bvOES)(const GLbyte *coords) = nullptr;
	void (*glTexCoord2bOES)(GLbyte s, GLbyte t) = nullptr;
	void (*glTexCoord2bvOES)(const GLbyte *coords) = nullptr;
	void (*glTexCoord3bOES)(GLbyte s, GLbyte t, GLbyte r) = nullptr;
	void (*glTexCoord3bvOES)(const GLbyte *coords) = nullptr;
	void (*glTexCoord4bOES)(GLbyte s, GLbyte t, GLbyte r, GLbyte q) = nullptr;
	void (*glTexCoord4bvOES)(const GLbyte *coords) = nullptr;
	void (*glVertex2bOES)(GLbyte x, GLbyte y) = nullptr;
	void (*glVertex2bvOES)(const GLbyte *coords) = nullptr;
	void (*glVertex3bOES)(GLbyte x, GLbyte y, GLbyte z) = nullptr;
	void (*glVertex3bvOES)(const GLbyte *coords) = nullptr;
	void (*glVertex4bOES)(GLbyte x, GLbyte y, GLbyte z, GLbyte w) = nullptr;
	void (*glVertex4bvOES)(const GLbyte *coords) = nullptr;
	#endif // GL_OES_byte_coordinates
	#ifdef GL_OES_compressed_paletted_texture
	bool ext_GL_OES_compressed_paletted_texture = false;
	#endif // GL_OES_compressed_paletted_texture
	#ifdef GL_OES_fixed_point
	bool ext_GL_OES_fixed_point = false;
	void (*glAccumxOES)(GLenum op, GLfixed value) = nullptr;
	void (*glAlphaFuncxOES)(GLenum func, GLfixed ref) = nullptr;
	void (*glBitmapxOES)(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte *bitmap) = nullptr;
	void (*glBlendColorxOES)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) = nullptr;
	void (*glClearAccumxOES)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) = nullptr;
	void (*glClearColorxOES)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) = nullptr;
	void (*glClearDepthxOES)(GLfixed depth) = nullptr;
	void (*glClipPlanexOES)(GLenum plane, const GLfixed *equation) = nullptr;
	void (*glColor3xOES)(GLfixed red, GLfixed green, GLfixed blue) = nullptr;
	void (*glColor3xvOES)(const GLfixed *components) = nullptr;
	void (*glColor4xOES)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) = nullptr;
	void (*glColor4xvOES)(const GLfixed *components) = nullptr;
	void (*glConvolutionParameterxOES)(GLenum target, GLenum pname, GLfixed param) = nullptr;
	void (*glConvolutionParameterxvOES)(GLenum target, GLenum pname, const GLfixed *params) = nullptr;
	void (*glDepthRangexOES)(GLfixed n, GLfixed f) = nullptr;
	void (*glEvalCoord1xOES)(GLfixed u) = nullptr;
	void (*glEvalCoord1xvOES)(const GLfixed *coords) = nullptr;
	void (*glEvalCoord2xOES)(GLfixed u, GLfixed v) = nullptr;
	void (*glEvalCoord2xvOES)(const GLfixed *coords) = nullptr;
	void (*glFeedbackBufferxOES)(GLsizei n, GLenum type, const GLfixed *buffer) = nullptr;
	void (*glFogxOES)(GLenum pname, GLfixed param) = nullptr;
	void (*glFogxvOES)(GLenum pname, const GLfixed *param) = nullptr;
	void (*glFrustumxOES)(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f) = nullptr;
	void (*glGetClipPlanexOES)(GLenum plane, GLfixed *equation) = nullptr;
	void (*glGetConvolutionParameterxvOES)(GLenum target, GLenum pname, GLfixed *params) = nullptr;
	void (*glGetFixedvOES)(GLenum pname, GLfixed *params) = nullptr;
	void (*glGetHistogramParameterxvOES)(GLenum target, GLenum pname, GLfixed *params) = nullptr;
	void (*glGetLightxOES)(GLenum light, GLenum pname, GLfixed *params) = nullptr;
	void (*glGetLightxvOES)(GLenum light, GLenum pname, GLfixed *params) = nullptr;
	void (*glGetMapxvOES)(GLenum target, GLenum query, GLfixed *v) = nullptr;
	void (*glGetMaterialxOES)(GLenum face, GLenum pname, GLfixed param) = nullptr;
	void (*glGetMaterialxvOES)(GLenum face, GLenum pname, GLfixed *params) = nullptr;
	void (*glGetPixelMapxv)(GLenum map, GLint size, GLfixed *values) = nullptr;
	void (*glGetTexEnvxvOES)(GLenum target, GLenum pname, GLfixed *params) = nullptr;
	void (*glGetTexGenxvOES)(GLenum coord, GLenum pname, GLfixed *params) = nullptr;
	void (*glGetTexLevelParameterxvOES)(GLenum target, GLint level, GLenum pname, GLfixed *params) = nullptr;
	void (*glGetTexParameterxvOES)(GLenum target, GLenum pname, GLfixed *params) = nullptr;
	void (*glIndexxOES)(GLfixed component) = nullptr;
	void (*glIndexxvOES)(const GLfixed *component) = nullptr;
	void (*glLightModelxOES)(GLenum pname, GLfixed param) = nullptr;
	void (*glLightModelxvOES)(GLenum pname, const GLfixed *param) = nullptr;
	void (*glLightxOES)(GLenum light, GLenum pname, GLfixed param) = nullptr;
	void (*glLightxvOES)(GLenum light, GLenum pname, const GLfixed *params) = nullptr;
	void (*glLineWidthxOES)(GLfixed width) = nullptr;
	void (*glLoadMatrixxOES)(const GLfixed *m) = nullptr;
	void (*glLoadTransposeMatrixxOES)(const GLfixed *m) = nullptr;
	void (*glMap1xOES)(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points) = nullptr;
	void (*glMap2xOES)(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points) = nullptr;
	void (*glMapGrid1xOES)(GLint n, GLfixed u1, GLfixed u2) = nullptr;
	void (*glMapGrid2xOES)(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2) = nullptr;
	void (*glMaterialxOES)(GLenum face, GLenum pname, GLfixed param) = nullptr;
	void (*glMaterialxvOES)(GLenum face, GLenum pname, const GLfixed *param) = nullptr;
	void (*glMultMatrixxOES)(const GLfixed *m) = nullptr;
	void (*glMultTransposeMatrixxOES)(const GLfixed *m) = nullptr;
	void (*glMultiTexCoord1xOES)(GLenum texture, GLfixed s) = nullptr;
	void (*glMultiTexCoord1xvOES)(GLenum texture, const GLfixed *coords) = nullptr;
	void (*glMultiTexCoord2xOES)(GLenum texture, GLfixed s, GLfixed t) = nullptr;
	void (*glMultiTexCoord2xvOES)(GLenum texture, const GLfixed *coords) = nullptr;
	void (*glMultiTexCoord3xOES)(GLenum texture, GLfixed s, GLfixed t, GLfixed r) = nullptr;
	void (*glMultiTexCoord3xvOES)(GLenum texture, const GLfixed *coords) = nullptr;
	void (*glMultiTexCoord4xOES)(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q) = nullptr;
	void (*glMultiTexCoord4xvOES)(GLenum texture, const GLfixed *coords) = nullptr;
	void (*glNormal3xOES)(GLfixed nx, GLfixed ny, GLfixed nz) = nullptr;
	void (*glNormal3xvOES)(const GLfixed *coords) = nullptr;
	void (*glOrthoxOES)(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f) = nullptr;
	void (*glPassThroughxOES)(GLfixed token) = nullptr;
	void (*glPixelMapx)(GLenum map, GLint size, const GLfixed *values) = nullptr;
	void (*glPixelStorex)(GLenum pname, GLfixed param) = nullptr;
	void (*glPixelTransferxOES)(GLenum pname, GLfixed param) = nullptr;
	void (*glPixelZoomxOES)(GLfixed xfactor, GLfixed yfactor) = nullptr;
	void (*glPointParameterxOES)(GLenum pname, GLfixed param) = nullptr;
	void (*glPointParameterxvOES)(GLenum pname, const GLfixed *params) = nullptr;
	void (*glPointSizexOES)(GLfixed size) = nullptr;
	void (*glPolygonOffsetxOES)(GLfixed factor, GLfixed units) = nullptr;
	void (*glPrioritizeTexturesxOES)(GLsizei n, const GLuint *textures, const GLfixed *priorities) = nullptr;
	void (*glRasterPos2xOES)(GLfixed x, GLfixed y) = nullptr;
	void (*glRasterPos2xvOES)(const GLfixed *coords) = nullptr;
	void (*glRasterPos3xOES)(GLfixed x, GLfixed y, GLfixed z) = nullptr;
	void (*glRasterPos3xvOES)(const GLfixed *coords) = nullptr;
	void (*glRasterPos4xOES)(GLfixed x, GLfixed y, GLfixed z, GLfixed w) = nullptr;
	void (*glRasterPos4xvOES)(const GLfixed *coords) = nullptr;
	void (*glRectxOES)(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2) = nullptr;
	void (*glRectxvOES)(const GLfixed *v1, const GLfixed *v2) = nullptr;
	void (*glRotatexOES)(GLfixed angle, GLfixed x, GLfixed y, GLfixed z) = nullptr;
	void (*glSampleCoveragexOES)(GLclampx value, GLboolean invert) = nullptr;
	void (*glScalexOES)(GLfixed x, GLfixed y, GLfixed z) = nullptr;
	void (*glTexCoord1xOES)(GLfixed s) = nullptr;
	void (*glTexCoord1xvOES)(const GLfixed *coords) = nullptr;
	void (*glTexCoord2xOES)(GLfixed s, GLfixed t) = nullptr;
	void (*glTexCoord2xvOES)(const GLfixed *coords) = nullptr;
	void (*glTexCoord3xOES)(GLfixed s, GLfixed t, GLfixed r) = nullptr;
	void (*glTexCoord3xvOES)(const GLfixed *coords) = nullptr;
	void (*glTexCoord4xOES)(GLfixed s, GLfixed t, GLfixed r, GLfixed q) = nullptr;
	void (*glTexCoord4xvOES)(const GLfixed *coords) = nullptr;
	void (*glTexEnvxOES)(GLenum target, GLenum pname, GLfixed param) = nullptr;
	void (*glTexEnvxvOES)(GLenum target, GLenum pname, const GLfixed *params) = nullptr;
	void (*glTexGenxOES)(GLenum coord, GLenum pname, GLfixed param) = nullptr;
	void (*glTexGenxvOES)(GLenum coord, GLenum pname, const GLfixed *params) = nullptr;
	void (*glTexParameterxOES)(GLenum target, GLenum pname, GLfixed param) = nullptr;
	void (*glTexParameterxvOES)(GLenum target, GLenum pname, const GLfixed *params) = nullptr;
	void (*glTranslatexOES)(GLfixed x, GLfixed y, GLfixed z) = nullptr;
	void (*glVertex2xOES)(GLfixed x) = nullptr;
	void (*glVertex2xvOES)(const GLfixed *coords) = nullptr;
	void (*glVertex3xOES)(GLfixed x, GLfixed y) = nullptr;
	void (*glVertex3xvOES)(const GLfixed *coords) = nullptr;
	void (*glVertex4xOES)(GLfixed x, GLfixed y, GLfixed z) = nullptr;
	void (*glVertex4xvOES)(const GLfixed *coords) = nullptr;
	#endif // GL_OES_fixed_point
	#ifdef GL_OES_query_matrix
	bool ext_GL_OES_query_matrix = false;
	GLbitfield (*glQueryMatrixxOES)(GLfixed *mantissa, GLint *exponent) = nullptr;
	#endif // GL_OES_query_matrix
	#ifdef GL_OES_read_format
	bool ext_GL_OES_read_format = false;
	#endif // GL_OES_read_format
	#ifdef GL_OES_single_precision
	bool ext_GL_OES_single_precision = false;
	void (*glClearDepthfOES)(GLclampf depth) = nullptr;
	void (*glClipPlanefOES)(GLenum plane, const GLfloat *equation) = nullptr;
	void (*glDepthRangefOES)(GLclampf n, GLclampf f) = nullptr;
	void (*glFrustumfOES)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f) = nullptr;
	void (*glGetClipPlanefOES)(GLenum plane, GLfloat *equation) = nullptr;
	void (*glOrthofOES)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f) = nullptr;
	#endif // GL_OES_single_precision
	#ifdef GL_OML_interlace
	bool ext_GL_OML_interlace = false;
	#endif // GL_OML_interlace
	#ifdef GL_OML_resample
	bool ext_GL_OML_resample = false;
	#endif // GL_OML_resample
	#ifdef GL_OML_subsample
	bool ext_GL_OML_subsample = false;
	#endif // GL_OML_subsample
	#ifdef GL_OVR_multiview
	bool ext_GL_OVR_multiview = false;
	void (*glFramebufferTextureMultiviewOVR)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews) = nullptr;
	#endif // GL_OVR_multiview
	#ifdef GL_PGI_misc_hints
	bool ext_GL_PGI_misc_hints = false;
	void (*glHintPGI)(GLenum target, GLint mode) = nullptr;
	#endif // GL_PGI_misc_hints
	#ifdef GL_PGI_vertex_hints
	bool ext_GL_PGI_vertex_hints = false;
	#endif // GL_PGI_vertex_hints
	#ifdef GL_REND_screen_coordinates
	bool ext_GL_REND_screen_coordinates = false;
	#endif // GL_REND_screen_coordinates
	#ifdef GL_S3_s3tc
	bool ext_GL_S3_s3tc = false;
	#endif // GL_S3_s3tc
	#ifdef GL_SGIS_detail_texture
	bool ext_GL_SGIS_detail_texture = false;
	void (*glDetailTexFuncSGIS)(GLenum target, GLsizei n, const GLfloat *points) = nullptr;
	void (*glGetDetailTexFuncSGIS)(GLenum target, GLfloat *points) = nullptr;
	#endif // GL_SGIS_detail_texture
	#ifdef GL_SGIS_fog_function
	bool ext_GL_SGIS_fog_function = false;
	void (*glFogFuncSGIS)(GLsizei n, const GLfloat *points) = nullptr;
	void (*glGetFogFuncSGIS)(GLfloat *points) = nullptr;
	#endif // GL_SGIS_fog_function
	#ifdef GL_SGIS_generate_mipmap
	bool ext_GL_SGIS_generate_mipmap = false;
	#endif // GL_SGIS_generate_mipmap
	#ifdef GL_SGIS_multisample
	bool ext_GL_SGIS_multisample = false;
	void (*glSampleMaskSGIS)(GLclampf value, GLboolean invert) = nullptr;
	void (*glSamplePatternSGIS)(GLenum pattern) = nullptr;
	#endif // GL_SGIS_multisample
	#ifdef GL_SGIS_pixel_texture
	bool ext_GL_SGIS_pixel_texture = false;
	void (*glGetPixelTexGenParameterfvSGIS)(GLenum pname, GLfloat *params) = nullptr;
	void (*glGetPixelTexGenParameterivSGIS)(GLenum pname, GLint *params) = nullptr;
	void (*glPixelTexGenParameterfSGIS)(GLenum pname, GLfloat param) = nullptr;
	void (*glPixelTexGenParameterfvSGIS)(GLenum pname, const GLfloat *params) = nullptr;
	void (*glPixelTexGenParameteriSGIS)(GLenum pname, GLint param) = nullptr;
	void (*glPixelTexGenParameterivSGIS)(GLenum pname, const GLint *params) = nullptr;
	#endif // GL_SGIS_pixel_texture
	#ifdef GL_SGIS_point_line_texgen
	bool ext_GL_SGIS_point_line_texgen = false;
	#endif // GL_SGIS_point_line_texgen
	#ifdef GL_SGIS_point_parameters
	bool ext_GL_SGIS_point_parameters = false;
	void (*glPointParameterfSGIS)(GLenum pname, GLfloat param) = nullptr;
	void (*glPointParameterfvSGIS)(GLenum pname, const GLfloat *params) = nullptr;
	#endif // GL_SGIS_point_parameters
	#ifdef GL_SGIS_sharpen_texture
	bool ext_GL_SGIS_sharpen_texture = false;
	void (*glGetSharpenTexFuncSGIS)(GLenum target, GLfloat *points) = nullptr;
	void (*glSharpenTexFuncSGIS)(GLenum target, GLsizei n, const GLfloat *points) = nullptr;
	#endif // GL_SGIS_sharpen_texture
	#ifdef GL_SGIS_texture4D
	bool ext_GL_SGIS_texture4D = false;
	void (*glTexImage4DSGIS)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const void *pixels) = nullptr;
	void (*glTexSubImage4DSGIS)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void *pixels) = nullptr;
	#endif // GL_SGIS_texture4D
	#ifdef GL_SGIS_texture_border_clamp
	bool ext_GL_SGIS_texture_border_clamp = false;
	#endif // GL_SGIS_texture_border_clamp
	#ifdef GL_SGIS_texture_color_mask
	bool ext_GL_SGIS_texture_color_mask = false;
	void (*glTextureColorMaskSGIS)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) = nullptr;
	#endif // GL_SGIS_texture_color_mask
	#ifdef GL_SGIS_texture_edge_clamp
	bool ext_GL_SGIS_texture_edge_clamp = false;
	#endif // GL_SGIS_texture_edge_clamp
	#ifdef GL_SGIS_texture_filter4
	bool ext_GL_SGIS_texture_filter4 = false;
	void (*glGetTexFilterFuncSGIS)(GLenum target, GLenum filter, GLfloat *weights) = nullptr;
	void (*glTexFilterFuncSGIS)(GLenum target, GLenum filter, GLsizei n, const GLfloat *weights) = nullptr;
	#endif // GL_SGIS_texture_filter4
	#ifdef GL_SGIS_texture_lod
	bool ext_GL_SGIS_texture_lod = false;
	#endif // GL_SGIS_texture_lod
	#ifdef GL_SGIS_texture_select
	bool ext_GL_SGIS_texture_select = false;
	#endif // GL_SGIS_texture_select
	#ifdef GL_SGIX_async
	bool ext_GL_SGIX_async = false;
	void (*glAsyncMarkerSGIX)(GLuint marker) = nullptr;
	void (*glDeleteAsyncMarkersSGIX)(GLuint marker, GLsizei range) = nullptr;
	GLint (*glFinishAsyncSGIX)(GLuint *markerp) = nullptr;
	GLuint (*glGenAsyncMarkersSGIX)(GLsizei range) = nullptr;
	GLboolean (*glIsAsyncMarkerSGIX)(GLuint marker) = nullptr;
	GLint (*glPollAsyncSGIX)(GLuint *markerp) = nullptr;
	#endif // GL_SGIX_async
	#ifdef GL_SGIX_async_histogram
	bool ext_GL_SGIX_async_histogram = false;
	#endif // GL_SGIX_async_histogram
	#ifdef GL_SGIX_async_pixel
	bool ext_GL_SGIX_async_pixel = false;
	#endif // GL_SGIX_async_pixel
	#ifdef GL_SGIX_blend_alpha_minmax
	bool ext_GL_SGIX_blend_alpha_minmax = false;
	#endif // GL_SGIX_blend_alpha_minmax
	#ifdef GL_SGIX_calligraphic_fragment
	bool ext_GL_SGIX_calligraphic_fragment = false;
	#endif // GL_SGIX_calligraphic_fragment
	#ifdef GL_SGIX_clipmap
	bool ext_GL_SGIX_clipmap = false;
	#endif // GL_SGIX_clipmap
	#ifdef GL_SGIX_convolution_accuracy
	bool ext_GL_SGIX_convolution_accuracy = false;
	#endif // GL_SGIX_convolution_accuracy
	#ifdef GL_SGIX_depth_texture
	bool ext_GL_SGIX_depth_texture = false;
	#endif // GL_SGIX_depth_texture
	#ifdef GL_SGIX_flush_raster
	bool ext_GL_SGIX_flush_raster = false;
	void (*glFlushRasterSGIX)() = nullptr;
	#endif // GL_SGIX_flush_raster
	#ifdef GL_SGIX_fog_offset
	bool ext_GL_SGIX_fog_offset = false;
	#endif // GL_SGIX_fog_offset
	#ifdef GL_SGIX_fragment_lighting
	bool ext_GL_SGIX_fragment_lighting = false;
	void (*glFragmentColorMaterialSGIX)(GLenum face, GLenum mode) = nullptr;
	void (*glFragmentLightModelfSGIX)(GLenum pname, GLfloat param) = nullptr;
	void (*glFragmentLightModelfvSGIX)(GLenum pname, const GLfloat *params) = nullptr;
	void (*glFragmentLightModeliSGIX)(GLenum pname, GLint param) = nullptr;
	void (*glFragmentLightModelivSGIX)(GLenum pname, const GLint *params) = nullptr;
	void (*glFragmentLightfSGIX)(GLenum light, GLenum pname, GLfloat param) = nullptr;
	void (*glFragmentLightfvSGIX)(GLenum light, GLenum pname, const GLfloat *params) = nullptr;
	void (*glFragmentLightiSGIX)(GLenum light, GLenum pname, GLint param) = nullptr;
	void (*glFragmentLightivSGIX)(GLenum light, GLenum pname, const GLint *params) = nullptr;
	void (*glFragmentMaterialfSGIX)(GLenum face, GLenum pname, GLfloat param) = nullptr;
	void (*glFragmentMaterialfvSGIX)(GLenum face, GLenum pname, const GLfloat *params) = nullptr;
	void (*glFragmentMaterialiSGIX)(GLenum face, GLenum pname, GLint param) = nullptr;
	void (*glFragmentMaterialivSGIX)(GLenum face, GLenum pname, const GLint *params) = nullptr;
	void (*glGetFragmentLightfvSGIX)(GLenum light, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetFragmentLightivSGIX)(GLenum light, GLenum pname, GLint *params) = nullptr;
	void (*glGetFragmentMaterialfvSGIX)(GLenum face, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetFragmentMaterialivSGIX)(GLenum face, GLenum pname, GLint *params) = nullptr;
	void (*glLightEnviSGIX)(GLenum pname, GLint param) = nullptr;
	#endif // GL_SGIX_fragment_lighting
	#ifdef GL_SGIX_framezoom
	bool ext_GL_SGIX_framezoom = false;
	void (*glFrameZoomSGIX)(GLint factor) = nullptr;
	#endif // GL_SGIX_framezoom
	#ifdef GL_SGIX_igloo_interface
	bool ext_GL_SGIX_igloo_interface = false;
	void (*glIglooInterfaceSGIX)(GLenum pname, const void *params) = nullptr;
	#endif // GL_SGIX_igloo_interface
	#ifdef GL_SGIX_instruments
	bool ext_GL_SGIX_instruments = false;
	GLint (*glGetInstrumentsSGIX)() = nullptr;
	void (*glInstrumentsBufferSGIX)(GLsizei size, GLint *buffer) = nullptr;
	GLint (*glPollInstrumentsSGIX)(GLint *marker_p) = nullptr;
	void (*glReadInstrumentsSGIX)(GLint marker) = nullptr;
	void (*glStartInstrumentsSGIX)() = nullptr;
	void (*glStopInstrumentsSGIX)(GLint marker) = nullptr;
	#endif // GL_SGIX_instruments
	#ifdef GL_SGIX_interlace
	bool ext_GL_SGIX_interlace = false;
	#endif // GL_SGIX_interlace
	#ifdef GL_SGIX_ir_instrument1
	bool ext_GL_SGIX_ir_instrument1 = false;
	#endif // GL_SGIX_ir_instrument1
	#ifdef GL_SGIX_list_priority
	bool ext_GL_SGIX_list_priority = false;
	void (*glGetListParameterfvSGIX)(GLuint list, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetListParameterivSGIX)(GLuint list, GLenum pname, GLint *params) = nullptr;
	void (*glListParameterfSGIX)(GLuint list, GLenum pname, GLfloat param) = nullptr;
	void (*glListParameterfvSGIX)(GLuint list, GLenum pname, const GLfloat *params) = nullptr;
	void (*glListParameteriSGIX)(GLuint list, GLenum pname, GLint param) = nullptr;
	void (*glListParameterivSGIX)(GLuint list, GLenum pname, const GLint *params) = nullptr;
	#endif // GL_SGIX_list_priority
	#ifdef GL_SGIX_pixel_texture
	bool ext_GL_SGIX_pixel_texture = false;
	void (*glPixelTexGenSGIX)(GLenum mode) = nullptr;
	#endif // GL_SGIX_pixel_texture
	#ifdef GL_SGIX_pixel_tiles
	bool ext_GL_SGIX_pixel_tiles = false;
	#endif // GL_SGIX_pixel_tiles
	#ifdef GL_SGIX_polynomial_ffd
	bool ext_GL_SGIX_polynomial_ffd = false;
	void (*glDeformSGIX)(GLbitfield mask) = nullptr;
	void (*glDeformationMap3dSGIX)(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble *points) = nullptr;
	void (*glDeformationMap3fSGIX)(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat *points) = nullptr;
	void (*glLoadIdentityDeformationMapSGIX)(GLbitfield mask) = nullptr;
	#endif // GL_SGIX_polynomial_ffd
	#ifdef GL_SGIX_reference_plane
	bool ext_GL_SGIX_reference_plane = false;
	void (*glReferencePlaneSGIX)(const GLdouble *equation) = nullptr;
	#endif // GL_SGIX_reference_plane
	#ifdef GL_SGIX_resample
	bool ext_GL_SGIX_resample = false;
	#endif // GL_SGIX_resample
	#ifdef GL_SGIX_scalebias_hint
	bool ext_GL_SGIX_scalebias_hint = false;
	#endif // GL_SGIX_scalebias_hint
	#ifdef GL_SGIX_shadow
	bool ext_GL_SGIX_shadow = false;
	#endif // GL_SGIX_shadow
	#ifdef GL_SGIX_shadow_ambient
	bool ext_GL_SGIX_shadow_ambient = false;
	#endif // GL_SGIX_shadow_ambient
	#ifdef GL_SGIX_sprite
	bool ext_GL_SGIX_sprite = false;
	void (*glSpriteParameterfSGIX)(GLenum pname, GLfloat param) = nullptr;
	void (*glSpriteParameterfvSGIX)(GLenum pname, const GLfloat *params) = nullptr;
	void (*glSpriteParameteriSGIX)(GLenum pname, GLint param) = nullptr;
	void (*glSpriteParameterivSGIX)(GLenum pname, const GLint *params) = nullptr;
	#endif // GL_SGIX_sprite
	#ifdef GL_SGIX_subsample
	bool ext_GL_SGIX_subsample = false;
	#endif // GL_SGIX_subsample
	#ifdef GL_SGIX_tag_sample_buffer
	bool ext_GL_SGIX_tag_sample_buffer = false;
	void (*glTagSampleBufferSGIX)() = nullptr;
	#endif // GL_SGIX_tag_sample_buffer
	#ifdef GL_SGIX_texture_add_env
	bool ext_GL_SGIX_texture_add_env = false;
	#endif // GL_SGIX_texture_add_env
	#ifdef GL_SGIX_texture_coordinate_clamp
	bool ext_GL_SGIX_texture_coordinate_clamp = false;
	#endif // GL_SGIX_texture_coordinate_clamp
	#ifdef GL_SGIX_texture_lod_bias
	bool ext_GL_SGIX_texture_lod_bias = false;
	#endif // GL_SGIX_texture_lod_bias
	#ifdef GL_SGIX_texture_multi_buffer
	bool ext_GL_SGIX_texture_multi_buffer = false;
	#endif // GL_SGIX_texture_multi_buffer
	#ifdef GL_SGIX_texture_scale_bias
	bool ext_GL_SGIX_texture_scale_bias = false;
	#endif // GL_SGIX_texture_scale_bias
	#ifdef GL_SGIX_vertex_preclip
	bool ext_GL_SGIX_vertex_preclip = false;
	#endif // GL_SGIX_vertex_preclip
	#ifdef GL_SGIX_ycrcb
	bool ext_GL_SGIX_ycrcb = false;
	#endif // GL_SGIX_ycrcb
	#ifdef GL_SGIX_ycrcba
	bool ext_GL_SGIX_ycrcba = false;
	#endif // GL_SGIX_ycrcba
	#ifdef GL_SGI_color_matrix
	bool ext_GL_SGI_color_matrix = false;
	#endif // GL_SGI_color_matrix
	#ifdef GL_SGI_color_table
	bool ext_GL_SGI_color_table = false;
	void (*glColorTableParameterfvSGI)(GLenum target, GLenum pname, const GLfloat *params) = nullptr;
	void (*glColorTableParameterivSGI)(GLenum target, GLenum pname, const GLint *params) = nullptr;
	void (*glColorTableSGI)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *table) = nullptr;
	void (*glCopyColorTableSGI)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) = nullptr;
	void (*glGetColorTableParameterfvSGI)(GLenum target, GLenum pname, GLfloat *params) = nullptr;
	void (*glGetColorTableParameterivSGI)(GLenum target, GLenum pname, GLint *params) = nullptr;
	void (*glGetColorTableSGI)(GLenum target, GLenum format, GLenum type, void *table) = nullptr;
	#endif // GL_SGI_color_table
	#ifdef GL_SGI_texture_color_table
	bool ext_GL_SGI_texture_color_table = false;
	#endif // GL_SGI_texture_color_table
	#ifdef GL_SUNX_constant_data
	bool ext_GL_SUNX_constant_data = false;
	void (*glFinishTextureSUNX)() = nullptr;
	#endif // GL_SUNX_constant_data
	#ifdef GL_SUN_convolution_border_modes
	bool ext_GL_SUN_convolution_border_modes = false;
	#endif // GL_SUN_convolution_border_modes
	#ifdef GL_SUN_global_alpha
	bool ext_GL_SUN_global_alpha = false;
	void (*glGlobalAlphaFactorbSUN)(GLbyte factor) = nullptr;
	void (*glGlobalAlphaFactordSUN)(GLdouble factor) = nullptr;
	void (*glGlobalAlphaFactorfSUN)(GLfloat factor) = nullptr;
	void (*glGlobalAlphaFactoriSUN)(GLint factor) = nullptr;
	void (*glGlobalAlphaFactorsSUN)(GLshort factor) = nullptr;
	void (*glGlobalAlphaFactorubSUN)(GLubyte factor) = nullptr;
	void (*glGlobalAlphaFactoruiSUN)(GLuint factor) = nullptr;
	void (*glGlobalAlphaFactorusSUN)(GLushort factor) = nullptr;
	#endif // GL_SUN_global_alpha
	#ifdef GL_SUN_mesh_array
	bool ext_GL_SUN_mesh_array = false;
	void (*glDrawMeshArraysSUN)(GLenum mode, GLint first, GLsizei count, GLsizei width) = nullptr;
	#endif // GL_SUN_mesh_array
	#ifdef GL_SUN_slice_accum
	bool ext_GL_SUN_slice_accum = false;
	#endif // GL_SUN_slice_accum
	#ifdef GL_SUN_triangle_list
	bool ext_GL_SUN_triangle_list = false;
	void (*glReplacementCodePointerSUN)(GLenum type, GLsizei stride, const void **pointer) = nullptr;
	void (*glReplacementCodeubSUN)(GLubyte code) = nullptr;
	void (*glReplacementCodeubvSUN)(const GLubyte *code) = nullptr;
	void (*glReplacementCodeuiSUN)(GLuint code) = nullptr;
	void (*glReplacementCodeuivSUN)(const GLuint *code) = nullptr;
	void (*glReplacementCodeusSUN)(GLushort code) = nullptr;
	void (*glReplacementCodeusvSUN)(const GLushort *code) = nullptr;
	#endif // GL_SUN_triangle_list
	#ifdef GL_SUN_vertex
	bool ext_GL_SUN_vertex = false;
	void (*glColor3fVertex3fSUN)(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glColor3fVertex3fvSUN)(const GLfloat *c, const GLfloat *v) = nullptr;
	void (*glColor4fNormal3fVertex3fSUN)(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glColor4fNormal3fVertex3fvSUN)(const GLfloat *c, const GLfloat *n, const GLfloat *v) = nullptr;
	void (*glColor4ubVertex2fSUN)(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y) = nullptr;
	void (*glColor4ubVertex2fvSUN)(const GLubyte *c, const GLfloat *v) = nullptr;
	void (*glColor4ubVertex3fSUN)(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glColor4ubVertex3fvSUN)(const GLubyte *c, const GLfloat *v) = nullptr;
	void (*glNormal3fVertex3fSUN)(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glNormal3fVertex3fvSUN)(const GLfloat *n, const GLfloat *v) = nullptr;
	void (*glReplacementCodeuiColor3fVertex3fSUN)(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glReplacementCodeuiColor3fVertex3fvSUN)(const GLuint *rc, const GLfloat *c, const GLfloat *v) = nullptr;
	void (*glReplacementCodeuiColor4fNormal3fVertex3fSUN)(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glReplacementCodeuiColor4fNormal3fVertex3fvSUN)(const GLuint *rc, const GLfloat *c, const GLfloat *n, const GLfloat *v) = nullptr;
	void (*glReplacementCodeuiColor4ubVertex3fSUN)(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glReplacementCodeuiColor4ubVertex3fvSUN)(const GLuint *rc, const GLubyte *c, const GLfloat *v) = nullptr;
	void (*glReplacementCodeuiNormal3fVertex3fSUN)(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glReplacementCodeuiNormal3fVertex3fvSUN)(const GLuint *rc, const GLfloat *n, const GLfloat *v) = nullptr;
	void (*glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN)(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN)(const GLuint *rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v) = nullptr;
	void (*glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN)(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN)(const GLuint *rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v) = nullptr;
	void (*glReplacementCodeuiTexCoord2fVertex3fSUN)(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glReplacementCodeuiTexCoord2fVertex3fvSUN)(const GLuint *rc, const GLfloat *tc, const GLfloat *v) = nullptr;
	void (*glReplacementCodeuiVertex3fSUN)(GLuint rc, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glReplacementCodeuiVertex3fvSUN)(const GLuint *rc, const GLfloat *v) = nullptr;
	void (*glTexCoord2fColor3fVertex3fSUN)(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glTexCoord2fColor3fVertex3fvSUN)(const GLfloat *tc, const GLfloat *c, const GLfloat *v) = nullptr;
	void (*glTexCoord2fColor4fNormal3fVertex3fSUN)(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glTexCoord2fColor4fNormal3fVertex3fvSUN)(const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v) = nullptr;
	void (*glTexCoord2fColor4ubVertex3fSUN)(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glTexCoord2fColor4ubVertex3fvSUN)(const GLfloat *tc, const GLubyte *c, const GLfloat *v) = nullptr;
	void (*glTexCoord2fNormal3fVertex3fSUN)(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glTexCoord2fNormal3fVertex3fvSUN)(const GLfloat *tc, const GLfloat *n, const GLfloat *v) = nullptr;
	void (*glTexCoord2fVertex3fSUN)(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	void (*glTexCoord2fVertex3fvSUN)(const GLfloat *tc, const GLfloat *v) = nullptr;
	void (*glTexCoord4fColor4fNormal3fVertex4fSUN)(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	void (*glTexCoord4fColor4fNormal3fVertex4fvSUN)(const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v) = nullptr;
	void (*glTexCoord4fVertex4fSUN)(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	void (*glTexCoord4fVertex4fvSUN)(const GLfloat *tc, const GLfloat *v) = nullptr;
	#endif // GL_SUN_vertex
	#ifdef GL_WIN_phong_shading
	bool ext_GL_WIN_phong_shading = false;
	#endif // GL_WIN_phong_shading
	#ifdef GL_WIN_specular_fog
	bool ext_GL_WIN_specular_fog = false;
	#endif // GL_WIN_specular_fog
	
	HMODULE lib = nullptr;
	GLFunctionLoader wgl = nullptr;
	
	void* lGetProcAddress(const char* name) {
		void* ret = wgl == nullptr ? nullptr : wgl(name);
		return ret == nullptr ? reinterpret_cast<void*>(GetProcAddress(lib, name)) : ret;
	}
	
	void glLoadFunctions() {
		#if defined(_WIN32)
			lib = LoadLibraryA("opengl32.dll");
			if (lib == nullptr) throw std::runtime_error("OpenGL library not found");
			wgl = reinterpret_cast<GLFunctionLoader>(GetProcAddress(lib, "wglGetProcAddress"));
		#elif defined(__APPLE__)
			lib = dlopen("../Frameworks/OpenGL.framework/OpenGL", RTLD_NOW | RTLD_GLOBAL);
			if (lib == nullptr) lib = dlopen("/Library/Frameworks/OpenGL.framework/OpenGL", RTLD_NOW | RTLD_GLOBAL);
			if (lib == nullptr) lib = dlopen("/System/Library/Frameworks/OpenGL.framework/OpenGL", RTLD_NOW | RTLD_GLOBAL);
			if (lib == nullptr) lib = dlopen("/System/Library/Frameworks/OpenGL.framework/Versions/Current/OpenGL", RTLD_NOW | RTLD_GLOBAL);
			if (lib == nullptr) throw std::runtime_error("OpenGL library not found");
		#else
			lib = dlopen("libGL.so.1", RTLD_NOW | RTLD_GLOBAL);
			if (lib == nullptr) lib = dlopen("libGL.so", RTLD_NOW | RTLD_GLOBAL);
			if (lib == nullptr) throw std::runtime_error("OpenGL library not found");
			wgl = reinterpret_cast<GLFunctionLoader>(dlsym(lib, "glXGetProcAddressARB"));
		#endif
		try {
			glLoadFunctions(&lGetProcAddress);
		} catch (...) {
			FreeLibrary(lib);
			lib = nullptr;
			wgl = nullptr;
			throw;
		}
		FreeLibrary(lib);
		lib = nullptr;
		wgl = nullptr;
	}
	
	template <typename Fn>
	inline void Load(Fn &f, const GLFunctionLoader &load, const char* name) {
		f = reinterpret_cast<Fn>(load(name));
		if (!f) throw std::runtime_error(name);
	};
	
	template <typename Fn>
	inline bool LoadExt(Fn &f, const GLFunctionLoader &load, const char* name) {
		return (f = reinterpret_cast<Fn>(load(name)));
	};
	
	#ifdef GL_VERSION_3_0
	bool Check(const char* name, const GLubyte** exts, GLint count) {
		for (GLint j, i = 0; i < count; i++) {
			for (j = 0; exts[i][j] != '\0' && name[j] != '\0' && name[j] == exts[i][j]; j++);
			if (name[j] == '\0') return true;
		}
		return false;
	}
	#else
	bool Check(const char* name, const GLubyte* exts, GLint) {
		for (GLint j, i = 0; exts[i] != '\0'; i++) {
			for (j = 0; name[j] != '\0' && exts[i + j] != '\0' && name[j] == exts[i + j]; j++);
			if (name[j] == '\0') return true;
		}
		return false;
	}
	#endif
	
	void glLoadFunctions(const GLFunctionLoader &load) {
		Load(glActiveTexture, load, "glActiveTexture");
		Load(glAttachShader, load, "glAttachShader");
		Load(glBeginConditionalRender, load, "glBeginConditionalRender");
		Load(glBeginQuery, load, "glBeginQuery");
		Load(glBeginTransformFeedback, load, "glBeginTransformFeedback");
		Load(glBindAttribLocation, load, "glBindAttribLocation");
		Load(glBindBuffer, load, "glBindBuffer");
		Load(glBindBufferBase, load, "glBindBufferBase");
		Load(glBindBufferRange, load, "glBindBufferRange");
		Load(glBindFragDataLocation, load, "glBindFragDataLocation");
		Load(glBindFragDataLocationIndexed, load, "glBindFragDataLocationIndexed");
		Load(glBindFramebuffer, load, "glBindFramebuffer");
		Load(glBindRenderbuffer, load, "glBindRenderbuffer");
		Load(glBindSampler, load, "glBindSampler");
		Load(glBindTexture, load, "glBindTexture");
		Load(glBindVertexArray, load, "glBindVertexArray");
		Load(glBlendColor, load, "glBlendColor");
		Load(glBlendEquation, load, "glBlendEquation");
		Load(glBlendEquationSeparate, load, "glBlendEquationSeparate");
		Load(glBlendFunc, load, "glBlendFunc");
		Load(glBlendFuncSeparate, load, "glBlendFuncSeparate");
		Load(glBlitFramebuffer, load, "glBlitFramebuffer");
		Load(glBufferData, load, "glBufferData");
		Load(glBufferSubData, load, "glBufferSubData");
		Load(glCheckFramebufferStatus, load, "glCheckFramebufferStatus");
		Load(glClampColor, load, "glClampColor");
		Load(glClear, load, "glClear");
		Load(glClearBufferfi, load, "glClearBufferfi");
		Load(glClearBufferfv, load, "glClearBufferfv");
		Load(glClearBufferiv, load, "glClearBufferiv");
		Load(glClearBufferuiv, load, "glClearBufferuiv");
		Load(glClearColor, load, "glClearColor");
		Load(glClearDepth, load, "glClearDepth");
		Load(glClearStencil, load, "glClearStencil");
		Load(glClientWaitSync, load, "glClientWaitSync");
		Load(glColorMask, load, "glColorMask");
		Load(glColorMaski, load, "glColorMaski");
		Load(glCompileShader, load, "glCompileShader");
		Load(glCompressedTexImage1D, load, "glCompressedTexImage1D");
		Load(glCompressedTexImage2D, load, "glCompressedTexImage2D");
		Load(glCompressedTexImage3D, load, "glCompressedTexImage3D");
		Load(glCompressedTexSubImage1D, load, "glCompressedTexSubImage1D");
		Load(glCompressedTexSubImage2D, load, "glCompressedTexSubImage2D");
		Load(glCompressedTexSubImage3D, load, "glCompressedTexSubImage3D");
		Load(glCopyBufferSubData, load, "glCopyBufferSubData");
		Load(glCopyTexImage1D, load, "glCopyTexImage1D");
		Load(glCopyTexImage2D, load, "glCopyTexImage2D");
		Load(glCopyTexSubImage1D, load, "glCopyTexSubImage1D");
		Load(glCopyTexSubImage2D, load, "glCopyTexSubImage2D");
		Load(glCopyTexSubImage3D, load, "glCopyTexSubImage3D");
		Load(glCreateProgram, load, "glCreateProgram");
		Load(glCreateShader, load, "glCreateShader");
		Load(glCullFace, load, "glCullFace");
		Load(glDeleteBuffers, load, "glDeleteBuffers");
		Load(glDeleteFramebuffers, load, "glDeleteFramebuffers");
		Load(glDeleteProgram, load, "glDeleteProgram");
		Load(glDeleteQueries, load, "glDeleteQueries");
		Load(glDeleteRenderbuffers, load, "glDeleteRenderbuffers");
		Load(glDeleteSamplers, load, "glDeleteSamplers");
		Load(glDeleteShader, load, "glDeleteShader");
		Load(glDeleteSync, load, "glDeleteSync");
		Load(glDeleteTextures, load, "glDeleteTextures");
		Load(glDeleteVertexArrays, load, "glDeleteVertexArrays");
		Load(glDepthFunc, load, "glDepthFunc");
		Load(glDepthMask, load, "glDepthMask");
		Load(glDepthRange, load, "glDepthRange");
		Load(glDetachShader, load, "glDetachShader");
		Load(glDisable, load, "glDisable");
		Load(glDisableVertexAttribArray, load, "glDisableVertexAttribArray");
		Load(glDisablei, load, "glDisablei");
		Load(glDrawArrays, load, "glDrawArrays");
		Load(glDrawArraysInstanced, load, "glDrawArraysInstanced");
		Load(glDrawBuffer, load, "glDrawBuffer");
		Load(glDrawBuffers, load, "glDrawBuffers");
		Load(glDrawElements, load, "glDrawElements");
		Load(glDrawElementsBaseVertex, load, "glDrawElementsBaseVertex");
		Load(glDrawElementsInstanced, load, "glDrawElementsInstanced");
		Load(glDrawElementsInstancedBaseVertex, load, "glDrawElementsInstancedBaseVertex");
		Load(glDrawRangeElements, load, "glDrawRangeElements");
		Load(glDrawRangeElementsBaseVertex, load, "glDrawRangeElementsBaseVertex");
		Load(glEnable, load, "glEnable");
		Load(glEnableVertexAttribArray, load, "glEnableVertexAttribArray");
		Load(glEnablei, load, "glEnablei");
		Load(glEndConditionalRender, load, "glEndConditionalRender");
		Load(glEndQuery, load, "glEndQuery");
		Load(glEndTransformFeedback, load, "glEndTransformFeedback");
		Load(glFenceSync, load, "glFenceSync");
		Load(glFinish, load, "glFinish");
		Load(glFlush, load, "glFlush");
		Load(glFlushMappedBufferRange, load, "glFlushMappedBufferRange");
		Load(glFramebufferRenderbuffer, load, "glFramebufferRenderbuffer");
		Load(glFramebufferTexture, load, "glFramebufferTexture");
		Load(glFramebufferTexture1D, load, "glFramebufferTexture1D");
		Load(glFramebufferTexture2D, load, "glFramebufferTexture2D");
		Load(glFramebufferTexture3D, load, "glFramebufferTexture3D");
		Load(glFramebufferTextureLayer, load, "glFramebufferTextureLayer");
		Load(glFrontFace, load, "glFrontFace");
		Load(glGenBuffers, load, "glGenBuffers");
		Load(glGenFramebuffers, load, "glGenFramebuffers");
		Load(glGenQueries, load, "glGenQueries");
		Load(glGenRenderbuffers, load, "glGenRenderbuffers");
		Load(glGenSamplers, load, "glGenSamplers");
		Load(glGenTextures, load, "glGenTextures");
		Load(glGenVertexArrays, load, "glGenVertexArrays");
		Load(glGenerateMipmap, load, "glGenerateMipmap");
		Load(glGetActiveAttrib, load, "glGetActiveAttrib");
		Load(glGetActiveUniform, load, "glGetActiveUniform");
		Load(glGetActiveUniformBlockName, load, "glGetActiveUniformBlockName");
		Load(glGetActiveUniformBlockiv, load, "glGetActiveUniformBlockiv");
		Load(glGetActiveUniformName, load, "glGetActiveUniformName");
		Load(glGetActiveUniformsiv, load, "glGetActiveUniformsiv");
		Load(glGetAttachedShaders, load, "glGetAttachedShaders");
		Load(glGetAttribLocation, load, "glGetAttribLocation");
		Load(glGetBooleani_v, load, "glGetBooleani_v");
		Load(glGetBooleanv, load, "glGetBooleanv");
		Load(glGetBufferParameteri64v, load, "glGetBufferParameteri64v");
		Load(glGetBufferParameteriv, load, "glGetBufferParameteriv");
		Load(glGetBufferPointerv, load, "glGetBufferPointerv");
		Load(glGetBufferSubData, load, "glGetBufferSubData");
		Load(glGetCompressedTexImage, load, "glGetCompressedTexImage");
		Load(glGetDoublev, load, "glGetDoublev");
		Load(glGetError, load, "glGetError");
		Load(glGetFloatv, load, "glGetFloatv");
		Load(glGetFragDataIndex, load, "glGetFragDataIndex");
		Load(glGetFragDataLocation, load, "glGetFragDataLocation");
		Load(glGetFramebufferAttachmentParameteriv, load, "glGetFramebufferAttachmentParameteriv");
		Load(glGetInteger64i_v, load, "glGetInteger64i_v");
		Load(glGetInteger64v, load, "glGetInteger64v");
		Load(glGetIntegeri_v, load, "glGetIntegeri_v");
		Load(glGetIntegerv, load, "glGetIntegerv");
		Load(glGetMultisamplefv, load, "glGetMultisamplefv");
		Load(glGetProgramInfoLog, load, "glGetProgramInfoLog");
		Load(glGetProgramiv, load, "glGetProgramiv");
		Load(glGetQueryObjecti64v, load, "glGetQueryObjecti64v");
		Load(glGetQueryObjectiv, load, "glGetQueryObjectiv");
		Load(glGetQueryObjectui64v, load, "glGetQueryObjectui64v");
		Load(glGetQueryObjectuiv, load, "glGetQueryObjectuiv");
		Load(glGetQueryiv, load, "glGetQueryiv");
		Load(glGetRenderbufferParameteriv, load, "glGetRenderbufferParameteriv");
		Load(glGetSamplerParameterIiv, load, "glGetSamplerParameterIiv");
		Load(glGetSamplerParameterIuiv, load, "glGetSamplerParameterIuiv");
		Load(glGetSamplerParameterfv, load, "glGetSamplerParameterfv");
		Load(glGetSamplerParameteriv, load, "glGetSamplerParameteriv");
		Load(glGetShaderInfoLog, load, "glGetShaderInfoLog");
		Load(glGetShaderSource, load, "glGetShaderSource");
		Load(glGetShaderiv, load, "glGetShaderiv");
		Load(glGetString, load, "glGetString");
		Load(glGetStringi, load, "glGetStringi");
		Load(glGetSynciv, load, "glGetSynciv");
		Load(glGetTexImage, load, "glGetTexImage");
		Load(glGetTexLevelParameterfv, load, "glGetTexLevelParameterfv");
		Load(glGetTexLevelParameteriv, load, "glGetTexLevelParameteriv");
		Load(glGetTexParameterIiv, load, "glGetTexParameterIiv");
		Load(glGetTexParameterIuiv, load, "glGetTexParameterIuiv");
		Load(glGetTexParameterfv, load, "glGetTexParameterfv");
		Load(glGetTexParameteriv, load, "glGetTexParameteriv");
		Load(glGetTransformFeedbackVarying, load, "glGetTransformFeedbackVarying");
		Load(glGetUniformBlockIndex, load, "glGetUniformBlockIndex");
		Load(glGetUniformIndices, load, "glGetUniformIndices");
		Load(glGetUniformLocation, load, "glGetUniformLocation");
		Load(glGetUniformfv, load, "glGetUniformfv");
		Load(glGetUniformiv, load, "glGetUniformiv");
		Load(glGetUniformuiv, load, "glGetUniformuiv");
		Load(glGetVertexAttribIiv, load, "glGetVertexAttribIiv");
		Load(glGetVertexAttribIuiv, load, "glGetVertexAttribIuiv");
		Load(glGetVertexAttribPointerv, load, "glGetVertexAttribPointerv");
		Load(glGetVertexAttribdv, load, "glGetVertexAttribdv");
		Load(glGetVertexAttribfv, load, "glGetVertexAttribfv");
		Load(glGetVertexAttribiv, load, "glGetVertexAttribiv");
		Load(glHint, load, "glHint");
		Load(glIsBuffer, load, "glIsBuffer");
		Load(glIsEnabled, load, "glIsEnabled");
		Load(glIsEnabledi, load, "glIsEnabledi");
		Load(glIsFramebuffer, load, "glIsFramebuffer");
		Load(glIsProgram, load, "glIsProgram");
		Load(glIsQuery, load, "glIsQuery");
		Load(glIsRenderbuffer, load, "glIsRenderbuffer");
		Load(glIsSampler, load, "glIsSampler");
		Load(glIsShader, load, "glIsShader");
		Load(glIsSync, load, "glIsSync");
		Load(glIsTexture, load, "glIsTexture");
		Load(glIsVertexArray, load, "glIsVertexArray");
		Load(glLineWidth, load, "glLineWidth");
		Load(glLinkProgram, load, "glLinkProgram");
		Load(glLogicOp, load, "glLogicOp");
		Load(glMapBuffer, load, "glMapBuffer");
		Load(glMapBufferRange, load, "glMapBufferRange");
		Load(glMultiDrawArrays, load, "glMultiDrawArrays");
		Load(glMultiDrawElements, load, "glMultiDrawElements");
		Load(glMultiDrawElementsBaseVertex, load, "glMultiDrawElementsBaseVertex");
		Load(glPixelStoref, load, "glPixelStoref");
		Load(glPixelStorei, load, "glPixelStorei");
		Load(glPointParameterf, load, "glPointParameterf");
		Load(glPointParameterfv, load, "glPointParameterfv");
		Load(glPointParameteri, load, "glPointParameteri");
		Load(glPointParameteriv, load, "glPointParameteriv");
		Load(glPointSize, load, "glPointSize");
		Load(glPolygonMode, load, "glPolygonMode");
		Load(glPolygonOffset, load, "glPolygonOffset");
		Load(glPrimitiveRestartIndex, load, "glPrimitiveRestartIndex");
		Load(glProvokingVertex, load, "glProvokingVertex");
		Load(glQueryCounter, load, "glQueryCounter");
		Load(glReadBuffer, load, "glReadBuffer");
		Load(glReadPixels, load, "glReadPixels");
		Load(glRenderbufferStorage, load, "glRenderbufferStorage");
		Load(glRenderbufferStorageMultisample, load, "glRenderbufferStorageMultisample");
		Load(glSampleCoverage, load, "glSampleCoverage");
		Load(glSampleMaski, load, "glSampleMaski");
		Load(glSamplerParameterIiv, load, "glSamplerParameterIiv");
		Load(glSamplerParameterIuiv, load, "glSamplerParameterIuiv");
		Load(glSamplerParameterf, load, "glSamplerParameterf");
		Load(glSamplerParameterfv, load, "glSamplerParameterfv");
		Load(glSamplerParameteri, load, "glSamplerParameteri");
		Load(glSamplerParameteriv, load, "glSamplerParameteriv");
		Load(glScissor, load, "glScissor");
		Load(glShaderSource, load, "glShaderSource");
		Load(glStencilFunc, load, "glStencilFunc");
		Load(glStencilFuncSeparate, load, "glStencilFuncSeparate");
		Load(glStencilMask, load, "glStencilMask");
		Load(glStencilMaskSeparate, load, "glStencilMaskSeparate");
		Load(glStencilOp, load, "glStencilOp");
		Load(glStencilOpSeparate, load, "glStencilOpSeparate");
		Load(glTexBuffer, load, "glTexBuffer");
		Load(glTexImage1D, load, "glTexImage1D");
		Load(glTexImage2D, load, "glTexImage2D");
		Load(glTexImage2DMultisample, load, "glTexImage2DMultisample");
		Load(glTexImage3D, load, "glTexImage3D");
		Load(glTexImage3DMultisample, load, "glTexImage3DMultisample");
		Load(glTexParameterIiv, load, "glTexParameterIiv");
		Load(glTexParameterIuiv, load, "glTexParameterIuiv");
		Load(glTexParameterf, load, "glTexParameterf");
		Load(glTexParameterfv, load, "glTexParameterfv");
		Load(glTexParameteri, load, "glTexParameteri");
		Load(glTexParameteriv, load, "glTexParameteriv");
		Load(glTexSubImage1D, load, "glTexSubImage1D");
		Load(glTexSubImage2D, load, "glTexSubImage2D");
		Load(glTexSubImage3D, load, "glTexSubImage3D");
		Load(glTransformFeedbackVaryings, load, "glTransformFeedbackVaryings");
		Load(glUniform1f, load, "glUniform1f");
		Load(glUniform1fv, load, "glUniform1fv");
		Load(glUniform1i, load, "glUniform1i");
		Load(glUniform1iv, load, "glUniform1iv");
		Load(glUniform1ui, load, "glUniform1ui");
		Load(glUniform1uiv, load, "glUniform1uiv");
		Load(glUniform2f, load, "glUniform2f");
		Load(glUniform2fv, load, "glUniform2fv");
		Load(glUniform2i, load, "glUniform2i");
		Load(glUniform2iv, load, "glUniform2iv");
		Load(glUniform2ui, load, "glUniform2ui");
		Load(glUniform2uiv, load, "glUniform2uiv");
		Load(glUniform3f, load, "glUniform3f");
		Load(glUniform3fv, load, "glUniform3fv");
		Load(glUniform3i, load, "glUniform3i");
		Load(glUniform3iv, load, "glUniform3iv");
		Load(glUniform3ui, load, "glUniform3ui");
		Load(glUniform3uiv, load, "glUniform3uiv");
		Load(glUniform4f, load, "glUniform4f");
		Load(glUniform4fv, load, "glUniform4fv");
		Load(glUniform4i, load, "glUniform4i");
		Load(glUniform4iv, load, "glUniform4iv");
		Load(glUniform4ui, load, "glUniform4ui");
		Load(glUniform4uiv, load, "glUniform4uiv");
		Load(glUniformBlockBinding, load, "glUniformBlockBinding");
		Load(glUniformMatrix2fv, load, "glUniformMatrix2fv");
		Load(glUniformMatrix2x3fv, load, "glUniformMatrix2x3fv");
		Load(glUniformMatrix2x4fv, load, "glUniformMatrix2x4fv");
		Load(glUniformMatrix3fv, load, "glUniformMatrix3fv");
		Load(glUniformMatrix3x2fv, load, "glUniformMatrix3x2fv");
		Load(glUniformMatrix3x4fv, load, "glUniformMatrix3x4fv");
		Load(glUniformMatrix4fv, load, "glUniformMatrix4fv");
		Load(glUniformMatrix4x2fv, load, "glUniformMatrix4x2fv");
		Load(glUniformMatrix4x3fv, load, "glUniformMatrix4x3fv");
		Load(glUnmapBuffer, load, "glUnmapBuffer");
		Load(glUseProgram, load, "glUseProgram");
		Load(glValidateProgram, load, "glValidateProgram");
		Load(glVertexAttrib1d, load, "glVertexAttrib1d");
		Load(glVertexAttrib1dv, load, "glVertexAttrib1dv");
		Load(glVertexAttrib1f, load, "glVertexAttrib1f");
		Load(glVertexAttrib1fv, load, "glVertexAttrib1fv");
		Load(glVertexAttrib1s, load, "glVertexAttrib1s");
		Load(glVertexAttrib1sv, load, "glVertexAttrib1sv");
		Load(glVertexAttrib2d, load, "glVertexAttrib2d");
		Load(glVertexAttrib2dv, load, "glVertexAttrib2dv");
		Load(glVertexAttrib2f, load, "glVertexAttrib2f");
		Load(glVertexAttrib2fv, load, "glVertexAttrib2fv");
		Load(glVertexAttrib2s, load, "glVertexAttrib2s");
		Load(glVertexAttrib2sv, load, "glVertexAttrib2sv");
		Load(glVertexAttrib3d, load, "glVertexAttrib3d");
		Load(glVertexAttrib3dv, load, "glVertexAttrib3dv");
		Load(glVertexAttrib3f, load, "glVertexAttrib3f");
		Load(glVertexAttrib3fv, load, "glVertexAttrib3fv");
		Load(glVertexAttrib3s, load, "glVertexAttrib3s");
		Load(glVertexAttrib3sv, load, "glVertexAttrib3sv");
		Load(glVertexAttrib4Nbv, load, "glVertexAttrib4Nbv");
		Load(glVertexAttrib4Niv, load, "glVertexAttrib4Niv");
		Load(glVertexAttrib4Nsv, load, "glVertexAttrib4Nsv");
		Load(glVertexAttrib4Nub, load, "glVertexAttrib4Nub");
		Load(glVertexAttrib4Nubv, load, "glVertexAttrib4Nubv");
		Load(glVertexAttrib4Nuiv, load, "glVertexAttrib4Nuiv");
		Load(glVertexAttrib4Nusv, load, "glVertexAttrib4Nusv");
		Load(glVertexAttrib4bv, load, "glVertexAttrib4bv");
		Load(glVertexAttrib4d, load, "glVertexAttrib4d");
		Load(glVertexAttrib4dv, load, "glVertexAttrib4dv");
		Load(glVertexAttrib4f, load, "glVertexAttrib4f");
		Load(glVertexAttrib4fv, load, "glVertexAttrib4fv");
		Load(glVertexAttrib4iv, load, "glVertexAttrib4iv");
		Load(glVertexAttrib4s, load, "glVertexAttrib4s");
		Load(glVertexAttrib4sv, load, "glVertexAttrib4sv");
		Load(glVertexAttrib4ubv, load, "glVertexAttrib4ubv");
		Load(glVertexAttrib4uiv, load, "glVertexAttrib4uiv");
		Load(glVertexAttrib4usv, load, "glVertexAttrib4usv");
		Load(glVertexAttribDivisor, load, "glVertexAttribDivisor");
		Load(glVertexAttribI1i, load, "glVertexAttribI1i");
		Load(glVertexAttribI1iv, load, "glVertexAttribI1iv");
		Load(glVertexAttribI1ui, load, "glVertexAttribI1ui");
		Load(glVertexAttribI1uiv, load, "glVertexAttribI1uiv");
		Load(glVertexAttribI2i, load, "glVertexAttribI2i");
		Load(glVertexAttribI2iv, load, "glVertexAttribI2iv");
		Load(glVertexAttribI2ui, load, "glVertexAttribI2ui");
		Load(glVertexAttribI2uiv, load, "glVertexAttribI2uiv");
		Load(glVertexAttribI3i, load, "glVertexAttribI3i");
		Load(glVertexAttribI3iv, load, "glVertexAttribI3iv");
		Load(glVertexAttribI3ui, load, "glVertexAttribI3ui");
		Load(glVertexAttribI3uiv, load, "glVertexAttribI3uiv");
		Load(glVertexAttribI4bv, load, "glVertexAttribI4bv");
		Load(glVertexAttribI4i, load, "glVertexAttribI4i");
		Load(glVertexAttribI4iv, load, "glVertexAttribI4iv");
		Load(glVertexAttribI4sv, load, "glVertexAttribI4sv");
		Load(glVertexAttribI4ubv, load, "glVertexAttribI4ubv");
		Load(glVertexAttribI4ui, load, "glVertexAttribI4ui");
		Load(glVertexAttribI4uiv, load, "glVertexAttribI4uiv");
		Load(glVertexAttribI4usv, load, "glVertexAttribI4usv");
		Load(glVertexAttribIPointer, load, "glVertexAttribIPointer");
		Load(glVertexAttribP1ui, load, "glVertexAttribP1ui");
		Load(glVertexAttribP1uiv, load, "glVertexAttribP1uiv");
		Load(glVertexAttribP2ui, load, "glVertexAttribP2ui");
		Load(glVertexAttribP2uiv, load, "glVertexAttribP2uiv");
		Load(glVertexAttribP3ui, load, "glVertexAttribP3ui");
		Load(glVertexAttribP3uiv, load, "glVertexAttribP3uiv");
		Load(glVertexAttribP4ui, load, "glVertexAttribP4ui");
		Load(glVertexAttribP4uiv, load, "glVertexAttribP4uiv");
		Load(glVertexAttribPointer, load, "glVertexAttribPointer");
		Load(glViewport, load, "glViewport");
		Load(glWaitSync, load, "glWaitSync");
		
		#ifdef GL_VERSION_3_0
			GLint count = 0;
			glGetIntegerv(GL_NUM_EXTENSIONS, &count);
			const GLubyte** exts = count > 0 ? new const GLubyte*[count] : nullptr;
			for (GLint i = 0; i < count; i++) exts[i] = glGetStringi(GL_EXTENSIONS, i);
		#else
			const GLint count = 0;
			const GLubyte* exts = glGetString(GL_EXTENSIONS);
		#endif
		
		#ifdef GL_3DFX_multisample
		ext_GL_3DFX_multisample = Check("GL_3DFX_multisample", exts, count);
		#endif // GL_3DFX_multisample
		#ifdef GL_3DFX_tbuffer
		ext_GL_3DFX_tbuffer = Check("GL_3DFX_tbuffer", exts, count);
		if (!LoadExt(glTbufferMask3DFX, load, "glTbufferMask3DFX")) ext_GL_3DFX_tbuffer = false;
		#endif // GL_3DFX_tbuffer
		#ifdef GL_3DFX_texture_compression_FXT1
		ext_GL_3DFX_texture_compression_FXT1 = Check("GL_3DFX_texture_compression_FXT1", exts, count);
		#endif // GL_3DFX_texture_compression_FXT1
		#ifdef GL_AMD_blend_minmax_factor
		ext_GL_AMD_blend_minmax_factor = Check("GL_AMD_blend_minmax_factor", exts, count);
		#endif // GL_AMD_blend_minmax_factor
		#ifdef GL_AMD_debug_output
		ext_GL_AMD_debug_output = Check("GL_AMD_debug_output", exts, count);
		if (!LoadExt(glDebugMessageCallbackAMD, load, "glDebugMessageCallbackAMD")) ext_GL_AMD_debug_output = false;
		if (!LoadExt(glDebugMessageEnableAMD, load, "glDebugMessageEnableAMD")) ext_GL_AMD_debug_output = false;
		if (!LoadExt(glDebugMessageInsertAMD, load, "glDebugMessageInsertAMD")) ext_GL_AMD_debug_output = false;
		if (!LoadExt(glGetDebugMessageLogAMD, load, "glGetDebugMessageLogAMD")) ext_GL_AMD_debug_output = false;
		#endif // GL_AMD_debug_output
		#ifdef GL_AMD_depth_clamp_separate
		ext_GL_AMD_depth_clamp_separate = Check("GL_AMD_depth_clamp_separate", exts, count);
		#endif // GL_AMD_depth_clamp_separate
		#ifdef GL_AMD_draw_buffers_blend
		ext_GL_AMD_draw_buffers_blend = Check("GL_AMD_draw_buffers_blend", exts, count);
		if (!LoadExt(glBlendEquationIndexedAMD, load, "glBlendEquationIndexedAMD")) ext_GL_AMD_draw_buffers_blend = false;
		if (!LoadExt(glBlendEquationSeparateIndexedAMD, load, "glBlendEquationSeparateIndexedAMD")) ext_GL_AMD_draw_buffers_blend = false;
		if (!LoadExt(glBlendFuncIndexedAMD, load, "glBlendFuncIndexedAMD")) ext_GL_AMD_draw_buffers_blend = false;
		if (!LoadExt(glBlendFuncSeparateIndexedAMD, load, "glBlendFuncSeparateIndexedAMD")) ext_GL_AMD_draw_buffers_blend = false;
		#endif // GL_AMD_draw_buffers_blend
		#ifdef GL_AMD_gpu_shader_int64
		ext_GL_AMD_gpu_shader_int64 = Check("GL_AMD_gpu_shader_int64", exts, count);
		if (!LoadExt(glGetUniformi64vNV, load, "glGetUniformi64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glGetUniformui64vNV, load, "glGetUniformui64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform1i64NV, load, "glProgramUniform1i64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform1i64vNV, load, "glProgramUniform1i64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform1ui64NV, load, "glProgramUniform1ui64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform1ui64vNV, load, "glProgramUniform1ui64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform2i64NV, load, "glProgramUniform2i64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform2i64vNV, load, "glProgramUniform2i64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform2ui64NV, load, "glProgramUniform2ui64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform2ui64vNV, load, "glProgramUniform2ui64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform3i64NV, load, "glProgramUniform3i64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform3i64vNV, load, "glProgramUniform3i64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform3ui64NV, load, "glProgramUniform3ui64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform3ui64vNV, load, "glProgramUniform3ui64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform4i64NV, load, "glProgramUniform4i64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform4i64vNV, load, "glProgramUniform4i64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform4ui64NV, load, "glProgramUniform4ui64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform4ui64vNV, load, "glProgramUniform4ui64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform1i64NV, load, "glUniform1i64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform1i64vNV, load, "glUniform1i64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform1ui64NV, load, "glUniform1ui64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform1ui64vNV, load, "glUniform1ui64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform2i64NV, load, "glUniform2i64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform2i64vNV, load, "glUniform2i64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform2ui64NV, load, "glUniform2ui64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform2ui64vNV, load, "glUniform2ui64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform3i64NV, load, "glUniform3i64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform3i64vNV, load, "glUniform3i64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform3ui64NV, load, "glUniform3ui64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform3ui64vNV, load, "glUniform3ui64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform4i64NV, load, "glUniform4i64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform4i64vNV, load, "glUniform4i64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform4ui64NV, load, "glUniform4ui64NV")) ext_GL_AMD_gpu_shader_int64 = false;
		if (!LoadExt(glUniform4ui64vNV, load, "glUniform4ui64vNV")) ext_GL_AMD_gpu_shader_int64 = false;
		#endif // GL_AMD_gpu_shader_int64
		#ifdef GL_AMD_interleaved_elements
		ext_GL_AMD_interleaved_elements = Check("GL_AMD_interleaved_elements", exts, count);
		if (!LoadExt(glVertexAttribParameteriAMD, load, "glVertexAttribParameteriAMD")) ext_GL_AMD_interleaved_elements = false;
		#endif // GL_AMD_interleaved_elements
		#ifdef GL_AMD_multi_draw_indirect
		ext_GL_AMD_multi_draw_indirect = Check("GL_AMD_multi_draw_indirect", exts, count);
		if (!LoadExt(glMultiDrawArraysIndirectAMD, load, "glMultiDrawArraysIndirectAMD")) ext_GL_AMD_multi_draw_indirect = false;
		if (!LoadExt(glMultiDrawElementsIndirectAMD, load, "glMultiDrawElementsIndirectAMD")) ext_GL_AMD_multi_draw_indirect = false;
		#endif // GL_AMD_multi_draw_indirect
		#ifdef GL_AMD_name_gen_delete
		ext_GL_AMD_name_gen_delete = Check("GL_AMD_name_gen_delete", exts, count);
		if (!LoadExt(glDeleteNamesAMD, load, "glDeleteNamesAMD")) ext_GL_AMD_name_gen_delete = false;
		if (!LoadExt(glGenNamesAMD, load, "glGenNamesAMD")) ext_GL_AMD_name_gen_delete = false;
		if (!LoadExt(glIsNameAMD, load, "glIsNameAMD")) ext_GL_AMD_name_gen_delete = false;
		#endif // GL_AMD_name_gen_delete
		#ifdef GL_AMD_occlusion_query_event
		ext_GL_AMD_occlusion_query_event = Check("GL_AMD_occlusion_query_event", exts, count);
		if (!LoadExt(glQueryObjectParameteruiAMD, load, "glQueryObjectParameteruiAMD")) ext_GL_AMD_occlusion_query_event = false;
		#endif // GL_AMD_occlusion_query_event
		#ifdef GL_AMD_performance_monitor
		ext_GL_AMD_performance_monitor = Check("GL_AMD_performance_monitor", exts, count);
		if (!LoadExt(glBeginPerfMonitorAMD, load, "glBeginPerfMonitorAMD")) ext_GL_AMD_performance_monitor = false;
		if (!LoadExt(glDeletePerfMonitorsAMD, load, "glDeletePerfMonitorsAMD")) ext_GL_AMD_performance_monitor = false;
		if (!LoadExt(glEndPerfMonitorAMD, load, "glEndPerfMonitorAMD")) ext_GL_AMD_performance_monitor = false;
		if (!LoadExt(glGenPerfMonitorsAMD, load, "glGenPerfMonitorsAMD")) ext_GL_AMD_performance_monitor = false;
		if (!LoadExt(glGetPerfMonitorCounterDataAMD, load, "glGetPerfMonitorCounterDataAMD")) ext_GL_AMD_performance_monitor = false;
		if (!LoadExt(glGetPerfMonitorCounterInfoAMD, load, "glGetPerfMonitorCounterInfoAMD")) ext_GL_AMD_performance_monitor = false;
		if (!LoadExt(glGetPerfMonitorCounterStringAMD, load, "glGetPerfMonitorCounterStringAMD")) ext_GL_AMD_performance_monitor = false;
		if (!LoadExt(glGetPerfMonitorCountersAMD, load, "glGetPerfMonitorCountersAMD")) ext_GL_AMD_performance_monitor = false;
		if (!LoadExt(glGetPerfMonitorGroupStringAMD, load, "glGetPerfMonitorGroupStringAMD")) ext_GL_AMD_performance_monitor = false;
		if (!LoadExt(glGetPerfMonitorGroupsAMD, load, "glGetPerfMonitorGroupsAMD")) ext_GL_AMD_performance_monitor = false;
		if (!LoadExt(glSelectPerfMonitorCountersAMD, load, "glSelectPerfMonitorCountersAMD")) ext_GL_AMD_performance_monitor = false;
		#endif // GL_AMD_performance_monitor
		#ifdef GL_AMD_pinned_memory
		ext_GL_AMD_pinned_memory = Check("GL_AMD_pinned_memory", exts, count);
		#endif // GL_AMD_pinned_memory
		#ifdef GL_AMD_query_buffer_object
		ext_GL_AMD_query_buffer_object = Check("GL_AMD_query_buffer_object", exts, count);
		#endif // GL_AMD_query_buffer_object
		#ifdef GL_AMD_sample_positions
		ext_GL_AMD_sample_positions = Check("GL_AMD_sample_positions", exts, count);
		if (!LoadExt(glSetMultisamplefvAMD, load, "glSetMultisamplefvAMD")) ext_GL_AMD_sample_positions = false;
		#endif // GL_AMD_sample_positions
		#ifdef GL_AMD_sparse_texture
		ext_GL_AMD_sparse_texture = Check("GL_AMD_sparse_texture", exts, count);
		if (!LoadExt(glTexStorageSparseAMD, load, "glTexStorageSparseAMD")) ext_GL_AMD_sparse_texture = false;
		if (!LoadExt(glTextureStorageSparseAMD, load, "glTextureStorageSparseAMD")) ext_GL_AMD_sparse_texture = false;
		#endif // GL_AMD_sparse_texture
		#ifdef GL_AMD_stencil_operation_extended
		ext_GL_AMD_stencil_operation_extended = Check("GL_AMD_stencil_operation_extended", exts, count);
		if (!LoadExt(glStencilOpValueAMD, load, "glStencilOpValueAMD")) ext_GL_AMD_stencil_operation_extended = false;
		#endif // GL_AMD_stencil_operation_extended
		#ifdef GL_AMD_transform_feedback4
		ext_GL_AMD_transform_feedback4 = Check("GL_AMD_transform_feedback4", exts, count);
		#endif // GL_AMD_transform_feedback4
		#ifdef GL_AMD_vertex_shader_tessellator
		ext_GL_AMD_vertex_shader_tessellator = Check("GL_AMD_vertex_shader_tessellator", exts, count);
		if (!LoadExt(glTessellationFactorAMD, load, "glTessellationFactorAMD")) ext_GL_AMD_vertex_shader_tessellator = false;
		if (!LoadExt(glTessellationModeAMD, load, "glTessellationModeAMD")) ext_GL_AMD_vertex_shader_tessellator = false;
		#endif // GL_AMD_vertex_shader_tessellator
		#ifdef GL_APPLE_aux_depth_stencil
		ext_GL_APPLE_aux_depth_stencil = Check("GL_APPLE_aux_depth_stencil", exts, count);
		#endif // GL_APPLE_aux_depth_stencil
		#ifdef GL_APPLE_client_storage
		ext_GL_APPLE_client_storage = Check("GL_APPLE_client_storage", exts, count);
		#endif // GL_APPLE_client_storage
		#ifdef GL_APPLE_element_array
		ext_GL_APPLE_element_array = Check("GL_APPLE_element_array", exts, count);
		if (!LoadExt(glDrawElementArrayAPPLE, load, "glDrawElementArrayAPPLE")) ext_GL_APPLE_element_array = false;
		if (!LoadExt(glDrawRangeElementArrayAPPLE, load, "glDrawRangeElementArrayAPPLE")) ext_GL_APPLE_element_array = false;
		if (!LoadExt(glElementPointerAPPLE, load, "glElementPointerAPPLE")) ext_GL_APPLE_element_array = false;
		if (!LoadExt(glMultiDrawElementArrayAPPLE, load, "glMultiDrawElementArrayAPPLE")) ext_GL_APPLE_element_array = false;
		if (!LoadExt(glMultiDrawRangeElementArrayAPPLE, load, "glMultiDrawRangeElementArrayAPPLE")) ext_GL_APPLE_element_array = false;
		#endif // GL_APPLE_element_array
		#ifdef GL_APPLE_fence
		ext_GL_APPLE_fence = Check("GL_APPLE_fence", exts, count);
		if (!LoadExt(glDeleteFencesAPPLE, load, "glDeleteFencesAPPLE")) ext_GL_APPLE_fence = false;
		if (!LoadExt(glFinishFenceAPPLE, load, "glFinishFenceAPPLE")) ext_GL_APPLE_fence = false;
		if (!LoadExt(glFinishObjectAPPLE, load, "glFinishObjectAPPLE")) ext_GL_APPLE_fence = false;
		if (!LoadExt(glGenFencesAPPLE, load, "glGenFencesAPPLE")) ext_GL_APPLE_fence = false;
		if (!LoadExt(glIsFenceAPPLE, load, "glIsFenceAPPLE")) ext_GL_APPLE_fence = false;
		if (!LoadExt(glSetFenceAPPLE, load, "glSetFenceAPPLE")) ext_GL_APPLE_fence = false;
		if (!LoadExt(glTestFenceAPPLE, load, "glTestFenceAPPLE")) ext_GL_APPLE_fence = false;
		if (!LoadExt(glTestObjectAPPLE, load, "glTestObjectAPPLE")) ext_GL_APPLE_fence = false;
		#endif // GL_APPLE_fence
		#ifdef GL_APPLE_float_pixels
		ext_GL_APPLE_float_pixels = Check("GL_APPLE_float_pixels", exts, count);
		#endif // GL_APPLE_float_pixels
		#ifdef GL_APPLE_flush_buffer_range
		ext_GL_APPLE_flush_buffer_range = Check("GL_APPLE_flush_buffer_range", exts, count);
		if (!LoadExt(glBufferParameteriAPPLE, load, "glBufferParameteriAPPLE")) ext_GL_APPLE_flush_buffer_range = false;
		if (!LoadExt(glFlushMappedBufferRangeAPPLE, load, "glFlushMappedBufferRangeAPPLE")) ext_GL_APPLE_flush_buffer_range = false;
		#endif // GL_APPLE_flush_buffer_range
		#ifdef GL_APPLE_object_purgeable
		ext_GL_APPLE_object_purgeable = Check("GL_APPLE_object_purgeable", exts, count);
		if (!LoadExt(glGetObjectParameterivAPPLE, load, "glGetObjectParameterivAPPLE")) ext_GL_APPLE_object_purgeable = false;
		if (!LoadExt(glObjectPurgeableAPPLE, load, "glObjectPurgeableAPPLE")) ext_GL_APPLE_object_purgeable = false;
		if (!LoadExt(glObjectUnpurgeableAPPLE, load, "glObjectUnpurgeableAPPLE")) ext_GL_APPLE_object_purgeable = false;
		#endif // GL_APPLE_object_purgeable
		#ifdef GL_APPLE_rgb_422
		ext_GL_APPLE_rgb_422 = Check("GL_APPLE_rgb_422", exts, count);
		#endif // GL_APPLE_rgb_422
		#ifdef GL_APPLE_row_bytes
		ext_GL_APPLE_row_bytes = Check("GL_APPLE_row_bytes", exts, count);
		#endif // GL_APPLE_row_bytes
		#ifdef GL_APPLE_specular_vector
		ext_GL_APPLE_specular_vector = Check("GL_APPLE_specular_vector", exts, count);
		#endif // GL_APPLE_specular_vector
		#ifdef GL_APPLE_texture_range
		ext_GL_APPLE_texture_range = Check("GL_APPLE_texture_range", exts, count);
		if (!LoadExt(glGetTexParameterPointervAPPLE, load, "glGetTexParameterPointervAPPLE")) ext_GL_APPLE_texture_range = false;
		if (!LoadExt(glTextureRangeAPPLE, load, "glTextureRangeAPPLE")) ext_GL_APPLE_texture_range = false;
		#endif // GL_APPLE_texture_range
		#ifdef GL_APPLE_transform_hint
		ext_GL_APPLE_transform_hint = Check("GL_APPLE_transform_hint", exts, count);
		#endif // GL_APPLE_transform_hint
		#ifdef GL_APPLE_vertex_array_object
		ext_GL_APPLE_vertex_array_object = Check("GL_APPLE_vertex_array_object", exts, count);
		if (!LoadExt(glBindVertexArrayAPPLE, load, "glBindVertexArrayAPPLE")) ext_GL_APPLE_vertex_array_object = false;
		if (!LoadExt(glDeleteVertexArraysAPPLE, load, "glDeleteVertexArraysAPPLE")) ext_GL_APPLE_vertex_array_object = false;
		if (!LoadExt(glGenVertexArraysAPPLE, load, "glGenVertexArraysAPPLE")) ext_GL_APPLE_vertex_array_object = false;
		if (!LoadExt(glIsVertexArrayAPPLE, load, "glIsVertexArrayAPPLE")) ext_GL_APPLE_vertex_array_object = false;
		#endif // GL_APPLE_vertex_array_object
		#ifdef GL_APPLE_vertex_array_range
		ext_GL_APPLE_vertex_array_range = Check("GL_APPLE_vertex_array_range", exts, count);
		if (!LoadExt(glFlushVertexArrayRangeAPPLE, load, "glFlushVertexArrayRangeAPPLE")) ext_GL_APPLE_vertex_array_range = false;
		if (!LoadExt(glVertexArrayParameteriAPPLE, load, "glVertexArrayParameteriAPPLE")) ext_GL_APPLE_vertex_array_range = false;
		if (!LoadExt(glVertexArrayRangeAPPLE, load, "glVertexArrayRangeAPPLE")) ext_GL_APPLE_vertex_array_range = false;
		#endif // GL_APPLE_vertex_array_range
		#ifdef GL_APPLE_vertex_program_evaluators
		ext_GL_APPLE_vertex_program_evaluators = Check("GL_APPLE_vertex_program_evaluators", exts, count);
		if (!LoadExt(glDisableVertexAttribAPPLE, load, "glDisableVertexAttribAPPLE")) ext_GL_APPLE_vertex_program_evaluators = false;
		if (!LoadExt(glEnableVertexAttribAPPLE, load, "glEnableVertexAttribAPPLE")) ext_GL_APPLE_vertex_program_evaluators = false;
		if (!LoadExt(glIsVertexAttribEnabledAPPLE, load, "glIsVertexAttribEnabledAPPLE")) ext_GL_APPLE_vertex_program_evaluators = false;
		if (!LoadExt(glMapVertexAttrib1dAPPLE, load, "glMapVertexAttrib1dAPPLE")) ext_GL_APPLE_vertex_program_evaluators = false;
		if (!LoadExt(glMapVertexAttrib1fAPPLE, load, "glMapVertexAttrib1fAPPLE")) ext_GL_APPLE_vertex_program_evaluators = false;
		if (!LoadExt(glMapVertexAttrib2dAPPLE, load, "glMapVertexAttrib2dAPPLE")) ext_GL_APPLE_vertex_program_evaluators = false;
		if (!LoadExt(glMapVertexAttrib2fAPPLE, load, "glMapVertexAttrib2fAPPLE")) ext_GL_APPLE_vertex_program_evaluators = false;
		#endif // GL_APPLE_vertex_program_evaluators
		#ifdef GL_APPLE_ycbcr_422
		ext_GL_APPLE_ycbcr_422 = Check("GL_APPLE_ycbcr_422", exts, count);
		#endif // GL_APPLE_ycbcr_422
		#ifdef GL_ARB_ES2_compatibility
		ext_GL_ARB_ES2_compatibility = Check("GL_ARB_ES2_compatibility", exts, count);
		if (!LoadExt(glClearDepthf, load, "glClearDepthf")) ext_GL_ARB_ES2_compatibility = false;
		if (!LoadExt(glDepthRangef, load, "glDepthRangef")) ext_GL_ARB_ES2_compatibility = false;
		if (!LoadExt(glGetShaderPrecisionFormat, load, "glGetShaderPrecisionFormat")) ext_GL_ARB_ES2_compatibility = false;
		if (!LoadExt(glReleaseShaderCompiler, load, "glReleaseShaderCompiler")) ext_GL_ARB_ES2_compatibility = false;
		if (!LoadExt(glShaderBinary, load, "glShaderBinary")) ext_GL_ARB_ES2_compatibility = false;
		#endif // GL_ARB_ES2_compatibility
		#ifdef GL_ARB_ES3_1_compatibility
		ext_GL_ARB_ES3_1_compatibility = Check("GL_ARB_ES3_1_compatibility", exts, count);
		if (!LoadExt(glMemoryBarrierByRegion, load, "glMemoryBarrierByRegion")) ext_GL_ARB_ES3_1_compatibility = false;
		#endif // GL_ARB_ES3_1_compatibility
		#ifdef GL_ARB_ES3_2_compatibility
		ext_GL_ARB_ES3_2_compatibility = Check("GL_ARB_ES3_2_compatibility", exts, count);
		if (!LoadExt(glPrimitiveBoundingBoxARB, load, "glPrimitiveBoundingBoxARB")) ext_GL_ARB_ES3_2_compatibility = false;
		#endif // GL_ARB_ES3_2_compatibility
		#ifdef GL_ARB_ES3_compatibility
		ext_GL_ARB_ES3_compatibility = Check("GL_ARB_ES3_compatibility", exts, count);
		#endif // GL_ARB_ES3_compatibility
		#ifdef GL_ARB_base_instance
		ext_GL_ARB_base_instance = Check("GL_ARB_base_instance", exts, count);
		if (!LoadExt(glDrawArraysInstancedBaseInstance, load, "glDrawArraysInstancedBaseInstance")) ext_GL_ARB_base_instance = false;
		if (!LoadExt(glDrawElementsInstancedBaseInstance, load, "glDrawElementsInstancedBaseInstance")) ext_GL_ARB_base_instance = false;
		if (!LoadExt(glDrawElementsInstancedBaseVertexBaseInstance, load, "glDrawElementsInstancedBaseVertexBaseInstance")) ext_GL_ARB_base_instance = false;
		#endif // GL_ARB_base_instance
		#ifdef GL_ARB_bindless_texture
		ext_GL_ARB_bindless_texture = Check("GL_ARB_bindless_texture", exts, count);
		if (!LoadExt(glGetImageHandleARB, load, "glGetImageHandleARB")) ext_GL_ARB_bindless_texture = false;
		if (!LoadExt(glGetTextureHandleARB, load, "glGetTextureHandleARB")) ext_GL_ARB_bindless_texture = false;
		if (!LoadExt(glGetTextureSamplerHandleARB, load, "glGetTextureSamplerHandleARB")) ext_GL_ARB_bindless_texture = false;
		if (!LoadExt(glGetVertexAttribLui64vARB, load, "glGetVertexAttribLui64vARB")) ext_GL_ARB_bindless_texture = false;
		if (!LoadExt(glIsImageHandleResidentARB, load, "glIsImageHandleResidentARB")) ext_GL_ARB_bindless_texture = false;
		if (!LoadExt(glIsTextureHandleResidentARB, load, "glIsTextureHandleResidentARB")) ext_GL_ARB_bindless_texture = false;
		if (!LoadExt(glMakeImageHandleNonResidentARB, load, "glMakeImageHandleNonResidentARB")) ext_GL_ARB_bindless_texture = false;
		if (!LoadExt(glMakeImageHandleResidentARB, load, "glMakeImageHandleResidentARB")) ext_GL_ARB_bindless_texture = false;
		if (!LoadExt(glMakeTextureHandleNonResidentARB, load, "glMakeTextureHandleNonResidentARB")) ext_GL_ARB_bindless_texture = false;
		if (!LoadExt(glMakeTextureHandleResidentARB, load, "glMakeTextureHandleResidentARB")) ext_GL_ARB_bindless_texture = false;
		if (!LoadExt(glProgramUniformHandleui64ARB, load, "glProgramUniformHandleui64ARB")) ext_GL_ARB_bindless_texture = false;
		if (!LoadExt(glProgramUniformHandleui64vARB, load, "glProgramUniformHandleui64vARB")) ext_GL_ARB_bindless_texture = false;
		if (!LoadExt(glUniformHandleui64ARB, load, "glUniformHandleui64ARB")) ext_GL_ARB_bindless_texture = false;
		if (!LoadExt(glUniformHandleui64vARB, load, "glUniformHandleui64vARB")) ext_GL_ARB_bindless_texture = false;
		if (!LoadExt(glVertexAttribL1ui64ARB, load, "glVertexAttribL1ui64ARB")) ext_GL_ARB_bindless_texture = false;
		if (!LoadExt(glVertexAttribL1ui64vARB, load, "glVertexAttribL1ui64vARB")) ext_GL_ARB_bindless_texture = false;
		#endif // GL_ARB_bindless_texture
		#ifdef GL_ARB_buffer_storage
		ext_GL_ARB_buffer_storage = Check("GL_ARB_buffer_storage", exts, count);
		if (!LoadExt(glBufferStorage, load, "glBufferStorage")) ext_GL_ARB_buffer_storage = false;
		#endif // GL_ARB_buffer_storage
		#ifdef GL_ARB_cl_event
		ext_GL_ARB_cl_event = Check("GL_ARB_cl_event", exts, count);
		if (!LoadExt(glCreateSyncFromCLeventARB, load, "glCreateSyncFromCLeventARB")) ext_GL_ARB_cl_event = false;
		#endif // GL_ARB_cl_event
		#ifdef GL_ARB_clear_buffer_object
		ext_GL_ARB_clear_buffer_object = Check("GL_ARB_clear_buffer_object", exts, count);
		if (!LoadExt(glClearBufferData, load, "glClearBufferData")) ext_GL_ARB_clear_buffer_object = false;
		if (!LoadExt(glClearBufferSubData, load, "glClearBufferSubData")) ext_GL_ARB_clear_buffer_object = false;
		#endif // GL_ARB_clear_buffer_object
		#ifdef GL_ARB_clear_texture
		ext_GL_ARB_clear_texture = Check("GL_ARB_clear_texture", exts, count);
		if (!LoadExt(glClearTexImage, load, "glClearTexImage")) ext_GL_ARB_clear_texture = false;
		if (!LoadExt(glClearTexSubImage, load, "glClearTexSubImage")) ext_GL_ARB_clear_texture = false;
		#endif // GL_ARB_clear_texture
		#ifdef GL_ARB_clip_control
		ext_GL_ARB_clip_control = Check("GL_ARB_clip_control", exts, count);
		if (!LoadExt(glClipControl, load, "glClipControl")) ext_GL_ARB_clip_control = false;
		#endif // GL_ARB_clip_control
		#ifdef GL_ARB_color_buffer_float
		ext_GL_ARB_color_buffer_float = Check("GL_ARB_color_buffer_float", exts, count);
		if (!LoadExt(glClampColorARB, load, "glClampColorARB")) ext_GL_ARB_color_buffer_float = false;
		#endif // GL_ARB_color_buffer_float
		#ifdef GL_ARB_compressed_texture_pixel_storage
		ext_GL_ARB_compressed_texture_pixel_storage = Check("GL_ARB_compressed_texture_pixel_storage", exts, count);
		#endif // GL_ARB_compressed_texture_pixel_storage
		#ifdef GL_ARB_compute_shader
		ext_GL_ARB_compute_shader = Check("GL_ARB_compute_shader", exts, count);
		if (!LoadExt(glDispatchCompute, load, "glDispatchCompute")) ext_GL_ARB_compute_shader = false;
		if (!LoadExt(glDispatchComputeIndirect, load, "glDispatchComputeIndirect")) ext_GL_ARB_compute_shader = false;
		#endif // GL_ARB_compute_shader
		#ifdef GL_ARB_compute_variable_group_size
		ext_GL_ARB_compute_variable_group_size = Check("GL_ARB_compute_variable_group_size", exts, count);
		if (!LoadExt(glDispatchComputeGroupSizeARB, load, "glDispatchComputeGroupSizeARB")) ext_GL_ARB_compute_variable_group_size = false;
		#endif // GL_ARB_compute_variable_group_size
		#ifdef GL_ARB_conditional_render_inverted
		ext_GL_ARB_conditional_render_inverted = Check("GL_ARB_conditional_render_inverted", exts, count);
		#endif // GL_ARB_conditional_render_inverted
		#ifdef GL_ARB_copy_image
		ext_GL_ARB_copy_image = Check("GL_ARB_copy_image", exts, count);
		if (!LoadExt(glCopyImageSubData, load, "glCopyImageSubData")) ext_GL_ARB_copy_image = false;
		#endif // GL_ARB_copy_image
		#ifdef GL_ARB_cull_distance
		ext_GL_ARB_cull_distance = Check("GL_ARB_cull_distance", exts, count);
		#endif // GL_ARB_cull_distance
		#ifdef GL_ARB_debug_output
		ext_GL_ARB_debug_output = Check("GL_ARB_debug_output", exts, count);
		if (!LoadExt(glDebugMessageCallbackARB, load, "glDebugMessageCallbackARB")) ext_GL_ARB_debug_output = false;
		if (!LoadExt(glDebugMessageControlARB, load, "glDebugMessageControlARB")) ext_GL_ARB_debug_output = false;
		if (!LoadExt(glDebugMessageInsertARB, load, "glDebugMessageInsertARB")) ext_GL_ARB_debug_output = false;
		if (!LoadExt(glGetDebugMessageLogARB, load, "glGetDebugMessageLogARB")) ext_GL_ARB_debug_output = false;
		#endif // GL_ARB_debug_output
		#ifdef GL_ARB_depth_texture
		ext_GL_ARB_depth_texture = Check("GL_ARB_depth_texture", exts, count);
		#endif // GL_ARB_depth_texture
		#ifdef GL_ARB_direct_state_access
		ext_GL_ARB_direct_state_access = Check("GL_ARB_direct_state_access", exts, count);
		if (!LoadExt(glBindTextureUnit, load, "glBindTextureUnit")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glBlitNamedFramebuffer, load, "glBlitNamedFramebuffer")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCheckNamedFramebufferStatus, load, "glCheckNamedFramebufferStatus")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glClearNamedBufferData, load, "glClearNamedBufferData")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glClearNamedBufferSubData, load, "glClearNamedBufferSubData")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glClearNamedFramebufferfi, load, "glClearNamedFramebufferfi")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glClearNamedFramebufferfv, load, "glClearNamedFramebufferfv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glClearNamedFramebufferiv, load, "glClearNamedFramebufferiv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glClearNamedFramebufferuiv, load, "glClearNamedFramebufferuiv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCompressedTextureSubImage1D, load, "glCompressedTextureSubImage1D")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCompressedTextureSubImage2D, load, "glCompressedTextureSubImage2D")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCompressedTextureSubImage3D, load, "glCompressedTextureSubImage3D")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCopyNamedBufferSubData, load, "glCopyNamedBufferSubData")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCopyTextureSubImage1D, load, "glCopyTextureSubImage1D")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCopyTextureSubImage2D, load, "glCopyTextureSubImage2D")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCopyTextureSubImage3D, load, "glCopyTextureSubImage3D")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCreateBuffers, load, "glCreateBuffers")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCreateFramebuffers, load, "glCreateFramebuffers")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCreateProgramPipelines, load, "glCreateProgramPipelines")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCreateQueries, load, "glCreateQueries")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCreateRenderbuffers, load, "glCreateRenderbuffers")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCreateSamplers, load, "glCreateSamplers")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCreateTextures, load, "glCreateTextures")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCreateTransformFeedbacks, load, "glCreateTransformFeedbacks")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glCreateVertexArrays, load, "glCreateVertexArrays")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glDisableVertexArrayAttrib, load, "glDisableVertexArrayAttrib")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glEnableVertexArrayAttrib, load, "glEnableVertexArrayAttrib")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glFlushMappedNamedBufferRange, load, "glFlushMappedNamedBufferRange")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGenerateTextureMipmap, load, "glGenerateTextureMipmap")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetCompressedTextureImage, load, "glGetCompressedTextureImage")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetNamedBufferParameteri64v, load, "glGetNamedBufferParameteri64v")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetNamedBufferParameteriv, load, "glGetNamedBufferParameteriv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetNamedBufferPointerv, load, "glGetNamedBufferPointerv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetNamedBufferSubData, load, "glGetNamedBufferSubData")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetNamedFramebufferAttachmentParameteriv, load, "glGetNamedFramebufferAttachmentParameteriv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetNamedFramebufferParameteriv, load, "glGetNamedFramebufferParameteriv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetNamedRenderbufferParameteriv, load, "glGetNamedRenderbufferParameteriv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetQueryBufferObjecti64v, load, "glGetQueryBufferObjecti64v")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetQueryBufferObjectiv, load, "glGetQueryBufferObjectiv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetQueryBufferObjectui64v, load, "glGetQueryBufferObjectui64v")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetQueryBufferObjectuiv, load, "glGetQueryBufferObjectuiv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetTextureImage, load, "glGetTextureImage")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetTextureLevelParameterfv, load, "glGetTextureLevelParameterfv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetTextureLevelParameteriv, load, "glGetTextureLevelParameteriv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetTextureParameterIiv, load, "glGetTextureParameterIiv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetTextureParameterIuiv, load, "glGetTextureParameterIuiv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetTextureParameterfv, load, "glGetTextureParameterfv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetTextureParameteriv, load, "glGetTextureParameteriv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetTransformFeedbacki64_v, load, "glGetTransformFeedbacki64_v")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetTransformFeedbacki_v, load, "glGetTransformFeedbacki_v")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetTransformFeedbackiv, load, "glGetTransformFeedbackiv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetVertexArrayIndexed64iv, load, "glGetVertexArrayIndexed64iv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetVertexArrayIndexediv, load, "glGetVertexArrayIndexediv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glGetVertexArrayiv, load, "glGetVertexArrayiv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glInvalidateNamedFramebufferData, load, "glInvalidateNamedFramebufferData")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glInvalidateNamedFramebufferSubData, load, "glInvalidateNamedFramebufferSubData")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glMapNamedBuffer, load, "glMapNamedBuffer")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glMapNamedBufferRange, load, "glMapNamedBufferRange")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glNamedBufferData, load, "glNamedBufferData")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glNamedBufferStorage, load, "glNamedBufferStorage")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glNamedBufferSubData, load, "glNamedBufferSubData")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glNamedFramebufferDrawBuffer, load, "glNamedFramebufferDrawBuffer")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glNamedFramebufferDrawBuffers, load, "glNamedFramebufferDrawBuffers")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glNamedFramebufferParameteri, load, "glNamedFramebufferParameteri")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glNamedFramebufferReadBuffer, load, "glNamedFramebufferReadBuffer")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glNamedFramebufferRenderbuffer, load, "glNamedFramebufferRenderbuffer")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glNamedFramebufferTexture, load, "glNamedFramebufferTexture")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glNamedFramebufferTextureLayer, load, "glNamedFramebufferTextureLayer")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glNamedRenderbufferStorage, load, "glNamedRenderbufferStorage")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glNamedRenderbufferStorageMultisample, load, "glNamedRenderbufferStorageMultisample")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureBuffer, load, "glTextureBuffer")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureBufferRange, load, "glTextureBufferRange")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureParameterIiv, load, "glTextureParameterIiv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureParameterIuiv, load, "glTextureParameterIuiv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureParameterf, load, "glTextureParameterf")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureParameterfv, load, "glTextureParameterfv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureParameteri, load, "glTextureParameteri")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureParameteriv, load, "glTextureParameteriv")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureStorage1D, load, "glTextureStorage1D")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureStorage2D, load, "glTextureStorage2D")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureStorage2DMultisample, load, "glTextureStorage2DMultisample")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureStorage3D, load, "glTextureStorage3D")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureStorage3DMultisample, load, "glTextureStorage3DMultisample")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureSubImage1D, load, "glTextureSubImage1D")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureSubImage2D, load, "glTextureSubImage2D")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTextureSubImage3D, load, "glTextureSubImage3D")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTransformFeedbackBufferBase, load, "glTransformFeedbackBufferBase")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glTransformFeedbackBufferRange, load, "glTransformFeedbackBufferRange")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glUnmapNamedBuffer, load, "glUnmapNamedBuffer")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glVertexArrayAttribBinding, load, "glVertexArrayAttribBinding")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glVertexArrayAttribFormat, load, "glVertexArrayAttribFormat")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glVertexArrayAttribIFormat, load, "glVertexArrayAttribIFormat")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glVertexArrayAttribLFormat, load, "glVertexArrayAttribLFormat")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glVertexArrayBindingDivisor, load, "glVertexArrayBindingDivisor")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glVertexArrayElementBuffer, load, "glVertexArrayElementBuffer")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glVertexArrayVertexBuffer, load, "glVertexArrayVertexBuffer")) ext_GL_ARB_direct_state_access = false;
		if (!LoadExt(glVertexArrayVertexBuffers, load, "glVertexArrayVertexBuffers")) ext_GL_ARB_direct_state_access = false;
		#endif // GL_ARB_direct_state_access
		#ifdef GL_ARB_draw_buffers
		ext_GL_ARB_draw_buffers = Check("GL_ARB_draw_buffers", exts, count);
		if (!LoadExt(glDrawBuffersARB, load, "glDrawBuffersARB")) ext_GL_ARB_draw_buffers = false;
		#endif // GL_ARB_draw_buffers
		#ifdef GL_ARB_draw_buffers_blend
		ext_GL_ARB_draw_buffers_blend = Check("GL_ARB_draw_buffers_blend", exts, count);
		if (!LoadExt(glBlendEquationSeparateiARB, load, "glBlendEquationSeparateiARB")) ext_GL_ARB_draw_buffers_blend = false;
		if (!LoadExt(glBlendEquationiARB, load, "glBlendEquationiARB")) ext_GL_ARB_draw_buffers_blend = false;
		if (!LoadExt(glBlendFuncSeparateiARB, load, "glBlendFuncSeparateiARB")) ext_GL_ARB_draw_buffers_blend = false;
		if (!LoadExt(glBlendFunciARB, load, "glBlendFunciARB")) ext_GL_ARB_draw_buffers_blend = false;
		#endif // GL_ARB_draw_buffers_blend
		#ifdef GL_ARB_draw_indirect
		ext_GL_ARB_draw_indirect = Check("GL_ARB_draw_indirect", exts, count);
		if (!LoadExt(glDrawArraysIndirect, load, "glDrawArraysIndirect")) ext_GL_ARB_draw_indirect = false;
		if (!LoadExt(glDrawElementsIndirect, load, "glDrawElementsIndirect")) ext_GL_ARB_draw_indirect = false;
		#endif // GL_ARB_draw_indirect
		#ifdef GL_ARB_draw_instanced
		ext_GL_ARB_draw_instanced = Check("GL_ARB_draw_instanced", exts, count);
		if (!LoadExt(glDrawArraysInstancedARB, load, "glDrawArraysInstancedARB")) ext_GL_ARB_draw_instanced = false;
		if (!LoadExt(glDrawElementsInstancedARB, load, "glDrawElementsInstancedARB")) ext_GL_ARB_draw_instanced = false;
		#endif // GL_ARB_draw_instanced
		#ifdef GL_ARB_enhanced_layouts
		ext_GL_ARB_enhanced_layouts = Check("GL_ARB_enhanced_layouts", exts, count);
		#endif // GL_ARB_enhanced_layouts
		#ifdef GL_ARB_explicit_uniform_location
		ext_GL_ARB_explicit_uniform_location = Check("GL_ARB_explicit_uniform_location", exts, count);
		#endif // GL_ARB_explicit_uniform_location
		#ifdef GL_ARB_fragment_program
		ext_GL_ARB_fragment_program = Check("GL_ARB_fragment_program", exts, count);
		if (!LoadExt(glBindProgramARB, load, "glBindProgramARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glDeleteProgramsARB, load, "glDeleteProgramsARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glGenProgramsARB, load, "glGenProgramsARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glGetProgramEnvParameterdvARB, load, "glGetProgramEnvParameterdvARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glGetProgramEnvParameterfvARB, load, "glGetProgramEnvParameterfvARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glGetProgramLocalParameterdvARB, load, "glGetProgramLocalParameterdvARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glGetProgramLocalParameterfvARB, load, "glGetProgramLocalParameterfvARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glGetProgramStringARB, load, "glGetProgramStringARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glGetProgramivARB, load, "glGetProgramivARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glIsProgramARB, load, "glIsProgramARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glProgramEnvParameter4dARB, load, "glProgramEnvParameter4dARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glProgramEnvParameter4dvARB, load, "glProgramEnvParameter4dvARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glProgramEnvParameter4fARB, load, "glProgramEnvParameter4fARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glProgramEnvParameter4fvARB, load, "glProgramEnvParameter4fvARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glProgramLocalParameter4dARB, load, "glProgramLocalParameter4dARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glProgramLocalParameter4dvARB, load, "glProgramLocalParameter4dvARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glProgramLocalParameter4fARB, load, "glProgramLocalParameter4fARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glProgramLocalParameter4fvARB, load, "glProgramLocalParameter4fvARB")) ext_GL_ARB_fragment_program = false;
		if (!LoadExt(glProgramStringARB, load, "glProgramStringARB")) ext_GL_ARB_fragment_program = false;
		#endif // GL_ARB_fragment_program
		#ifdef GL_ARB_fragment_shader
		ext_GL_ARB_fragment_shader = Check("GL_ARB_fragment_shader", exts, count);
		#endif // GL_ARB_fragment_shader
		#ifdef GL_ARB_framebuffer_no_attachments
		ext_GL_ARB_framebuffer_no_attachments = Check("GL_ARB_framebuffer_no_attachments", exts, count);
		if (!LoadExt(glFramebufferParameteri, load, "glFramebufferParameteri")) ext_GL_ARB_framebuffer_no_attachments = false;
		if (!LoadExt(glGetFramebufferParameteriv, load, "glGetFramebufferParameteriv")) ext_GL_ARB_framebuffer_no_attachments = false;
		#endif // GL_ARB_framebuffer_no_attachments
		#ifdef GL_ARB_framebuffer_object
		ext_GL_ARB_framebuffer_object = Check("GL_ARB_framebuffer_object", exts, count);
		#endif // GL_ARB_framebuffer_object
		#ifdef GL_ARB_geometry_shader4
		ext_GL_ARB_geometry_shader4 = Check("GL_ARB_geometry_shader4", exts, count);
		if (!LoadExt(glFramebufferTextureARB, load, "glFramebufferTextureARB")) ext_GL_ARB_geometry_shader4 = false;
		if (!LoadExt(glFramebufferTextureFaceARB, load, "glFramebufferTextureFaceARB")) ext_GL_ARB_geometry_shader4 = false;
		if (!LoadExt(glFramebufferTextureLayerARB, load, "glFramebufferTextureLayerARB")) ext_GL_ARB_geometry_shader4 = false;
		if (!LoadExt(glProgramParameteriARB, load, "glProgramParameteriARB")) ext_GL_ARB_geometry_shader4 = false;
		#endif // GL_ARB_geometry_shader4
		#ifdef GL_ARB_get_program_binary
		ext_GL_ARB_get_program_binary = Check("GL_ARB_get_program_binary", exts, count);
		if (!LoadExt(glGetProgramBinary, load, "glGetProgramBinary")) ext_GL_ARB_get_program_binary = false;
		if (!LoadExt(glProgramBinary, load, "glProgramBinary")) ext_GL_ARB_get_program_binary = false;
		if (!LoadExt(glProgramParameteri, load, "glProgramParameteri")) ext_GL_ARB_get_program_binary = false;
		#endif // GL_ARB_get_program_binary
		#ifdef GL_ARB_get_texture_sub_image
		ext_GL_ARB_get_texture_sub_image = Check("GL_ARB_get_texture_sub_image", exts, count);
		if (!LoadExt(glGetCompressedTextureSubImage, load, "glGetCompressedTextureSubImage")) ext_GL_ARB_get_texture_sub_image = false;
		if (!LoadExt(glGetTextureSubImage, load, "glGetTextureSubImage")) ext_GL_ARB_get_texture_sub_image = false;
		#endif // GL_ARB_get_texture_sub_image
		#ifdef GL_ARB_gpu_shader5
		ext_GL_ARB_gpu_shader5 = Check("GL_ARB_gpu_shader5", exts, count);
		#endif // GL_ARB_gpu_shader5
		#ifdef GL_ARB_gpu_shader_fp64
		ext_GL_ARB_gpu_shader_fp64 = Check("GL_ARB_gpu_shader_fp64", exts, count);
		if (!LoadExt(glGetUniformdv, load, "glGetUniformdv")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniform1d, load, "glUniform1d")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniform1dv, load, "glUniform1dv")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniform2d, load, "glUniform2d")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniform2dv, load, "glUniform2dv")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniform3d, load, "glUniform3d")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniform3dv, load, "glUniform3dv")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniform4d, load, "glUniform4d")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniform4dv, load, "glUniform4dv")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniformMatrix2dv, load, "glUniformMatrix2dv")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniformMatrix2x3dv, load, "glUniformMatrix2x3dv")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniformMatrix2x4dv, load, "glUniformMatrix2x4dv")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniformMatrix3dv, load, "glUniformMatrix3dv")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniformMatrix3x2dv, load, "glUniformMatrix3x2dv")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniformMatrix3x4dv, load, "glUniformMatrix3x4dv")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniformMatrix4dv, load, "glUniformMatrix4dv")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniformMatrix4x2dv, load, "glUniformMatrix4x2dv")) ext_GL_ARB_gpu_shader_fp64 = false;
		if (!LoadExt(glUniformMatrix4x3dv, load, "glUniformMatrix4x3dv")) ext_GL_ARB_gpu_shader_fp64 = false;
		#endif // GL_ARB_gpu_shader_fp64
		#ifdef GL_ARB_gpu_shader_int64
		ext_GL_ARB_gpu_shader_int64 = Check("GL_ARB_gpu_shader_int64", exts, count);
		if (!LoadExt(glGetUniformi64vARB, load, "glGetUniformi64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glGetUniformui64vARB, load, "glGetUniformui64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glGetnUniformi64vARB, load, "glGetnUniformi64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glGetnUniformui64vARB, load, "glGetnUniformui64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform1i64ARB, load, "glProgramUniform1i64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform1i64vARB, load, "glProgramUniform1i64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform1ui64ARB, load, "glProgramUniform1ui64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform1ui64vARB, load, "glProgramUniform1ui64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform2i64ARB, load, "glProgramUniform2i64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform2i64vARB, load, "glProgramUniform2i64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform2ui64ARB, load, "glProgramUniform2ui64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform2ui64vARB, load, "glProgramUniform2ui64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform3i64ARB, load, "glProgramUniform3i64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform3i64vARB, load, "glProgramUniform3i64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform3ui64ARB, load, "glProgramUniform3ui64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform3ui64vARB, load, "glProgramUniform3ui64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform4i64ARB, load, "glProgramUniform4i64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform4i64vARB, load, "glProgramUniform4i64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform4ui64ARB, load, "glProgramUniform4ui64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glProgramUniform4ui64vARB, load, "glProgramUniform4ui64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform1i64ARB, load, "glUniform1i64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform1i64vARB, load, "glUniform1i64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform1ui64ARB, load, "glUniform1ui64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform1ui64vARB, load, "glUniform1ui64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform2i64ARB, load, "glUniform2i64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform2i64vARB, load, "glUniform2i64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform2ui64ARB, load, "glUniform2ui64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform2ui64vARB, load, "glUniform2ui64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform3i64ARB, load, "glUniform3i64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform3i64vARB, load, "glUniform3i64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform3ui64ARB, load, "glUniform3ui64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform3ui64vARB, load, "glUniform3ui64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform4i64ARB, load, "glUniform4i64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform4i64vARB, load, "glUniform4i64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform4ui64ARB, load, "glUniform4ui64ARB")) ext_GL_ARB_gpu_shader_int64 = false;
		if (!LoadExt(glUniform4ui64vARB, load, "glUniform4ui64vARB")) ext_GL_ARB_gpu_shader_int64 = false;
		#endif // GL_ARB_gpu_shader_int64
		#ifdef GL_ARB_half_float_pixel
		ext_GL_ARB_half_float_pixel = Check("GL_ARB_half_float_pixel", exts, count);
		#endif // GL_ARB_half_float_pixel
		#ifdef GL_ARB_imaging
		ext_GL_ARB_imaging = Check("GL_ARB_imaging", exts, count);
		if (!LoadExt(glColorSubTable, load, "glColorSubTable")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glColorTable, load, "glColorTable")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glColorTableParameterfv, load, "glColorTableParameterfv")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glColorTableParameteriv, load, "glColorTableParameteriv")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glConvolutionFilter1D, load, "glConvolutionFilter1D")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glConvolutionFilter2D, load, "glConvolutionFilter2D")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glConvolutionParameterf, load, "glConvolutionParameterf")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glConvolutionParameterfv, load, "glConvolutionParameterfv")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glConvolutionParameteri, load, "glConvolutionParameteri")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glConvolutionParameteriv, load, "glConvolutionParameteriv")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glCopyColorSubTable, load, "glCopyColorSubTable")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glCopyColorTable, load, "glCopyColorTable")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glCopyConvolutionFilter1D, load, "glCopyConvolutionFilter1D")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glCopyConvolutionFilter2D, load, "glCopyConvolutionFilter2D")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glGetColorTable, load, "glGetColorTable")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glGetColorTableParameterfv, load, "glGetColorTableParameterfv")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glGetColorTableParameteriv, load, "glGetColorTableParameteriv")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glGetConvolutionFilter, load, "glGetConvolutionFilter")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glGetConvolutionParameterfv, load, "glGetConvolutionParameterfv")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glGetConvolutionParameteriv, load, "glGetConvolutionParameteriv")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glGetHistogram, load, "glGetHistogram")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glGetHistogramParameterfv, load, "glGetHistogramParameterfv")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glGetHistogramParameteriv, load, "glGetHistogramParameteriv")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glGetMinmax, load, "glGetMinmax")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glGetMinmaxParameterfv, load, "glGetMinmaxParameterfv")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glGetMinmaxParameteriv, load, "glGetMinmaxParameteriv")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glGetSeparableFilter, load, "glGetSeparableFilter")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glHistogram, load, "glHistogram")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glMinmax, load, "glMinmax")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glResetHistogram, load, "glResetHistogram")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glResetMinmax, load, "glResetMinmax")) ext_GL_ARB_imaging = false;
		if (!LoadExt(glSeparableFilter2D, load, "glSeparableFilter2D")) ext_GL_ARB_imaging = false;
		#endif // GL_ARB_imaging
		#ifdef GL_ARB_indirect_parameters
		ext_GL_ARB_indirect_parameters = Check("GL_ARB_indirect_parameters", exts, count);
		if (!LoadExt(glMultiDrawArraysIndirectCountARB, load, "glMultiDrawArraysIndirectCountARB")) ext_GL_ARB_indirect_parameters = false;
		if (!LoadExt(glMultiDrawElementsIndirectCountARB, load, "glMultiDrawElementsIndirectCountARB")) ext_GL_ARB_indirect_parameters = false;
		#endif // GL_ARB_indirect_parameters
		#ifdef GL_ARB_instanced_arrays
		ext_GL_ARB_instanced_arrays = Check("GL_ARB_instanced_arrays", exts, count);
		if (!LoadExt(glVertexAttribDivisorARB, load, "glVertexAttribDivisorARB")) ext_GL_ARB_instanced_arrays = false;
		#endif // GL_ARB_instanced_arrays
		#ifdef GL_ARB_internalformat_query
		ext_GL_ARB_internalformat_query = Check("GL_ARB_internalformat_query", exts, count);
		if (!LoadExt(glGetInternalformativ, load, "glGetInternalformativ")) ext_GL_ARB_internalformat_query = false;
		#endif // GL_ARB_internalformat_query
		#ifdef GL_ARB_internalformat_query2
		ext_GL_ARB_internalformat_query2 = Check("GL_ARB_internalformat_query2", exts, count);
		if (!LoadExt(glGetInternalformati64v, load, "glGetInternalformati64v")) ext_GL_ARB_internalformat_query2 = false;
		#endif // GL_ARB_internalformat_query2
		#ifdef GL_ARB_invalidate_subdata
		ext_GL_ARB_invalidate_subdata = Check("GL_ARB_invalidate_subdata", exts, count);
		if (!LoadExt(glInvalidateBufferData, load, "glInvalidateBufferData")) ext_GL_ARB_invalidate_subdata = false;
		if (!LoadExt(glInvalidateBufferSubData, load, "glInvalidateBufferSubData")) ext_GL_ARB_invalidate_subdata = false;
		if (!LoadExt(glInvalidateFramebuffer, load, "glInvalidateFramebuffer")) ext_GL_ARB_invalidate_subdata = false;
		if (!LoadExt(glInvalidateSubFramebuffer, load, "glInvalidateSubFramebuffer")) ext_GL_ARB_invalidate_subdata = false;
		if (!LoadExt(glInvalidateTexImage, load, "glInvalidateTexImage")) ext_GL_ARB_invalidate_subdata = false;
		if (!LoadExt(glInvalidateTexSubImage, load, "glInvalidateTexSubImage")) ext_GL_ARB_invalidate_subdata = false;
		#endif // GL_ARB_invalidate_subdata
		#ifdef GL_ARB_map_buffer_alignment
		ext_GL_ARB_map_buffer_alignment = Check("GL_ARB_map_buffer_alignment", exts, count);
		#endif // GL_ARB_map_buffer_alignment
		#ifdef GL_ARB_matrix_palette
		ext_GL_ARB_matrix_palette = Check("GL_ARB_matrix_palette", exts, count);
		if (!LoadExt(glCurrentPaletteMatrixARB, load, "glCurrentPaletteMatrixARB")) ext_GL_ARB_matrix_palette = false;
		if (!LoadExt(glMatrixIndexPointerARB, load, "glMatrixIndexPointerARB")) ext_GL_ARB_matrix_palette = false;
		if (!LoadExt(glMatrixIndexubvARB, load, "glMatrixIndexubvARB")) ext_GL_ARB_matrix_palette = false;
		if (!LoadExt(glMatrixIndexuivARB, load, "glMatrixIndexuivARB")) ext_GL_ARB_matrix_palette = false;
		if (!LoadExt(glMatrixIndexusvARB, load, "glMatrixIndexusvARB")) ext_GL_ARB_matrix_palette = false;
		#endif // GL_ARB_matrix_palette
		#ifdef GL_ARB_multi_bind
		ext_GL_ARB_multi_bind = Check("GL_ARB_multi_bind", exts, count);
		if (!LoadExt(glBindBuffersBase, load, "glBindBuffersBase")) ext_GL_ARB_multi_bind = false;
		if (!LoadExt(glBindBuffersRange, load, "glBindBuffersRange")) ext_GL_ARB_multi_bind = false;
		if (!LoadExt(glBindImageTextures, load, "glBindImageTextures")) ext_GL_ARB_multi_bind = false;
		if (!LoadExt(glBindSamplers, load, "glBindSamplers")) ext_GL_ARB_multi_bind = false;
		if (!LoadExt(glBindTextures, load, "glBindTextures")) ext_GL_ARB_multi_bind = false;
		if (!LoadExt(glBindVertexBuffers, load, "glBindVertexBuffers")) ext_GL_ARB_multi_bind = false;
		#endif // GL_ARB_multi_bind
		#ifdef GL_ARB_multi_draw_indirect
		ext_GL_ARB_multi_draw_indirect = Check("GL_ARB_multi_draw_indirect", exts, count);
		if (!LoadExt(glMultiDrawArraysIndirect, load, "glMultiDrawArraysIndirect")) ext_GL_ARB_multi_draw_indirect = false;
		if (!LoadExt(glMultiDrawElementsIndirect, load, "glMultiDrawElementsIndirect")) ext_GL_ARB_multi_draw_indirect = false;
		#endif // GL_ARB_multi_draw_indirect
		#ifdef GL_ARB_multisample
		ext_GL_ARB_multisample = Check("GL_ARB_multisample", exts, count);
		if (!LoadExt(glSampleCoverageARB, load, "glSampleCoverageARB")) ext_GL_ARB_multisample = false;
		#endif // GL_ARB_multisample
		#ifdef GL_ARB_multitexture
		ext_GL_ARB_multitexture = Check("GL_ARB_multitexture", exts, count);
		if (!LoadExt(glActiveTextureARB, load, "glActiveTextureARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glClientActiveTextureARB, load, "glClientActiveTextureARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord1dARB, load, "glMultiTexCoord1dARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord1dvARB, load, "glMultiTexCoord1dvARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord1fARB, load, "glMultiTexCoord1fARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord1fvARB, load, "glMultiTexCoord1fvARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord1iARB, load, "glMultiTexCoord1iARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord1ivARB, load, "glMultiTexCoord1ivARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord1sARB, load, "glMultiTexCoord1sARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord1svARB, load, "glMultiTexCoord1svARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord2dARB, load, "glMultiTexCoord2dARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord2dvARB, load, "glMultiTexCoord2dvARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord2fARB, load, "glMultiTexCoord2fARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord2fvARB, load, "glMultiTexCoord2fvARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord2iARB, load, "glMultiTexCoord2iARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord2ivARB, load, "glMultiTexCoord2ivARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord2sARB, load, "glMultiTexCoord2sARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord2svARB, load, "glMultiTexCoord2svARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord3dARB, load, "glMultiTexCoord3dARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord3dvARB, load, "glMultiTexCoord3dvARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord3fARB, load, "glMultiTexCoord3fARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord3fvARB, load, "glMultiTexCoord3fvARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord3iARB, load, "glMultiTexCoord3iARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord3ivARB, load, "glMultiTexCoord3ivARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord3sARB, load, "glMultiTexCoord3sARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord3svARB, load, "glMultiTexCoord3svARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord4dARB, load, "glMultiTexCoord4dARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord4dvARB, load, "glMultiTexCoord4dvARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord4fARB, load, "glMultiTexCoord4fARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord4fvARB, load, "glMultiTexCoord4fvARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord4iARB, load, "glMultiTexCoord4iARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord4ivARB, load, "glMultiTexCoord4ivARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord4sARB, load, "glMultiTexCoord4sARB")) ext_GL_ARB_multitexture = false;
		if (!LoadExt(glMultiTexCoord4svARB, load, "glMultiTexCoord4svARB")) ext_GL_ARB_multitexture = false;
		#endif // GL_ARB_multitexture
		#ifdef GL_ARB_occlusion_query
		ext_GL_ARB_occlusion_query = Check("GL_ARB_occlusion_query", exts, count);
		if (!LoadExt(glBeginQueryARB, load, "glBeginQueryARB")) ext_GL_ARB_occlusion_query = false;
		if (!LoadExt(glDeleteQueriesARB, load, "glDeleteQueriesARB")) ext_GL_ARB_occlusion_query = false;
		if (!LoadExt(glEndQueryARB, load, "glEndQueryARB")) ext_GL_ARB_occlusion_query = false;
		if (!LoadExt(glGenQueriesARB, load, "glGenQueriesARB")) ext_GL_ARB_occlusion_query = false;
		if (!LoadExt(glGetQueryObjectivARB, load, "glGetQueryObjectivARB")) ext_GL_ARB_occlusion_query = false;
		if (!LoadExt(glGetQueryObjectuivARB, load, "glGetQueryObjectuivARB")) ext_GL_ARB_occlusion_query = false;
		if (!LoadExt(glGetQueryivARB, load, "glGetQueryivARB")) ext_GL_ARB_occlusion_query = false;
		if (!LoadExt(glIsQueryARB, load, "glIsQueryARB")) ext_GL_ARB_occlusion_query = false;
		#endif // GL_ARB_occlusion_query
		#ifdef GL_ARB_parallel_shader_compile
		ext_GL_ARB_parallel_shader_compile = Check("GL_ARB_parallel_shader_compile", exts, count);
		if (!LoadExt(glMaxShaderCompilerThreadsARB, load, "glMaxShaderCompilerThreadsARB")) ext_GL_ARB_parallel_shader_compile = false;
		#endif // GL_ARB_parallel_shader_compile
		#ifdef GL_ARB_pipeline_statistics_query
		ext_GL_ARB_pipeline_statistics_query = Check("GL_ARB_pipeline_statistics_query", exts, count);
		#endif // GL_ARB_pipeline_statistics_query
		#ifdef GL_ARB_pixel_buffer_object
		ext_GL_ARB_pixel_buffer_object = Check("GL_ARB_pixel_buffer_object", exts, count);
		#endif // GL_ARB_pixel_buffer_object
		#ifdef GL_ARB_point_parameters
		ext_GL_ARB_point_parameters = Check("GL_ARB_point_parameters", exts, count);
		if (!LoadExt(glPointParameterfARB, load, "glPointParameterfARB")) ext_GL_ARB_point_parameters = false;
		if (!LoadExt(glPointParameterfvARB, load, "glPointParameterfvARB")) ext_GL_ARB_point_parameters = false;
		#endif // GL_ARB_point_parameters
		#ifdef GL_ARB_point_sprite
		ext_GL_ARB_point_sprite = Check("GL_ARB_point_sprite", exts, count);
		#endif // GL_ARB_point_sprite
		#ifdef GL_ARB_program_interface_query
		ext_GL_ARB_program_interface_query = Check("GL_ARB_program_interface_query", exts, count);
		if (!LoadExt(glGetProgramInterfaceiv, load, "glGetProgramInterfaceiv")) ext_GL_ARB_program_interface_query = false;
		if (!LoadExt(glGetProgramResourceIndex, load, "glGetProgramResourceIndex")) ext_GL_ARB_program_interface_query = false;
		if (!LoadExt(glGetProgramResourceLocation, load, "glGetProgramResourceLocation")) ext_GL_ARB_program_interface_query = false;
		if (!LoadExt(glGetProgramResourceLocationIndex, load, "glGetProgramResourceLocationIndex")) ext_GL_ARB_program_interface_query = false;
		if (!LoadExt(glGetProgramResourceName, load, "glGetProgramResourceName")) ext_GL_ARB_program_interface_query = false;
		if (!LoadExt(glGetProgramResourceiv, load, "glGetProgramResourceiv")) ext_GL_ARB_program_interface_query = false;
		#endif // GL_ARB_program_interface_query
		#ifdef GL_ARB_query_buffer_object
		ext_GL_ARB_query_buffer_object = Check("GL_ARB_query_buffer_object", exts, count);
		#endif // GL_ARB_query_buffer_object
		#ifdef GL_ARB_robustness
		ext_GL_ARB_robustness = Check("GL_ARB_robustness", exts, count);
		if (!LoadExt(glGetGraphicsResetStatusARB, load, "glGetGraphicsResetStatusARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnColorTableARB, load, "glGetnColorTableARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnCompressedTexImageARB, load, "glGetnCompressedTexImageARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnConvolutionFilterARB, load, "glGetnConvolutionFilterARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnHistogramARB, load, "glGetnHistogramARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnMapdvARB, load, "glGetnMapdvARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnMapfvARB, load, "glGetnMapfvARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnMapivARB, load, "glGetnMapivARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnMinmaxARB, load, "glGetnMinmaxARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnPixelMapfvARB, load, "glGetnPixelMapfvARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnPixelMapuivARB, load, "glGetnPixelMapuivARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnPixelMapusvARB, load, "glGetnPixelMapusvARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnPolygonStippleARB, load, "glGetnPolygonStippleARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnSeparableFilterARB, load, "glGetnSeparableFilterARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnTexImageARB, load, "glGetnTexImageARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnUniformdvARB, load, "glGetnUniformdvARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnUniformfvARB, load, "glGetnUniformfvARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnUniformivARB, load, "glGetnUniformivARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glGetnUniformuivARB, load, "glGetnUniformuivARB")) ext_GL_ARB_robustness = false;
		if (!LoadExt(glReadnPixelsARB, load, "glReadnPixelsARB")) ext_GL_ARB_robustness = false;
		#endif // GL_ARB_robustness
		#ifdef GL_ARB_sample_locations
		ext_GL_ARB_sample_locations = Check("GL_ARB_sample_locations", exts, count);
		if (!LoadExt(glEvaluateDepthValuesARB, load, "glEvaluateDepthValuesARB")) ext_GL_ARB_sample_locations = false;
		if (!LoadExt(glFramebufferSampleLocationsfvARB, load, "glFramebufferSampleLocationsfvARB")) ext_GL_ARB_sample_locations = false;
		if (!LoadExt(glNamedFramebufferSampleLocationsfvARB, load, "glNamedFramebufferSampleLocationsfvARB")) ext_GL_ARB_sample_locations = false;
		#endif // GL_ARB_sample_locations
		#ifdef GL_ARB_sample_shading
		ext_GL_ARB_sample_shading = Check("GL_ARB_sample_shading", exts, count);
		if (!LoadExt(glMinSampleShadingARB, load, "glMinSampleShadingARB")) ext_GL_ARB_sample_shading = false;
		#endif // GL_ARB_sample_shading
		#ifdef GL_ARB_separate_shader_objects
		ext_GL_ARB_separate_shader_objects = Check("GL_ARB_separate_shader_objects", exts, count);
		if (!LoadExt(glActiveShaderProgram, load, "glActiveShaderProgram")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glBindProgramPipeline, load, "glBindProgramPipeline")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glCreateShaderProgramv, load, "glCreateShaderProgramv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glDeleteProgramPipelines, load, "glDeleteProgramPipelines")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glGenProgramPipelines, load, "glGenProgramPipelines")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glGetProgramPipelineInfoLog, load, "glGetProgramPipelineInfoLog")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glGetProgramPipelineiv, load, "glGetProgramPipelineiv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glIsProgramPipeline, load, "glIsProgramPipeline")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform1d, load, "glProgramUniform1d")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform1dv, load, "glProgramUniform1dv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform1f, load, "glProgramUniform1f")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform1fv, load, "glProgramUniform1fv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform1i, load, "glProgramUniform1i")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform1iv, load, "glProgramUniform1iv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform1ui, load, "glProgramUniform1ui")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform1uiv, load, "glProgramUniform1uiv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform2d, load, "glProgramUniform2d")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform2dv, load, "glProgramUniform2dv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform2f, load, "glProgramUniform2f")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform2fv, load, "glProgramUniform2fv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform2i, load, "glProgramUniform2i")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform2iv, load, "glProgramUniform2iv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform2ui, load, "glProgramUniform2ui")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform2uiv, load, "glProgramUniform2uiv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform3d, load, "glProgramUniform3d")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform3dv, load, "glProgramUniform3dv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform3f, load, "glProgramUniform3f")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform3fv, load, "glProgramUniform3fv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform3i, load, "glProgramUniform3i")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform3iv, load, "glProgramUniform3iv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform3ui, load, "glProgramUniform3ui")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform3uiv, load, "glProgramUniform3uiv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform4d, load, "glProgramUniform4d")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform4dv, load, "glProgramUniform4dv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform4f, load, "glProgramUniform4f")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform4fv, load, "glProgramUniform4fv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform4i, load, "glProgramUniform4i")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform4iv, load, "glProgramUniform4iv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform4ui, load, "glProgramUniform4ui")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform4uiv, load, "glProgramUniform4uiv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix2dv, load, "glProgramUniformMatrix2dv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix2fv, load, "glProgramUniformMatrix2fv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix2x3dv, load, "glProgramUniformMatrix2x3dv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix2x3fv, load, "glProgramUniformMatrix2x3fv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix2x4dv, load, "glProgramUniformMatrix2x4dv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix2x4fv, load, "glProgramUniformMatrix2x4fv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix3dv, load, "glProgramUniformMatrix3dv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix3fv, load, "glProgramUniformMatrix3fv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix3x2dv, load, "glProgramUniformMatrix3x2dv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix3x2fv, load, "glProgramUniformMatrix3x2fv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix3x4dv, load, "glProgramUniformMatrix3x4dv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix3x4fv, load, "glProgramUniformMatrix3x4fv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix4dv, load, "glProgramUniformMatrix4dv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix4fv, load, "glProgramUniformMatrix4fv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix4x2dv, load, "glProgramUniformMatrix4x2dv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix4x2fv, load, "glProgramUniformMatrix4x2fv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix4x3dv, load, "glProgramUniformMatrix4x3dv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix4x3fv, load, "glProgramUniformMatrix4x3fv")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glUseProgramStages, load, "glUseProgramStages")) ext_GL_ARB_separate_shader_objects = false;
		if (!LoadExt(glValidateProgramPipeline, load, "glValidateProgramPipeline")) ext_GL_ARB_separate_shader_objects = false;
		#endif // GL_ARB_separate_shader_objects
		#ifdef GL_ARB_shader_atomic_counters
		ext_GL_ARB_shader_atomic_counters = Check("GL_ARB_shader_atomic_counters", exts, count);
		if (!LoadExt(glGetActiveAtomicCounterBufferiv, load, "glGetActiveAtomicCounterBufferiv")) ext_GL_ARB_shader_atomic_counters = false;
		#endif // GL_ARB_shader_atomic_counters
		#ifdef GL_ARB_shader_image_load_store
		ext_GL_ARB_shader_image_load_store = Check("GL_ARB_shader_image_load_store", exts, count);
		if (!LoadExt(glBindImageTexture, load, "glBindImageTexture")) ext_GL_ARB_shader_image_load_store = false;
		if (!LoadExt(glMemoryBarrier, load, "glMemoryBarrier")) ext_GL_ARB_shader_image_load_store = false;
		#endif // GL_ARB_shader_image_load_store
		#ifdef GL_ARB_shader_objects
		ext_GL_ARB_shader_objects = Check("GL_ARB_shader_objects", exts, count);
		if (!LoadExt(glAttachObjectARB, load, "glAttachObjectARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glCompileShaderARB, load, "glCompileShaderARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glCreateProgramObjectARB, load, "glCreateProgramObjectARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glCreateShaderObjectARB, load, "glCreateShaderObjectARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glDeleteObjectARB, load, "glDeleteObjectARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glDetachObjectARB, load, "glDetachObjectARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glGetActiveUniformARB, load, "glGetActiveUniformARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glGetAttachedObjectsARB, load, "glGetAttachedObjectsARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glGetHandleARB, load, "glGetHandleARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glGetInfoLogARB, load, "glGetInfoLogARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glGetObjectParameterfvARB, load, "glGetObjectParameterfvARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glGetObjectParameterivARB, load, "glGetObjectParameterivARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glGetShaderSourceARB, load, "glGetShaderSourceARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glGetUniformLocationARB, load, "glGetUniformLocationARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glGetUniformfvARB, load, "glGetUniformfvARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glGetUniformivARB, load, "glGetUniformivARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glLinkProgramARB, load, "glLinkProgramARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glShaderSourceARB, load, "glShaderSourceARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform1fARB, load, "glUniform1fARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform1fvARB, load, "glUniform1fvARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform1iARB, load, "glUniform1iARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform1ivARB, load, "glUniform1ivARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform2fARB, load, "glUniform2fARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform2fvARB, load, "glUniform2fvARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform2iARB, load, "glUniform2iARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform2ivARB, load, "glUniform2ivARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform3fARB, load, "glUniform3fARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform3fvARB, load, "glUniform3fvARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform3iARB, load, "glUniform3iARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform3ivARB, load, "glUniform3ivARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform4fARB, load, "glUniform4fARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform4fvARB, load, "glUniform4fvARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform4iARB, load, "glUniform4iARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniform4ivARB, load, "glUniform4ivARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniformMatrix2fvARB, load, "glUniformMatrix2fvARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniformMatrix3fvARB, load, "glUniformMatrix3fvARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUniformMatrix4fvARB, load, "glUniformMatrix4fvARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glUseProgramObjectARB, load, "glUseProgramObjectARB")) ext_GL_ARB_shader_objects = false;
		if (!LoadExt(glValidateProgramARB, load, "glValidateProgramARB")) ext_GL_ARB_shader_objects = false;
		#endif // GL_ARB_shader_objects
		#ifdef GL_ARB_shader_storage_buffer_object
		ext_GL_ARB_shader_storage_buffer_object = Check("GL_ARB_shader_storage_buffer_object", exts, count);
		if (!LoadExt(glShaderStorageBlockBinding, load, "glShaderStorageBlockBinding")) ext_GL_ARB_shader_storage_buffer_object = false;
		#endif // GL_ARB_shader_storage_buffer_object
		#ifdef GL_ARB_shader_subroutine
		ext_GL_ARB_shader_subroutine = Check("GL_ARB_shader_subroutine", exts, count);
		if (!LoadExt(glGetActiveSubroutineName, load, "glGetActiveSubroutineName")) ext_GL_ARB_shader_subroutine = false;
		if (!LoadExt(glGetActiveSubroutineUniformName, load, "glGetActiveSubroutineUniformName")) ext_GL_ARB_shader_subroutine = false;
		if (!LoadExt(glGetActiveSubroutineUniformiv, load, "glGetActiveSubroutineUniformiv")) ext_GL_ARB_shader_subroutine = false;
		if (!LoadExt(glGetProgramStageiv, load, "glGetProgramStageiv")) ext_GL_ARB_shader_subroutine = false;
		if (!LoadExt(glGetSubroutineIndex, load, "glGetSubroutineIndex")) ext_GL_ARB_shader_subroutine = false;
		if (!LoadExt(glGetSubroutineUniformLocation, load, "glGetSubroutineUniformLocation")) ext_GL_ARB_shader_subroutine = false;
		if (!LoadExt(glGetUniformSubroutineuiv, load, "glGetUniformSubroutineuiv")) ext_GL_ARB_shader_subroutine = false;
		if (!LoadExt(glUniformSubroutinesuiv, load, "glUniformSubroutinesuiv")) ext_GL_ARB_shader_subroutine = false;
		#endif // GL_ARB_shader_subroutine
		#ifdef GL_ARB_shading_language_100
		ext_GL_ARB_shading_language_100 = Check("GL_ARB_shading_language_100", exts, count);
		#endif // GL_ARB_shading_language_100
		#ifdef GL_ARB_shading_language_include
		ext_GL_ARB_shading_language_include = Check("GL_ARB_shading_language_include", exts, count);
		if (!LoadExt(glCompileShaderIncludeARB, load, "glCompileShaderIncludeARB")) ext_GL_ARB_shading_language_include = false;
		if (!LoadExt(glDeleteNamedStringARB, load, "glDeleteNamedStringARB")) ext_GL_ARB_shading_language_include = false;
		if (!LoadExt(glGetNamedStringARB, load, "glGetNamedStringARB")) ext_GL_ARB_shading_language_include = false;
		if (!LoadExt(glGetNamedStringivARB, load, "glGetNamedStringivARB")) ext_GL_ARB_shading_language_include = false;
		if (!LoadExt(glIsNamedStringARB, load, "glIsNamedStringARB")) ext_GL_ARB_shading_language_include = false;
		if (!LoadExt(glNamedStringARB, load, "glNamedStringARB")) ext_GL_ARB_shading_language_include = false;
		#endif // GL_ARB_shading_language_include
		#ifdef GL_ARB_shadow
		ext_GL_ARB_shadow = Check("GL_ARB_shadow", exts, count);
		#endif // GL_ARB_shadow
		#ifdef GL_ARB_shadow_ambient
		ext_GL_ARB_shadow_ambient = Check("GL_ARB_shadow_ambient", exts, count);
		#endif // GL_ARB_shadow_ambient
		#ifdef GL_ARB_sparse_buffer
		ext_GL_ARB_sparse_buffer = Check("GL_ARB_sparse_buffer", exts, count);
		if (!LoadExt(glBufferPageCommitmentARB, load, "glBufferPageCommitmentARB")) ext_GL_ARB_sparse_buffer = false;
		if (!LoadExt(glNamedBufferPageCommitmentARB, load, "glNamedBufferPageCommitmentARB")) ext_GL_ARB_sparse_buffer = false;
		if (!LoadExt(glNamedBufferPageCommitmentEXT, load, "glNamedBufferPageCommitmentEXT")) ext_GL_ARB_sparse_buffer = false;
		#endif // GL_ARB_sparse_buffer
		#ifdef GL_ARB_sparse_texture
		ext_GL_ARB_sparse_texture = Check("GL_ARB_sparse_texture", exts, count);
		if (!LoadExt(glTexPageCommitmentARB, load, "glTexPageCommitmentARB")) ext_GL_ARB_sparse_texture = false;
		#endif // GL_ARB_sparse_texture
		#ifdef GL_ARB_stencil_texturing
		ext_GL_ARB_stencil_texturing = Check("GL_ARB_stencil_texturing", exts, count);
		#endif // GL_ARB_stencil_texturing
		#ifdef GL_ARB_tessellation_shader
		ext_GL_ARB_tessellation_shader = Check("GL_ARB_tessellation_shader", exts, count);
		if (!LoadExt(glPatchParameterfv, load, "glPatchParameterfv")) ext_GL_ARB_tessellation_shader = false;
		if (!LoadExt(glPatchParameteri, load, "glPatchParameteri")) ext_GL_ARB_tessellation_shader = false;
		#endif // GL_ARB_tessellation_shader
		#ifdef GL_ARB_texture_barrier
		ext_GL_ARB_texture_barrier = Check("GL_ARB_texture_barrier", exts, count);
		if (!LoadExt(glTextureBarrier, load, "glTextureBarrier")) ext_GL_ARB_texture_barrier = false;
		#endif // GL_ARB_texture_barrier
		#ifdef GL_ARB_texture_border_clamp
		ext_GL_ARB_texture_border_clamp = Check("GL_ARB_texture_border_clamp", exts, count);
		#endif // GL_ARB_texture_border_clamp
		#ifdef GL_ARB_texture_buffer_object
		ext_GL_ARB_texture_buffer_object = Check("GL_ARB_texture_buffer_object", exts, count);
		if (!LoadExt(glTexBufferARB, load, "glTexBufferARB")) ext_GL_ARB_texture_buffer_object = false;
		#endif // GL_ARB_texture_buffer_object
		#ifdef GL_ARB_texture_buffer_range
		ext_GL_ARB_texture_buffer_range = Check("GL_ARB_texture_buffer_range", exts, count);
		if (!LoadExt(glTexBufferRange, load, "glTexBufferRange")) ext_GL_ARB_texture_buffer_range = false;
		#endif // GL_ARB_texture_buffer_range
		#ifdef GL_ARB_texture_compression
		ext_GL_ARB_texture_compression = Check("GL_ARB_texture_compression", exts, count);
		if (!LoadExt(glCompressedTexImage1DARB, load, "glCompressedTexImage1DARB")) ext_GL_ARB_texture_compression = false;
		if (!LoadExt(glCompressedTexImage2DARB, load, "glCompressedTexImage2DARB")) ext_GL_ARB_texture_compression = false;
		if (!LoadExt(glCompressedTexImage3DARB, load, "glCompressedTexImage3DARB")) ext_GL_ARB_texture_compression = false;
		if (!LoadExt(glCompressedTexSubImage1DARB, load, "glCompressedTexSubImage1DARB")) ext_GL_ARB_texture_compression = false;
		if (!LoadExt(glCompressedTexSubImage2DARB, load, "glCompressedTexSubImage2DARB")) ext_GL_ARB_texture_compression = false;
		if (!LoadExt(glCompressedTexSubImage3DARB, load, "glCompressedTexSubImage3DARB")) ext_GL_ARB_texture_compression = false;
		if (!LoadExt(glGetCompressedTexImageARB, load, "glGetCompressedTexImageARB")) ext_GL_ARB_texture_compression = false;
		#endif // GL_ARB_texture_compression
		#ifdef GL_ARB_texture_compression_bptc
		ext_GL_ARB_texture_compression_bptc = Check("GL_ARB_texture_compression_bptc", exts, count);
		#endif // GL_ARB_texture_compression_bptc
		#ifdef GL_ARB_texture_cube_map
		ext_GL_ARB_texture_cube_map = Check("GL_ARB_texture_cube_map", exts, count);
		#endif // GL_ARB_texture_cube_map
		#ifdef GL_ARB_texture_cube_map_array
		ext_GL_ARB_texture_cube_map_array = Check("GL_ARB_texture_cube_map_array", exts, count);
		#endif // GL_ARB_texture_cube_map_array
		#ifdef GL_ARB_texture_env_combine
		ext_GL_ARB_texture_env_combine = Check("GL_ARB_texture_env_combine", exts, count);
		#endif // GL_ARB_texture_env_combine
		#ifdef GL_ARB_texture_env_dot3
		ext_GL_ARB_texture_env_dot3 = Check("GL_ARB_texture_env_dot3", exts, count);
		#endif // GL_ARB_texture_env_dot3
		#ifdef GL_ARB_texture_filter_minmax
		ext_GL_ARB_texture_filter_minmax = Check("GL_ARB_texture_filter_minmax", exts, count);
		#endif // GL_ARB_texture_filter_minmax
		#ifdef GL_ARB_texture_float
		ext_GL_ARB_texture_float = Check("GL_ARB_texture_float", exts, count);
		#endif // GL_ARB_texture_float
		#ifdef GL_ARB_texture_gather
		ext_GL_ARB_texture_gather = Check("GL_ARB_texture_gather", exts, count);
		#endif // GL_ARB_texture_gather
		#ifdef GL_ARB_texture_mirror_clamp_to_edge
		ext_GL_ARB_texture_mirror_clamp_to_edge = Check("GL_ARB_texture_mirror_clamp_to_edge", exts, count);
		#endif // GL_ARB_texture_mirror_clamp_to_edge
		#ifdef GL_ARB_texture_mirrored_repeat
		ext_GL_ARB_texture_mirrored_repeat = Check("GL_ARB_texture_mirrored_repeat", exts, count);
		#endif // GL_ARB_texture_mirrored_repeat
		#ifdef GL_ARB_texture_rectangle
		ext_GL_ARB_texture_rectangle = Check("GL_ARB_texture_rectangle", exts, count);
		#endif // GL_ARB_texture_rectangle
		#ifdef GL_ARB_texture_storage
		ext_GL_ARB_texture_storage = Check("GL_ARB_texture_storage", exts, count);
		if (!LoadExt(glTexStorage1D, load, "glTexStorage1D")) ext_GL_ARB_texture_storage = false;
		if (!LoadExt(glTexStorage2D, load, "glTexStorage2D")) ext_GL_ARB_texture_storage = false;
		if (!LoadExt(glTexStorage3D, load, "glTexStorage3D")) ext_GL_ARB_texture_storage = false;
		#endif // GL_ARB_texture_storage
		#ifdef GL_ARB_texture_storage_multisample
		ext_GL_ARB_texture_storage_multisample = Check("GL_ARB_texture_storage_multisample", exts, count);
		if (!LoadExt(glTexStorage2DMultisample, load, "glTexStorage2DMultisample")) ext_GL_ARB_texture_storage_multisample = false;
		if (!LoadExt(glTexStorage3DMultisample, load, "glTexStorage3DMultisample")) ext_GL_ARB_texture_storage_multisample = false;
		#endif // GL_ARB_texture_storage_multisample
		#ifdef GL_ARB_texture_view
		ext_GL_ARB_texture_view = Check("GL_ARB_texture_view", exts, count);
		if (!LoadExt(glTextureView, load, "glTextureView")) ext_GL_ARB_texture_view = false;
		#endif // GL_ARB_texture_view
		#ifdef GL_ARB_transform_feedback2
		ext_GL_ARB_transform_feedback2 = Check("GL_ARB_transform_feedback2", exts, count);
		if (!LoadExt(glBindTransformFeedback, load, "glBindTransformFeedback")) ext_GL_ARB_transform_feedback2 = false;
		if (!LoadExt(glDeleteTransformFeedbacks, load, "glDeleteTransformFeedbacks")) ext_GL_ARB_transform_feedback2 = false;
		if (!LoadExt(glDrawTransformFeedback, load, "glDrawTransformFeedback")) ext_GL_ARB_transform_feedback2 = false;
		if (!LoadExt(glGenTransformFeedbacks, load, "glGenTransformFeedbacks")) ext_GL_ARB_transform_feedback2 = false;
		if (!LoadExt(glIsTransformFeedback, load, "glIsTransformFeedback")) ext_GL_ARB_transform_feedback2 = false;
		if (!LoadExt(glPauseTransformFeedback, load, "glPauseTransformFeedback")) ext_GL_ARB_transform_feedback2 = false;
		if (!LoadExt(glResumeTransformFeedback, load, "glResumeTransformFeedback")) ext_GL_ARB_transform_feedback2 = false;
		#endif // GL_ARB_transform_feedback2
		#ifdef GL_ARB_transform_feedback3
		ext_GL_ARB_transform_feedback3 = Check("GL_ARB_transform_feedback3", exts, count);
		if (!LoadExt(glBeginQueryIndexed, load, "glBeginQueryIndexed")) ext_GL_ARB_transform_feedback3 = false;
		if (!LoadExt(glDrawTransformFeedbackStream, load, "glDrawTransformFeedbackStream")) ext_GL_ARB_transform_feedback3 = false;
		if (!LoadExt(glEndQueryIndexed, load, "glEndQueryIndexed")) ext_GL_ARB_transform_feedback3 = false;
		if (!LoadExt(glGetQueryIndexediv, load, "glGetQueryIndexediv")) ext_GL_ARB_transform_feedback3 = false;
		#endif // GL_ARB_transform_feedback3
		#ifdef GL_ARB_transform_feedback_instanced
		ext_GL_ARB_transform_feedback_instanced = Check("GL_ARB_transform_feedback_instanced", exts, count);
		if (!LoadExt(glDrawTransformFeedbackInstanced, load, "glDrawTransformFeedbackInstanced")) ext_GL_ARB_transform_feedback_instanced = false;
		if (!LoadExt(glDrawTransformFeedbackStreamInstanced, load, "glDrawTransformFeedbackStreamInstanced")) ext_GL_ARB_transform_feedback_instanced = false;
		#endif // GL_ARB_transform_feedback_instanced
		#ifdef GL_ARB_transform_feedback_overflow_query
		ext_GL_ARB_transform_feedback_overflow_query = Check("GL_ARB_transform_feedback_overflow_query", exts, count);
		#endif // GL_ARB_transform_feedback_overflow_query
		#ifdef GL_ARB_transpose_matrix
		ext_GL_ARB_transpose_matrix = Check("GL_ARB_transpose_matrix", exts, count);
		if (!LoadExt(glLoadTransposeMatrixdARB, load, "glLoadTransposeMatrixdARB")) ext_GL_ARB_transpose_matrix = false;
		if (!LoadExt(glLoadTransposeMatrixfARB, load, "glLoadTransposeMatrixfARB")) ext_GL_ARB_transpose_matrix = false;
		if (!LoadExt(glMultTransposeMatrixdARB, load, "glMultTransposeMatrixdARB")) ext_GL_ARB_transpose_matrix = false;
		if (!LoadExt(glMultTransposeMatrixfARB, load, "glMultTransposeMatrixfARB")) ext_GL_ARB_transpose_matrix = false;
		#endif // GL_ARB_transpose_matrix
		#ifdef GL_ARB_vertex_attrib_64bit
		ext_GL_ARB_vertex_attrib_64bit = Check("GL_ARB_vertex_attrib_64bit", exts, count);
		if (!LoadExt(glGetVertexAttribLdv, load, "glGetVertexAttribLdv")) ext_GL_ARB_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL1d, load, "glVertexAttribL1d")) ext_GL_ARB_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL1dv, load, "glVertexAttribL1dv")) ext_GL_ARB_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL2d, load, "glVertexAttribL2d")) ext_GL_ARB_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL2dv, load, "glVertexAttribL2dv")) ext_GL_ARB_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL3d, load, "glVertexAttribL3d")) ext_GL_ARB_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL3dv, load, "glVertexAttribL3dv")) ext_GL_ARB_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL4d, load, "glVertexAttribL4d")) ext_GL_ARB_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL4dv, load, "glVertexAttribL4dv")) ext_GL_ARB_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribLPointer, load, "glVertexAttribLPointer")) ext_GL_ARB_vertex_attrib_64bit = false;
		#endif // GL_ARB_vertex_attrib_64bit
		#ifdef GL_ARB_vertex_attrib_binding
		ext_GL_ARB_vertex_attrib_binding = Check("GL_ARB_vertex_attrib_binding", exts, count);
		if (!LoadExt(glBindVertexBuffer, load, "glBindVertexBuffer")) ext_GL_ARB_vertex_attrib_binding = false;
		if (!LoadExt(glVertexAttribBinding, load, "glVertexAttribBinding")) ext_GL_ARB_vertex_attrib_binding = false;
		if (!LoadExt(glVertexAttribFormat, load, "glVertexAttribFormat")) ext_GL_ARB_vertex_attrib_binding = false;
		if (!LoadExt(glVertexAttribIFormat, load, "glVertexAttribIFormat")) ext_GL_ARB_vertex_attrib_binding = false;
		if (!LoadExt(glVertexAttribLFormat, load, "glVertexAttribLFormat")) ext_GL_ARB_vertex_attrib_binding = false;
		if (!LoadExt(glVertexBindingDivisor, load, "glVertexBindingDivisor")) ext_GL_ARB_vertex_attrib_binding = false;
		#endif // GL_ARB_vertex_attrib_binding
		#ifdef GL_ARB_vertex_blend
		ext_GL_ARB_vertex_blend = Check("GL_ARB_vertex_blend", exts, count);
		if (!LoadExt(glVertexBlendARB, load, "glVertexBlendARB")) ext_GL_ARB_vertex_blend = false;
		if (!LoadExt(glWeightPointerARB, load, "glWeightPointerARB")) ext_GL_ARB_vertex_blend = false;
		if (!LoadExt(glWeightbvARB, load, "glWeightbvARB")) ext_GL_ARB_vertex_blend = false;
		if (!LoadExt(glWeightdvARB, load, "glWeightdvARB")) ext_GL_ARB_vertex_blend = false;
		if (!LoadExt(glWeightfvARB, load, "glWeightfvARB")) ext_GL_ARB_vertex_blend = false;
		if (!LoadExt(glWeightivARB, load, "glWeightivARB")) ext_GL_ARB_vertex_blend = false;
		if (!LoadExt(glWeightsvARB, load, "glWeightsvARB")) ext_GL_ARB_vertex_blend = false;
		if (!LoadExt(glWeightubvARB, load, "glWeightubvARB")) ext_GL_ARB_vertex_blend = false;
		if (!LoadExt(glWeightuivARB, load, "glWeightuivARB")) ext_GL_ARB_vertex_blend = false;
		if (!LoadExt(glWeightusvARB, load, "glWeightusvARB")) ext_GL_ARB_vertex_blend = false;
		#endif // GL_ARB_vertex_blend
		#ifdef GL_ARB_vertex_buffer_object
		ext_GL_ARB_vertex_buffer_object = Check("GL_ARB_vertex_buffer_object", exts, count);
		if (!LoadExt(glBindBufferARB, load, "glBindBufferARB")) ext_GL_ARB_vertex_buffer_object = false;
		if (!LoadExt(glBufferDataARB, load, "glBufferDataARB")) ext_GL_ARB_vertex_buffer_object = false;
		if (!LoadExt(glBufferSubDataARB, load, "glBufferSubDataARB")) ext_GL_ARB_vertex_buffer_object = false;
		if (!LoadExt(glDeleteBuffersARB, load, "glDeleteBuffersARB")) ext_GL_ARB_vertex_buffer_object = false;
		if (!LoadExt(glGenBuffersARB, load, "glGenBuffersARB")) ext_GL_ARB_vertex_buffer_object = false;
		if (!LoadExt(glGetBufferParameterivARB, load, "glGetBufferParameterivARB")) ext_GL_ARB_vertex_buffer_object = false;
		if (!LoadExt(glGetBufferPointervARB, load, "glGetBufferPointervARB")) ext_GL_ARB_vertex_buffer_object = false;
		if (!LoadExt(glGetBufferSubDataARB, load, "glGetBufferSubDataARB")) ext_GL_ARB_vertex_buffer_object = false;
		if (!LoadExt(glIsBufferARB, load, "glIsBufferARB")) ext_GL_ARB_vertex_buffer_object = false;
		if (!LoadExt(glMapBufferARB, load, "glMapBufferARB")) ext_GL_ARB_vertex_buffer_object = false;
		if (!LoadExt(glUnmapBufferARB, load, "glUnmapBufferARB")) ext_GL_ARB_vertex_buffer_object = false;
		#endif // GL_ARB_vertex_buffer_object
		#ifdef GL_ARB_vertex_program
		ext_GL_ARB_vertex_program = Check("GL_ARB_vertex_program", exts, count);
		if (!LoadExt(glBindProgramARB, load, "glBindProgramARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glDeleteProgramsARB, load, "glDeleteProgramsARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glDisableVertexAttribArrayARB, load, "glDisableVertexAttribArrayARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glEnableVertexAttribArrayARB, load, "glEnableVertexAttribArrayARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glGenProgramsARB, load, "glGenProgramsARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glGetProgramEnvParameterdvARB, load, "glGetProgramEnvParameterdvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glGetProgramEnvParameterfvARB, load, "glGetProgramEnvParameterfvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glGetProgramLocalParameterdvARB, load, "glGetProgramLocalParameterdvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glGetProgramLocalParameterfvARB, load, "glGetProgramLocalParameterfvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glGetProgramStringARB, load, "glGetProgramStringARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glGetProgramivARB, load, "glGetProgramivARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glGetVertexAttribPointervARB, load, "glGetVertexAttribPointervARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glGetVertexAttribdvARB, load, "glGetVertexAttribdvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glGetVertexAttribfvARB, load, "glGetVertexAttribfvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glGetVertexAttribivARB, load, "glGetVertexAttribivARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glIsProgramARB, load, "glIsProgramARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glProgramEnvParameter4dARB, load, "glProgramEnvParameter4dARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glProgramEnvParameter4dvARB, load, "glProgramEnvParameter4dvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glProgramEnvParameter4fARB, load, "glProgramEnvParameter4fARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glProgramEnvParameter4fvARB, load, "glProgramEnvParameter4fvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glProgramLocalParameter4dARB, load, "glProgramLocalParameter4dARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glProgramLocalParameter4dvARB, load, "glProgramLocalParameter4dvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glProgramLocalParameter4fARB, load, "glProgramLocalParameter4fARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glProgramLocalParameter4fvARB, load, "glProgramLocalParameter4fvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glProgramStringARB, load, "glProgramStringARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib1dARB, load, "glVertexAttrib1dARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib1dvARB, load, "glVertexAttrib1dvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib1fARB, load, "glVertexAttrib1fARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib1fvARB, load, "glVertexAttrib1fvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib1sARB, load, "glVertexAttrib1sARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib1svARB, load, "glVertexAttrib1svARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib2dARB, load, "glVertexAttrib2dARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib2dvARB, load, "glVertexAttrib2dvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib2fARB, load, "glVertexAttrib2fARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib2fvARB, load, "glVertexAttrib2fvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib2sARB, load, "glVertexAttrib2sARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib2svARB, load, "glVertexAttrib2svARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib3dARB, load, "glVertexAttrib3dARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib3dvARB, load, "glVertexAttrib3dvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib3fARB, load, "glVertexAttrib3fARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib3fvARB, load, "glVertexAttrib3fvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib3sARB, load, "glVertexAttrib3sARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib3svARB, load, "glVertexAttrib3svARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4NbvARB, load, "glVertexAttrib4NbvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4NivARB, load, "glVertexAttrib4NivARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4NsvARB, load, "glVertexAttrib4NsvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4NubARB, load, "glVertexAttrib4NubARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4NubvARB, load, "glVertexAttrib4NubvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4NuivARB, load, "glVertexAttrib4NuivARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4NusvARB, load, "glVertexAttrib4NusvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4bvARB, load, "glVertexAttrib4bvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4dARB, load, "glVertexAttrib4dARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4dvARB, load, "glVertexAttrib4dvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4fARB, load, "glVertexAttrib4fARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4fvARB, load, "glVertexAttrib4fvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4ivARB, load, "glVertexAttrib4ivARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4sARB, load, "glVertexAttrib4sARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4svARB, load, "glVertexAttrib4svARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4ubvARB, load, "glVertexAttrib4ubvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4uivARB, load, "glVertexAttrib4uivARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttrib4usvARB, load, "glVertexAttrib4usvARB")) ext_GL_ARB_vertex_program = false;
		if (!LoadExt(glVertexAttribPointerARB, load, "glVertexAttribPointerARB")) ext_GL_ARB_vertex_program = false;
		#endif // GL_ARB_vertex_program
		#ifdef GL_ARB_vertex_shader
		ext_GL_ARB_vertex_shader = Check("GL_ARB_vertex_shader", exts, count);
		if (!LoadExt(glBindAttribLocationARB, load, "glBindAttribLocationARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glDisableVertexAttribArrayARB, load, "glDisableVertexAttribArrayARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glEnableVertexAttribArrayARB, load, "glEnableVertexAttribArrayARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glGetActiveAttribARB, load, "glGetActiveAttribARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glGetAttribLocationARB, load, "glGetAttribLocationARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glGetVertexAttribPointervARB, load, "glGetVertexAttribPointervARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glGetVertexAttribdvARB, load, "glGetVertexAttribdvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glGetVertexAttribfvARB, load, "glGetVertexAttribfvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glGetVertexAttribivARB, load, "glGetVertexAttribivARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib1dARB, load, "glVertexAttrib1dARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib1dvARB, load, "glVertexAttrib1dvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib1fARB, load, "glVertexAttrib1fARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib1fvARB, load, "glVertexAttrib1fvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib1sARB, load, "glVertexAttrib1sARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib1svARB, load, "glVertexAttrib1svARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib2dARB, load, "glVertexAttrib2dARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib2dvARB, load, "glVertexAttrib2dvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib2fARB, load, "glVertexAttrib2fARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib2fvARB, load, "glVertexAttrib2fvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib2sARB, load, "glVertexAttrib2sARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib2svARB, load, "glVertexAttrib2svARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib3dARB, load, "glVertexAttrib3dARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib3dvARB, load, "glVertexAttrib3dvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib3fARB, load, "glVertexAttrib3fARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib3fvARB, load, "glVertexAttrib3fvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib3sARB, load, "glVertexAttrib3sARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib3svARB, load, "glVertexAttrib3svARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4NbvARB, load, "glVertexAttrib4NbvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4NivARB, load, "glVertexAttrib4NivARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4NsvARB, load, "glVertexAttrib4NsvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4NubARB, load, "glVertexAttrib4NubARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4NubvARB, load, "glVertexAttrib4NubvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4NuivARB, load, "glVertexAttrib4NuivARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4NusvARB, load, "glVertexAttrib4NusvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4bvARB, load, "glVertexAttrib4bvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4dARB, load, "glVertexAttrib4dARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4dvARB, load, "glVertexAttrib4dvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4fARB, load, "glVertexAttrib4fARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4fvARB, load, "glVertexAttrib4fvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4ivARB, load, "glVertexAttrib4ivARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4sARB, load, "glVertexAttrib4sARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4svARB, load, "glVertexAttrib4svARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4ubvARB, load, "glVertexAttrib4ubvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4uivARB, load, "glVertexAttrib4uivARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttrib4usvARB, load, "glVertexAttrib4usvARB")) ext_GL_ARB_vertex_shader = false;
		if (!LoadExt(glVertexAttribPointerARB, load, "glVertexAttribPointerARB")) ext_GL_ARB_vertex_shader = false;
		#endif // GL_ARB_vertex_shader
		#ifdef GL_ARB_vertex_type_2_10_10_10_rev
		ext_GL_ARB_vertex_type_2_10_10_10_rev = Check("GL_ARB_vertex_type_2_10_10_10_rev", exts, count);
		if (!LoadExt(glColorP3ui, load, "glColorP3ui")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glColorP3uiv, load, "glColorP3uiv")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glColorP4ui, load, "glColorP4ui")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glColorP4uiv, load, "glColorP4uiv")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glMultiTexCoordP1ui, load, "glMultiTexCoordP1ui")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glMultiTexCoordP1uiv, load, "glMultiTexCoordP1uiv")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glMultiTexCoordP2ui, load, "glMultiTexCoordP2ui")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glMultiTexCoordP2uiv, load, "glMultiTexCoordP2uiv")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glMultiTexCoordP3ui, load, "glMultiTexCoordP3ui")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glMultiTexCoordP3uiv, load, "glMultiTexCoordP3uiv")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glMultiTexCoordP4ui, load, "glMultiTexCoordP4ui")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glMultiTexCoordP4uiv, load, "glMultiTexCoordP4uiv")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glNormalP3ui, load, "glNormalP3ui")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glNormalP3uiv, load, "glNormalP3uiv")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glSecondaryColorP3ui, load, "glSecondaryColorP3ui")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glSecondaryColorP3uiv, load, "glSecondaryColorP3uiv")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glTexCoordP1ui, load, "glTexCoordP1ui")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glTexCoordP1uiv, load, "glTexCoordP1uiv")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glTexCoordP2ui, load, "glTexCoordP2ui")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glTexCoordP2uiv, load, "glTexCoordP2uiv")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glTexCoordP3ui, load, "glTexCoordP3ui")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glTexCoordP3uiv, load, "glTexCoordP3uiv")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glTexCoordP4ui, load, "glTexCoordP4ui")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glTexCoordP4uiv, load, "glTexCoordP4uiv")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glVertexP2ui, load, "glVertexP2ui")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glVertexP2uiv, load, "glVertexP2uiv")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glVertexP3ui, load, "glVertexP3ui")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glVertexP3uiv, load, "glVertexP3uiv")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glVertexP4ui, load, "glVertexP4ui")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		if (!LoadExt(glVertexP4uiv, load, "glVertexP4uiv")) ext_GL_ARB_vertex_type_2_10_10_10_rev = false;
		#endif // GL_ARB_vertex_type_2_10_10_10_rev
		#ifdef GL_ARB_viewport_array
		ext_GL_ARB_viewport_array = Check("GL_ARB_viewport_array", exts, count);
		if (!LoadExt(glDepthRangeArrayv, load, "glDepthRangeArrayv")) ext_GL_ARB_viewport_array = false;
		if (!LoadExt(glDepthRangeIndexed, load, "glDepthRangeIndexed")) ext_GL_ARB_viewport_array = false;
		if (!LoadExt(glGetDoublei_v, load, "glGetDoublei_v")) ext_GL_ARB_viewport_array = false;
		if (!LoadExt(glGetFloati_v, load, "glGetFloati_v")) ext_GL_ARB_viewport_array = false;
		if (!LoadExt(glScissorArrayv, load, "glScissorArrayv")) ext_GL_ARB_viewport_array = false;
		if (!LoadExt(glScissorIndexed, load, "glScissorIndexed")) ext_GL_ARB_viewport_array = false;
		if (!LoadExt(glScissorIndexedv, load, "glScissorIndexedv")) ext_GL_ARB_viewport_array = false;
		if (!LoadExt(glViewportArrayv, load, "glViewportArrayv")) ext_GL_ARB_viewport_array = false;
		if (!LoadExt(glViewportIndexedf, load, "glViewportIndexedf")) ext_GL_ARB_viewport_array = false;
		if (!LoadExt(glViewportIndexedfv, load, "glViewportIndexedfv")) ext_GL_ARB_viewport_array = false;
		#endif // GL_ARB_viewport_array
		#ifdef GL_ARB_window_pos
		ext_GL_ARB_window_pos = Check("GL_ARB_window_pos", exts, count);
		if (!LoadExt(glWindowPos2dARB, load, "glWindowPos2dARB")) ext_GL_ARB_window_pos = false;
		if (!LoadExt(glWindowPos2dvARB, load, "glWindowPos2dvARB")) ext_GL_ARB_window_pos = false;
		if (!LoadExt(glWindowPos2fARB, load, "glWindowPos2fARB")) ext_GL_ARB_window_pos = false;
		if (!LoadExt(glWindowPos2fvARB, load, "glWindowPos2fvARB")) ext_GL_ARB_window_pos = false;
		if (!LoadExt(glWindowPos2iARB, load, "glWindowPos2iARB")) ext_GL_ARB_window_pos = false;
		if (!LoadExt(glWindowPos2ivARB, load, "glWindowPos2ivARB")) ext_GL_ARB_window_pos = false;
		if (!LoadExt(glWindowPos2sARB, load, "glWindowPos2sARB")) ext_GL_ARB_window_pos = false;
		if (!LoadExt(glWindowPos2svARB, load, "glWindowPos2svARB")) ext_GL_ARB_window_pos = false;
		if (!LoadExt(glWindowPos3dARB, load, "glWindowPos3dARB")) ext_GL_ARB_window_pos = false;
		if (!LoadExt(glWindowPos3dvARB, load, "glWindowPos3dvARB")) ext_GL_ARB_window_pos = false;
		if (!LoadExt(glWindowPos3fARB, load, "glWindowPos3fARB")) ext_GL_ARB_window_pos = false;
		if (!LoadExt(glWindowPos3fvARB, load, "glWindowPos3fvARB")) ext_GL_ARB_window_pos = false;
		if (!LoadExt(glWindowPos3iARB, load, "glWindowPos3iARB")) ext_GL_ARB_window_pos = false;
		if (!LoadExt(glWindowPos3ivARB, load, "glWindowPos3ivARB")) ext_GL_ARB_window_pos = false;
		if (!LoadExt(glWindowPos3sARB, load, "glWindowPos3sARB")) ext_GL_ARB_window_pos = false;
		if (!LoadExt(glWindowPos3svARB, load, "glWindowPos3svARB")) ext_GL_ARB_window_pos = false;
		#endif // GL_ARB_window_pos
		#ifdef GL_ATI_draw_buffers
		ext_GL_ATI_draw_buffers = Check("GL_ATI_draw_buffers", exts, count);
		if (!LoadExt(glDrawBuffersATI, load, "glDrawBuffersATI")) ext_GL_ATI_draw_buffers = false;
		#endif // GL_ATI_draw_buffers
		#ifdef GL_ATI_element_array
		ext_GL_ATI_element_array = Check("GL_ATI_element_array", exts, count);
		if (!LoadExt(glDrawElementArrayATI, load, "glDrawElementArrayATI")) ext_GL_ATI_element_array = false;
		if (!LoadExt(glDrawRangeElementArrayATI, load, "glDrawRangeElementArrayATI")) ext_GL_ATI_element_array = false;
		if (!LoadExt(glElementPointerATI, load, "glElementPointerATI")) ext_GL_ATI_element_array = false;
		#endif // GL_ATI_element_array
		#ifdef GL_ATI_envmap_bumpmap
		ext_GL_ATI_envmap_bumpmap = Check("GL_ATI_envmap_bumpmap", exts, count);
		if (!LoadExt(glGetTexBumpParameterfvATI, load, "glGetTexBumpParameterfvATI")) ext_GL_ATI_envmap_bumpmap = false;
		if (!LoadExt(glGetTexBumpParameterivATI, load, "glGetTexBumpParameterivATI")) ext_GL_ATI_envmap_bumpmap = false;
		if (!LoadExt(glTexBumpParameterfvATI, load, "glTexBumpParameterfvATI")) ext_GL_ATI_envmap_bumpmap = false;
		if (!LoadExt(glTexBumpParameterivATI, load, "glTexBumpParameterivATI")) ext_GL_ATI_envmap_bumpmap = false;
		#endif // GL_ATI_envmap_bumpmap
		#ifdef GL_ATI_fragment_shader
		ext_GL_ATI_fragment_shader = Check("GL_ATI_fragment_shader", exts, count);
		if (!LoadExt(glAlphaFragmentOp1ATI, load, "glAlphaFragmentOp1ATI")) ext_GL_ATI_fragment_shader = false;
		if (!LoadExt(glAlphaFragmentOp2ATI, load, "glAlphaFragmentOp2ATI")) ext_GL_ATI_fragment_shader = false;
		if (!LoadExt(glAlphaFragmentOp3ATI, load, "glAlphaFragmentOp3ATI")) ext_GL_ATI_fragment_shader = false;
		if (!LoadExt(glBeginFragmentShaderATI, load, "glBeginFragmentShaderATI")) ext_GL_ATI_fragment_shader = false;
		if (!LoadExt(glBindFragmentShaderATI, load, "glBindFragmentShaderATI")) ext_GL_ATI_fragment_shader = false;
		if (!LoadExt(glColorFragmentOp1ATI, load, "glColorFragmentOp1ATI")) ext_GL_ATI_fragment_shader = false;
		if (!LoadExt(glColorFragmentOp2ATI, load, "glColorFragmentOp2ATI")) ext_GL_ATI_fragment_shader = false;
		if (!LoadExt(glColorFragmentOp3ATI, load, "glColorFragmentOp3ATI")) ext_GL_ATI_fragment_shader = false;
		if (!LoadExt(glDeleteFragmentShaderATI, load, "glDeleteFragmentShaderATI")) ext_GL_ATI_fragment_shader = false;
		if (!LoadExt(glEndFragmentShaderATI, load, "glEndFragmentShaderATI")) ext_GL_ATI_fragment_shader = false;
		if (!LoadExt(glGenFragmentShadersATI, load, "glGenFragmentShadersATI")) ext_GL_ATI_fragment_shader = false;
		if (!LoadExt(glPassTexCoordATI, load, "glPassTexCoordATI")) ext_GL_ATI_fragment_shader = false;
		if (!LoadExt(glSampleMapATI, load, "glSampleMapATI")) ext_GL_ATI_fragment_shader = false;
		if (!LoadExt(glSetFragmentShaderConstantATI, load, "glSetFragmentShaderConstantATI")) ext_GL_ATI_fragment_shader = false;
		#endif // GL_ATI_fragment_shader
		#ifdef GL_ATI_map_object_buffer
		ext_GL_ATI_map_object_buffer = Check("GL_ATI_map_object_buffer", exts, count);
		if (!LoadExt(glMapObjectBufferATI, load, "glMapObjectBufferATI")) ext_GL_ATI_map_object_buffer = false;
		if (!LoadExt(glUnmapObjectBufferATI, load, "glUnmapObjectBufferATI")) ext_GL_ATI_map_object_buffer = false;
		#endif // GL_ATI_map_object_buffer
		#ifdef GL_ATI_meminfo
		ext_GL_ATI_meminfo = Check("GL_ATI_meminfo", exts, count);
		#endif // GL_ATI_meminfo
		#ifdef GL_ATI_pixel_format_float
		ext_GL_ATI_pixel_format_float = Check("GL_ATI_pixel_format_float", exts, count);
		#endif // GL_ATI_pixel_format_float
		#ifdef GL_ATI_pn_triangles
		ext_GL_ATI_pn_triangles = Check("GL_ATI_pn_triangles", exts, count);
		if (!LoadExt(glPNTrianglesfATI, load, "glPNTrianglesfATI")) ext_GL_ATI_pn_triangles = false;
		if (!LoadExt(glPNTrianglesiATI, load, "glPNTrianglesiATI")) ext_GL_ATI_pn_triangles = false;
		#endif // GL_ATI_pn_triangles
		#ifdef GL_ATI_separate_stencil
		ext_GL_ATI_separate_stencil = Check("GL_ATI_separate_stencil", exts, count);
		if (!LoadExt(glStencilFuncSeparateATI, load, "glStencilFuncSeparateATI")) ext_GL_ATI_separate_stencil = false;
		if (!LoadExt(glStencilOpSeparateATI, load, "glStencilOpSeparateATI")) ext_GL_ATI_separate_stencil = false;
		#endif // GL_ATI_separate_stencil
		#ifdef GL_ATI_text_fragment_shader
		ext_GL_ATI_text_fragment_shader = Check("GL_ATI_text_fragment_shader", exts, count);
		#endif // GL_ATI_text_fragment_shader
		#ifdef GL_ATI_texture_env_combine3
		ext_GL_ATI_texture_env_combine3 = Check("GL_ATI_texture_env_combine3", exts, count);
		#endif // GL_ATI_texture_env_combine3
		#ifdef GL_ATI_texture_float
		ext_GL_ATI_texture_float = Check("GL_ATI_texture_float", exts, count);
		#endif // GL_ATI_texture_float
		#ifdef GL_ATI_texture_mirror_once
		ext_GL_ATI_texture_mirror_once = Check("GL_ATI_texture_mirror_once", exts, count);
		#endif // GL_ATI_texture_mirror_once
		#ifdef GL_ATI_vertex_array_object
		ext_GL_ATI_vertex_array_object = Check("GL_ATI_vertex_array_object", exts, count);
		if (!LoadExt(glArrayObjectATI, load, "glArrayObjectATI")) ext_GL_ATI_vertex_array_object = false;
		if (!LoadExt(glFreeObjectBufferATI, load, "glFreeObjectBufferATI")) ext_GL_ATI_vertex_array_object = false;
		if (!LoadExt(glGetArrayObjectfvATI, load, "glGetArrayObjectfvATI")) ext_GL_ATI_vertex_array_object = false;
		if (!LoadExt(glGetArrayObjectivATI, load, "glGetArrayObjectivATI")) ext_GL_ATI_vertex_array_object = false;
		if (!LoadExt(glGetObjectBufferfvATI, load, "glGetObjectBufferfvATI")) ext_GL_ATI_vertex_array_object = false;
		if (!LoadExt(glGetObjectBufferivATI, load, "glGetObjectBufferivATI")) ext_GL_ATI_vertex_array_object = false;
		if (!LoadExt(glGetVariantArrayObjectfvATI, load, "glGetVariantArrayObjectfvATI")) ext_GL_ATI_vertex_array_object = false;
		if (!LoadExt(glGetVariantArrayObjectivATI, load, "glGetVariantArrayObjectivATI")) ext_GL_ATI_vertex_array_object = false;
		if (!LoadExt(glIsObjectBufferATI, load, "glIsObjectBufferATI")) ext_GL_ATI_vertex_array_object = false;
		if (!LoadExt(glNewObjectBufferATI, load, "glNewObjectBufferATI")) ext_GL_ATI_vertex_array_object = false;
		if (!LoadExt(glUpdateObjectBufferATI, load, "glUpdateObjectBufferATI")) ext_GL_ATI_vertex_array_object = false;
		if (!LoadExt(glVariantArrayObjectATI, load, "glVariantArrayObjectATI")) ext_GL_ATI_vertex_array_object = false;
		#endif // GL_ATI_vertex_array_object
		#ifdef GL_ATI_vertex_attrib_array_object
		ext_GL_ATI_vertex_attrib_array_object = Check("GL_ATI_vertex_attrib_array_object", exts, count);
		if (!LoadExt(glGetVertexAttribArrayObjectfvATI, load, "glGetVertexAttribArrayObjectfvATI")) ext_GL_ATI_vertex_attrib_array_object = false;
		if (!LoadExt(glGetVertexAttribArrayObjectivATI, load, "glGetVertexAttribArrayObjectivATI")) ext_GL_ATI_vertex_attrib_array_object = false;
		if (!LoadExt(glVertexAttribArrayObjectATI, load, "glVertexAttribArrayObjectATI")) ext_GL_ATI_vertex_attrib_array_object = false;
		#endif // GL_ATI_vertex_attrib_array_object
		#ifdef GL_ATI_vertex_streams
		ext_GL_ATI_vertex_streams = Check("GL_ATI_vertex_streams", exts, count);
		if (!LoadExt(glClientActiveVertexStreamATI, load, "glClientActiveVertexStreamATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glNormalStream3bATI, load, "glNormalStream3bATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glNormalStream3bvATI, load, "glNormalStream3bvATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glNormalStream3dATI, load, "glNormalStream3dATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glNormalStream3dvATI, load, "glNormalStream3dvATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glNormalStream3fATI, load, "glNormalStream3fATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glNormalStream3fvATI, load, "glNormalStream3fvATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glNormalStream3iATI, load, "glNormalStream3iATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glNormalStream3ivATI, load, "glNormalStream3ivATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glNormalStream3sATI, load, "glNormalStream3sATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glNormalStream3svATI, load, "glNormalStream3svATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexBlendEnvfATI, load, "glVertexBlendEnvfATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexBlendEnviATI, load, "glVertexBlendEnviATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream1dATI, load, "glVertexStream1dATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream1dvATI, load, "glVertexStream1dvATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream1fATI, load, "glVertexStream1fATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream1fvATI, load, "glVertexStream1fvATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream1iATI, load, "glVertexStream1iATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream1ivATI, load, "glVertexStream1ivATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream1sATI, load, "glVertexStream1sATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream1svATI, load, "glVertexStream1svATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream2dATI, load, "glVertexStream2dATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream2dvATI, load, "glVertexStream2dvATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream2fATI, load, "glVertexStream2fATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream2fvATI, load, "glVertexStream2fvATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream2iATI, load, "glVertexStream2iATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream2ivATI, load, "glVertexStream2ivATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream2sATI, load, "glVertexStream2sATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream2svATI, load, "glVertexStream2svATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream3dATI, load, "glVertexStream3dATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream3dvATI, load, "glVertexStream3dvATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream3fATI, load, "glVertexStream3fATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream3fvATI, load, "glVertexStream3fvATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream3iATI, load, "glVertexStream3iATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream3ivATI, load, "glVertexStream3ivATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream3sATI, load, "glVertexStream3sATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream3svATI, load, "glVertexStream3svATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream4dATI, load, "glVertexStream4dATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream4dvATI, load, "glVertexStream4dvATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream4fATI, load, "glVertexStream4fATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream4fvATI, load, "glVertexStream4fvATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream4iATI, load, "glVertexStream4iATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream4ivATI, load, "glVertexStream4ivATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream4sATI, load, "glVertexStream4sATI")) ext_GL_ATI_vertex_streams = false;
		if (!LoadExt(glVertexStream4svATI, load, "glVertexStream4svATI")) ext_GL_ATI_vertex_streams = false;
		#endif // GL_ATI_vertex_streams
		#ifdef GL_EXT_422_pixels
		ext_GL_EXT_422_pixels = Check("GL_EXT_422_pixels", exts, count);
		#endif // GL_EXT_422_pixels
		#ifdef GL_EXT_abgr
		ext_GL_EXT_abgr = Check("GL_EXT_abgr", exts, count);
		#endif // GL_EXT_abgr
		#ifdef GL_EXT_bgra
		ext_GL_EXT_bgra = Check("GL_EXT_bgra", exts, count);
		#endif // GL_EXT_bgra
		#ifdef GL_EXT_bindable_uniform
		ext_GL_EXT_bindable_uniform = Check("GL_EXT_bindable_uniform", exts, count);
		if (!LoadExt(glGetUniformBufferSizeEXT, load, "glGetUniformBufferSizeEXT")) ext_GL_EXT_bindable_uniform = false;
		if (!LoadExt(glGetUniformOffsetEXT, load, "glGetUniformOffsetEXT")) ext_GL_EXT_bindable_uniform = false;
		if (!LoadExt(glUniformBufferEXT, load, "glUniformBufferEXT")) ext_GL_EXT_bindable_uniform = false;
		#endif // GL_EXT_bindable_uniform
		#ifdef GL_EXT_blend_color
		ext_GL_EXT_blend_color = Check("GL_EXT_blend_color", exts, count);
		if (!LoadExt(glBlendColorEXT, load, "glBlendColorEXT")) ext_GL_EXT_blend_color = false;
		#endif // GL_EXT_blend_color
		#ifdef GL_EXT_blend_equation_separate
		ext_GL_EXT_blend_equation_separate = Check("GL_EXT_blend_equation_separate", exts, count);
		if (!LoadExt(glBlendEquationSeparateEXT, load, "glBlendEquationSeparateEXT")) ext_GL_EXT_blend_equation_separate = false;
		#endif // GL_EXT_blend_equation_separate
		#ifdef GL_EXT_blend_func_separate
		ext_GL_EXT_blend_func_separate = Check("GL_EXT_blend_func_separate", exts, count);
		if (!LoadExt(glBlendFuncSeparateEXT, load, "glBlendFuncSeparateEXT")) ext_GL_EXT_blend_func_separate = false;
		#endif // GL_EXT_blend_func_separate
		#ifdef GL_EXT_blend_minmax
		ext_GL_EXT_blend_minmax = Check("GL_EXT_blend_minmax", exts, count);
		if (!LoadExt(glBlendEquationEXT, load, "glBlendEquationEXT")) ext_GL_EXT_blend_minmax = false;
		#endif // GL_EXT_blend_minmax
		#ifdef GL_EXT_blend_subtract
		ext_GL_EXT_blend_subtract = Check("GL_EXT_blend_subtract", exts, count);
		#endif // GL_EXT_blend_subtract
		#ifdef GL_EXT_clip_volume_hint
		ext_GL_EXT_clip_volume_hint = Check("GL_EXT_clip_volume_hint", exts, count);
		#endif // GL_EXT_clip_volume_hint
		#ifdef GL_EXT_cmyka
		ext_GL_EXT_cmyka = Check("GL_EXT_cmyka", exts, count);
		#endif // GL_EXT_cmyka
		#ifdef GL_EXT_color_subtable
		ext_GL_EXT_color_subtable = Check("GL_EXT_color_subtable", exts, count);
		if (!LoadExt(glColorSubTableEXT, load, "glColorSubTableEXT")) ext_GL_EXT_color_subtable = false;
		if (!LoadExt(glCopyColorSubTableEXT, load, "glCopyColorSubTableEXT")) ext_GL_EXT_color_subtable = false;
		#endif // GL_EXT_color_subtable
		#ifdef GL_EXT_compiled_vertex_array
		ext_GL_EXT_compiled_vertex_array = Check("GL_EXT_compiled_vertex_array", exts, count);
		if (!LoadExt(glLockArraysEXT, load, "glLockArraysEXT")) ext_GL_EXT_compiled_vertex_array = false;
		if (!LoadExt(glUnlockArraysEXT, load, "glUnlockArraysEXT")) ext_GL_EXT_compiled_vertex_array = false;
		#endif // GL_EXT_compiled_vertex_array
		#ifdef GL_EXT_convolution
		ext_GL_EXT_convolution = Check("GL_EXT_convolution", exts, count);
		if (!LoadExt(glConvolutionFilter1DEXT, load, "glConvolutionFilter1DEXT")) ext_GL_EXT_convolution = false;
		if (!LoadExt(glConvolutionFilter2DEXT, load, "glConvolutionFilter2DEXT")) ext_GL_EXT_convolution = false;
		if (!LoadExt(glConvolutionParameterfEXT, load, "glConvolutionParameterfEXT")) ext_GL_EXT_convolution = false;
		if (!LoadExt(glConvolutionParameterfvEXT, load, "glConvolutionParameterfvEXT")) ext_GL_EXT_convolution = false;
		if (!LoadExt(glConvolutionParameteriEXT, load, "glConvolutionParameteriEXT")) ext_GL_EXT_convolution = false;
		if (!LoadExt(glConvolutionParameterivEXT, load, "glConvolutionParameterivEXT")) ext_GL_EXT_convolution = false;
		if (!LoadExt(glCopyConvolutionFilter1DEXT, load, "glCopyConvolutionFilter1DEXT")) ext_GL_EXT_convolution = false;
		if (!LoadExt(glCopyConvolutionFilter2DEXT, load, "glCopyConvolutionFilter2DEXT")) ext_GL_EXT_convolution = false;
		if (!LoadExt(glGetConvolutionFilterEXT, load, "glGetConvolutionFilterEXT")) ext_GL_EXT_convolution = false;
		if (!LoadExt(glGetConvolutionParameterfvEXT, load, "glGetConvolutionParameterfvEXT")) ext_GL_EXT_convolution = false;
		if (!LoadExt(glGetConvolutionParameterivEXT, load, "glGetConvolutionParameterivEXT")) ext_GL_EXT_convolution = false;
		if (!LoadExt(glGetSeparableFilterEXT, load, "glGetSeparableFilterEXT")) ext_GL_EXT_convolution = false;
		if (!LoadExt(glSeparableFilter2DEXT, load, "glSeparableFilter2DEXT")) ext_GL_EXT_convolution = false;
		#endif // GL_EXT_convolution
		#ifdef GL_EXT_coordinate_frame
		ext_GL_EXT_coordinate_frame = Check("GL_EXT_coordinate_frame", exts, count);
		if (!LoadExt(glBinormal3bEXT, load, "glBinormal3bEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glBinormal3bvEXT, load, "glBinormal3bvEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glBinormal3dEXT, load, "glBinormal3dEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glBinormal3dvEXT, load, "glBinormal3dvEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glBinormal3fEXT, load, "glBinormal3fEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glBinormal3fvEXT, load, "glBinormal3fvEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glBinormal3iEXT, load, "glBinormal3iEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glBinormal3ivEXT, load, "glBinormal3ivEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glBinormal3sEXT, load, "glBinormal3sEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glBinormal3svEXT, load, "glBinormal3svEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glBinormalPointerEXT, load, "glBinormalPointerEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glTangent3bEXT, load, "glTangent3bEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glTangent3bvEXT, load, "glTangent3bvEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glTangent3dEXT, load, "glTangent3dEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glTangent3dvEXT, load, "glTangent3dvEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glTangent3fEXT, load, "glTangent3fEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glTangent3fvEXT, load, "glTangent3fvEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glTangent3iEXT, load, "glTangent3iEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glTangent3ivEXT, load, "glTangent3ivEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glTangent3sEXT, load, "glTangent3sEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glTangent3svEXT, load, "glTangent3svEXT")) ext_GL_EXT_coordinate_frame = false;
		if (!LoadExt(glTangentPointerEXT, load, "glTangentPointerEXT")) ext_GL_EXT_coordinate_frame = false;
		#endif // GL_EXT_coordinate_frame
		#ifdef GL_EXT_copy_texture
		ext_GL_EXT_copy_texture = Check("GL_EXT_copy_texture", exts, count);
		if (!LoadExt(glCopyTexImage1DEXT, load, "glCopyTexImage1DEXT")) ext_GL_EXT_copy_texture = false;
		if (!LoadExt(glCopyTexImage2DEXT, load, "glCopyTexImage2DEXT")) ext_GL_EXT_copy_texture = false;
		if (!LoadExt(glCopyTexSubImage1DEXT, load, "glCopyTexSubImage1DEXT")) ext_GL_EXT_copy_texture = false;
		if (!LoadExt(glCopyTexSubImage2DEXT, load, "glCopyTexSubImage2DEXT")) ext_GL_EXT_copy_texture = false;
		if (!LoadExt(glCopyTexSubImage3DEXT, load, "glCopyTexSubImage3DEXT")) ext_GL_EXT_copy_texture = false;
		#endif // GL_EXT_copy_texture
		#ifdef GL_EXT_cull_vertex
		ext_GL_EXT_cull_vertex = Check("GL_EXT_cull_vertex", exts, count);
		if (!LoadExt(glCullParameterdvEXT, load, "glCullParameterdvEXT")) ext_GL_EXT_cull_vertex = false;
		if (!LoadExt(glCullParameterfvEXT, load, "glCullParameterfvEXT")) ext_GL_EXT_cull_vertex = false;
		#endif // GL_EXT_cull_vertex
		#ifdef GL_EXT_debug_label
		ext_GL_EXT_debug_label = Check("GL_EXT_debug_label", exts, count);
		if (!LoadExt(glGetObjectLabelEXT, load, "glGetObjectLabelEXT")) ext_GL_EXT_debug_label = false;
		if (!LoadExt(glLabelObjectEXT, load, "glLabelObjectEXT")) ext_GL_EXT_debug_label = false;
		#endif // GL_EXT_debug_label
		#ifdef GL_EXT_debug_marker
		ext_GL_EXT_debug_marker = Check("GL_EXT_debug_marker", exts, count);
		if (!LoadExt(glInsertEventMarkerEXT, load, "glInsertEventMarkerEXT")) ext_GL_EXT_debug_marker = false;
		if (!LoadExt(glPopGroupMarkerEXT, load, "glPopGroupMarkerEXT")) ext_GL_EXT_debug_marker = false;
		if (!LoadExt(glPushGroupMarkerEXT, load, "glPushGroupMarkerEXT")) ext_GL_EXT_debug_marker = false;
		#endif // GL_EXT_debug_marker
		#ifdef GL_EXT_depth_bounds_test
		ext_GL_EXT_depth_bounds_test = Check("GL_EXT_depth_bounds_test", exts, count);
		if (!LoadExt(glDepthBoundsEXT, load, "glDepthBoundsEXT")) ext_GL_EXT_depth_bounds_test = false;
		#endif // GL_EXT_depth_bounds_test
		#ifdef GL_EXT_direct_state_access
		ext_GL_EXT_direct_state_access = Check("GL_EXT_direct_state_access", exts, count);
		if (!LoadExt(glBindMultiTextureEXT, load, "glBindMultiTextureEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCheckNamedFramebufferStatusEXT, load, "glCheckNamedFramebufferStatusEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glClearNamedBufferDataEXT, load, "glClearNamedBufferDataEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glClearNamedBufferSubDataEXT, load, "glClearNamedBufferSubDataEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glClientAttribDefaultEXT, load, "glClientAttribDefaultEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCompressedMultiTexImage1DEXT, load, "glCompressedMultiTexImage1DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCompressedMultiTexImage2DEXT, load, "glCompressedMultiTexImage2DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCompressedMultiTexImage3DEXT, load, "glCompressedMultiTexImage3DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCompressedMultiTexSubImage1DEXT, load, "glCompressedMultiTexSubImage1DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCompressedMultiTexSubImage2DEXT, load, "glCompressedMultiTexSubImage2DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCompressedMultiTexSubImage3DEXT, load, "glCompressedMultiTexSubImage3DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCompressedTextureImage1DEXT, load, "glCompressedTextureImage1DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCompressedTextureImage2DEXT, load, "glCompressedTextureImage2DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCompressedTextureImage3DEXT, load, "glCompressedTextureImage3DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCompressedTextureSubImage1DEXT, load, "glCompressedTextureSubImage1DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCompressedTextureSubImage2DEXT, load, "glCompressedTextureSubImage2DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCompressedTextureSubImage3DEXT, load, "glCompressedTextureSubImage3DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCopyMultiTexImage1DEXT, load, "glCopyMultiTexImage1DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCopyMultiTexImage2DEXT, load, "glCopyMultiTexImage2DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCopyMultiTexSubImage1DEXT, load, "glCopyMultiTexSubImage1DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCopyMultiTexSubImage2DEXT, load, "glCopyMultiTexSubImage2DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCopyMultiTexSubImage3DEXT, load, "glCopyMultiTexSubImage3DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCopyTextureImage1DEXT, load, "glCopyTextureImage1DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCopyTextureImage2DEXT, load, "glCopyTextureImage2DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCopyTextureSubImage1DEXT, load, "glCopyTextureSubImage1DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCopyTextureSubImage2DEXT, load, "glCopyTextureSubImage2DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glCopyTextureSubImage3DEXT, load, "glCopyTextureSubImage3DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glDisableClientStateIndexedEXT, load, "glDisableClientStateIndexedEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glDisableClientStateiEXT, load, "glDisableClientStateiEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glDisableIndexedEXT, load, "glDisableIndexedEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glDisableVertexArrayAttribEXT, load, "glDisableVertexArrayAttribEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glDisableVertexArrayEXT, load, "glDisableVertexArrayEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glEnableClientStateIndexedEXT, load, "glEnableClientStateIndexedEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glEnableClientStateiEXT, load, "glEnableClientStateiEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glEnableIndexedEXT, load, "glEnableIndexedEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glEnableVertexArrayAttribEXT, load, "glEnableVertexArrayAttribEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glEnableVertexArrayEXT, load, "glEnableVertexArrayEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glFlushMappedNamedBufferRangeEXT, load, "glFlushMappedNamedBufferRangeEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glFramebufferDrawBufferEXT, load, "glFramebufferDrawBufferEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glFramebufferDrawBuffersEXT, load, "glFramebufferDrawBuffersEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glFramebufferReadBufferEXT, load, "glFramebufferReadBufferEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGenerateMultiTexMipmapEXT, load, "glGenerateMultiTexMipmapEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGenerateTextureMipmapEXT, load, "glGenerateTextureMipmapEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetBooleanIndexedvEXT, load, "glGetBooleanIndexedvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetCompressedMultiTexImageEXT, load, "glGetCompressedMultiTexImageEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetCompressedTextureImageEXT, load, "glGetCompressedTextureImageEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetDoubleIndexedvEXT, load, "glGetDoubleIndexedvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetDoublei_vEXT, load, "glGetDoublei_vEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetFloatIndexedvEXT, load, "glGetFloatIndexedvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetFloati_vEXT, load, "glGetFloati_vEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetFramebufferParameterivEXT, load, "glGetFramebufferParameterivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetIntegerIndexedvEXT, load, "glGetIntegerIndexedvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetMultiTexEnvfvEXT, load, "glGetMultiTexEnvfvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetMultiTexEnvivEXT, load, "glGetMultiTexEnvivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetMultiTexGendvEXT, load, "glGetMultiTexGendvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetMultiTexGenfvEXT, load, "glGetMultiTexGenfvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetMultiTexGenivEXT, load, "glGetMultiTexGenivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetMultiTexImageEXT, load, "glGetMultiTexImageEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetMultiTexLevelParameterfvEXT, load, "glGetMultiTexLevelParameterfvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetMultiTexLevelParameterivEXT, load, "glGetMultiTexLevelParameterivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetMultiTexParameterIivEXT, load, "glGetMultiTexParameterIivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetMultiTexParameterIuivEXT, load, "glGetMultiTexParameterIuivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetMultiTexParameterfvEXT, load, "glGetMultiTexParameterfvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetMultiTexParameterivEXT, load, "glGetMultiTexParameterivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetNamedBufferParameterivEXT, load, "glGetNamedBufferParameterivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetNamedBufferPointervEXT, load, "glGetNamedBufferPointervEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetNamedBufferSubDataEXT, load, "glGetNamedBufferSubDataEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetNamedFramebufferAttachmentParameterivEXT, load, "glGetNamedFramebufferAttachmentParameterivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetNamedFramebufferParameterivEXT, load, "glGetNamedFramebufferParameterivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetNamedProgramLocalParameterIivEXT, load, "glGetNamedProgramLocalParameterIivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetNamedProgramLocalParameterIuivEXT, load, "glGetNamedProgramLocalParameterIuivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetNamedProgramLocalParameterdvEXT, load, "glGetNamedProgramLocalParameterdvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetNamedProgramLocalParameterfvEXT, load, "glGetNamedProgramLocalParameterfvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetNamedProgramStringEXT, load, "glGetNamedProgramStringEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetNamedProgramivEXT, load, "glGetNamedProgramivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetNamedRenderbufferParameterivEXT, load, "glGetNamedRenderbufferParameterivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetPointerIndexedvEXT, load, "glGetPointerIndexedvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetPointeri_vEXT, load, "glGetPointeri_vEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetTextureImageEXT, load, "glGetTextureImageEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetTextureLevelParameterfvEXT, load, "glGetTextureLevelParameterfvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetTextureLevelParameterivEXT, load, "glGetTextureLevelParameterivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetTextureParameterIivEXT, load, "glGetTextureParameterIivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetTextureParameterIuivEXT, load, "glGetTextureParameterIuivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetTextureParameterfvEXT, load, "glGetTextureParameterfvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetTextureParameterivEXT, load, "glGetTextureParameterivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetVertexArrayIntegeri_vEXT, load, "glGetVertexArrayIntegeri_vEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetVertexArrayIntegervEXT, load, "glGetVertexArrayIntegervEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetVertexArrayPointeri_vEXT, load, "glGetVertexArrayPointeri_vEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glGetVertexArrayPointervEXT, load, "glGetVertexArrayPointervEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glIsEnabledIndexedEXT, load, "glIsEnabledIndexedEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMapNamedBufferEXT, load, "glMapNamedBufferEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMapNamedBufferRangeEXT, load, "glMapNamedBufferRangeEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixFrustumEXT, load, "glMatrixFrustumEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixLoadIdentityEXT, load, "glMatrixLoadIdentityEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixLoadTransposedEXT, load, "glMatrixLoadTransposedEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixLoadTransposefEXT, load, "glMatrixLoadTransposefEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixLoaddEXT, load, "glMatrixLoaddEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixLoadfEXT, load, "glMatrixLoadfEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixMultTransposedEXT, load, "glMatrixMultTransposedEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixMultTransposefEXT, load, "glMatrixMultTransposefEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixMultdEXT, load, "glMatrixMultdEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixMultfEXT, load, "glMatrixMultfEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixOrthoEXT, load, "glMatrixOrthoEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixPopEXT, load, "glMatrixPopEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixPushEXT, load, "glMatrixPushEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixRotatedEXT, load, "glMatrixRotatedEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixRotatefEXT, load, "glMatrixRotatefEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixScaledEXT, load, "glMatrixScaledEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixScalefEXT, load, "glMatrixScalefEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixTranslatedEXT, load, "glMatrixTranslatedEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMatrixTranslatefEXT, load, "glMatrixTranslatefEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexBufferEXT, load, "glMultiTexBufferEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexCoordPointerEXT, load, "glMultiTexCoordPointerEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexEnvfEXT, load, "glMultiTexEnvfEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexEnvfvEXT, load, "glMultiTexEnvfvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexEnviEXT, load, "glMultiTexEnviEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexEnvivEXT, load, "glMultiTexEnvivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexGendEXT, load, "glMultiTexGendEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexGendvEXT, load, "glMultiTexGendvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexGenfEXT, load, "glMultiTexGenfEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexGenfvEXT, load, "glMultiTexGenfvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexGeniEXT, load, "glMultiTexGeniEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexGenivEXT, load, "glMultiTexGenivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexImage1DEXT, load, "glMultiTexImage1DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexImage2DEXT, load, "glMultiTexImage2DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexImage3DEXT, load, "glMultiTexImage3DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexParameterIivEXT, load, "glMultiTexParameterIivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexParameterIuivEXT, load, "glMultiTexParameterIuivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexParameterfEXT, load, "glMultiTexParameterfEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexParameterfvEXT, load, "glMultiTexParameterfvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexParameteriEXT, load, "glMultiTexParameteriEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexParameterivEXT, load, "glMultiTexParameterivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexRenderbufferEXT, load, "glMultiTexRenderbufferEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexSubImage1DEXT, load, "glMultiTexSubImage1DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexSubImage2DEXT, load, "glMultiTexSubImage2DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glMultiTexSubImage3DEXT, load, "glMultiTexSubImage3DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedBufferDataEXT, load, "glNamedBufferDataEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedBufferStorageEXT, load, "glNamedBufferStorageEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedBufferSubDataEXT, load, "glNamedBufferSubDataEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedCopyBufferSubDataEXT, load, "glNamedCopyBufferSubDataEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedFramebufferParameteriEXT, load, "glNamedFramebufferParameteriEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedFramebufferRenderbufferEXT, load, "glNamedFramebufferRenderbufferEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedFramebufferTexture1DEXT, load, "glNamedFramebufferTexture1DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedFramebufferTexture2DEXT, load, "glNamedFramebufferTexture2DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedFramebufferTexture3DEXT, load, "glNamedFramebufferTexture3DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedFramebufferTextureEXT, load, "glNamedFramebufferTextureEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedFramebufferTextureFaceEXT, load, "glNamedFramebufferTextureFaceEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedFramebufferTextureLayerEXT, load, "glNamedFramebufferTextureLayerEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedProgramLocalParameter4dEXT, load, "glNamedProgramLocalParameter4dEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedProgramLocalParameter4dvEXT, load, "glNamedProgramLocalParameter4dvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedProgramLocalParameter4fEXT, load, "glNamedProgramLocalParameter4fEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedProgramLocalParameter4fvEXT, load, "glNamedProgramLocalParameter4fvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedProgramLocalParameterI4iEXT, load, "glNamedProgramLocalParameterI4iEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedProgramLocalParameterI4ivEXT, load, "glNamedProgramLocalParameterI4ivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedProgramLocalParameterI4uiEXT, load, "glNamedProgramLocalParameterI4uiEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedProgramLocalParameterI4uivEXT, load, "glNamedProgramLocalParameterI4uivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedProgramLocalParameters4fvEXT, load, "glNamedProgramLocalParameters4fvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedProgramLocalParametersI4ivEXT, load, "glNamedProgramLocalParametersI4ivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedProgramLocalParametersI4uivEXT, load, "glNamedProgramLocalParametersI4uivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedProgramStringEXT, load, "glNamedProgramStringEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedRenderbufferStorageEXT, load, "glNamedRenderbufferStorageEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedRenderbufferStorageMultisampleCoverageEXT, load, "glNamedRenderbufferStorageMultisampleCoverageEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glNamedRenderbufferStorageMultisampleEXT, load, "glNamedRenderbufferStorageMultisampleEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform1dEXT, load, "glProgramUniform1dEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform1dvEXT, load, "glProgramUniform1dvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform1fEXT, load, "glProgramUniform1fEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform1fvEXT, load, "glProgramUniform1fvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform1iEXT, load, "glProgramUniform1iEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform1ivEXT, load, "glProgramUniform1ivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform1uiEXT, load, "glProgramUniform1uiEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform1uivEXT, load, "glProgramUniform1uivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform2dEXT, load, "glProgramUniform2dEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform2dvEXT, load, "glProgramUniform2dvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform2fEXT, load, "glProgramUniform2fEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform2fvEXT, load, "glProgramUniform2fvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform2iEXT, load, "glProgramUniform2iEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform2ivEXT, load, "glProgramUniform2ivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform2uiEXT, load, "glProgramUniform2uiEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform2uivEXT, load, "glProgramUniform2uivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform3dEXT, load, "glProgramUniform3dEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform3dvEXT, load, "glProgramUniform3dvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform3fEXT, load, "glProgramUniform3fEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform3fvEXT, load, "glProgramUniform3fvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform3iEXT, load, "glProgramUniform3iEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform3ivEXT, load, "glProgramUniform3ivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform3uiEXT, load, "glProgramUniform3uiEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform3uivEXT, load, "glProgramUniform3uivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform4dEXT, load, "glProgramUniform4dEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform4dvEXT, load, "glProgramUniform4dvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform4fEXT, load, "glProgramUniform4fEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform4fvEXT, load, "glProgramUniform4fvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform4iEXT, load, "glProgramUniform4iEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform4ivEXT, load, "glProgramUniform4ivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform4uiEXT, load, "glProgramUniform4uiEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniform4uivEXT, load, "glProgramUniform4uivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix2dvEXT, load, "glProgramUniformMatrix2dvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix2fvEXT, load, "glProgramUniformMatrix2fvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix2x3dvEXT, load, "glProgramUniformMatrix2x3dvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix2x3fvEXT, load, "glProgramUniformMatrix2x3fvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix2x4dvEXT, load, "glProgramUniformMatrix2x4dvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix2x4fvEXT, load, "glProgramUniformMatrix2x4fvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix3dvEXT, load, "glProgramUniformMatrix3dvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix3fvEXT, load, "glProgramUniformMatrix3fvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix3x2dvEXT, load, "glProgramUniformMatrix3x2dvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix3x2fvEXT, load, "glProgramUniformMatrix3x2fvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix3x4dvEXT, load, "glProgramUniformMatrix3x4dvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix3x4fvEXT, load, "glProgramUniformMatrix3x4fvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix4dvEXT, load, "glProgramUniformMatrix4dvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix4fvEXT, load, "glProgramUniformMatrix4fvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix4x2dvEXT, load, "glProgramUniformMatrix4x2dvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix4x2fvEXT, load, "glProgramUniformMatrix4x2fvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix4x3dvEXT, load, "glProgramUniformMatrix4x3dvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glProgramUniformMatrix4x3fvEXT, load, "glProgramUniformMatrix4x3fvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glPushClientAttribDefaultEXT, load, "glPushClientAttribDefaultEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureBufferEXT, load, "glTextureBufferEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureBufferRangeEXT, load, "glTextureBufferRangeEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureImage1DEXT, load, "glTextureImage1DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureImage2DEXT, load, "glTextureImage2DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureImage3DEXT, load, "glTextureImage3DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTexturePageCommitmentEXT, load, "glTexturePageCommitmentEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureParameterIivEXT, load, "glTextureParameterIivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureParameterIuivEXT, load, "glTextureParameterIuivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureParameterfEXT, load, "glTextureParameterfEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureParameterfvEXT, load, "glTextureParameterfvEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureParameteriEXT, load, "glTextureParameteriEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureParameterivEXT, load, "glTextureParameterivEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureRenderbufferEXT, load, "glTextureRenderbufferEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureStorage1DEXT, load, "glTextureStorage1DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureStorage2DEXT, load, "glTextureStorage2DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureStorage2DMultisampleEXT, load, "glTextureStorage2DMultisampleEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureStorage3DEXT, load, "glTextureStorage3DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureStorage3DMultisampleEXT, load, "glTextureStorage3DMultisampleEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureSubImage1DEXT, load, "glTextureSubImage1DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureSubImage2DEXT, load, "glTextureSubImage2DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glTextureSubImage3DEXT, load, "glTextureSubImage3DEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glUnmapNamedBufferEXT, load, "glUnmapNamedBufferEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayBindVertexBufferEXT, load, "glVertexArrayBindVertexBufferEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayColorOffsetEXT, load, "glVertexArrayColorOffsetEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayEdgeFlagOffsetEXT, load, "glVertexArrayEdgeFlagOffsetEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayFogCoordOffsetEXT, load, "glVertexArrayFogCoordOffsetEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayIndexOffsetEXT, load, "glVertexArrayIndexOffsetEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayMultiTexCoordOffsetEXT, load, "glVertexArrayMultiTexCoordOffsetEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayNormalOffsetEXT, load, "glVertexArrayNormalOffsetEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArraySecondaryColorOffsetEXT, load, "glVertexArraySecondaryColorOffsetEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayTexCoordOffsetEXT, load, "glVertexArrayTexCoordOffsetEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayVertexAttribBindingEXT, load, "glVertexArrayVertexAttribBindingEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayVertexAttribDivisorEXT, load, "glVertexArrayVertexAttribDivisorEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayVertexAttribFormatEXT, load, "glVertexArrayVertexAttribFormatEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayVertexAttribIFormatEXT, load, "glVertexArrayVertexAttribIFormatEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayVertexAttribIOffsetEXT, load, "glVertexArrayVertexAttribIOffsetEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayVertexAttribLFormatEXT, load, "glVertexArrayVertexAttribLFormatEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayVertexAttribLOffsetEXT, load, "glVertexArrayVertexAttribLOffsetEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayVertexAttribOffsetEXT, load, "glVertexArrayVertexAttribOffsetEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayVertexBindingDivisorEXT, load, "glVertexArrayVertexBindingDivisorEXT")) ext_GL_EXT_direct_state_access = false;
		if (!LoadExt(glVertexArrayVertexOffsetEXT, load, "glVertexArrayVertexOffsetEXT")) ext_GL_EXT_direct_state_access = false;
		#endif // GL_EXT_direct_state_access
		#ifdef GL_EXT_draw_buffers2
		ext_GL_EXT_draw_buffers2 = Check("GL_EXT_draw_buffers2", exts, count);
		if (!LoadExt(glColorMaskIndexedEXT, load, "glColorMaskIndexedEXT")) ext_GL_EXT_draw_buffers2 = false;
		if (!LoadExt(glDisableIndexedEXT, load, "glDisableIndexedEXT")) ext_GL_EXT_draw_buffers2 = false;
		if (!LoadExt(glEnableIndexedEXT, load, "glEnableIndexedEXT")) ext_GL_EXT_draw_buffers2 = false;
		if (!LoadExt(glGetBooleanIndexedvEXT, load, "glGetBooleanIndexedvEXT")) ext_GL_EXT_draw_buffers2 = false;
		if (!LoadExt(glGetIntegerIndexedvEXT, load, "glGetIntegerIndexedvEXT")) ext_GL_EXT_draw_buffers2 = false;
		if (!LoadExt(glIsEnabledIndexedEXT, load, "glIsEnabledIndexedEXT")) ext_GL_EXT_draw_buffers2 = false;
		#endif // GL_EXT_draw_buffers2
		#ifdef GL_EXT_draw_instanced
		ext_GL_EXT_draw_instanced = Check("GL_EXT_draw_instanced", exts, count);
		if (!LoadExt(glDrawArraysInstancedEXT, load, "glDrawArraysInstancedEXT")) ext_GL_EXT_draw_instanced = false;
		if (!LoadExt(glDrawElementsInstancedEXT, load, "glDrawElementsInstancedEXT")) ext_GL_EXT_draw_instanced = false;
		#endif // GL_EXT_draw_instanced
		#ifdef GL_EXT_draw_range_elements
		ext_GL_EXT_draw_range_elements = Check("GL_EXT_draw_range_elements", exts, count);
		if (!LoadExt(glDrawRangeElementsEXT, load, "glDrawRangeElementsEXT")) ext_GL_EXT_draw_range_elements = false;
		#endif // GL_EXT_draw_range_elements
		#ifdef GL_EXT_fog_coord
		ext_GL_EXT_fog_coord = Check("GL_EXT_fog_coord", exts, count);
		if (!LoadExt(glFogCoordPointerEXT, load, "glFogCoordPointerEXT")) ext_GL_EXT_fog_coord = false;
		if (!LoadExt(glFogCoorddEXT, load, "glFogCoorddEXT")) ext_GL_EXT_fog_coord = false;
		if (!LoadExt(glFogCoorddvEXT, load, "glFogCoorddvEXT")) ext_GL_EXT_fog_coord = false;
		if (!LoadExt(glFogCoordfEXT, load, "glFogCoordfEXT")) ext_GL_EXT_fog_coord = false;
		if (!LoadExt(glFogCoordfvEXT, load, "glFogCoordfvEXT")) ext_GL_EXT_fog_coord = false;
		#endif // GL_EXT_fog_coord
		#ifdef GL_EXT_framebuffer_blit
		ext_GL_EXT_framebuffer_blit = Check("GL_EXT_framebuffer_blit", exts, count);
		if (!LoadExt(glBlitFramebufferEXT, load, "glBlitFramebufferEXT")) ext_GL_EXT_framebuffer_blit = false;
		#endif // GL_EXT_framebuffer_blit
		#ifdef GL_EXT_framebuffer_multisample
		ext_GL_EXT_framebuffer_multisample = Check("GL_EXT_framebuffer_multisample", exts, count);
		if (!LoadExt(glRenderbufferStorageMultisampleEXT, load, "glRenderbufferStorageMultisampleEXT")) ext_GL_EXT_framebuffer_multisample = false;
		#endif // GL_EXT_framebuffer_multisample
		#ifdef GL_EXT_framebuffer_multisample_blit_scaled
		ext_GL_EXT_framebuffer_multisample_blit_scaled = Check("GL_EXT_framebuffer_multisample_blit_scaled", exts, count);
		#endif // GL_EXT_framebuffer_multisample_blit_scaled
		#ifdef GL_EXT_framebuffer_object
		ext_GL_EXT_framebuffer_object = Check("GL_EXT_framebuffer_object", exts, count);
		if (!LoadExt(glBindFramebufferEXT, load, "glBindFramebufferEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glBindRenderbufferEXT, load, "glBindRenderbufferEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glCheckFramebufferStatusEXT, load, "glCheckFramebufferStatusEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glDeleteFramebuffersEXT, load, "glDeleteFramebuffersEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glDeleteRenderbuffersEXT, load, "glDeleteRenderbuffersEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glFramebufferRenderbufferEXT, load, "glFramebufferRenderbufferEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glFramebufferTexture1DEXT, load, "glFramebufferTexture1DEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glFramebufferTexture2DEXT, load, "glFramebufferTexture2DEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glFramebufferTexture3DEXT, load, "glFramebufferTexture3DEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glGenFramebuffersEXT, load, "glGenFramebuffersEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glGenRenderbuffersEXT, load, "glGenRenderbuffersEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glGenerateMipmapEXT, load, "glGenerateMipmapEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glGetFramebufferAttachmentParameterivEXT, load, "glGetFramebufferAttachmentParameterivEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glGetRenderbufferParameterivEXT, load, "glGetRenderbufferParameterivEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glIsFramebufferEXT, load, "glIsFramebufferEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glIsRenderbufferEXT, load, "glIsRenderbufferEXT")) ext_GL_EXT_framebuffer_object = false;
		if (!LoadExt(glRenderbufferStorageEXT, load, "glRenderbufferStorageEXT")) ext_GL_EXT_framebuffer_object = false;
		#endif // GL_EXT_framebuffer_object
		#ifdef GL_EXT_framebuffer_sRGB
		ext_GL_EXT_framebuffer_sRGB = Check("GL_EXT_framebuffer_sRGB", exts, count);
		#endif // GL_EXT_framebuffer_sRGB
		#ifdef GL_EXT_geometry_shader4
		ext_GL_EXT_geometry_shader4 = Check("GL_EXT_geometry_shader4", exts, count);
		if (!LoadExt(glProgramParameteriEXT, load, "glProgramParameteriEXT")) ext_GL_EXT_geometry_shader4 = false;
		#endif // GL_EXT_geometry_shader4
		#ifdef GL_EXT_gpu_program_parameters
		ext_GL_EXT_gpu_program_parameters = Check("GL_EXT_gpu_program_parameters", exts, count);
		if (!LoadExt(glProgramEnvParameters4fvEXT, load, "glProgramEnvParameters4fvEXT")) ext_GL_EXT_gpu_program_parameters = false;
		if (!LoadExt(glProgramLocalParameters4fvEXT, load, "glProgramLocalParameters4fvEXT")) ext_GL_EXT_gpu_program_parameters = false;
		#endif // GL_EXT_gpu_program_parameters
		#ifdef GL_EXT_gpu_shader4
		ext_GL_EXT_gpu_shader4 = Check("GL_EXT_gpu_shader4", exts, count);
		if (!LoadExt(glBindFragDataLocationEXT, load, "glBindFragDataLocationEXT")) ext_GL_EXT_gpu_shader4 = false;
		if (!LoadExt(glGetFragDataLocationEXT, load, "glGetFragDataLocationEXT")) ext_GL_EXT_gpu_shader4 = false;
		if (!LoadExt(glGetUniformuivEXT, load, "glGetUniformuivEXT")) ext_GL_EXT_gpu_shader4 = false;
		if (!LoadExt(glUniform1uiEXT, load, "glUniform1uiEXT")) ext_GL_EXT_gpu_shader4 = false;
		if (!LoadExt(glUniform1uivEXT, load, "glUniform1uivEXT")) ext_GL_EXT_gpu_shader4 = false;
		if (!LoadExt(glUniform2uiEXT, load, "glUniform2uiEXT")) ext_GL_EXT_gpu_shader4 = false;
		if (!LoadExt(glUniform2uivEXT, load, "glUniform2uivEXT")) ext_GL_EXT_gpu_shader4 = false;
		if (!LoadExt(glUniform3uiEXT, load, "glUniform3uiEXT")) ext_GL_EXT_gpu_shader4 = false;
		if (!LoadExt(glUniform3uivEXT, load, "glUniform3uivEXT")) ext_GL_EXT_gpu_shader4 = false;
		if (!LoadExt(glUniform4uiEXT, load, "glUniform4uiEXT")) ext_GL_EXT_gpu_shader4 = false;
		if (!LoadExt(glUniform4uivEXT, load, "glUniform4uivEXT")) ext_GL_EXT_gpu_shader4 = false;
		#endif // GL_EXT_gpu_shader4
		#ifdef GL_EXT_histogram
		ext_GL_EXT_histogram = Check("GL_EXT_histogram", exts, count);
		if (!LoadExt(glGetHistogramEXT, load, "glGetHistogramEXT")) ext_GL_EXT_histogram = false;
		if (!LoadExt(glGetHistogramParameterfvEXT, load, "glGetHistogramParameterfvEXT")) ext_GL_EXT_histogram = false;
		if (!LoadExt(glGetHistogramParameterivEXT, load, "glGetHistogramParameterivEXT")) ext_GL_EXT_histogram = false;
		if (!LoadExt(glGetMinmaxEXT, load, "glGetMinmaxEXT")) ext_GL_EXT_histogram = false;
		if (!LoadExt(glGetMinmaxParameterfvEXT, load, "glGetMinmaxParameterfvEXT")) ext_GL_EXT_histogram = false;
		if (!LoadExt(glGetMinmaxParameterivEXT, load, "glGetMinmaxParameterivEXT")) ext_GL_EXT_histogram = false;
		if (!LoadExt(glHistogramEXT, load, "glHistogramEXT")) ext_GL_EXT_histogram = false;
		if (!LoadExt(glMinmaxEXT, load, "glMinmaxEXT")) ext_GL_EXT_histogram = false;
		if (!LoadExt(glResetHistogramEXT, load, "glResetHistogramEXT")) ext_GL_EXT_histogram = false;
		if (!LoadExt(glResetMinmaxEXT, load, "glResetMinmaxEXT")) ext_GL_EXT_histogram = false;
		#endif // GL_EXT_histogram
		#ifdef GL_EXT_index_array_formats
		ext_GL_EXT_index_array_formats = Check("GL_EXT_index_array_formats", exts, count);
		#endif // GL_EXT_index_array_formats
		#ifdef GL_EXT_index_func
		ext_GL_EXT_index_func = Check("GL_EXT_index_func", exts, count);
		if (!LoadExt(glIndexFuncEXT, load, "glIndexFuncEXT")) ext_GL_EXT_index_func = false;
		#endif // GL_EXT_index_func
		#ifdef GL_EXT_index_material
		ext_GL_EXT_index_material = Check("GL_EXT_index_material", exts, count);
		if (!LoadExt(glIndexMaterialEXT, load, "glIndexMaterialEXT")) ext_GL_EXT_index_material = false;
		#endif // GL_EXT_index_material
		#ifdef GL_EXT_light_texture
		ext_GL_EXT_light_texture = Check("GL_EXT_light_texture", exts, count);
		if (!LoadExt(glApplyTextureEXT, load, "glApplyTextureEXT")) ext_GL_EXT_light_texture = false;
		if (!LoadExt(glTextureLightEXT, load, "glTextureLightEXT")) ext_GL_EXT_light_texture = false;
		if (!LoadExt(glTextureMaterialEXT, load, "glTextureMaterialEXT")) ext_GL_EXT_light_texture = false;
		#endif // GL_EXT_light_texture
		#ifdef GL_EXT_multi_draw_arrays
		ext_GL_EXT_multi_draw_arrays = Check("GL_EXT_multi_draw_arrays", exts, count);
		if (!LoadExt(glMultiDrawArraysEXT, load, "glMultiDrawArraysEXT")) ext_GL_EXT_multi_draw_arrays = false;
		if (!LoadExt(glMultiDrawElementsEXT, load, "glMultiDrawElementsEXT")) ext_GL_EXT_multi_draw_arrays = false;
		#endif // GL_EXT_multi_draw_arrays
		#ifdef GL_EXT_multisample
		ext_GL_EXT_multisample = Check("GL_EXT_multisample", exts, count);
		if (!LoadExt(glSampleMaskEXT, load, "glSampleMaskEXT")) ext_GL_EXT_multisample = false;
		if (!LoadExt(glSamplePatternEXT, load, "glSamplePatternEXT")) ext_GL_EXT_multisample = false;
		#endif // GL_EXT_multisample
		#ifdef GL_EXT_packed_depth_stencil
		ext_GL_EXT_packed_depth_stencil = Check("GL_EXT_packed_depth_stencil", exts, count);
		#endif // GL_EXT_packed_depth_stencil
		#ifdef GL_EXT_packed_float
		ext_GL_EXT_packed_float = Check("GL_EXT_packed_float", exts, count);
		#endif // GL_EXT_packed_float
		#ifdef GL_EXT_packed_pixels
		ext_GL_EXT_packed_pixels = Check("GL_EXT_packed_pixels", exts, count);
		#endif // GL_EXT_packed_pixels
		#ifdef GL_EXT_paletted_texture
		ext_GL_EXT_paletted_texture = Check("GL_EXT_paletted_texture", exts, count);
		if (!LoadExt(glColorTableEXT, load, "glColorTableEXT")) ext_GL_EXT_paletted_texture = false;
		if (!LoadExt(glGetColorTableEXT, load, "glGetColorTableEXT")) ext_GL_EXT_paletted_texture = false;
		if (!LoadExt(glGetColorTableParameterfvEXT, load, "glGetColorTableParameterfvEXT")) ext_GL_EXT_paletted_texture = false;
		if (!LoadExt(glGetColorTableParameterivEXT, load, "glGetColorTableParameterivEXT")) ext_GL_EXT_paletted_texture = false;
		#endif // GL_EXT_paletted_texture
		#ifdef GL_EXT_pixel_buffer_object
		ext_GL_EXT_pixel_buffer_object = Check("GL_EXT_pixel_buffer_object", exts, count);
		#endif // GL_EXT_pixel_buffer_object
		#ifdef GL_EXT_pixel_transform
		ext_GL_EXT_pixel_transform = Check("GL_EXT_pixel_transform", exts, count);
		if (!LoadExt(glGetPixelTransformParameterfvEXT, load, "glGetPixelTransformParameterfvEXT")) ext_GL_EXT_pixel_transform = false;
		if (!LoadExt(glGetPixelTransformParameterivEXT, load, "glGetPixelTransformParameterivEXT")) ext_GL_EXT_pixel_transform = false;
		if (!LoadExt(glPixelTransformParameterfEXT, load, "glPixelTransformParameterfEXT")) ext_GL_EXT_pixel_transform = false;
		if (!LoadExt(glPixelTransformParameterfvEXT, load, "glPixelTransformParameterfvEXT")) ext_GL_EXT_pixel_transform = false;
		if (!LoadExt(glPixelTransformParameteriEXT, load, "glPixelTransformParameteriEXT")) ext_GL_EXT_pixel_transform = false;
		if (!LoadExt(glPixelTransformParameterivEXT, load, "glPixelTransformParameterivEXT")) ext_GL_EXT_pixel_transform = false;
		#endif // GL_EXT_pixel_transform
		#ifdef GL_EXT_point_parameters
		ext_GL_EXT_point_parameters = Check("GL_EXT_point_parameters", exts, count);
		if (!LoadExt(glPointParameterfEXT, load, "glPointParameterfEXT")) ext_GL_EXT_point_parameters = false;
		if (!LoadExt(glPointParameterfvEXT, load, "glPointParameterfvEXT")) ext_GL_EXT_point_parameters = false;
		#endif // GL_EXT_point_parameters
		#ifdef GL_EXT_polygon_offset
		ext_GL_EXT_polygon_offset = Check("GL_EXT_polygon_offset", exts, count);
		if (!LoadExt(glPolygonOffsetEXT, load, "glPolygonOffsetEXT")) ext_GL_EXT_polygon_offset = false;
		#endif // GL_EXT_polygon_offset
		#ifdef GL_EXT_polygon_offset_clamp
		ext_GL_EXT_polygon_offset_clamp = Check("GL_EXT_polygon_offset_clamp", exts, count);
		if (!LoadExt(glPolygonOffsetClampEXT, load, "glPolygonOffsetClampEXT")) ext_GL_EXT_polygon_offset_clamp = false;
		#endif // GL_EXT_polygon_offset_clamp
		#ifdef GL_EXT_provoking_vertex
		ext_GL_EXT_provoking_vertex = Check("GL_EXT_provoking_vertex", exts, count);
		if (!LoadExt(glProvokingVertexEXT, load, "glProvokingVertexEXT")) ext_GL_EXT_provoking_vertex = false;
		#endif // GL_EXT_provoking_vertex
		#ifdef GL_EXT_raster_multisample
		ext_GL_EXT_raster_multisample = Check("GL_EXT_raster_multisample", exts, count);
		if (!LoadExt(glRasterSamplesEXT, load, "glRasterSamplesEXT")) ext_GL_EXT_raster_multisample = false;
		#endif // GL_EXT_raster_multisample
		#ifdef GL_EXT_rescale_normal
		ext_GL_EXT_rescale_normal = Check("GL_EXT_rescale_normal", exts, count);
		#endif // GL_EXT_rescale_normal
		#ifdef GL_EXT_secondary_color
		ext_GL_EXT_secondary_color = Check("GL_EXT_secondary_color", exts, count);
		if (!LoadExt(glSecondaryColor3bEXT, load, "glSecondaryColor3bEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColor3bvEXT, load, "glSecondaryColor3bvEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColor3dEXT, load, "glSecondaryColor3dEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColor3dvEXT, load, "glSecondaryColor3dvEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColor3fEXT, load, "glSecondaryColor3fEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColor3fvEXT, load, "glSecondaryColor3fvEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColor3iEXT, load, "glSecondaryColor3iEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColor3ivEXT, load, "glSecondaryColor3ivEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColor3sEXT, load, "glSecondaryColor3sEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColor3svEXT, load, "glSecondaryColor3svEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColor3ubEXT, load, "glSecondaryColor3ubEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColor3ubvEXT, load, "glSecondaryColor3ubvEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColor3uiEXT, load, "glSecondaryColor3uiEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColor3uivEXT, load, "glSecondaryColor3uivEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColor3usEXT, load, "glSecondaryColor3usEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColor3usvEXT, load, "glSecondaryColor3usvEXT")) ext_GL_EXT_secondary_color = false;
		if (!LoadExt(glSecondaryColorPointerEXT, load, "glSecondaryColorPointerEXT")) ext_GL_EXT_secondary_color = false;
		#endif // GL_EXT_secondary_color
		#ifdef GL_EXT_separate_shader_objects
		ext_GL_EXT_separate_shader_objects = Check("GL_EXT_separate_shader_objects", exts, count);
		if (!LoadExt(glActiveProgramEXT, load, "glActiveProgramEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glActiveShaderProgramEXT, load, "glActiveShaderProgramEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glBindProgramPipelineEXT, load, "glBindProgramPipelineEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glCreateShaderProgramEXT, load, "glCreateShaderProgramEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glCreateShaderProgramvEXT, load, "glCreateShaderProgramvEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glDeleteProgramPipelinesEXT, load, "glDeleteProgramPipelinesEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glGenProgramPipelinesEXT, load, "glGenProgramPipelinesEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glGetProgramPipelineInfoLogEXT, load, "glGetProgramPipelineInfoLogEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glGetProgramPipelineivEXT, load, "glGetProgramPipelineivEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glIsProgramPipelineEXT, load, "glIsProgramPipelineEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramParameteriEXT, load, "glProgramParameteriEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform1fEXT, load, "glProgramUniform1fEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform1fvEXT, load, "glProgramUniform1fvEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform1iEXT, load, "glProgramUniform1iEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform1ivEXT, load, "glProgramUniform1ivEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform1uiEXT, load, "glProgramUniform1uiEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform1uivEXT, load, "glProgramUniform1uivEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform2fEXT, load, "glProgramUniform2fEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform2fvEXT, load, "glProgramUniform2fvEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform2iEXT, load, "glProgramUniform2iEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform2ivEXT, load, "glProgramUniform2ivEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform2uiEXT, load, "glProgramUniform2uiEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform2uivEXT, load, "glProgramUniform2uivEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform3fEXT, load, "glProgramUniform3fEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform3fvEXT, load, "glProgramUniform3fvEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform3iEXT, load, "glProgramUniform3iEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform3ivEXT, load, "glProgramUniform3ivEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform3uiEXT, load, "glProgramUniform3uiEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform3uivEXT, load, "glProgramUniform3uivEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform4fEXT, load, "glProgramUniform4fEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform4fvEXT, load, "glProgramUniform4fvEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform4iEXT, load, "glProgramUniform4iEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform4ivEXT, load, "glProgramUniform4ivEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform4uiEXT, load, "glProgramUniform4uiEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniform4uivEXT, load, "glProgramUniform4uivEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix2fvEXT, load, "glProgramUniformMatrix2fvEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix2x3fvEXT, load, "glProgramUniformMatrix2x3fvEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix2x4fvEXT, load, "glProgramUniformMatrix2x4fvEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix3fvEXT, load, "glProgramUniformMatrix3fvEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix3x2fvEXT, load, "glProgramUniformMatrix3x2fvEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix3x4fvEXT, load, "glProgramUniformMatrix3x4fvEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix4fvEXT, load, "glProgramUniformMatrix4fvEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix4x2fvEXT, load, "glProgramUniformMatrix4x2fvEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glProgramUniformMatrix4x3fvEXT, load, "glProgramUniformMatrix4x3fvEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glUseProgramStagesEXT, load, "glUseProgramStagesEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glUseShaderProgramEXT, load, "glUseShaderProgramEXT")) ext_GL_EXT_separate_shader_objects = false;
		if (!LoadExt(glValidateProgramPipelineEXT, load, "glValidateProgramPipelineEXT")) ext_GL_EXT_separate_shader_objects = false;
		#endif // GL_EXT_separate_shader_objects
		#ifdef GL_EXT_separate_specular_color
		ext_GL_EXT_separate_specular_color = Check("GL_EXT_separate_specular_color", exts, count);
		#endif // GL_EXT_separate_specular_color
		#ifdef GL_EXT_shader_image_load_store
		ext_GL_EXT_shader_image_load_store = Check("GL_EXT_shader_image_load_store", exts, count);
		if (!LoadExt(glBindImageTextureEXT, load, "glBindImageTextureEXT")) ext_GL_EXT_shader_image_load_store = false;
		if (!LoadExt(glMemoryBarrierEXT, load, "glMemoryBarrierEXT")) ext_GL_EXT_shader_image_load_store = false;
		#endif // GL_EXT_shader_image_load_store
		#ifdef GL_EXT_shared_texture_palette
		ext_GL_EXT_shared_texture_palette = Check("GL_EXT_shared_texture_palette", exts, count);
		#endif // GL_EXT_shared_texture_palette
		#ifdef GL_EXT_stencil_clear_tag
		ext_GL_EXT_stencil_clear_tag = Check("GL_EXT_stencil_clear_tag", exts, count);
		if (!LoadExt(glStencilClearTagEXT, load, "glStencilClearTagEXT")) ext_GL_EXT_stencil_clear_tag = false;
		#endif // GL_EXT_stencil_clear_tag
		#ifdef GL_EXT_stencil_two_side
		ext_GL_EXT_stencil_two_side = Check("GL_EXT_stencil_two_side", exts, count);
		if (!LoadExt(glActiveStencilFaceEXT, load, "glActiveStencilFaceEXT")) ext_GL_EXT_stencil_two_side = false;
		#endif // GL_EXT_stencil_two_side
		#ifdef GL_EXT_stencil_wrap
		ext_GL_EXT_stencil_wrap = Check("GL_EXT_stencil_wrap", exts, count);
		#endif // GL_EXT_stencil_wrap
		#ifdef GL_EXT_subtexture
		ext_GL_EXT_subtexture = Check("GL_EXT_subtexture", exts, count);
		if (!LoadExt(glTexSubImage1DEXT, load, "glTexSubImage1DEXT")) ext_GL_EXT_subtexture = false;
		if (!LoadExt(glTexSubImage2DEXT, load, "glTexSubImage2DEXT")) ext_GL_EXT_subtexture = false;
		#endif // GL_EXT_subtexture
		#ifdef GL_EXT_texture
		ext_GL_EXT_texture = Check("GL_EXT_texture", exts, count);
		#endif // GL_EXT_texture
		#ifdef GL_EXT_texture3D
		ext_GL_EXT_texture3D = Check("GL_EXT_texture3D", exts, count);
		if (!LoadExt(glTexImage3DEXT, load, "glTexImage3DEXT")) ext_GL_EXT_texture3D = false;
		if (!LoadExt(glTexSubImage3DEXT, load, "glTexSubImage3DEXT")) ext_GL_EXT_texture3D = false;
		#endif // GL_EXT_texture3D
		#ifdef GL_EXT_texture_array
		ext_GL_EXT_texture_array = Check("GL_EXT_texture_array", exts, count);
		if (!LoadExt(glFramebufferTextureLayerEXT, load, "glFramebufferTextureLayerEXT")) ext_GL_EXT_texture_array = false;
		#endif // GL_EXT_texture_array
		#ifdef GL_EXT_texture_buffer_object
		ext_GL_EXT_texture_buffer_object = Check("GL_EXT_texture_buffer_object", exts, count);
		if (!LoadExt(glTexBufferEXT, load, "glTexBufferEXT")) ext_GL_EXT_texture_buffer_object = false;
		#endif // GL_EXT_texture_buffer_object
		#ifdef GL_EXT_texture_compression_latc
		ext_GL_EXT_texture_compression_latc = Check("GL_EXT_texture_compression_latc", exts, count);
		#endif // GL_EXT_texture_compression_latc
		#ifdef GL_EXT_texture_compression_rgtc
		ext_GL_EXT_texture_compression_rgtc = Check("GL_EXT_texture_compression_rgtc", exts, count);
		#endif // GL_EXT_texture_compression_rgtc
		#ifdef GL_EXT_texture_compression_s3tc
		ext_GL_EXT_texture_compression_s3tc = Check("GL_EXT_texture_compression_s3tc", exts, count);
		#endif // GL_EXT_texture_compression_s3tc
		#ifdef GL_EXT_texture_cube_map
		ext_GL_EXT_texture_cube_map = Check("GL_EXT_texture_cube_map", exts, count);
		#endif // GL_EXT_texture_cube_map
		#ifdef GL_EXT_texture_env_combine
		ext_GL_EXT_texture_env_combine = Check("GL_EXT_texture_env_combine", exts, count);
		#endif // GL_EXT_texture_env_combine
		#ifdef GL_EXT_texture_env_dot3
		ext_GL_EXT_texture_env_dot3 = Check("GL_EXT_texture_env_dot3", exts, count);
		#endif // GL_EXT_texture_env_dot3
		#ifdef GL_EXT_texture_filter_anisotropic
		ext_GL_EXT_texture_filter_anisotropic = Check("GL_EXT_texture_filter_anisotropic", exts, count);
		#endif // GL_EXT_texture_filter_anisotropic
		#ifdef GL_EXT_texture_filter_minmax
		ext_GL_EXT_texture_filter_minmax = Check("GL_EXT_texture_filter_minmax", exts, count);
		if (!LoadExt(glRasterSamplesEXT, load, "glRasterSamplesEXT")) ext_GL_EXT_texture_filter_minmax = false;
		#endif // GL_EXT_texture_filter_minmax
		#ifdef GL_EXT_texture_integer
		ext_GL_EXT_texture_integer = Check("GL_EXT_texture_integer", exts, count);
		if (!LoadExt(glClearColorIiEXT, load, "glClearColorIiEXT")) ext_GL_EXT_texture_integer = false;
		if (!LoadExt(glClearColorIuiEXT, load, "glClearColorIuiEXT")) ext_GL_EXT_texture_integer = false;
		if (!LoadExt(glGetTexParameterIivEXT, load, "glGetTexParameterIivEXT")) ext_GL_EXT_texture_integer = false;
		if (!LoadExt(glGetTexParameterIuivEXT, load, "glGetTexParameterIuivEXT")) ext_GL_EXT_texture_integer = false;
		if (!LoadExt(glTexParameterIivEXT, load, "glTexParameterIivEXT")) ext_GL_EXT_texture_integer = false;
		if (!LoadExt(glTexParameterIuivEXT, load, "glTexParameterIuivEXT")) ext_GL_EXT_texture_integer = false;
		#endif // GL_EXT_texture_integer
		#ifdef GL_EXT_texture_lod_bias
		ext_GL_EXT_texture_lod_bias = Check("GL_EXT_texture_lod_bias", exts, count);
		#endif // GL_EXT_texture_lod_bias
		#ifdef GL_EXT_texture_mirror_clamp
		ext_GL_EXT_texture_mirror_clamp = Check("GL_EXT_texture_mirror_clamp", exts, count);
		#endif // GL_EXT_texture_mirror_clamp
		#ifdef GL_EXT_texture_object
		ext_GL_EXT_texture_object = Check("GL_EXT_texture_object", exts, count);
		if (!LoadExt(glAreTexturesResidentEXT, load, "glAreTexturesResidentEXT")) ext_GL_EXT_texture_object = false;
		if (!LoadExt(glBindTextureEXT, load, "glBindTextureEXT")) ext_GL_EXT_texture_object = false;
		if (!LoadExt(glDeleteTexturesEXT, load, "glDeleteTexturesEXT")) ext_GL_EXT_texture_object = false;
		if (!LoadExt(glGenTexturesEXT, load, "glGenTexturesEXT")) ext_GL_EXT_texture_object = false;
		if (!LoadExt(glIsTextureEXT, load, "glIsTextureEXT")) ext_GL_EXT_texture_object = false;
		if (!LoadExt(glPrioritizeTexturesEXT, load, "glPrioritizeTexturesEXT")) ext_GL_EXT_texture_object = false;
		#endif // GL_EXT_texture_object
		#ifdef GL_EXT_texture_perturb_normal
		ext_GL_EXT_texture_perturb_normal = Check("GL_EXT_texture_perturb_normal", exts, count);
		if (!LoadExt(glTextureNormalEXT, load, "glTextureNormalEXT")) ext_GL_EXT_texture_perturb_normal = false;
		#endif // GL_EXT_texture_perturb_normal
		#ifdef GL_EXT_texture_sRGB
		ext_GL_EXT_texture_sRGB = Check("GL_EXT_texture_sRGB", exts, count);
		#endif // GL_EXT_texture_sRGB
		#ifdef GL_EXT_texture_sRGB_decode
		ext_GL_EXT_texture_sRGB_decode = Check("GL_EXT_texture_sRGB_decode", exts, count);
		#endif // GL_EXT_texture_sRGB_decode
		#ifdef GL_EXT_texture_shared_exponent
		ext_GL_EXT_texture_shared_exponent = Check("GL_EXT_texture_shared_exponent", exts, count);
		#endif // GL_EXT_texture_shared_exponent
		#ifdef GL_EXT_texture_snorm
		ext_GL_EXT_texture_snorm = Check("GL_EXT_texture_snorm", exts, count);
		#endif // GL_EXT_texture_snorm
		#ifdef GL_EXT_texture_swizzle
		ext_GL_EXT_texture_swizzle = Check("GL_EXT_texture_swizzle", exts, count);
		#endif // GL_EXT_texture_swizzle
		#ifdef GL_EXT_timer_query
		ext_GL_EXT_timer_query = Check("GL_EXT_timer_query", exts, count);
		if (!LoadExt(glGetQueryObjecti64vEXT, load, "glGetQueryObjecti64vEXT")) ext_GL_EXT_timer_query = false;
		if (!LoadExt(glGetQueryObjectui64vEXT, load, "glGetQueryObjectui64vEXT")) ext_GL_EXT_timer_query = false;
		#endif // GL_EXT_timer_query
		#ifdef GL_EXT_transform_feedback
		ext_GL_EXT_transform_feedback = Check("GL_EXT_transform_feedback", exts, count);
		if (!LoadExt(glBeginTransformFeedbackEXT, load, "glBeginTransformFeedbackEXT")) ext_GL_EXT_transform_feedback = false;
		if (!LoadExt(glBindBufferBaseEXT, load, "glBindBufferBaseEXT")) ext_GL_EXT_transform_feedback = false;
		if (!LoadExt(glBindBufferOffsetEXT, load, "glBindBufferOffsetEXT")) ext_GL_EXT_transform_feedback = false;
		if (!LoadExt(glBindBufferRangeEXT, load, "glBindBufferRangeEXT")) ext_GL_EXT_transform_feedback = false;
		if (!LoadExt(glEndTransformFeedbackEXT, load, "glEndTransformFeedbackEXT")) ext_GL_EXT_transform_feedback = false;
		if (!LoadExt(glGetTransformFeedbackVaryingEXT, load, "glGetTransformFeedbackVaryingEXT")) ext_GL_EXT_transform_feedback = false;
		if (!LoadExt(glTransformFeedbackVaryingsEXT, load, "glTransformFeedbackVaryingsEXT")) ext_GL_EXT_transform_feedback = false;
		#endif // GL_EXT_transform_feedback
		#ifdef GL_EXT_vertex_array
		ext_GL_EXT_vertex_array = Check("GL_EXT_vertex_array", exts, count);
		if (!LoadExt(glArrayElementEXT, load, "glArrayElementEXT")) ext_GL_EXT_vertex_array = false;
		if (!LoadExt(glColorPointerEXT, load, "glColorPointerEXT")) ext_GL_EXT_vertex_array = false;
		if (!LoadExt(glDrawArraysEXT, load, "glDrawArraysEXT")) ext_GL_EXT_vertex_array = false;
		if (!LoadExt(glEdgeFlagPointerEXT, load, "glEdgeFlagPointerEXT")) ext_GL_EXT_vertex_array = false;
		if (!LoadExt(glGetPointervEXT, load, "glGetPointervEXT")) ext_GL_EXT_vertex_array = false;
		if (!LoadExt(glIndexPointerEXT, load, "glIndexPointerEXT")) ext_GL_EXT_vertex_array = false;
		if (!LoadExt(glNormalPointerEXT, load, "glNormalPointerEXT")) ext_GL_EXT_vertex_array = false;
		if (!LoadExt(glTexCoordPointerEXT, load, "glTexCoordPointerEXT")) ext_GL_EXT_vertex_array = false;
		if (!LoadExt(glVertexPointerEXT, load, "glVertexPointerEXT")) ext_GL_EXT_vertex_array = false;
		#endif // GL_EXT_vertex_array
		#ifdef GL_EXT_vertex_attrib_64bit
		ext_GL_EXT_vertex_attrib_64bit = Check("GL_EXT_vertex_attrib_64bit", exts, count);
		if (!LoadExt(glGetVertexAttribLdvEXT, load, "glGetVertexAttribLdvEXT")) ext_GL_EXT_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL1dEXT, load, "glVertexAttribL1dEXT")) ext_GL_EXT_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL1dvEXT, load, "glVertexAttribL1dvEXT")) ext_GL_EXT_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL2dEXT, load, "glVertexAttribL2dEXT")) ext_GL_EXT_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL2dvEXT, load, "glVertexAttribL2dvEXT")) ext_GL_EXT_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL3dEXT, load, "glVertexAttribL3dEXT")) ext_GL_EXT_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL3dvEXT, load, "glVertexAttribL3dvEXT")) ext_GL_EXT_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL4dEXT, load, "glVertexAttribL4dEXT")) ext_GL_EXT_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribL4dvEXT, load, "glVertexAttribL4dvEXT")) ext_GL_EXT_vertex_attrib_64bit = false;
		if (!LoadExt(glVertexAttribLPointerEXT, load, "glVertexAttribLPointerEXT")) ext_GL_EXT_vertex_attrib_64bit = false;
		#endif // GL_EXT_vertex_attrib_64bit
		#ifdef GL_EXT_vertex_shader
		ext_GL_EXT_vertex_shader = Check("GL_EXT_vertex_shader", exts, count);
		if (!LoadExt(glBeginVertexShaderEXT, load, "glBeginVertexShaderEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glBindLightParameterEXT, load, "glBindLightParameterEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glBindMaterialParameterEXT, load, "glBindMaterialParameterEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glBindParameterEXT, load, "glBindParameterEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glBindTexGenParameterEXT, load, "glBindTexGenParameterEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glBindTextureUnitParameterEXT, load, "glBindTextureUnitParameterEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glBindVertexShaderEXT, load, "glBindVertexShaderEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glDeleteVertexShaderEXT, load, "glDeleteVertexShaderEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glDisableVariantClientStateEXT, load, "glDisableVariantClientStateEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glEnableVariantClientStateEXT, load, "glEnableVariantClientStateEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glEndVertexShaderEXT, load, "glEndVertexShaderEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glExtractComponentEXT, load, "glExtractComponentEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glGenSymbolsEXT, load, "glGenSymbolsEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glGenVertexShadersEXT, load, "glGenVertexShadersEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glGetInvariantBooleanvEXT, load, "glGetInvariantBooleanvEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glGetInvariantFloatvEXT, load, "glGetInvariantFloatvEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glGetInvariantIntegervEXT, load, "glGetInvariantIntegervEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glGetLocalConstantBooleanvEXT, load, "glGetLocalConstantBooleanvEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glGetLocalConstantFloatvEXT, load, "glGetLocalConstantFloatvEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glGetLocalConstantIntegervEXT, load, "glGetLocalConstantIntegervEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glGetVariantBooleanvEXT, load, "glGetVariantBooleanvEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glGetVariantFloatvEXT, load, "glGetVariantFloatvEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glGetVariantIntegervEXT, load, "glGetVariantIntegervEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glGetVariantPointervEXT, load, "glGetVariantPointervEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glInsertComponentEXT, load, "glInsertComponentEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glIsVariantEnabledEXT, load, "glIsVariantEnabledEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glSetInvariantEXT, load, "glSetInvariantEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glSetLocalConstantEXT, load, "glSetLocalConstantEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glShaderOp1EXT, load, "glShaderOp1EXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glShaderOp2EXT, load, "glShaderOp2EXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glShaderOp3EXT, load, "glShaderOp3EXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glSwizzleEXT, load, "glSwizzleEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glVariantPointerEXT, load, "glVariantPointerEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glVariantbvEXT, load, "glVariantbvEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glVariantdvEXT, load, "glVariantdvEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glVariantfvEXT, load, "glVariantfvEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glVariantivEXT, load, "glVariantivEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glVariantsvEXT, load, "glVariantsvEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glVariantubvEXT, load, "glVariantubvEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glVariantuivEXT, load, "glVariantuivEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glVariantusvEXT, load, "glVariantusvEXT")) ext_GL_EXT_vertex_shader = false;
		if (!LoadExt(glWriteMaskEXT, load, "glWriteMaskEXT")) ext_GL_EXT_vertex_shader = false;
		#endif // GL_EXT_vertex_shader
		#ifdef GL_EXT_vertex_weighting
		ext_GL_EXT_vertex_weighting = Check("GL_EXT_vertex_weighting", exts, count);
		if (!LoadExt(glVertexWeightPointerEXT, load, "glVertexWeightPointerEXT")) ext_GL_EXT_vertex_weighting = false;
		if (!LoadExt(glVertexWeightfEXT, load, "glVertexWeightfEXT")) ext_GL_EXT_vertex_weighting = false;
		if (!LoadExt(glVertexWeightfvEXT, load, "glVertexWeightfvEXT")) ext_GL_EXT_vertex_weighting = false;
		#endif // GL_EXT_vertex_weighting
		#ifdef GL_EXT_x11_sync_object
		ext_GL_EXT_x11_sync_object = Check("GL_EXT_x11_sync_object", exts, count);
		if (!LoadExt(glImportSyncEXT, load, "glImportSyncEXT")) ext_GL_EXT_x11_sync_object = false;
		#endif // GL_EXT_x11_sync_object
		#ifdef GL_GREMEDY_frame_terminator
		ext_GL_GREMEDY_frame_terminator = Check("GL_GREMEDY_frame_terminator", exts, count);
		if (!LoadExt(glFrameTerminatorGREMEDY, load, "glFrameTerminatorGREMEDY")) ext_GL_GREMEDY_frame_terminator = false;
		#endif // GL_GREMEDY_frame_terminator
		#ifdef GL_GREMEDY_string_marker
		ext_GL_GREMEDY_string_marker = Check("GL_GREMEDY_string_marker", exts, count);
		if (!LoadExt(glStringMarkerGREMEDY, load, "glStringMarkerGREMEDY")) ext_GL_GREMEDY_string_marker = false;
		#endif // GL_GREMEDY_string_marker
		#ifdef GL_HP_convolution_border_modes
		ext_GL_HP_convolution_border_modes = Check("GL_HP_convolution_border_modes", exts, count);
		#endif // GL_HP_convolution_border_modes
		#ifdef GL_HP_image_transform
		ext_GL_HP_image_transform = Check("GL_HP_image_transform", exts, count);
		if (!LoadExt(glGetImageTransformParameterfvHP, load, "glGetImageTransformParameterfvHP")) ext_GL_HP_image_transform = false;
		if (!LoadExt(glGetImageTransformParameterivHP, load, "glGetImageTransformParameterivHP")) ext_GL_HP_image_transform = false;
		if (!LoadExt(glImageTransformParameterfHP, load, "glImageTransformParameterfHP")) ext_GL_HP_image_transform = false;
		if (!LoadExt(glImageTransformParameterfvHP, load, "glImageTransformParameterfvHP")) ext_GL_HP_image_transform = false;
		if (!LoadExt(glImageTransformParameteriHP, load, "glImageTransformParameteriHP")) ext_GL_HP_image_transform = false;
		if (!LoadExt(glImageTransformParameterivHP, load, "glImageTransformParameterivHP")) ext_GL_HP_image_transform = false;
		#endif // GL_HP_image_transform
		#ifdef GL_HP_occlusion_test
		ext_GL_HP_occlusion_test = Check("GL_HP_occlusion_test", exts, count);
		#endif // GL_HP_occlusion_test
		#ifdef GL_HP_texture_lighting
		ext_GL_HP_texture_lighting = Check("GL_HP_texture_lighting", exts, count);
		#endif // GL_HP_texture_lighting
		#ifdef GL_IBM_cull_vertex
		ext_GL_IBM_cull_vertex = Check("GL_IBM_cull_vertex", exts, count);
		#endif // GL_IBM_cull_vertex
		#ifdef GL_IBM_multimode_draw_arrays
		ext_GL_IBM_multimode_draw_arrays = Check("GL_IBM_multimode_draw_arrays", exts, count);
		if (!LoadExt(glMultiModeDrawArraysIBM, load, "glMultiModeDrawArraysIBM")) ext_GL_IBM_multimode_draw_arrays = false;
		if (!LoadExt(glMultiModeDrawElementsIBM, load, "glMultiModeDrawElementsIBM")) ext_GL_IBM_multimode_draw_arrays = false;
		#endif // GL_IBM_multimode_draw_arrays
		#ifdef GL_IBM_rasterpos_clip
		ext_GL_IBM_rasterpos_clip = Check("GL_IBM_rasterpos_clip", exts, count);
		#endif // GL_IBM_rasterpos_clip
		#ifdef GL_IBM_static_data
		ext_GL_IBM_static_data = Check("GL_IBM_static_data", exts, count);
		if (!LoadExt(glFlushStaticDataIBM, load, "glFlushStaticDataIBM")) ext_GL_IBM_static_data = false;
		#endif // GL_IBM_static_data
		#ifdef GL_IBM_texture_mirrored_repeat
		ext_GL_IBM_texture_mirrored_repeat = Check("GL_IBM_texture_mirrored_repeat", exts, count);
		#endif // GL_IBM_texture_mirrored_repeat
		#ifdef GL_IBM_vertex_array_lists
		ext_GL_IBM_vertex_array_lists = Check("GL_IBM_vertex_array_lists", exts, count);
		if (!LoadExt(glColorPointerListIBM, load, "glColorPointerListIBM")) ext_GL_IBM_vertex_array_lists = false;
		if (!LoadExt(glEdgeFlagPointerListIBM, load, "glEdgeFlagPointerListIBM")) ext_GL_IBM_vertex_array_lists = false;
		if (!LoadExt(glFogCoordPointerListIBM, load, "glFogCoordPointerListIBM")) ext_GL_IBM_vertex_array_lists = false;
		if (!LoadExt(glIndexPointerListIBM, load, "glIndexPointerListIBM")) ext_GL_IBM_vertex_array_lists = false;
		if (!LoadExt(glNormalPointerListIBM, load, "glNormalPointerListIBM")) ext_GL_IBM_vertex_array_lists = false;
		if (!LoadExt(glSecondaryColorPointerListIBM, load, "glSecondaryColorPointerListIBM")) ext_GL_IBM_vertex_array_lists = false;
		if (!LoadExt(glTexCoordPointerListIBM, load, "glTexCoordPointerListIBM")) ext_GL_IBM_vertex_array_lists = false;
		if (!LoadExt(glVertexPointerListIBM, load, "glVertexPointerListIBM")) ext_GL_IBM_vertex_array_lists = false;
		#endif // GL_IBM_vertex_array_lists
		#ifdef GL_INGR_blend_func_separate
		ext_GL_INGR_blend_func_separate = Check("GL_INGR_blend_func_separate", exts, count);
		if (!LoadExt(glBlendFuncSeparateINGR, load, "glBlendFuncSeparateINGR")) ext_GL_INGR_blend_func_separate = false;
		#endif // GL_INGR_blend_func_separate
		#ifdef GL_INGR_color_clamp
		ext_GL_INGR_color_clamp = Check("GL_INGR_color_clamp", exts, count);
		#endif // GL_INGR_color_clamp
		#ifdef GL_INGR_interlace_read
		ext_GL_INGR_interlace_read = Check("GL_INGR_interlace_read", exts, count);
		#endif // GL_INGR_interlace_read
		#ifdef GL_INTEL_framebuffer_CMAA
		ext_GL_INTEL_framebuffer_CMAA = Check("GL_INTEL_framebuffer_CMAA", exts, count);
		if (!LoadExt(glApplyFramebufferAttachmentCMAAINTEL, load, "glApplyFramebufferAttachmentCMAAINTEL")) ext_GL_INTEL_framebuffer_CMAA = false;
		#endif // GL_INTEL_framebuffer_CMAA
		#ifdef GL_INTEL_map_texture
		ext_GL_INTEL_map_texture = Check("GL_INTEL_map_texture", exts, count);
		if (!LoadExt(glMapTexture2DINTEL, load, "glMapTexture2DINTEL")) ext_GL_INTEL_map_texture = false;
		if (!LoadExt(glSyncTextureINTEL, load, "glSyncTextureINTEL")) ext_GL_INTEL_map_texture = false;
		if (!LoadExt(glUnmapTexture2DINTEL, load, "glUnmapTexture2DINTEL")) ext_GL_INTEL_map_texture = false;
		#endif // GL_INTEL_map_texture
		#ifdef GL_INTEL_parallel_arrays
		ext_GL_INTEL_parallel_arrays = Check("GL_INTEL_parallel_arrays", exts, count);
		if (!LoadExt(glColorPointervINTEL, load, "glColorPointervINTEL")) ext_GL_INTEL_parallel_arrays = false;
		if (!LoadExt(glNormalPointervINTEL, load, "glNormalPointervINTEL")) ext_GL_INTEL_parallel_arrays = false;
		if (!LoadExt(glTexCoordPointervINTEL, load, "glTexCoordPointervINTEL")) ext_GL_INTEL_parallel_arrays = false;
		if (!LoadExt(glVertexPointervINTEL, load, "glVertexPointervINTEL")) ext_GL_INTEL_parallel_arrays = false;
		#endif // GL_INTEL_parallel_arrays
		#ifdef GL_INTEL_performance_query
		ext_GL_INTEL_performance_query = Check("GL_INTEL_performance_query", exts, count);
		if (!LoadExt(glBeginPerfQueryINTEL, load, "glBeginPerfQueryINTEL")) ext_GL_INTEL_performance_query = false;
		if (!LoadExt(glCreatePerfQueryINTEL, load, "glCreatePerfQueryINTEL")) ext_GL_INTEL_performance_query = false;
		if (!LoadExt(glDeletePerfQueryINTEL, load, "glDeletePerfQueryINTEL")) ext_GL_INTEL_performance_query = false;
		if (!LoadExt(glEndPerfQueryINTEL, load, "glEndPerfQueryINTEL")) ext_GL_INTEL_performance_query = false;
		if (!LoadExt(glGetFirstPerfQueryIdINTEL, load, "glGetFirstPerfQueryIdINTEL")) ext_GL_INTEL_performance_query = false;
		if (!LoadExt(glGetNextPerfQueryIdINTEL, load, "glGetNextPerfQueryIdINTEL")) ext_GL_INTEL_performance_query = false;
		if (!LoadExt(glGetPerfCounterInfoINTEL, load, "glGetPerfCounterInfoINTEL")) ext_GL_INTEL_performance_query = false;
		if (!LoadExt(glGetPerfQueryDataINTEL, load, "glGetPerfQueryDataINTEL")) ext_GL_INTEL_performance_query = false;
		if (!LoadExt(glGetPerfQueryIdByNameINTEL, load, "glGetPerfQueryIdByNameINTEL")) ext_GL_INTEL_performance_query = false;
		if (!LoadExt(glGetPerfQueryInfoINTEL, load, "glGetPerfQueryInfoINTEL")) ext_GL_INTEL_performance_query = false;
		#endif // GL_INTEL_performance_query
		#ifdef GL_KHR_blend_equation_advanced
		ext_GL_KHR_blend_equation_advanced = Check("GL_KHR_blend_equation_advanced", exts, count);
		if (!LoadExt(glBlendBarrierKHR, load, "glBlendBarrierKHR")) ext_GL_KHR_blend_equation_advanced = false;
		#endif // GL_KHR_blend_equation_advanced
		#ifdef GL_KHR_blend_equation_advanced_coherent
		ext_GL_KHR_blend_equation_advanced_coherent = Check("GL_KHR_blend_equation_advanced_coherent", exts, count);
		#endif // GL_KHR_blend_equation_advanced_coherent
		#ifdef GL_KHR_context_flush_control
		ext_GL_KHR_context_flush_control = Check("GL_KHR_context_flush_control", exts, count);
		#endif // GL_KHR_context_flush_control
		#ifdef GL_KHR_debug
		ext_GL_KHR_debug = Check("GL_KHR_debug", exts, count);
		if (!LoadExt(glDebugMessageCallback, load, "glDebugMessageCallback")) ext_GL_KHR_debug = false;
		if (!LoadExt(glDebugMessageCallbackKHR, load, "glDebugMessageCallbackKHR")) ext_GL_KHR_debug = false;
		if (!LoadExt(glDebugMessageControl, load, "glDebugMessageControl")) ext_GL_KHR_debug = false;
		if (!LoadExt(glDebugMessageControlKHR, load, "glDebugMessageControlKHR")) ext_GL_KHR_debug = false;
		if (!LoadExt(glDebugMessageInsert, load, "glDebugMessageInsert")) ext_GL_KHR_debug = false;
		if (!LoadExt(glDebugMessageInsertKHR, load, "glDebugMessageInsertKHR")) ext_GL_KHR_debug = false;
		if (!LoadExt(glGetDebugMessageLog, load, "glGetDebugMessageLog")) ext_GL_KHR_debug = false;
		if (!LoadExt(glGetDebugMessageLogKHR, load, "glGetDebugMessageLogKHR")) ext_GL_KHR_debug = false;
		if (!LoadExt(glGetObjectLabel, load, "glGetObjectLabel")) ext_GL_KHR_debug = false;
		if (!LoadExt(glGetObjectLabelKHR, load, "glGetObjectLabelKHR")) ext_GL_KHR_debug = false;
		if (!LoadExt(glGetObjectPtrLabel, load, "glGetObjectPtrLabel")) ext_GL_KHR_debug = false;
		if (!LoadExt(glGetObjectPtrLabelKHR, load, "glGetObjectPtrLabelKHR")) ext_GL_KHR_debug = false;
		if (!LoadExt(glGetPointerv, load, "glGetPointerv")) ext_GL_KHR_debug = false;
		if (!LoadExt(glGetPointervKHR, load, "glGetPointervKHR")) ext_GL_KHR_debug = false;
		if (!LoadExt(glObjectLabel, load, "glObjectLabel")) ext_GL_KHR_debug = false;
		if (!LoadExt(glObjectLabelKHR, load, "glObjectLabelKHR")) ext_GL_KHR_debug = false;
		if (!LoadExt(glObjectPtrLabel, load, "glObjectPtrLabel")) ext_GL_KHR_debug = false;
		if (!LoadExt(glObjectPtrLabelKHR, load, "glObjectPtrLabelKHR")) ext_GL_KHR_debug = false;
		if (!LoadExt(glPopDebugGroup, load, "glPopDebugGroup")) ext_GL_KHR_debug = false;
		if (!LoadExt(glPopDebugGroupKHR, load, "glPopDebugGroupKHR")) ext_GL_KHR_debug = false;
		if (!LoadExt(glPushDebugGroup, load, "glPushDebugGroup")) ext_GL_KHR_debug = false;
		if (!LoadExt(glPushDebugGroupKHR, load, "glPushDebugGroupKHR")) ext_GL_KHR_debug = false;
		#endif // GL_KHR_debug
		#ifdef GL_KHR_no_error
		ext_GL_KHR_no_error = Check("GL_KHR_no_error", exts, count);
		#endif // GL_KHR_no_error
		#ifdef GL_KHR_robustness
		ext_GL_KHR_robustness = Check("GL_KHR_robustness", exts, count);
		if (!LoadExt(glGetGraphicsResetStatus, load, "glGetGraphicsResetStatus")) ext_GL_KHR_robustness = false;
		if (!LoadExt(glGetGraphicsResetStatusKHR, load, "glGetGraphicsResetStatusKHR")) ext_GL_KHR_robustness = false;
		if (!LoadExt(glGetnUniformfv, load, "glGetnUniformfv")) ext_GL_KHR_robustness = false;
		if (!LoadExt(glGetnUniformfvKHR, load, "glGetnUniformfvKHR")) ext_GL_KHR_robustness = false;
		if (!LoadExt(glGetnUniformiv, load, "glGetnUniformiv")) ext_GL_KHR_robustness = false;
		if (!LoadExt(glGetnUniformivKHR, load, "glGetnUniformivKHR")) ext_GL_KHR_robustness = false;
		if (!LoadExt(glGetnUniformuiv, load, "glGetnUniformuiv")) ext_GL_KHR_robustness = false;
		if (!LoadExt(glGetnUniformuivKHR, load, "glGetnUniformuivKHR")) ext_GL_KHR_robustness = false;
		if (!LoadExt(glReadnPixels, load, "glReadnPixels")) ext_GL_KHR_robustness = false;
		if (!LoadExt(glReadnPixelsKHR, load, "glReadnPixelsKHR")) ext_GL_KHR_robustness = false;
		#endif // GL_KHR_robustness
		#ifdef GL_KHR_texture_compression_astc_hdr
		ext_GL_KHR_texture_compression_astc_hdr = Check("GL_KHR_texture_compression_astc_hdr", exts, count);
		#endif // GL_KHR_texture_compression_astc_hdr
		#ifdef GL_KHR_texture_compression_astc_ldr
		ext_GL_KHR_texture_compression_astc_ldr = Check("GL_KHR_texture_compression_astc_ldr", exts, count);
		#endif // GL_KHR_texture_compression_astc_ldr
		#ifdef GL_MESAX_texture_stack
		ext_GL_MESAX_texture_stack = Check("GL_MESAX_texture_stack", exts, count);
		#endif // GL_MESAX_texture_stack
		#ifdef GL_MESA_pack_invert
		ext_GL_MESA_pack_invert = Check("GL_MESA_pack_invert", exts, count);
		#endif // GL_MESA_pack_invert
		#ifdef GL_MESA_resize_buffers
		ext_GL_MESA_resize_buffers = Check("GL_MESA_resize_buffers", exts, count);
		if (!LoadExt(glResizeBuffersMESA, load, "glResizeBuffersMESA")) ext_GL_MESA_resize_buffers = false;
		#endif // GL_MESA_resize_buffers
		#ifdef GL_MESA_window_pos
		ext_GL_MESA_window_pos = Check("GL_MESA_window_pos", exts, count);
		if (!LoadExt(glWindowPos2dMESA, load, "glWindowPos2dMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos2dvMESA, load, "glWindowPos2dvMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos2fMESA, load, "glWindowPos2fMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos2fvMESA, load, "glWindowPos2fvMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos2iMESA, load, "glWindowPos2iMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos2ivMESA, load, "glWindowPos2ivMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos2sMESA, load, "glWindowPos2sMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos2svMESA, load, "glWindowPos2svMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos3dMESA, load, "glWindowPos3dMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos3dvMESA, load, "glWindowPos3dvMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos3fMESA, load, "glWindowPos3fMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos3fvMESA, load, "glWindowPos3fvMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos3iMESA, load, "glWindowPos3iMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos3ivMESA, load, "glWindowPos3ivMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos3sMESA, load, "glWindowPos3sMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos3svMESA, load, "glWindowPos3svMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos4dMESA, load, "glWindowPos4dMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos4dvMESA, load, "glWindowPos4dvMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos4fMESA, load, "glWindowPos4fMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos4fvMESA, load, "glWindowPos4fvMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos4iMESA, load, "glWindowPos4iMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos4ivMESA, load, "glWindowPos4ivMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos4sMESA, load, "glWindowPos4sMESA")) ext_GL_MESA_window_pos = false;
		if (!LoadExt(glWindowPos4svMESA, load, "glWindowPos4svMESA")) ext_GL_MESA_window_pos = false;
		#endif // GL_MESA_window_pos
		#ifdef GL_MESA_ycbcr_texture
		ext_GL_MESA_ycbcr_texture = Check("GL_MESA_ycbcr_texture", exts, count);
		#endif // GL_MESA_ycbcr_texture
		#ifdef GL_NVX_conditional_render
		ext_GL_NVX_conditional_render = Check("GL_NVX_conditional_render", exts, count);
		if (!LoadExt(glBeginConditionalRenderNVX, load, "glBeginConditionalRenderNVX")) ext_GL_NVX_conditional_render = false;
		if (!LoadExt(glEndConditionalRenderNVX, load, "glEndConditionalRenderNVX")) ext_GL_NVX_conditional_render = false;
		#endif // GL_NVX_conditional_render
		#ifdef GL_NVX_gpu_memory_info
		ext_GL_NVX_gpu_memory_info = Check("GL_NVX_gpu_memory_info", exts, count);
		#endif // GL_NVX_gpu_memory_info
		#ifdef GL_NV_bindless_multi_draw_indirect
		ext_GL_NV_bindless_multi_draw_indirect = Check("GL_NV_bindless_multi_draw_indirect", exts, count);
		if (!LoadExt(glMultiDrawArraysIndirectBindlessNV, load, "glMultiDrawArraysIndirectBindlessNV")) ext_GL_NV_bindless_multi_draw_indirect = false;
		if (!LoadExt(glMultiDrawElementsIndirectBindlessNV, load, "glMultiDrawElementsIndirectBindlessNV")) ext_GL_NV_bindless_multi_draw_indirect = false;
		#endif // GL_NV_bindless_multi_draw_indirect
		#ifdef GL_NV_bindless_multi_draw_indirect_count
		ext_GL_NV_bindless_multi_draw_indirect_count = Check("GL_NV_bindless_multi_draw_indirect_count", exts, count);
		if (!LoadExt(glMultiDrawArraysIndirectBindlessCountNV, load, "glMultiDrawArraysIndirectBindlessCountNV")) ext_GL_NV_bindless_multi_draw_indirect_count = false;
		if (!LoadExt(glMultiDrawElementsIndirectBindlessCountNV, load, "glMultiDrawElementsIndirectBindlessCountNV")) ext_GL_NV_bindless_multi_draw_indirect_count = false;
		#endif // GL_NV_bindless_multi_draw_indirect_count
		#ifdef GL_NV_bindless_texture
		ext_GL_NV_bindless_texture = Check("GL_NV_bindless_texture", exts, count);
		if (!LoadExt(glGetImageHandleNV, load, "glGetImageHandleNV")) ext_GL_NV_bindless_texture = false;
		if (!LoadExt(glGetTextureHandleNV, load, "glGetTextureHandleNV")) ext_GL_NV_bindless_texture = false;
		if (!LoadExt(glGetTextureSamplerHandleNV, load, "glGetTextureSamplerHandleNV")) ext_GL_NV_bindless_texture = false;
		if (!LoadExt(glIsImageHandleResidentNV, load, "glIsImageHandleResidentNV")) ext_GL_NV_bindless_texture = false;
		if (!LoadExt(glIsTextureHandleResidentNV, load, "glIsTextureHandleResidentNV")) ext_GL_NV_bindless_texture = false;
		if (!LoadExt(glMakeImageHandleNonResidentNV, load, "glMakeImageHandleNonResidentNV")) ext_GL_NV_bindless_texture = false;
		if (!LoadExt(glMakeImageHandleResidentNV, load, "glMakeImageHandleResidentNV")) ext_GL_NV_bindless_texture = false;
		if (!LoadExt(glMakeTextureHandleNonResidentNV, load, "glMakeTextureHandleNonResidentNV")) ext_GL_NV_bindless_texture = false;
		if (!LoadExt(glMakeTextureHandleResidentNV, load, "glMakeTextureHandleResidentNV")) ext_GL_NV_bindless_texture = false;
		if (!LoadExt(glProgramUniformHandleui64NV, load, "glProgramUniformHandleui64NV")) ext_GL_NV_bindless_texture = false;
		if (!LoadExt(glProgramUniformHandleui64vNV, load, "glProgramUniformHandleui64vNV")) ext_GL_NV_bindless_texture = false;
		if (!LoadExt(glUniformHandleui64NV, load, "glUniformHandleui64NV")) ext_GL_NV_bindless_texture = false;
		if (!LoadExt(glUniformHandleui64vNV, load, "glUniformHandleui64vNV")) ext_GL_NV_bindless_texture = false;
		#endif // GL_NV_bindless_texture
		#ifdef GL_NV_blend_equation_advanced
		ext_GL_NV_blend_equation_advanced = Check("GL_NV_blend_equation_advanced", exts, count);
		if (!LoadExt(glBlendBarrierNV, load, "glBlendBarrierNV")) ext_GL_NV_blend_equation_advanced = false;
		if (!LoadExt(glBlendParameteriNV, load, "glBlendParameteriNV")) ext_GL_NV_blend_equation_advanced = false;
		#endif // GL_NV_blend_equation_advanced
		#ifdef GL_NV_blend_equation_advanced_coherent
		ext_GL_NV_blend_equation_advanced_coherent = Check("GL_NV_blend_equation_advanced_coherent", exts, count);
		#endif // GL_NV_blend_equation_advanced_coherent
		#ifdef GL_NV_command_list
		ext_GL_NV_command_list = Check("GL_NV_command_list", exts, count);
		if (!LoadExt(glCallCommandListNV, load, "glCallCommandListNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glCommandListSegmentsNV, load, "glCommandListSegmentsNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glCompileCommandListNV, load, "glCompileCommandListNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glCreateCommandListsNV, load, "glCreateCommandListsNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glCreateStatesNV, load, "glCreateStatesNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glDeleteCommandListsNV, load, "glDeleteCommandListsNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glDeleteStatesNV, load, "glDeleteStatesNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glDrawCommandsAddressNV, load, "glDrawCommandsAddressNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glDrawCommandsNV, load, "glDrawCommandsNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glDrawCommandsStatesAddressNV, load, "glDrawCommandsStatesAddressNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glDrawCommandsStatesNV, load, "glDrawCommandsStatesNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glGetCommandHeaderNV, load, "glGetCommandHeaderNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glGetStageIndexNV, load, "glGetStageIndexNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glIsCommandListNV, load, "glIsCommandListNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glIsStateNV, load, "glIsStateNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glListDrawCommandsStatesClientNV, load, "glListDrawCommandsStatesClientNV")) ext_GL_NV_command_list = false;
		if (!LoadExt(glStateCaptureNV, load, "glStateCaptureNV")) ext_GL_NV_command_list = false;
		#endif // GL_NV_command_list
		#ifdef GL_NV_compute_program5
		ext_GL_NV_compute_program5 = Check("GL_NV_compute_program5", exts, count);
		#endif // GL_NV_compute_program5
		#ifdef GL_NV_conditional_render
		ext_GL_NV_conditional_render = Check("GL_NV_conditional_render", exts, count);
		if (!LoadExt(glBeginConditionalRenderNV, load, "glBeginConditionalRenderNV")) ext_GL_NV_conditional_render = false;
		if (!LoadExt(glEndConditionalRenderNV, load, "glEndConditionalRenderNV")) ext_GL_NV_conditional_render = false;
		#endif // GL_NV_conditional_render
		#ifdef GL_NV_conservative_raster
		ext_GL_NV_conservative_raster = Check("GL_NV_conservative_raster", exts, count);
		if (!LoadExt(glSubpixelPrecisionBiasNV, load, "glSubpixelPrecisionBiasNV")) ext_GL_NV_conservative_raster = false;
		#endif // GL_NV_conservative_raster
		#ifdef GL_NV_conservative_raster_dilate
		ext_GL_NV_conservative_raster_dilate = Check("GL_NV_conservative_raster_dilate", exts, count);
		if (!LoadExt(glConservativeRasterParameterfNV, load, "glConservativeRasterParameterfNV")) ext_GL_NV_conservative_raster_dilate = false;
		#endif // GL_NV_conservative_raster_dilate
		#ifdef GL_NV_copy_depth_to_color
		ext_GL_NV_copy_depth_to_color = Check("GL_NV_copy_depth_to_color", exts, count);
		#endif // GL_NV_copy_depth_to_color
		#ifdef GL_NV_copy_image
		ext_GL_NV_copy_image = Check("GL_NV_copy_image", exts, count);
		if (!LoadExt(glCopyImageSubDataNV, load, "glCopyImageSubDataNV")) ext_GL_NV_copy_image = false;
		#endif // GL_NV_copy_image
		#ifdef GL_NV_deep_texture3D
		ext_GL_NV_deep_texture3D = Check("GL_NV_deep_texture3D", exts, count);
		#endif // GL_NV_deep_texture3D
		#ifdef GL_NV_depth_buffer_float
		ext_GL_NV_depth_buffer_float = Check("GL_NV_depth_buffer_float", exts, count);
		if (!LoadExt(glClearDepthdNV, load, "glClearDepthdNV")) ext_GL_NV_depth_buffer_float = false;
		if (!LoadExt(glDepthBoundsdNV, load, "glDepthBoundsdNV")) ext_GL_NV_depth_buffer_float = false;
		if (!LoadExt(glDepthRangedNV, load, "glDepthRangedNV")) ext_GL_NV_depth_buffer_float = false;
		#endif // GL_NV_depth_buffer_float
		#ifdef GL_NV_depth_clamp
		ext_GL_NV_depth_clamp = Check("GL_NV_depth_clamp", exts, count);
		#endif // GL_NV_depth_clamp
		#ifdef GL_NV_draw_texture
		ext_GL_NV_draw_texture = Check("GL_NV_draw_texture", exts, count);
		if (!LoadExt(glDrawTextureNV, load, "glDrawTextureNV")) ext_GL_NV_draw_texture = false;
		#endif // GL_NV_draw_texture
		#ifdef GL_NV_evaluators
		ext_GL_NV_evaluators = Check("GL_NV_evaluators", exts, count);
		if (!LoadExt(glEvalMapsNV, load, "glEvalMapsNV")) ext_GL_NV_evaluators = false;
		if (!LoadExt(glGetMapAttribParameterfvNV, load, "glGetMapAttribParameterfvNV")) ext_GL_NV_evaluators = false;
		if (!LoadExt(glGetMapAttribParameterivNV, load, "glGetMapAttribParameterivNV")) ext_GL_NV_evaluators = false;
		if (!LoadExt(glGetMapControlPointsNV, load, "glGetMapControlPointsNV")) ext_GL_NV_evaluators = false;
		if (!LoadExt(glGetMapParameterfvNV, load, "glGetMapParameterfvNV")) ext_GL_NV_evaluators = false;
		if (!LoadExt(glGetMapParameterivNV, load, "glGetMapParameterivNV")) ext_GL_NV_evaluators = false;
		if (!LoadExt(glMapControlPointsNV, load, "glMapControlPointsNV")) ext_GL_NV_evaluators = false;
		if (!LoadExt(glMapParameterfvNV, load, "glMapParameterfvNV")) ext_GL_NV_evaluators = false;
		if (!LoadExt(glMapParameterivNV, load, "glMapParameterivNV")) ext_GL_NV_evaluators = false;
		#endif // GL_NV_evaluators
		#ifdef GL_NV_explicit_multisample
		ext_GL_NV_explicit_multisample = Check("GL_NV_explicit_multisample", exts, count);
		if (!LoadExt(glGetMultisamplefvNV, load, "glGetMultisamplefvNV")) ext_GL_NV_explicit_multisample = false;
		if (!LoadExt(glSampleMaskIndexedNV, load, "glSampleMaskIndexedNV")) ext_GL_NV_explicit_multisample = false;
		if (!LoadExt(glTexRenderbufferNV, load, "glTexRenderbufferNV")) ext_GL_NV_explicit_multisample = false;
		#endif // GL_NV_explicit_multisample
		#ifdef GL_NV_fence
		ext_GL_NV_fence = Check("GL_NV_fence", exts, count);
		if (!LoadExt(glDeleteFencesNV, load, "glDeleteFencesNV")) ext_GL_NV_fence = false;
		if (!LoadExt(glFinishFenceNV, load, "glFinishFenceNV")) ext_GL_NV_fence = false;
		if (!LoadExt(glGenFencesNV, load, "glGenFencesNV")) ext_GL_NV_fence = false;
		if (!LoadExt(glGetFenceivNV, load, "glGetFenceivNV")) ext_GL_NV_fence = false;
		if (!LoadExt(glIsFenceNV, load, "glIsFenceNV")) ext_GL_NV_fence = false;
		if (!LoadExt(glSetFenceNV, load, "glSetFenceNV")) ext_GL_NV_fence = false;
		if (!LoadExt(glTestFenceNV, load, "glTestFenceNV")) ext_GL_NV_fence = false;
		#endif // GL_NV_fence
		#ifdef GL_NV_fill_rectangle
		ext_GL_NV_fill_rectangle = Check("GL_NV_fill_rectangle", exts, count);
		#endif // GL_NV_fill_rectangle
		#ifdef GL_NV_float_buffer
		ext_GL_NV_float_buffer = Check("GL_NV_float_buffer", exts, count);
		#endif // GL_NV_float_buffer
		#ifdef GL_NV_fog_distance
		ext_GL_NV_fog_distance = Check("GL_NV_fog_distance", exts, count);
		#endif // GL_NV_fog_distance
		#ifdef GL_NV_fragment_coverage_to_color
		ext_GL_NV_fragment_coverage_to_color = Check("GL_NV_fragment_coverage_to_color", exts, count);
		if (!LoadExt(glFragmentCoverageColorNV, load, "glFragmentCoverageColorNV")) ext_GL_NV_fragment_coverage_to_color = false;
		#endif // GL_NV_fragment_coverage_to_color
		#ifdef GL_NV_fragment_program
		ext_GL_NV_fragment_program = Check("GL_NV_fragment_program", exts, count);
		if (!LoadExt(glGetProgramNamedParameterdvNV, load, "glGetProgramNamedParameterdvNV")) ext_GL_NV_fragment_program = false;
		if (!LoadExt(glGetProgramNamedParameterfvNV, load, "glGetProgramNamedParameterfvNV")) ext_GL_NV_fragment_program = false;
		if (!LoadExt(glProgramNamedParameter4dNV, load, "glProgramNamedParameter4dNV")) ext_GL_NV_fragment_program = false;
		if (!LoadExt(glProgramNamedParameter4dvNV, load, "glProgramNamedParameter4dvNV")) ext_GL_NV_fragment_program = false;
		if (!LoadExt(glProgramNamedParameter4fNV, load, "glProgramNamedParameter4fNV")) ext_GL_NV_fragment_program = false;
		if (!LoadExt(glProgramNamedParameter4fvNV, load, "glProgramNamedParameter4fvNV")) ext_GL_NV_fragment_program = false;
		#endif // GL_NV_fragment_program
		#ifdef GL_NV_fragment_program2
		ext_GL_NV_fragment_program2 = Check("GL_NV_fragment_program2", exts, count);
		#endif // GL_NV_fragment_program2
		#ifdef GL_NV_framebuffer_mixed_samples
		ext_GL_NV_framebuffer_mixed_samples = Check("GL_NV_framebuffer_mixed_samples", exts, count);
		if (!LoadExt(glCoverageModulationNV, load, "glCoverageModulationNV")) ext_GL_NV_framebuffer_mixed_samples = false;
		if (!LoadExt(glCoverageModulationTableNV, load, "glCoverageModulationTableNV")) ext_GL_NV_framebuffer_mixed_samples = false;
		if (!LoadExt(glGetCoverageModulationTableNV, load, "glGetCoverageModulationTableNV")) ext_GL_NV_framebuffer_mixed_samples = false;
		if (!LoadExt(glRasterSamplesEXT, load, "glRasterSamplesEXT")) ext_GL_NV_framebuffer_mixed_samples = false;
		#endif // GL_NV_framebuffer_mixed_samples
		#ifdef GL_NV_framebuffer_multisample_coverage
		ext_GL_NV_framebuffer_multisample_coverage = Check("GL_NV_framebuffer_multisample_coverage", exts, count);
		if (!LoadExt(glRenderbufferStorageMultisampleCoverageNV, load, "glRenderbufferStorageMultisampleCoverageNV")) ext_GL_NV_framebuffer_multisample_coverage = false;
		#endif // GL_NV_framebuffer_multisample_coverage
		#ifdef GL_NV_geometry_program4
		ext_GL_NV_geometry_program4 = Check("GL_NV_geometry_program4", exts, count);
		if (!LoadExt(glFramebufferTextureEXT, load, "glFramebufferTextureEXT")) ext_GL_NV_geometry_program4 = false;
		if (!LoadExt(glFramebufferTextureFaceEXT, load, "glFramebufferTextureFaceEXT")) ext_GL_NV_geometry_program4 = false;
		if (!LoadExt(glFramebufferTextureLayerEXT, load, "glFramebufferTextureLayerEXT")) ext_GL_NV_geometry_program4 = false;
		if (!LoadExt(glProgramVertexLimitNV, load, "glProgramVertexLimitNV")) ext_GL_NV_geometry_program4 = false;
		#endif // GL_NV_geometry_program4
		#ifdef GL_NV_gpu_program4
		ext_GL_NV_gpu_program4 = Check("GL_NV_gpu_program4", exts, count);
		if (!LoadExt(glGetProgramEnvParameterIivNV, load, "glGetProgramEnvParameterIivNV")) ext_GL_NV_gpu_program4 = false;
		if (!LoadExt(glGetProgramEnvParameterIuivNV, load, "glGetProgramEnvParameterIuivNV")) ext_GL_NV_gpu_program4 = false;
		if (!LoadExt(glGetProgramLocalParameterIivNV, load, "glGetProgramLocalParameterIivNV")) ext_GL_NV_gpu_program4 = false;
		if (!LoadExt(glGetProgramLocalParameterIuivNV, load, "glGetProgramLocalParameterIuivNV")) ext_GL_NV_gpu_program4 = false;
		if (!LoadExt(glProgramEnvParameterI4iNV, load, "glProgramEnvParameterI4iNV")) ext_GL_NV_gpu_program4 = false;
		if (!LoadExt(glProgramEnvParameterI4ivNV, load, "glProgramEnvParameterI4ivNV")) ext_GL_NV_gpu_program4 = false;
		if (!LoadExt(glProgramEnvParameterI4uiNV, load, "glProgramEnvParameterI4uiNV")) ext_GL_NV_gpu_program4 = false;
		if (!LoadExt(glProgramEnvParameterI4uivNV, load, "glProgramEnvParameterI4uivNV")) ext_GL_NV_gpu_program4 = false;
		if (!LoadExt(glProgramEnvParametersI4ivNV, load, "glProgramEnvParametersI4ivNV")) ext_GL_NV_gpu_program4 = false;
		if (!LoadExt(glProgramEnvParametersI4uivNV, load, "glProgramEnvParametersI4uivNV")) ext_GL_NV_gpu_program4 = false;
		if (!LoadExt(glProgramLocalParameterI4iNV, load, "glProgramLocalParameterI4iNV")) ext_GL_NV_gpu_program4 = false;
		if (!LoadExt(glProgramLocalParameterI4ivNV, load, "glProgramLocalParameterI4ivNV")) ext_GL_NV_gpu_program4 = false;
		if (!LoadExt(glProgramLocalParameterI4uiNV, load, "glProgramLocalParameterI4uiNV")) ext_GL_NV_gpu_program4 = false;
		if (!LoadExt(glProgramLocalParameterI4uivNV, load, "glProgramLocalParameterI4uivNV")) ext_GL_NV_gpu_program4 = false;
		if (!LoadExt(glProgramLocalParametersI4ivNV, load, "glProgramLocalParametersI4ivNV")) ext_GL_NV_gpu_program4 = false;
		if (!LoadExt(glProgramLocalParametersI4uivNV, load, "glProgramLocalParametersI4uivNV")) ext_GL_NV_gpu_program4 = false;
		#endif // GL_NV_gpu_program4
		#ifdef GL_NV_gpu_program5
		ext_GL_NV_gpu_program5 = Check("GL_NV_gpu_program5", exts, count);
		if (!LoadExt(glGetProgramSubroutineParameteruivNV, load, "glGetProgramSubroutineParameteruivNV")) ext_GL_NV_gpu_program5 = false;
		if (!LoadExt(glProgramSubroutineParametersuivNV, load, "glProgramSubroutineParametersuivNV")) ext_GL_NV_gpu_program5 = false;
		#endif // GL_NV_gpu_program5
		#ifdef GL_NV_gpu_shader5
		ext_GL_NV_gpu_shader5 = Check("GL_NV_gpu_shader5", exts, count);
		if (!LoadExt(glGetUniformi64vNV, load, "glGetUniformi64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform1i64NV, load, "glProgramUniform1i64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform1i64vNV, load, "glProgramUniform1i64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform1ui64NV, load, "glProgramUniform1ui64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform1ui64vNV, load, "glProgramUniform1ui64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform2i64NV, load, "glProgramUniform2i64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform2i64vNV, load, "glProgramUniform2i64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform2ui64NV, load, "glProgramUniform2ui64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform2ui64vNV, load, "glProgramUniform2ui64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform3i64NV, load, "glProgramUniform3i64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform3i64vNV, load, "glProgramUniform3i64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform3ui64NV, load, "glProgramUniform3ui64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform3ui64vNV, load, "glProgramUniform3ui64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform4i64NV, load, "glProgramUniform4i64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform4i64vNV, load, "glProgramUniform4i64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform4ui64NV, load, "glProgramUniform4ui64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glProgramUniform4ui64vNV, load, "glProgramUniform4ui64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform1i64NV, load, "glUniform1i64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform1i64vNV, load, "glUniform1i64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform1ui64NV, load, "glUniform1ui64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform1ui64vNV, load, "glUniform1ui64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform2i64NV, load, "glUniform2i64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform2i64vNV, load, "glUniform2i64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform2ui64NV, load, "glUniform2ui64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform2ui64vNV, load, "glUniform2ui64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform3i64NV, load, "glUniform3i64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform3i64vNV, load, "glUniform3i64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform3ui64NV, load, "glUniform3ui64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform3ui64vNV, load, "glUniform3ui64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform4i64NV, load, "glUniform4i64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform4i64vNV, load, "glUniform4i64vNV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform4ui64NV, load, "glUniform4ui64NV")) ext_GL_NV_gpu_shader5 = false;
		if (!LoadExt(glUniform4ui64vNV, load, "glUniform4ui64vNV")) ext_GL_NV_gpu_shader5 = false;
		#endif // GL_NV_gpu_shader5
		#ifdef GL_NV_half_float
		ext_GL_NV_half_float = Check("GL_NV_half_float", exts, count);
		if (!LoadExt(glColor3hNV, load, "glColor3hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glColor3hvNV, load, "glColor3hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glColor4hNV, load, "glColor4hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glColor4hvNV, load, "glColor4hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glFogCoordhNV, load, "glFogCoordhNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glFogCoordhvNV, load, "glFogCoordhvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glMultiTexCoord1hNV, load, "glMultiTexCoord1hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glMultiTexCoord1hvNV, load, "glMultiTexCoord1hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glMultiTexCoord2hNV, load, "glMultiTexCoord2hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glMultiTexCoord2hvNV, load, "glMultiTexCoord2hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glMultiTexCoord3hNV, load, "glMultiTexCoord3hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glMultiTexCoord3hvNV, load, "glMultiTexCoord3hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glMultiTexCoord4hNV, load, "glMultiTexCoord4hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glMultiTexCoord4hvNV, load, "glMultiTexCoord4hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glNormal3hNV, load, "glNormal3hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glNormal3hvNV, load, "glNormal3hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glSecondaryColor3hNV, load, "glSecondaryColor3hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glSecondaryColor3hvNV, load, "glSecondaryColor3hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glTexCoord1hNV, load, "glTexCoord1hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glTexCoord1hvNV, load, "glTexCoord1hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glTexCoord2hNV, load, "glTexCoord2hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glTexCoord2hvNV, load, "glTexCoord2hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glTexCoord3hNV, load, "glTexCoord3hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glTexCoord3hvNV, load, "glTexCoord3hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glTexCoord4hNV, load, "glTexCoord4hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glTexCoord4hvNV, load, "glTexCoord4hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertex2hNV, load, "glVertex2hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertex2hvNV, load, "glVertex2hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertex3hNV, load, "glVertex3hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertex3hvNV, load, "glVertex3hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertex4hNV, load, "glVertex4hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertex4hvNV, load, "glVertex4hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertexAttrib1hNV, load, "glVertexAttrib1hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertexAttrib1hvNV, load, "glVertexAttrib1hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertexAttrib2hNV, load, "glVertexAttrib2hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertexAttrib2hvNV, load, "glVertexAttrib2hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertexAttrib3hNV, load, "glVertexAttrib3hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertexAttrib3hvNV, load, "glVertexAttrib3hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertexAttrib4hNV, load, "glVertexAttrib4hNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertexAttrib4hvNV, load, "glVertexAttrib4hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertexAttribs1hvNV, load, "glVertexAttribs1hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertexAttribs2hvNV, load, "glVertexAttribs2hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertexAttribs3hvNV, load, "glVertexAttribs3hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertexAttribs4hvNV, load, "glVertexAttribs4hvNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertexWeighthNV, load, "glVertexWeighthNV")) ext_GL_NV_half_float = false;
		if (!LoadExt(glVertexWeighthvNV, load, "glVertexWeighthvNV")) ext_GL_NV_half_float = false;
		#endif // GL_NV_half_float
		#ifdef GL_NV_internalformat_sample_query
		ext_GL_NV_internalformat_sample_query = Check("GL_NV_internalformat_sample_query", exts, count);
		if (!LoadExt(glGetInternalformatSampleivNV, load, "glGetInternalformatSampleivNV")) ext_GL_NV_internalformat_sample_query = false;
		#endif // GL_NV_internalformat_sample_query
		#ifdef GL_NV_light_max_exponent
		ext_GL_NV_light_max_exponent = Check("GL_NV_light_max_exponent", exts, count);
		#endif // GL_NV_light_max_exponent
		#ifdef GL_NV_multisample_coverage
		ext_GL_NV_multisample_coverage = Check("GL_NV_multisample_coverage", exts, count);
		#endif // GL_NV_multisample_coverage
		#ifdef GL_NV_multisample_filter_hint
		ext_GL_NV_multisample_filter_hint = Check("GL_NV_multisample_filter_hint", exts, count);
		#endif // GL_NV_multisample_filter_hint
		#ifdef GL_NV_occlusion_query
		ext_GL_NV_occlusion_query = Check("GL_NV_occlusion_query", exts, count);
		if (!LoadExt(glBeginOcclusionQueryNV, load, "glBeginOcclusionQueryNV")) ext_GL_NV_occlusion_query = false;
		if (!LoadExt(glDeleteOcclusionQueriesNV, load, "glDeleteOcclusionQueriesNV")) ext_GL_NV_occlusion_query = false;
		if (!LoadExt(glEndOcclusionQueryNV, load, "glEndOcclusionQueryNV")) ext_GL_NV_occlusion_query = false;
		if (!LoadExt(glGenOcclusionQueriesNV, load, "glGenOcclusionQueriesNV")) ext_GL_NV_occlusion_query = false;
		if (!LoadExt(glGetOcclusionQueryivNV, load, "glGetOcclusionQueryivNV")) ext_GL_NV_occlusion_query = false;
		if (!LoadExt(glGetOcclusionQueryuivNV, load, "glGetOcclusionQueryuivNV")) ext_GL_NV_occlusion_query = false;
		if (!LoadExt(glIsOcclusionQueryNV, load, "glIsOcclusionQueryNV")) ext_GL_NV_occlusion_query = false;
		#endif // GL_NV_occlusion_query
		#ifdef GL_NV_packed_depth_stencil
		ext_GL_NV_packed_depth_stencil = Check("GL_NV_packed_depth_stencil", exts, count);
		#endif // GL_NV_packed_depth_stencil
		#ifdef GL_NV_parameter_buffer_object
		ext_GL_NV_parameter_buffer_object = Check("GL_NV_parameter_buffer_object", exts, count);
		if (!LoadExt(glProgramBufferParametersIivNV, load, "glProgramBufferParametersIivNV")) ext_GL_NV_parameter_buffer_object = false;
		if (!LoadExt(glProgramBufferParametersIuivNV, load, "glProgramBufferParametersIuivNV")) ext_GL_NV_parameter_buffer_object = false;
		if (!LoadExt(glProgramBufferParametersfvNV, load, "glProgramBufferParametersfvNV")) ext_GL_NV_parameter_buffer_object = false;
		#endif // GL_NV_parameter_buffer_object
		#ifdef GL_NV_path_rendering
		ext_GL_NV_path_rendering = Check("GL_NV_path_rendering", exts, count);
		if (!LoadExt(glCopyPathNV, load, "glCopyPathNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glCoverFillPathInstancedNV, load, "glCoverFillPathInstancedNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glCoverFillPathNV, load, "glCoverFillPathNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glCoverStrokePathInstancedNV, load, "glCoverStrokePathInstancedNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glCoverStrokePathNV, load, "glCoverStrokePathNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glDeletePathsNV, load, "glDeletePathsNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glGenPathsNV, load, "glGenPathsNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glGetPathColorGenfvNV, load, "glGetPathColorGenfvNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glGetPathColorGenivNV, load, "glGetPathColorGenivNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glGetPathCommandsNV, load, "glGetPathCommandsNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glGetPathCoordsNV, load, "glGetPathCoordsNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glGetPathDashArrayNV, load, "glGetPathDashArrayNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glGetPathLengthNV, load, "glGetPathLengthNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glGetPathMetricRangeNV, load, "glGetPathMetricRangeNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glGetPathMetricsNV, load, "glGetPathMetricsNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glGetPathParameterfvNV, load, "glGetPathParameterfvNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glGetPathParameterivNV, load, "glGetPathParameterivNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glGetPathSpacingNV, load, "glGetPathSpacingNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glGetPathTexGenfvNV, load, "glGetPathTexGenfvNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glGetPathTexGenivNV, load, "glGetPathTexGenivNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glGetProgramResourcefvNV, load, "glGetProgramResourcefvNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glInterpolatePathsNV, load, "glInterpolatePathsNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glIsPathNV, load, "glIsPathNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glIsPointInFillPathNV, load, "glIsPointInFillPathNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glIsPointInStrokePathNV, load, "glIsPointInStrokePathNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glMatrixLoad3x2fNV, load, "glMatrixLoad3x2fNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glMatrixLoad3x3fNV, load, "glMatrixLoad3x3fNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glMatrixLoadTranspose3x3fNV, load, "glMatrixLoadTranspose3x3fNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glMatrixMult3x2fNV, load, "glMatrixMult3x2fNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glMatrixMult3x3fNV, load, "glMatrixMult3x3fNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glMatrixMultTranspose3x3fNV, load, "glMatrixMultTranspose3x3fNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathColorGenNV, load, "glPathColorGenNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathCommandsNV, load, "glPathCommandsNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathCoordsNV, load, "glPathCoordsNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathCoverDepthFuncNV, load, "glPathCoverDepthFuncNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathDashArrayNV, load, "glPathDashArrayNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathFogGenNV, load, "glPathFogGenNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathGlyphIndexArrayNV, load, "glPathGlyphIndexArrayNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathGlyphIndexRangeNV, load, "glPathGlyphIndexRangeNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathGlyphRangeNV, load, "glPathGlyphRangeNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathGlyphsNV, load, "glPathGlyphsNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathMemoryGlyphIndexArrayNV, load, "glPathMemoryGlyphIndexArrayNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathParameterfNV, load, "glPathParameterfNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathParameterfvNV, load, "glPathParameterfvNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathParameteriNV, load, "glPathParameteriNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathParameterivNV, load, "glPathParameterivNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathStencilDepthOffsetNV, load, "glPathStencilDepthOffsetNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathStencilFuncNV, load, "glPathStencilFuncNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathStringNV, load, "glPathStringNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathSubCommandsNV, load, "glPathSubCommandsNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathSubCoordsNV, load, "glPathSubCoordsNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPathTexGenNV, load, "glPathTexGenNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glPointAlongPathNV, load, "glPointAlongPathNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glProgramPathFragmentInputGenNV, load, "glProgramPathFragmentInputGenNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glStencilFillPathInstancedNV, load, "glStencilFillPathInstancedNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glStencilFillPathNV, load, "glStencilFillPathNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glStencilStrokePathInstancedNV, load, "glStencilStrokePathInstancedNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glStencilStrokePathNV, load, "glStencilStrokePathNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glStencilThenCoverFillPathInstancedNV, load, "glStencilThenCoverFillPathInstancedNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glStencilThenCoverFillPathNV, load, "glStencilThenCoverFillPathNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glStencilThenCoverStrokePathInstancedNV, load, "glStencilThenCoverStrokePathInstancedNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glStencilThenCoverStrokePathNV, load, "glStencilThenCoverStrokePathNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glTransformPathNV, load, "glTransformPathNV")) ext_GL_NV_path_rendering = false;
		if (!LoadExt(glWeightPathsNV, load, "glWeightPathsNV")) ext_GL_NV_path_rendering = false;
		#endif // GL_NV_path_rendering
		#ifdef GL_NV_path_rendering_shared_edge
		ext_GL_NV_path_rendering_shared_edge = Check("GL_NV_path_rendering_shared_edge", exts, count);
		#endif // GL_NV_path_rendering_shared_edge
		#ifdef GL_NV_pixel_data_range
		ext_GL_NV_pixel_data_range = Check("GL_NV_pixel_data_range", exts, count);
		if (!LoadExt(glFlushPixelDataRangeNV, load, "glFlushPixelDataRangeNV")) ext_GL_NV_pixel_data_range = false;
		if (!LoadExt(glPixelDataRangeNV, load, "glPixelDataRangeNV")) ext_GL_NV_pixel_data_range = false;
		#endif // GL_NV_pixel_data_range
		#ifdef GL_NV_point_sprite
		ext_GL_NV_point_sprite = Check("GL_NV_point_sprite", exts, count);
		if (!LoadExt(glPointParameteriNV, load, "glPointParameteriNV")) ext_GL_NV_point_sprite = false;
		if (!LoadExt(glPointParameterivNV, load, "glPointParameterivNV")) ext_GL_NV_point_sprite = false;
		#endif // GL_NV_point_sprite
		#ifdef GL_NV_present_video
		ext_GL_NV_present_video = Check("GL_NV_present_video", exts, count);
		if (!LoadExt(glGetVideoi64vNV, load, "glGetVideoi64vNV")) ext_GL_NV_present_video = false;
		if (!LoadExt(glGetVideoivNV, load, "glGetVideoivNV")) ext_GL_NV_present_video = false;
		if (!LoadExt(glGetVideoui64vNV, load, "glGetVideoui64vNV")) ext_GL_NV_present_video = false;
		if (!LoadExt(glGetVideouivNV, load, "glGetVideouivNV")) ext_GL_NV_present_video = false;
		if (!LoadExt(glPresentFrameDualFillNV, load, "glPresentFrameDualFillNV")) ext_GL_NV_present_video = false;
		if (!LoadExt(glPresentFrameKeyedNV, load, "glPresentFrameKeyedNV")) ext_GL_NV_present_video = false;
		#endif // GL_NV_present_video
		#ifdef GL_NV_primitive_restart
		ext_GL_NV_primitive_restart = Check("GL_NV_primitive_restart", exts, count);
		if (!LoadExt(glPrimitiveRestartIndexNV, load, "glPrimitiveRestartIndexNV")) ext_GL_NV_primitive_restart = false;
		if (!LoadExt(glPrimitiveRestartNV, load, "glPrimitiveRestartNV")) ext_GL_NV_primitive_restart = false;
		#endif // GL_NV_primitive_restart
		#ifdef GL_NV_register_combiners
		ext_GL_NV_register_combiners = Check("GL_NV_register_combiners", exts, count);
		if (!LoadExt(glCombinerInputNV, load, "glCombinerInputNV")) ext_GL_NV_register_combiners = false;
		if (!LoadExt(glCombinerOutputNV, load, "glCombinerOutputNV")) ext_GL_NV_register_combiners = false;
		if (!LoadExt(glCombinerParameterfNV, load, "glCombinerParameterfNV")) ext_GL_NV_register_combiners = false;
		if (!LoadExt(glCombinerParameterfvNV, load, "glCombinerParameterfvNV")) ext_GL_NV_register_combiners = false;
		if (!LoadExt(glCombinerParameteriNV, load, "glCombinerParameteriNV")) ext_GL_NV_register_combiners = false;
		if (!LoadExt(glCombinerParameterivNV, load, "glCombinerParameterivNV")) ext_GL_NV_register_combiners = false;
		if (!LoadExt(glFinalCombinerInputNV, load, "glFinalCombinerInputNV")) ext_GL_NV_register_combiners = false;
		if (!LoadExt(glGetCombinerInputParameterfvNV, load, "glGetCombinerInputParameterfvNV")) ext_GL_NV_register_combiners = false;
		if (!LoadExt(glGetCombinerInputParameterivNV, load, "glGetCombinerInputParameterivNV")) ext_GL_NV_register_combiners = false;
		if (!LoadExt(glGetCombinerOutputParameterfvNV, load, "glGetCombinerOutputParameterfvNV")) ext_GL_NV_register_combiners = false;
		if (!LoadExt(glGetCombinerOutputParameterivNV, load, "glGetCombinerOutputParameterivNV")) ext_GL_NV_register_combiners = false;
		if (!LoadExt(glGetFinalCombinerInputParameterfvNV, load, "glGetFinalCombinerInputParameterfvNV")) ext_GL_NV_register_combiners = false;
		if (!LoadExt(glGetFinalCombinerInputParameterivNV, load, "glGetFinalCombinerInputParameterivNV")) ext_GL_NV_register_combiners = false;
		#endif // GL_NV_register_combiners
		#ifdef GL_NV_register_combiners2
		ext_GL_NV_register_combiners2 = Check("GL_NV_register_combiners2", exts, count);
		if (!LoadExt(glCombinerStageParameterfvNV, load, "glCombinerStageParameterfvNV")) ext_GL_NV_register_combiners2 = false;
		if (!LoadExt(glGetCombinerStageParameterfvNV, load, "glGetCombinerStageParameterfvNV")) ext_GL_NV_register_combiners2 = false;
		#endif // GL_NV_register_combiners2
		#ifdef GL_NV_sample_locations
		ext_GL_NV_sample_locations = Check("GL_NV_sample_locations", exts, count);
		if (!LoadExt(glFramebufferSampleLocationsfvNV, load, "glFramebufferSampleLocationsfvNV")) ext_GL_NV_sample_locations = false;
		if (!LoadExt(glNamedFramebufferSampleLocationsfvNV, load, "glNamedFramebufferSampleLocationsfvNV")) ext_GL_NV_sample_locations = false;
		if (!LoadExt(glResolveDepthValuesNV, load, "glResolveDepthValuesNV")) ext_GL_NV_sample_locations = false;
		#endif // GL_NV_sample_locations
		#ifdef GL_NV_shader_buffer_load
		ext_GL_NV_shader_buffer_load = Check("GL_NV_shader_buffer_load", exts, count);
		if (!LoadExt(glGetBufferParameterui64vNV, load, "glGetBufferParameterui64vNV")) ext_GL_NV_shader_buffer_load = false;
		if (!LoadExt(glGetIntegerui64vNV, load, "glGetIntegerui64vNV")) ext_GL_NV_shader_buffer_load = false;
		if (!LoadExt(glGetNamedBufferParameterui64vNV, load, "glGetNamedBufferParameterui64vNV")) ext_GL_NV_shader_buffer_load = false;
		if (!LoadExt(glGetUniformui64vNV, load, "glGetUniformui64vNV")) ext_GL_NV_shader_buffer_load = false;
		if (!LoadExt(glIsBufferResidentNV, load, "glIsBufferResidentNV")) ext_GL_NV_shader_buffer_load = false;
		if (!LoadExt(glIsNamedBufferResidentNV, load, "glIsNamedBufferResidentNV")) ext_GL_NV_shader_buffer_load = false;
		if (!LoadExt(glMakeBufferNonResidentNV, load, "glMakeBufferNonResidentNV")) ext_GL_NV_shader_buffer_load = false;
		if (!LoadExt(glMakeBufferResidentNV, load, "glMakeBufferResidentNV")) ext_GL_NV_shader_buffer_load = false;
		if (!LoadExt(glMakeNamedBufferNonResidentNV, load, "glMakeNamedBufferNonResidentNV")) ext_GL_NV_shader_buffer_load = false;
		if (!LoadExt(glMakeNamedBufferResidentNV, load, "glMakeNamedBufferResidentNV")) ext_GL_NV_shader_buffer_load = false;
		if (!LoadExt(glProgramUniformui64NV, load, "glProgramUniformui64NV")) ext_GL_NV_shader_buffer_load = false;
		if (!LoadExt(glProgramUniformui64vNV, load, "glProgramUniformui64vNV")) ext_GL_NV_shader_buffer_load = false;
		if (!LoadExt(glUniformui64NV, load, "glUniformui64NV")) ext_GL_NV_shader_buffer_load = false;
		if (!LoadExt(glUniformui64vNV, load, "glUniformui64vNV")) ext_GL_NV_shader_buffer_load = false;
		#endif // GL_NV_shader_buffer_load
		#ifdef GL_NV_shader_buffer_store
		ext_GL_NV_shader_buffer_store = Check("GL_NV_shader_buffer_store", exts, count);
		#endif // GL_NV_shader_buffer_store
		#ifdef GL_NV_shader_thread_group
		ext_GL_NV_shader_thread_group = Check("GL_NV_shader_thread_group", exts, count);
		#endif // GL_NV_shader_thread_group
		#ifdef GL_NV_tessellation_program5
		ext_GL_NV_tessellation_program5 = Check("GL_NV_tessellation_program5", exts, count);
		#endif // GL_NV_tessellation_program5
		#ifdef GL_NV_texgen_emboss
		ext_GL_NV_texgen_emboss = Check("GL_NV_texgen_emboss", exts, count);
		#endif // GL_NV_texgen_emboss
		#ifdef GL_NV_texgen_reflection
		ext_GL_NV_texgen_reflection = Check("GL_NV_texgen_reflection", exts, count);
		#endif // GL_NV_texgen_reflection
		#ifdef GL_NV_texture_barrier
		ext_GL_NV_texture_barrier = Check("GL_NV_texture_barrier", exts, count);
		if (!LoadExt(glTextureBarrierNV, load, "glTextureBarrierNV")) ext_GL_NV_texture_barrier = false;
		#endif // GL_NV_texture_barrier
		#ifdef GL_NV_texture_env_combine4
		ext_GL_NV_texture_env_combine4 = Check("GL_NV_texture_env_combine4", exts, count);
		#endif // GL_NV_texture_env_combine4
		#ifdef GL_NV_texture_expand_normal
		ext_GL_NV_texture_expand_normal = Check("GL_NV_texture_expand_normal", exts, count);
		#endif // GL_NV_texture_expand_normal
		#ifdef GL_NV_texture_multisample
		ext_GL_NV_texture_multisample = Check("GL_NV_texture_multisample", exts, count);
		if (!LoadExt(glTexImage2DMultisampleCoverageNV, load, "glTexImage2DMultisampleCoverageNV")) ext_GL_NV_texture_multisample = false;
		if (!LoadExt(glTexImage3DMultisampleCoverageNV, load, "glTexImage3DMultisampleCoverageNV")) ext_GL_NV_texture_multisample = false;
		if (!LoadExt(glTextureImage2DMultisampleCoverageNV, load, "glTextureImage2DMultisampleCoverageNV")) ext_GL_NV_texture_multisample = false;
		if (!LoadExt(glTextureImage2DMultisampleNV, load, "glTextureImage2DMultisampleNV")) ext_GL_NV_texture_multisample = false;
		if (!LoadExt(glTextureImage3DMultisampleCoverageNV, load, "glTextureImage3DMultisampleCoverageNV")) ext_GL_NV_texture_multisample = false;
		if (!LoadExt(glTextureImage3DMultisampleNV, load, "glTextureImage3DMultisampleNV")) ext_GL_NV_texture_multisample = false;
		#endif // GL_NV_texture_multisample
		#ifdef GL_NV_texture_rectangle
		ext_GL_NV_texture_rectangle = Check("GL_NV_texture_rectangle", exts, count);
		#endif // GL_NV_texture_rectangle
		#ifdef GL_NV_texture_shader
		ext_GL_NV_texture_shader = Check("GL_NV_texture_shader", exts, count);
		#endif // GL_NV_texture_shader
		#ifdef GL_NV_texture_shader2
		ext_GL_NV_texture_shader2 = Check("GL_NV_texture_shader2", exts, count);
		#endif // GL_NV_texture_shader2
		#ifdef GL_NV_texture_shader3
		ext_GL_NV_texture_shader3 = Check("GL_NV_texture_shader3", exts, count);
		#endif // GL_NV_texture_shader3
		#ifdef GL_NV_transform_feedback
		ext_GL_NV_transform_feedback = Check("GL_NV_transform_feedback", exts, count);
		if (!LoadExt(glActiveVaryingNV, load, "glActiveVaryingNV")) ext_GL_NV_transform_feedback = false;
		if (!LoadExt(glBeginTransformFeedbackNV, load, "glBeginTransformFeedbackNV")) ext_GL_NV_transform_feedback = false;
		if (!LoadExt(glBindBufferBaseNV, load, "glBindBufferBaseNV")) ext_GL_NV_transform_feedback = false;
		if (!LoadExt(glBindBufferOffsetNV, load, "glBindBufferOffsetNV")) ext_GL_NV_transform_feedback = false;
		if (!LoadExt(glBindBufferRangeNV, load, "glBindBufferRangeNV")) ext_GL_NV_transform_feedback = false;
		if (!LoadExt(glEndTransformFeedbackNV, load, "glEndTransformFeedbackNV")) ext_GL_NV_transform_feedback = false;
		if (!LoadExt(glGetActiveVaryingNV, load, "glGetActiveVaryingNV")) ext_GL_NV_transform_feedback = false;
		if (!LoadExt(glGetTransformFeedbackVaryingNV, load, "glGetTransformFeedbackVaryingNV")) ext_GL_NV_transform_feedback = false;
		if (!LoadExt(glGetVaryingLocationNV, load, "glGetVaryingLocationNV")) ext_GL_NV_transform_feedback = false;
		if (!LoadExt(glTransformFeedbackAttribsNV, load, "glTransformFeedbackAttribsNV")) ext_GL_NV_transform_feedback = false;
		if (!LoadExt(glTransformFeedbackStreamAttribsNV, load, "glTransformFeedbackStreamAttribsNV")) ext_GL_NV_transform_feedback = false;
		if (!LoadExt(glTransformFeedbackVaryingsNV, load, "glTransformFeedbackVaryingsNV")) ext_GL_NV_transform_feedback = false;
		#endif // GL_NV_transform_feedback
		#ifdef GL_NV_transform_feedback2
		ext_GL_NV_transform_feedback2 = Check("GL_NV_transform_feedback2", exts, count);
		if (!LoadExt(glBindTransformFeedbackNV, load, "glBindTransformFeedbackNV")) ext_GL_NV_transform_feedback2 = false;
		if (!LoadExt(glDeleteTransformFeedbacksNV, load, "glDeleteTransformFeedbacksNV")) ext_GL_NV_transform_feedback2 = false;
		if (!LoadExt(glDrawTransformFeedbackNV, load, "glDrawTransformFeedbackNV")) ext_GL_NV_transform_feedback2 = false;
		if (!LoadExt(glGenTransformFeedbacksNV, load, "glGenTransformFeedbacksNV")) ext_GL_NV_transform_feedback2 = false;
		if (!LoadExt(glIsTransformFeedbackNV, load, "glIsTransformFeedbackNV")) ext_GL_NV_transform_feedback2 = false;
		if (!LoadExt(glPauseTransformFeedbackNV, load, "glPauseTransformFeedbackNV")) ext_GL_NV_transform_feedback2 = false;
		if (!LoadExt(glResumeTransformFeedbackNV, load, "glResumeTransformFeedbackNV")) ext_GL_NV_transform_feedback2 = false;
		#endif // GL_NV_transform_feedback2
		#ifdef GL_NV_uniform_buffer_unified_memory
		ext_GL_NV_uniform_buffer_unified_memory = Check("GL_NV_uniform_buffer_unified_memory", exts, count);
		#endif // GL_NV_uniform_buffer_unified_memory
		#ifdef GL_NV_vdpau_interop
		ext_GL_NV_vdpau_interop = Check("GL_NV_vdpau_interop", exts, count);
		if (!LoadExt(glVDPAUFiniNV, load, "glVDPAUFiniNV")) ext_GL_NV_vdpau_interop = false;
		if (!LoadExt(glVDPAUGetSurfaceivNV, load, "glVDPAUGetSurfaceivNV")) ext_GL_NV_vdpau_interop = false;
		if (!LoadExt(glVDPAUInitNV, load, "glVDPAUInitNV")) ext_GL_NV_vdpau_interop = false;
		if (!LoadExt(glVDPAUIsSurfaceNV, load, "glVDPAUIsSurfaceNV")) ext_GL_NV_vdpau_interop = false;
		if (!LoadExt(glVDPAUMapSurfacesNV, load, "glVDPAUMapSurfacesNV")) ext_GL_NV_vdpau_interop = false;
		if (!LoadExt(glVDPAURegisterOutputSurfaceNV, load, "glVDPAURegisterOutputSurfaceNV")) ext_GL_NV_vdpau_interop = false;
		if (!LoadExt(glVDPAURegisterVideoSurfaceNV, load, "glVDPAURegisterVideoSurfaceNV")) ext_GL_NV_vdpau_interop = false;
		if (!LoadExt(glVDPAUSurfaceAccessNV, load, "glVDPAUSurfaceAccessNV")) ext_GL_NV_vdpau_interop = false;
		if (!LoadExt(glVDPAUUnmapSurfacesNV, load, "glVDPAUUnmapSurfacesNV")) ext_GL_NV_vdpau_interop = false;
		if (!LoadExt(glVDPAUUnregisterSurfaceNV, load, "glVDPAUUnregisterSurfaceNV")) ext_GL_NV_vdpau_interop = false;
		#endif // GL_NV_vdpau_interop
		#ifdef GL_NV_vertex_array_range
		ext_GL_NV_vertex_array_range = Check("GL_NV_vertex_array_range", exts, count);
		if (!LoadExt(glFlushVertexArrayRangeNV, load, "glFlushVertexArrayRangeNV")) ext_GL_NV_vertex_array_range = false;
		if (!LoadExt(glVertexArrayRangeNV, load, "glVertexArrayRangeNV")) ext_GL_NV_vertex_array_range = false;
		#endif // GL_NV_vertex_array_range
		#ifdef GL_NV_vertex_array_range2
		ext_GL_NV_vertex_array_range2 = Check("GL_NV_vertex_array_range2", exts, count);
		#endif // GL_NV_vertex_array_range2
		#ifdef GL_NV_vertex_attrib_integer_64bit
		ext_GL_NV_vertex_attrib_integer_64bit = Check("GL_NV_vertex_attrib_integer_64bit", exts, count);
		if (!LoadExt(glGetVertexAttribLi64vNV, load, "glGetVertexAttribLi64vNV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glGetVertexAttribLui64vNV, load, "glGetVertexAttribLui64vNV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL1i64NV, load, "glVertexAttribL1i64NV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL1i64vNV, load, "glVertexAttribL1i64vNV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL1ui64NV, load, "glVertexAttribL1ui64NV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL1ui64vNV, load, "glVertexAttribL1ui64vNV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL2i64NV, load, "glVertexAttribL2i64NV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL2i64vNV, load, "glVertexAttribL2i64vNV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL2ui64NV, load, "glVertexAttribL2ui64NV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL2ui64vNV, load, "glVertexAttribL2ui64vNV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL3i64NV, load, "glVertexAttribL3i64NV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL3i64vNV, load, "glVertexAttribL3i64vNV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL3ui64NV, load, "glVertexAttribL3ui64NV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL3ui64vNV, load, "glVertexAttribL3ui64vNV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL4i64NV, load, "glVertexAttribL4i64NV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL4i64vNV, load, "glVertexAttribL4i64vNV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL4ui64NV, load, "glVertexAttribL4ui64NV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribL4ui64vNV, load, "glVertexAttribL4ui64vNV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		if (!LoadExt(glVertexAttribLFormatNV, load, "glVertexAttribLFormatNV")) ext_GL_NV_vertex_attrib_integer_64bit = false;
		#endif // GL_NV_vertex_attrib_integer_64bit
		#ifdef GL_NV_vertex_buffer_unified_memory
		ext_GL_NV_vertex_buffer_unified_memory = Check("GL_NV_vertex_buffer_unified_memory", exts, count);
		if (!LoadExt(glBufferAddressRangeNV, load, "glBufferAddressRangeNV")) ext_GL_NV_vertex_buffer_unified_memory = false;
		if (!LoadExt(glColorFormatNV, load, "glColorFormatNV")) ext_GL_NV_vertex_buffer_unified_memory = false;
		if (!LoadExt(glEdgeFlagFormatNV, load, "glEdgeFlagFormatNV")) ext_GL_NV_vertex_buffer_unified_memory = false;
		if (!LoadExt(glFogCoordFormatNV, load, "glFogCoordFormatNV")) ext_GL_NV_vertex_buffer_unified_memory = false;
		if (!LoadExt(glGetIntegerui64i_vNV, load, "glGetIntegerui64i_vNV")) ext_GL_NV_vertex_buffer_unified_memory = false;
		if (!LoadExt(glIndexFormatNV, load, "glIndexFormatNV")) ext_GL_NV_vertex_buffer_unified_memory = false;
		if (!LoadExt(glNormalFormatNV, load, "glNormalFormatNV")) ext_GL_NV_vertex_buffer_unified_memory = false;
		if (!LoadExt(glSecondaryColorFormatNV, load, "glSecondaryColorFormatNV")) ext_GL_NV_vertex_buffer_unified_memory = false;
		if (!LoadExt(glTexCoordFormatNV, load, "glTexCoordFormatNV")) ext_GL_NV_vertex_buffer_unified_memory = false;
		if (!LoadExt(glVertexAttribFormatNV, load, "glVertexAttribFormatNV")) ext_GL_NV_vertex_buffer_unified_memory = false;
		if (!LoadExt(glVertexAttribIFormatNV, load, "glVertexAttribIFormatNV")) ext_GL_NV_vertex_buffer_unified_memory = false;
		if (!LoadExt(glVertexFormatNV, load, "glVertexFormatNV")) ext_GL_NV_vertex_buffer_unified_memory = false;
		#endif // GL_NV_vertex_buffer_unified_memory
		#ifdef GL_NV_vertex_program
		ext_GL_NV_vertex_program = Check("GL_NV_vertex_program", exts, count);
		if (!LoadExt(glAreProgramsResidentNV, load, "glAreProgramsResidentNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glBindProgramNV, load, "glBindProgramNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glDeleteProgramsNV, load, "glDeleteProgramsNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glExecuteProgramNV, load, "glExecuteProgramNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glGenProgramsNV, load, "glGenProgramsNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glGetProgramParameterdvNV, load, "glGetProgramParameterdvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glGetProgramParameterfvNV, load, "glGetProgramParameterfvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glGetProgramStringNV, load, "glGetProgramStringNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glGetProgramivNV, load, "glGetProgramivNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glGetTrackMatrixivNV, load, "glGetTrackMatrixivNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glGetVertexAttribPointervNV, load, "glGetVertexAttribPointervNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glGetVertexAttribdvNV, load, "glGetVertexAttribdvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glGetVertexAttribfvNV, load, "glGetVertexAttribfvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glGetVertexAttribivNV, load, "glGetVertexAttribivNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glIsProgramNV, load, "glIsProgramNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glLoadProgramNV, load, "glLoadProgramNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glProgramParameter4dNV, load, "glProgramParameter4dNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glProgramParameter4dvNV, load, "glProgramParameter4dvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glProgramParameter4fNV, load, "glProgramParameter4fNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glProgramParameter4fvNV, load, "glProgramParameter4fvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glProgramParameters4dvNV, load, "glProgramParameters4dvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glProgramParameters4fvNV, load, "glProgramParameters4fvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glRequestResidentProgramsNV, load, "glRequestResidentProgramsNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glTrackMatrixNV, load, "glTrackMatrixNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib1dNV, load, "glVertexAttrib1dNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib1dvNV, load, "glVertexAttrib1dvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib1fNV, load, "glVertexAttrib1fNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib1fvNV, load, "glVertexAttrib1fvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib1sNV, load, "glVertexAttrib1sNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib1svNV, load, "glVertexAttrib1svNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib2dNV, load, "glVertexAttrib2dNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib2dvNV, load, "glVertexAttrib2dvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib2fNV, load, "glVertexAttrib2fNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib2fvNV, load, "glVertexAttrib2fvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib2sNV, load, "glVertexAttrib2sNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib2svNV, load, "glVertexAttrib2svNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib3dNV, load, "glVertexAttrib3dNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib3dvNV, load, "glVertexAttrib3dvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib3fNV, load, "glVertexAttrib3fNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib3fvNV, load, "glVertexAttrib3fvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib3sNV, load, "glVertexAttrib3sNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib3svNV, load, "glVertexAttrib3svNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib4dNV, load, "glVertexAttrib4dNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib4dvNV, load, "glVertexAttrib4dvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib4fNV, load, "glVertexAttrib4fNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib4fvNV, load, "glVertexAttrib4fvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib4sNV, load, "glVertexAttrib4sNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib4svNV, load, "glVertexAttrib4svNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib4ubNV, load, "glVertexAttrib4ubNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttrib4ubvNV, load, "glVertexAttrib4ubvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttribPointerNV, load, "glVertexAttribPointerNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttribs1dvNV, load, "glVertexAttribs1dvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttribs1fvNV, load, "glVertexAttribs1fvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttribs1svNV, load, "glVertexAttribs1svNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttribs2dvNV, load, "glVertexAttribs2dvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttribs2fvNV, load, "glVertexAttribs2fvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttribs2svNV, load, "glVertexAttribs2svNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttribs3dvNV, load, "glVertexAttribs3dvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttribs3fvNV, load, "glVertexAttribs3fvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttribs3svNV, load, "glVertexAttribs3svNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttribs4dvNV, load, "glVertexAttribs4dvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttribs4fvNV, load, "glVertexAttribs4fvNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttribs4svNV, load, "glVertexAttribs4svNV")) ext_GL_NV_vertex_program = false;
		if (!LoadExt(glVertexAttribs4ubvNV, load, "glVertexAttribs4ubvNV")) ext_GL_NV_vertex_program = false;
		#endif // GL_NV_vertex_program
		#ifdef GL_NV_vertex_program2_option
		ext_GL_NV_vertex_program2_option = Check("GL_NV_vertex_program2_option", exts, count);
		#endif // GL_NV_vertex_program2_option
		#ifdef GL_NV_vertex_program3
		ext_GL_NV_vertex_program3 = Check("GL_NV_vertex_program3", exts, count);
		#endif // GL_NV_vertex_program3
		#ifdef GL_NV_vertex_program4
		ext_GL_NV_vertex_program4 = Check("GL_NV_vertex_program4", exts, count);
		if (!LoadExt(glGetVertexAttribIivEXT, load, "glGetVertexAttribIivEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glGetVertexAttribIuivEXT, load, "glGetVertexAttribIuivEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI1iEXT, load, "glVertexAttribI1iEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI1ivEXT, load, "glVertexAttribI1ivEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI1uiEXT, load, "glVertexAttribI1uiEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI1uivEXT, load, "glVertexAttribI1uivEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI2iEXT, load, "glVertexAttribI2iEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI2ivEXT, load, "glVertexAttribI2ivEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI2uiEXT, load, "glVertexAttribI2uiEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI2uivEXT, load, "glVertexAttribI2uivEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI3iEXT, load, "glVertexAttribI3iEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI3ivEXT, load, "glVertexAttribI3ivEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI3uiEXT, load, "glVertexAttribI3uiEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI3uivEXT, load, "glVertexAttribI3uivEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI4bvEXT, load, "glVertexAttribI4bvEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI4iEXT, load, "glVertexAttribI4iEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI4ivEXT, load, "glVertexAttribI4ivEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI4svEXT, load, "glVertexAttribI4svEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI4ubvEXT, load, "glVertexAttribI4ubvEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI4uiEXT, load, "glVertexAttribI4uiEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI4uivEXT, load, "glVertexAttribI4uivEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribI4usvEXT, load, "glVertexAttribI4usvEXT")) ext_GL_NV_vertex_program4 = false;
		if (!LoadExt(glVertexAttribIPointerEXT, load, "glVertexAttribIPointerEXT")) ext_GL_NV_vertex_program4 = false;
		#endif // GL_NV_vertex_program4
		#ifdef GL_NV_video_capture
		ext_GL_NV_video_capture = Check("GL_NV_video_capture", exts, count);
		if (!LoadExt(glBeginVideoCaptureNV, load, "glBeginVideoCaptureNV")) ext_GL_NV_video_capture = false;
		if (!LoadExt(glBindVideoCaptureStreamBufferNV, load, "glBindVideoCaptureStreamBufferNV")) ext_GL_NV_video_capture = false;
		if (!LoadExt(glBindVideoCaptureStreamTextureNV, load, "glBindVideoCaptureStreamTextureNV")) ext_GL_NV_video_capture = false;
		if (!LoadExt(glEndVideoCaptureNV, load, "glEndVideoCaptureNV")) ext_GL_NV_video_capture = false;
		if (!LoadExt(glGetVideoCaptureStreamdvNV, load, "glGetVideoCaptureStreamdvNV")) ext_GL_NV_video_capture = false;
		if (!LoadExt(glGetVideoCaptureStreamfvNV, load, "glGetVideoCaptureStreamfvNV")) ext_GL_NV_video_capture = false;
		if (!LoadExt(glGetVideoCaptureStreamivNV, load, "glGetVideoCaptureStreamivNV")) ext_GL_NV_video_capture = false;
		if (!LoadExt(glGetVideoCaptureivNV, load, "glGetVideoCaptureivNV")) ext_GL_NV_video_capture = false;
		if (!LoadExt(glVideoCaptureNV, load, "glVideoCaptureNV")) ext_GL_NV_video_capture = false;
		if (!LoadExt(glVideoCaptureStreamParameterdvNV, load, "glVideoCaptureStreamParameterdvNV")) ext_GL_NV_video_capture = false;
		if (!LoadExt(glVideoCaptureStreamParameterfvNV, load, "glVideoCaptureStreamParameterfvNV")) ext_GL_NV_video_capture = false;
		if (!LoadExt(glVideoCaptureStreamParameterivNV, load, "glVideoCaptureStreamParameterivNV")) ext_GL_NV_video_capture = false;
		#endif // GL_NV_video_capture
		#ifdef GL_OES_byte_coordinates
		ext_GL_OES_byte_coordinates = Check("GL_OES_byte_coordinates", exts, count);
		if (!LoadExt(glMultiTexCoord1bOES, load, "glMultiTexCoord1bOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glMultiTexCoord1bvOES, load, "glMultiTexCoord1bvOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glMultiTexCoord2bOES, load, "glMultiTexCoord2bOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glMultiTexCoord2bvOES, load, "glMultiTexCoord2bvOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glMultiTexCoord3bOES, load, "glMultiTexCoord3bOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glMultiTexCoord3bvOES, load, "glMultiTexCoord3bvOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glMultiTexCoord4bOES, load, "glMultiTexCoord4bOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glMultiTexCoord4bvOES, load, "glMultiTexCoord4bvOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glTexCoord1bOES, load, "glTexCoord1bOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glTexCoord1bvOES, load, "glTexCoord1bvOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glTexCoord2bOES, load, "glTexCoord2bOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glTexCoord2bvOES, load, "glTexCoord2bvOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glTexCoord3bOES, load, "glTexCoord3bOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glTexCoord3bvOES, load, "glTexCoord3bvOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glTexCoord4bOES, load, "glTexCoord4bOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glTexCoord4bvOES, load, "glTexCoord4bvOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glVertex2bOES, load, "glVertex2bOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glVertex2bvOES, load, "glVertex2bvOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glVertex3bOES, load, "glVertex3bOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glVertex3bvOES, load, "glVertex3bvOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glVertex4bOES, load, "glVertex4bOES")) ext_GL_OES_byte_coordinates = false;
		if (!LoadExt(glVertex4bvOES, load, "glVertex4bvOES")) ext_GL_OES_byte_coordinates = false;
		#endif // GL_OES_byte_coordinates
		#ifdef GL_OES_compressed_paletted_texture
		ext_GL_OES_compressed_paletted_texture = Check("GL_OES_compressed_paletted_texture", exts, count);
		#endif // GL_OES_compressed_paletted_texture
		#ifdef GL_OES_fixed_point
		ext_GL_OES_fixed_point = Check("GL_OES_fixed_point", exts, count);
		if (!LoadExt(glAccumxOES, load, "glAccumxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glAlphaFuncxOES, load, "glAlphaFuncxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glBitmapxOES, load, "glBitmapxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glBlendColorxOES, load, "glBlendColorxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glClearAccumxOES, load, "glClearAccumxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glClearColorxOES, load, "glClearColorxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glClearDepthxOES, load, "glClearDepthxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glClipPlanexOES, load, "glClipPlanexOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glColor3xOES, load, "glColor3xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glColor3xvOES, load, "glColor3xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glColor4xOES, load, "glColor4xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glColor4xvOES, load, "glColor4xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glConvolutionParameterxOES, load, "glConvolutionParameterxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glConvolutionParameterxvOES, load, "glConvolutionParameterxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glDepthRangexOES, load, "glDepthRangexOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glEvalCoord1xOES, load, "glEvalCoord1xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glEvalCoord1xvOES, load, "glEvalCoord1xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glEvalCoord2xOES, load, "glEvalCoord2xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glEvalCoord2xvOES, load, "glEvalCoord2xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glFeedbackBufferxOES, load, "glFeedbackBufferxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glFogxOES, load, "glFogxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glFogxvOES, load, "glFogxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glFrustumxOES, load, "glFrustumxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glGetClipPlanexOES, load, "glGetClipPlanexOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glGetConvolutionParameterxvOES, load, "glGetConvolutionParameterxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glGetFixedvOES, load, "glGetFixedvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glGetHistogramParameterxvOES, load, "glGetHistogramParameterxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glGetLightxOES, load, "glGetLightxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glGetLightxvOES, load, "glGetLightxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glGetMapxvOES, load, "glGetMapxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glGetMaterialxOES, load, "glGetMaterialxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glGetMaterialxvOES, load, "glGetMaterialxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glGetPixelMapxv, load, "glGetPixelMapxv")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glGetTexEnvxvOES, load, "glGetTexEnvxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glGetTexGenxvOES, load, "glGetTexGenxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glGetTexLevelParameterxvOES, load, "glGetTexLevelParameterxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glGetTexParameterxvOES, load, "glGetTexParameterxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glIndexxOES, load, "glIndexxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glIndexxvOES, load, "glIndexxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glLightModelxOES, load, "glLightModelxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glLightModelxvOES, load, "glLightModelxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glLightxOES, load, "glLightxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glLightxvOES, load, "glLightxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glLineWidthxOES, load, "glLineWidthxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glLoadMatrixxOES, load, "glLoadMatrixxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glLoadTransposeMatrixxOES, load, "glLoadTransposeMatrixxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMap1xOES, load, "glMap1xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMap2xOES, load, "glMap2xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMapGrid1xOES, load, "glMapGrid1xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMapGrid2xOES, load, "glMapGrid2xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMaterialxOES, load, "glMaterialxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMaterialxvOES, load, "glMaterialxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMultMatrixxOES, load, "glMultMatrixxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMultTransposeMatrixxOES, load, "glMultTransposeMatrixxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMultiTexCoord1xOES, load, "glMultiTexCoord1xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMultiTexCoord1xvOES, load, "glMultiTexCoord1xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMultiTexCoord2xOES, load, "glMultiTexCoord2xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMultiTexCoord2xvOES, load, "glMultiTexCoord2xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMultiTexCoord3xOES, load, "glMultiTexCoord3xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMultiTexCoord3xvOES, load, "glMultiTexCoord3xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMultiTexCoord4xOES, load, "glMultiTexCoord4xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glMultiTexCoord4xvOES, load, "glMultiTexCoord4xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glNormal3xOES, load, "glNormal3xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glNormal3xvOES, load, "glNormal3xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glOrthoxOES, load, "glOrthoxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glPassThroughxOES, load, "glPassThroughxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glPixelMapx, load, "glPixelMapx")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glPixelStorex, load, "glPixelStorex")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glPixelTransferxOES, load, "glPixelTransferxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glPixelZoomxOES, load, "glPixelZoomxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glPointParameterxOES, load, "glPointParameterxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glPointParameterxvOES, load, "glPointParameterxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glPointSizexOES, load, "glPointSizexOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glPolygonOffsetxOES, load, "glPolygonOffsetxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glPrioritizeTexturesxOES, load, "glPrioritizeTexturesxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glRasterPos2xOES, load, "glRasterPos2xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glRasterPos2xvOES, load, "glRasterPos2xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glRasterPos3xOES, load, "glRasterPos3xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glRasterPos3xvOES, load, "glRasterPos3xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glRasterPos4xOES, load, "glRasterPos4xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glRasterPos4xvOES, load, "glRasterPos4xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glRectxOES, load, "glRectxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glRectxvOES, load, "glRectxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glRotatexOES, load, "glRotatexOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glSampleCoveragexOES, load, "glSampleCoveragexOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glScalexOES, load, "glScalexOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glTexCoord1xOES, load, "glTexCoord1xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glTexCoord1xvOES, load, "glTexCoord1xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glTexCoord2xOES, load, "glTexCoord2xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glTexCoord2xvOES, load, "glTexCoord2xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glTexCoord3xOES, load, "glTexCoord3xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glTexCoord3xvOES, load, "glTexCoord3xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glTexCoord4xOES, load, "glTexCoord4xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glTexCoord4xvOES, load, "glTexCoord4xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glTexEnvxOES, load, "glTexEnvxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glTexEnvxvOES, load, "glTexEnvxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glTexGenxOES, load, "glTexGenxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glTexGenxvOES, load, "glTexGenxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glTexParameterxOES, load, "glTexParameterxOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glTexParameterxvOES, load, "glTexParameterxvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glTranslatexOES, load, "glTranslatexOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glVertex2xOES, load, "glVertex2xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glVertex2xvOES, load, "glVertex2xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glVertex3xOES, load, "glVertex3xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glVertex3xvOES, load, "glVertex3xvOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glVertex4xOES, load, "glVertex4xOES")) ext_GL_OES_fixed_point = false;
		if (!LoadExt(glVertex4xvOES, load, "glVertex4xvOES")) ext_GL_OES_fixed_point = false;
		#endif // GL_OES_fixed_point
		#ifdef GL_OES_query_matrix
		ext_GL_OES_query_matrix = Check("GL_OES_query_matrix", exts, count);
		if (!LoadExt(glQueryMatrixxOES, load, "glQueryMatrixxOES")) ext_GL_OES_query_matrix = false;
		#endif // GL_OES_query_matrix
		#ifdef GL_OES_read_format
		ext_GL_OES_read_format = Check("GL_OES_read_format", exts, count);
		#endif // GL_OES_read_format
		#ifdef GL_OES_single_precision
		ext_GL_OES_single_precision = Check("GL_OES_single_precision", exts, count);
		if (!LoadExt(glClearDepthfOES, load, "glClearDepthfOES")) ext_GL_OES_single_precision = false;
		if (!LoadExt(glClipPlanefOES, load, "glClipPlanefOES")) ext_GL_OES_single_precision = false;
		if (!LoadExt(glDepthRangefOES, load, "glDepthRangefOES")) ext_GL_OES_single_precision = false;
		if (!LoadExt(glFrustumfOES, load, "glFrustumfOES")) ext_GL_OES_single_precision = false;
		if (!LoadExt(glGetClipPlanefOES, load, "glGetClipPlanefOES")) ext_GL_OES_single_precision = false;
		if (!LoadExt(glOrthofOES, load, "glOrthofOES")) ext_GL_OES_single_precision = false;
		#endif // GL_OES_single_precision
		#ifdef GL_OML_interlace
		ext_GL_OML_interlace = Check("GL_OML_interlace", exts, count);
		#endif // GL_OML_interlace
		#ifdef GL_OML_resample
		ext_GL_OML_resample = Check("GL_OML_resample", exts, count);
		#endif // GL_OML_resample
		#ifdef GL_OML_subsample
		ext_GL_OML_subsample = Check("GL_OML_subsample", exts, count);
		#endif // GL_OML_subsample
		#ifdef GL_OVR_multiview
		ext_GL_OVR_multiview = Check("GL_OVR_multiview", exts, count);
		if (!LoadExt(glFramebufferTextureMultiviewOVR, load, "glFramebufferTextureMultiviewOVR")) ext_GL_OVR_multiview = false;
		#endif // GL_OVR_multiview
		#ifdef GL_PGI_misc_hints
		ext_GL_PGI_misc_hints = Check("GL_PGI_misc_hints", exts, count);
		if (!LoadExt(glHintPGI, load, "glHintPGI")) ext_GL_PGI_misc_hints = false;
		#endif // GL_PGI_misc_hints
		#ifdef GL_PGI_vertex_hints
		ext_GL_PGI_vertex_hints = Check("GL_PGI_vertex_hints", exts, count);
		#endif // GL_PGI_vertex_hints
		#ifdef GL_REND_screen_coordinates
		ext_GL_REND_screen_coordinates = Check("GL_REND_screen_coordinates", exts, count);
		#endif // GL_REND_screen_coordinates
		#ifdef GL_S3_s3tc
		ext_GL_S3_s3tc = Check("GL_S3_s3tc", exts, count);
		#endif // GL_S3_s3tc
		#ifdef GL_SGIS_detail_texture
		ext_GL_SGIS_detail_texture = Check("GL_SGIS_detail_texture", exts, count);
		if (!LoadExt(glDetailTexFuncSGIS, load, "glDetailTexFuncSGIS")) ext_GL_SGIS_detail_texture = false;
		if (!LoadExt(glGetDetailTexFuncSGIS, load, "glGetDetailTexFuncSGIS")) ext_GL_SGIS_detail_texture = false;
		#endif // GL_SGIS_detail_texture
		#ifdef GL_SGIS_fog_function
		ext_GL_SGIS_fog_function = Check("GL_SGIS_fog_function", exts, count);
		if (!LoadExt(glFogFuncSGIS, load, "glFogFuncSGIS")) ext_GL_SGIS_fog_function = false;
		if (!LoadExt(glGetFogFuncSGIS, load, "glGetFogFuncSGIS")) ext_GL_SGIS_fog_function = false;
		#endif // GL_SGIS_fog_function
		#ifdef GL_SGIS_generate_mipmap
		ext_GL_SGIS_generate_mipmap = Check("GL_SGIS_generate_mipmap", exts, count);
		#endif // GL_SGIS_generate_mipmap
		#ifdef GL_SGIS_multisample
		ext_GL_SGIS_multisample = Check("GL_SGIS_multisample", exts, count);
		if (!LoadExt(glSampleMaskSGIS, load, "glSampleMaskSGIS")) ext_GL_SGIS_multisample = false;
		if (!LoadExt(glSamplePatternSGIS, load, "glSamplePatternSGIS")) ext_GL_SGIS_multisample = false;
		#endif // GL_SGIS_multisample
		#ifdef GL_SGIS_pixel_texture
		ext_GL_SGIS_pixel_texture = Check("GL_SGIS_pixel_texture", exts, count);
		if (!LoadExt(glGetPixelTexGenParameterfvSGIS, load, "glGetPixelTexGenParameterfvSGIS")) ext_GL_SGIS_pixel_texture = false;
		if (!LoadExt(glGetPixelTexGenParameterivSGIS, load, "glGetPixelTexGenParameterivSGIS")) ext_GL_SGIS_pixel_texture = false;
		if (!LoadExt(glPixelTexGenParameterfSGIS, load, "glPixelTexGenParameterfSGIS")) ext_GL_SGIS_pixel_texture = false;
		if (!LoadExt(glPixelTexGenParameterfvSGIS, load, "glPixelTexGenParameterfvSGIS")) ext_GL_SGIS_pixel_texture = false;
		if (!LoadExt(glPixelTexGenParameteriSGIS, load, "glPixelTexGenParameteriSGIS")) ext_GL_SGIS_pixel_texture = false;
		if (!LoadExt(glPixelTexGenParameterivSGIS, load, "glPixelTexGenParameterivSGIS")) ext_GL_SGIS_pixel_texture = false;
		#endif // GL_SGIS_pixel_texture
		#ifdef GL_SGIS_point_line_texgen
		ext_GL_SGIS_point_line_texgen = Check("GL_SGIS_point_line_texgen", exts, count);
		#endif // GL_SGIS_point_line_texgen
		#ifdef GL_SGIS_point_parameters
		ext_GL_SGIS_point_parameters = Check("GL_SGIS_point_parameters", exts, count);
		if (!LoadExt(glPointParameterfSGIS, load, "glPointParameterfSGIS")) ext_GL_SGIS_point_parameters = false;
		if (!LoadExt(glPointParameterfvSGIS, load, "glPointParameterfvSGIS")) ext_GL_SGIS_point_parameters = false;
		#endif // GL_SGIS_point_parameters
		#ifdef GL_SGIS_sharpen_texture
		ext_GL_SGIS_sharpen_texture = Check("GL_SGIS_sharpen_texture", exts, count);
		if (!LoadExt(glGetSharpenTexFuncSGIS, load, "glGetSharpenTexFuncSGIS")) ext_GL_SGIS_sharpen_texture = false;
		if (!LoadExt(glSharpenTexFuncSGIS, load, "glSharpenTexFuncSGIS")) ext_GL_SGIS_sharpen_texture = false;
		#endif // GL_SGIS_sharpen_texture
		#ifdef GL_SGIS_texture4D
		ext_GL_SGIS_texture4D = Check("GL_SGIS_texture4D", exts, count);
		if (!LoadExt(glTexImage4DSGIS, load, "glTexImage4DSGIS")) ext_GL_SGIS_texture4D = false;
		if (!LoadExt(glTexSubImage4DSGIS, load, "glTexSubImage4DSGIS")) ext_GL_SGIS_texture4D = false;
		#endif // GL_SGIS_texture4D
		#ifdef GL_SGIS_texture_border_clamp
		ext_GL_SGIS_texture_border_clamp = Check("GL_SGIS_texture_border_clamp", exts, count);
		#endif // GL_SGIS_texture_border_clamp
		#ifdef GL_SGIS_texture_color_mask
		ext_GL_SGIS_texture_color_mask = Check("GL_SGIS_texture_color_mask", exts, count);
		if (!LoadExt(glTextureColorMaskSGIS, load, "glTextureColorMaskSGIS")) ext_GL_SGIS_texture_color_mask = false;
		#endif // GL_SGIS_texture_color_mask
		#ifdef GL_SGIS_texture_edge_clamp
		ext_GL_SGIS_texture_edge_clamp = Check("GL_SGIS_texture_edge_clamp", exts, count);
		#endif // GL_SGIS_texture_edge_clamp
		#ifdef GL_SGIS_texture_filter4
		ext_GL_SGIS_texture_filter4 = Check("GL_SGIS_texture_filter4", exts, count);
		if (!LoadExt(glGetTexFilterFuncSGIS, load, "glGetTexFilterFuncSGIS")) ext_GL_SGIS_texture_filter4 = false;
		if (!LoadExt(glTexFilterFuncSGIS, load, "glTexFilterFuncSGIS")) ext_GL_SGIS_texture_filter4 = false;
		#endif // GL_SGIS_texture_filter4
		#ifdef GL_SGIS_texture_lod
		ext_GL_SGIS_texture_lod = Check("GL_SGIS_texture_lod", exts, count);
		#endif // GL_SGIS_texture_lod
		#ifdef GL_SGIS_texture_select
		ext_GL_SGIS_texture_select = Check("GL_SGIS_texture_select", exts, count);
		#endif // GL_SGIS_texture_select
		#ifdef GL_SGIX_async
		ext_GL_SGIX_async = Check("GL_SGIX_async", exts, count);
		if (!LoadExt(glAsyncMarkerSGIX, load, "glAsyncMarkerSGIX")) ext_GL_SGIX_async = false;
		if (!LoadExt(glDeleteAsyncMarkersSGIX, load, "glDeleteAsyncMarkersSGIX")) ext_GL_SGIX_async = false;
		if (!LoadExt(glFinishAsyncSGIX, load, "glFinishAsyncSGIX")) ext_GL_SGIX_async = false;
		if (!LoadExt(glGenAsyncMarkersSGIX, load, "glGenAsyncMarkersSGIX")) ext_GL_SGIX_async = false;
		if (!LoadExt(glIsAsyncMarkerSGIX, load, "glIsAsyncMarkerSGIX")) ext_GL_SGIX_async = false;
		if (!LoadExt(glPollAsyncSGIX, load, "glPollAsyncSGIX")) ext_GL_SGIX_async = false;
		#endif // GL_SGIX_async
		#ifdef GL_SGIX_async_histogram
		ext_GL_SGIX_async_histogram = Check("GL_SGIX_async_histogram", exts, count);
		#endif // GL_SGIX_async_histogram
		#ifdef GL_SGIX_async_pixel
		ext_GL_SGIX_async_pixel = Check("GL_SGIX_async_pixel", exts, count);
		#endif // GL_SGIX_async_pixel
		#ifdef GL_SGIX_blend_alpha_minmax
		ext_GL_SGIX_blend_alpha_minmax = Check("GL_SGIX_blend_alpha_minmax", exts, count);
		#endif // GL_SGIX_blend_alpha_minmax
		#ifdef GL_SGIX_calligraphic_fragment
		ext_GL_SGIX_calligraphic_fragment = Check("GL_SGIX_calligraphic_fragment", exts, count);
		#endif // GL_SGIX_calligraphic_fragment
		#ifdef GL_SGIX_clipmap
		ext_GL_SGIX_clipmap = Check("GL_SGIX_clipmap", exts, count);
		#endif // GL_SGIX_clipmap
		#ifdef GL_SGIX_convolution_accuracy
		ext_GL_SGIX_convolution_accuracy = Check("GL_SGIX_convolution_accuracy", exts, count);
		#endif // GL_SGIX_convolution_accuracy
		#ifdef GL_SGIX_depth_texture
		ext_GL_SGIX_depth_texture = Check("GL_SGIX_depth_texture", exts, count);
		#endif // GL_SGIX_depth_texture
		#ifdef GL_SGIX_flush_raster
		ext_GL_SGIX_flush_raster = Check("GL_SGIX_flush_raster", exts, count);
		if (!LoadExt(glFlushRasterSGIX, load, "glFlushRasterSGIX")) ext_GL_SGIX_flush_raster = false;
		#endif // GL_SGIX_flush_raster
		#ifdef GL_SGIX_fog_offset
		ext_GL_SGIX_fog_offset = Check("GL_SGIX_fog_offset", exts, count);
		#endif // GL_SGIX_fog_offset
		#ifdef GL_SGIX_fragment_lighting
		ext_GL_SGIX_fragment_lighting = Check("GL_SGIX_fragment_lighting", exts, count);
		if (!LoadExt(glFragmentColorMaterialSGIX, load, "glFragmentColorMaterialSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glFragmentLightModelfSGIX, load, "glFragmentLightModelfSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glFragmentLightModelfvSGIX, load, "glFragmentLightModelfvSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glFragmentLightModeliSGIX, load, "glFragmentLightModeliSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glFragmentLightModelivSGIX, load, "glFragmentLightModelivSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glFragmentLightfSGIX, load, "glFragmentLightfSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glFragmentLightfvSGIX, load, "glFragmentLightfvSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glFragmentLightiSGIX, load, "glFragmentLightiSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glFragmentLightivSGIX, load, "glFragmentLightivSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glFragmentMaterialfSGIX, load, "glFragmentMaterialfSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glFragmentMaterialfvSGIX, load, "glFragmentMaterialfvSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glFragmentMaterialiSGIX, load, "glFragmentMaterialiSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glFragmentMaterialivSGIX, load, "glFragmentMaterialivSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glGetFragmentLightfvSGIX, load, "glGetFragmentLightfvSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glGetFragmentLightivSGIX, load, "glGetFragmentLightivSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glGetFragmentMaterialfvSGIX, load, "glGetFragmentMaterialfvSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glGetFragmentMaterialivSGIX, load, "glGetFragmentMaterialivSGIX")) ext_GL_SGIX_fragment_lighting = false;
		if (!LoadExt(glLightEnviSGIX, load, "glLightEnviSGIX")) ext_GL_SGIX_fragment_lighting = false;
		#endif // GL_SGIX_fragment_lighting
		#ifdef GL_SGIX_framezoom
		ext_GL_SGIX_framezoom = Check("GL_SGIX_framezoom", exts, count);
		if (!LoadExt(glFrameZoomSGIX, load, "glFrameZoomSGIX")) ext_GL_SGIX_framezoom = false;
		#endif // GL_SGIX_framezoom
		#ifdef GL_SGIX_igloo_interface
		ext_GL_SGIX_igloo_interface = Check("GL_SGIX_igloo_interface", exts, count);
		if (!LoadExt(glIglooInterfaceSGIX, load, "glIglooInterfaceSGIX")) ext_GL_SGIX_igloo_interface = false;
		#endif // GL_SGIX_igloo_interface
		#ifdef GL_SGIX_instruments
		ext_GL_SGIX_instruments = Check("GL_SGIX_instruments", exts, count);
		if (!LoadExt(glGetInstrumentsSGIX, load, "glGetInstrumentsSGIX")) ext_GL_SGIX_instruments = false;
		if (!LoadExt(glInstrumentsBufferSGIX, load, "glInstrumentsBufferSGIX")) ext_GL_SGIX_instruments = false;
		if (!LoadExt(glPollInstrumentsSGIX, load, "glPollInstrumentsSGIX")) ext_GL_SGIX_instruments = false;
		if (!LoadExt(glReadInstrumentsSGIX, load, "glReadInstrumentsSGIX")) ext_GL_SGIX_instruments = false;
		if (!LoadExt(glStartInstrumentsSGIX, load, "glStartInstrumentsSGIX")) ext_GL_SGIX_instruments = false;
		if (!LoadExt(glStopInstrumentsSGIX, load, "glStopInstrumentsSGIX")) ext_GL_SGIX_instruments = false;
		#endif // GL_SGIX_instruments
		#ifdef GL_SGIX_interlace
		ext_GL_SGIX_interlace = Check("GL_SGIX_interlace", exts, count);
		#endif // GL_SGIX_interlace
		#ifdef GL_SGIX_ir_instrument1
		ext_GL_SGIX_ir_instrument1 = Check("GL_SGIX_ir_instrument1", exts, count);
		#endif // GL_SGIX_ir_instrument1
		#ifdef GL_SGIX_list_priority
		ext_GL_SGIX_list_priority = Check("GL_SGIX_list_priority", exts, count);
		if (!LoadExt(glGetListParameterfvSGIX, load, "glGetListParameterfvSGIX")) ext_GL_SGIX_list_priority = false;
		if (!LoadExt(glGetListParameterivSGIX, load, "glGetListParameterivSGIX")) ext_GL_SGIX_list_priority = false;
		if (!LoadExt(glListParameterfSGIX, load, "glListParameterfSGIX")) ext_GL_SGIX_list_priority = false;
		if (!LoadExt(glListParameterfvSGIX, load, "glListParameterfvSGIX")) ext_GL_SGIX_list_priority = false;
		if (!LoadExt(glListParameteriSGIX, load, "glListParameteriSGIX")) ext_GL_SGIX_list_priority = false;
		if (!LoadExt(glListParameterivSGIX, load, "glListParameterivSGIX")) ext_GL_SGIX_list_priority = false;
		#endif // GL_SGIX_list_priority
		#ifdef GL_SGIX_pixel_texture
		ext_GL_SGIX_pixel_texture = Check("GL_SGIX_pixel_texture", exts, count);
		if (!LoadExt(glPixelTexGenSGIX, load, "glPixelTexGenSGIX")) ext_GL_SGIX_pixel_texture = false;
		#endif // GL_SGIX_pixel_texture
		#ifdef GL_SGIX_pixel_tiles
		ext_GL_SGIX_pixel_tiles = Check("GL_SGIX_pixel_tiles", exts, count);
		#endif // GL_SGIX_pixel_tiles
		#ifdef GL_SGIX_polynomial_ffd
		ext_GL_SGIX_polynomial_ffd = Check("GL_SGIX_polynomial_ffd", exts, count);
		if (!LoadExt(glDeformSGIX, load, "glDeformSGIX")) ext_GL_SGIX_polynomial_ffd = false;
		if (!LoadExt(glDeformationMap3dSGIX, load, "glDeformationMap3dSGIX")) ext_GL_SGIX_polynomial_ffd = false;
		if (!LoadExt(glDeformationMap3fSGIX, load, "glDeformationMap3fSGIX")) ext_GL_SGIX_polynomial_ffd = false;
		if (!LoadExt(glLoadIdentityDeformationMapSGIX, load, "glLoadIdentityDeformationMapSGIX")) ext_GL_SGIX_polynomial_ffd = false;
		#endif // GL_SGIX_polynomial_ffd
		#ifdef GL_SGIX_reference_plane
		ext_GL_SGIX_reference_plane = Check("GL_SGIX_reference_plane", exts, count);
		if (!LoadExt(glReferencePlaneSGIX, load, "glReferencePlaneSGIX")) ext_GL_SGIX_reference_plane = false;
		#endif // GL_SGIX_reference_plane
		#ifdef GL_SGIX_resample
		ext_GL_SGIX_resample = Check("GL_SGIX_resample", exts, count);
		#endif // GL_SGIX_resample
		#ifdef GL_SGIX_scalebias_hint
		ext_GL_SGIX_scalebias_hint = Check("GL_SGIX_scalebias_hint", exts, count);
		#endif // GL_SGIX_scalebias_hint
		#ifdef GL_SGIX_shadow
		ext_GL_SGIX_shadow = Check("GL_SGIX_shadow", exts, count);
		#endif // GL_SGIX_shadow
		#ifdef GL_SGIX_shadow_ambient
		ext_GL_SGIX_shadow_ambient = Check("GL_SGIX_shadow_ambient", exts, count);
		#endif // GL_SGIX_shadow_ambient
		#ifdef GL_SGIX_sprite
		ext_GL_SGIX_sprite = Check("GL_SGIX_sprite", exts, count);
		if (!LoadExt(glSpriteParameterfSGIX, load, "glSpriteParameterfSGIX")) ext_GL_SGIX_sprite = false;
		if (!LoadExt(glSpriteParameterfvSGIX, load, "glSpriteParameterfvSGIX")) ext_GL_SGIX_sprite = false;
		if (!LoadExt(glSpriteParameteriSGIX, load, "glSpriteParameteriSGIX")) ext_GL_SGIX_sprite = false;
		if (!LoadExt(glSpriteParameterivSGIX, load, "glSpriteParameterivSGIX")) ext_GL_SGIX_sprite = false;
		#endif // GL_SGIX_sprite
		#ifdef GL_SGIX_subsample
		ext_GL_SGIX_subsample = Check("GL_SGIX_subsample", exts, count);
		#endif // GL_SGIX_subsample
		#ifdef GL_SGIX_tag_sample_buffer
		ext_GL_SGIX_tag_sample_buffer = Check("GL_SGIX_tag_sample_buffer", exts, count);
		if (!LoadExt(glTagSampleBufferSGIX, load, "glTagSampleBufferSGIX")) ext_GL_SGIX_tag_sample_buffer = false;
		#endif // GL_SGIX_tag_sample_buffer
		#ifdef GL_SGIX_texture_add_env
		ext_GL_SGIX_texture_add_env = Check("GL_SGIX_texture_add_env", exts, count);
		#endif // GL_SGIX_texture_add_env
		#ifdef GL_SGIX_texture_coordinate_clamp
		ext_GL_SGIX_texture_coordinate_clamp = Check("GL_SGIX_texture_coordinate_clamp", exts, count);
		#endif // GL_SGIX_texture_coordinate_clamp
		#ifdef GL_SGIX_texture_lod_bias
		ext_GL_SGIX_texture_lod_bias = Check("GL_SGIX_texture_lod_bias", exts, count);
		#endif // GL_SGIX_texture_lod_bias
		#ifdef GL_SGIX_texture_multi_buffer
		ext_GL_SGIX_texture_multi_buffer = Check("GL_SGIX_texture_multi_buffer", exts, count);
		#endif // GL_SGIX_texture_multi_buffer
		#ifdef GL_SGIX_texture_scale_bias
		ext_GL_SGIX_texture_scale_bias = Check("GL_SGIX_texture_scale_bias", exts, count);
		#endif // GL_SGIX_texture_scale_bias
		#ifdef GL_SGIX_vertex_preclip
		ext_GL_SGIX_vertex_preclip = Check("GL_SGIX_vertex_preclip", exts, count);
		#endif // GL_SGIX_vertex_preclip
		#ifdef GL_SGIX_ycrcb
		ext_GL_SGIX_ycrcb = Check("GL_SGIX_ycrcb", exts, count);
		#endif // GL_SGIX_ycrcb
		#ifdef GL_SGIX_ycrcba
		ext_GL_SGIX_ycrcba = Check("GL_SGIX_ycrcba", exts, count);
		#endif // GL_SGIX_ycrcba
		#ifdef GL_SGI_color_matrix
		ext_GL_SGI_color_matrix = Check("GL_SGI_color_matrix", exts, count);
		#endif // GL_SGI_color_matrix
		#ifdef GL_SGI_color_table
		ext_GL_SGI_color_table = Check("GL_SGI_color_table", exts, count);
		if (!LoadExt(glColorTableParameterfvSGI, load, "glColorTableParameterfvSGI")) ext_GL_SGI_color_table = false;
		if (!LoadExt(glColorTableParameterivSGI, load, "glColorTableParameterivSGI")) ext_GL_SGI_color_table = false;
		if (!LoadExt(glColorTableSGI, load, "glColorTableSGI")) ext_GL_SGI_color_table = false;
		if (!LoadExt(glCopyColorTableSGI, load, "glCopyColorTableSGI")) ext_GL_SGI_color_table = false;
		if (!LoadExt(glGetColorTableParameterfvSGI, load, "glGetColorTableParameterfvSGI")) ext_GL_SGI_color_table = false;
		if (!LoadExt(glGetColorTableParameterivSGI, load, "glGetColorTableParameterivSGI")) ext_GL_SGI_color_table = false;
		if (!LoadExt(glGetColorTableSGI, load, "glGetColorTableSGI")) ext_GL_SGI_color_table = false;
		#endif // GL_SGI_color_table
		#ifdef GL_SGI_texture_color_table
		ext_GL_SGI_texture_color_table = Check("GL_SGI_texture_color_table", exts, count);
		#endif // GL_SGI_texture_color_table
		#ifdef GL_SUNX_constant_data
		ext_GL_SUNX_constant_data = Check("GL_SUNX_constant_data", exts, count);
		if (!LoadExt(glFinishTextureSUNX, load, "glFinishTextureSUNX")) ext_GL_SUNX_constant_data = false;
		#endif // GL_SUNX_constant_data
		#ifdef GL_SUN_convolution_border_modes
		ext_GL_SUN_convolution_border_modes = Check("GL_SUN_convolution_border_modes", exts, count);
		#endif // GL_SUN_convolution_border_modes
		#ifdef GL_SUN_global_alpha
		ext_GL_SUN_global_alpha = Check("GL_SUN_global_alpha", exts, count);
		if (!LoadExt(glGlobalAlphaFactorbSUN, load, "glGlobalAlphaFactorbSUN")) ext_GL_SUN_global_alpha = false;
		if (!LoadExt(glGlobalAlphaFactordSUN, load, "glGlobalAlphaFactordSUN")) ext_GL_SUN_global_alpha = false;
		if (!LoadExt(glGlobalAlphaFactorfSUN, load, "glGlobalAlphaFactorfSUN")) ext_GL_SUN_global_alpha = false;
		if (!LoadExt(glGlobalAlphaFactoriSUN, load, "glGlobalAlphaFactoriSUN")) ext_GL_SUN_global_alpha = false;
		if (!LoadExt(glGlobalAlphaFactorsSUN, load, "glGlobalAlphaFactorsSUN")) ext_GL_SUN_global_alpha = false;
		if (!LoadExt(glGlobalAlphaFactorubSUN, load, "glGlobalAlphaFactorubSUN")) ext_GL_SUN_global_alpha = false;
		if (!LoadExt(glGlobalAlphaFactoruiSUN, load, "glGlobalAlphaFactoruiSUN")) ext_GL_SUN_global_alpha = false;
		if (!LoadExt(glGlobalAlphaFactorusSUN, load, "glGlobalAlphaFactorusSUN")) ext_GL_SUN_global_alpha = false;
		#endif // GL_SUN_global_alpha
		#ifdef GL_SUN_mesh_array
		ext_GL_SUN_mesh_array = Check("GL_SUN_mesh_array", exts, count);
		if (!LoadExt(glDrawMeshArraysSUN, load, "glDrawMeshArraysSUN")) ext_GL_SUN_mesh_array = false;
		#endif // GL_SUN_mesh_array
		#ifdef GL_SUN_slice_accum
		ext_GL_SUN_slice_accum = Check("GL_SUN_slice_accum", exts, count);
		#endif // GL_SUN_slice_accum
		#ifdef GL_SUN_triangle_list
		ext_GL_SUN_triangle_list = Check("GL_SUN_triangle_list", exts, count);
		if (!LoadExt(glReplacementCodePointerSUN, load, "glReplacementCodePointerSUN")) ext_GL_SUN_triangle_list = false;
		if (!LoadExt(glReplacementCodeubSUN, load, "glReplacementCodeubSUN")) ext_GL_SUN_triangle_list = false;
		if (!LoadExt(glReplacementCodeubvSUN, load, "glReplacementCodeubvSUN")) ext_GL_SUN_triangle_list = false;
		if (!LoadExt(glReplacementCodeuiSUN, load, "glReplacementCodeuiSUN")) ext_GL_SUN_triangle_list = false;
		if (!LoadExt(glReplacementCodeuivSUN, load, "glReplacementCodeuivSUN")) ext_GL_SUN_triangle_list = false;
		if (!LoadExt(glReplacementCodeusSUN, load, "glReplacementCodeusSUN")) ext_GL_SUN_triangle_list = false;
		if (!LoadExt(glReplacementCodeusvSUN, load, "glReplacementCodeusvSUN")) ext_GL_SUN_triangle_list = false;
		#endif // GL_SUN_triangle_list
		#ifdef GL_SUN_vertex
		ext_GL_SUN_vertex = Check("GL_SUN_vertex", exts, count);
		if (!LoadExt(glColor3fVertex3fSUN, load, "glColor3fVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glColor3fVertex3fvSUN, load, "glColor3fVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glColor4fNormal3fVertex3fSUN, load, "glColor4fNormal3fVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glColor4fNormal3fVertex3fvSUN, load, "glColor4fNormal3fVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glColor4ubVertex2fSUN, load, "glColor4ubVertex2fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glColor4ubVertex2fvSUN, load, "glColor4ubVertex2fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glColor4ubVertex3fSUN, load, "glColor4ubVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glColor4ubVertex3fvSUN, load, "glColor4ubVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glNormal3fVertex3fSUN, load, "glNormal3fVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glNormal3fVertex3fvSUN, load, "glNormal3fVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiColor3fVertex3fSUN, load, "glReplacementCodeuiColor3fVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiColor3fVertex3fvSUN, load, "glReplacementCodeuiColor3fVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiColor4fNormal3fVertex3fSUN, load, "glReplacementCodeuiColor4fNormal3fVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiColor4fNormal3fVertex3fvSUN, load, "glReplacementCodeuiColor4fNormal3fVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiColor4ubVertex3fSUN, load, "glReplacementCodeuiColor4ubVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiColor4ubVertex3fvSUN, load, "glReplacementCodeuiColor4ubVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiNormal3fVertex3fSUN, load, "glReplacementCodeuiNormal3fVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiNormal3fVertex3fvSUN, load, "glReplacementCodeuiNormal3fVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, load, "glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, load, "glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, load, "glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, load, "glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiTexCoord2fVertex3fSUN, load, "glReplacementCodeuiTexCoord2fVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiTexCoord2fVertex3fvSUN, load, "glReplacementCodeuiTexCoord2fVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiVertex3fSUN, load, "glReplacementCodeuiVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glReplacementCodeuiVertex3fvSUN, load, "glReplacementCodeuiVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glTexCoord2fColor3fVertex3fSUN, load, "glTexCoord2fColor3fVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glTexCoord2fColor3fVertex3fvSUN, load, "glTexCoord2fColor3fVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glTexCoord2fColor4fNormal3fVertex3fSUN, load, "glTexCoord2fColor4fNormal3fVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glTexCoord2fColor4fNormal3fVertex3fvSUN, load, "glTexCoord2fColor4fNormal3fVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glTexCoord2fColor4ubVertex3fSUN, load, "glTexCoord2fColor4ubVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glTexCoord2fColor4ubVertex3fvSUN, load, "glTexCoord2fColor4ubVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glTexCoord2fNormal3fVertex3fSUN, load, "glTexCoord2fNormal3fVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glTexCoord2fNormal3fVertex3fvSUN, load, "glTexCoord2fNormal3fVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glTexCoord2fVertex3fSUN, load, "glTexCoord2fVertex3fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glTexCoord2fVertex3fvSUN, load, "glTexCoord2fVertex3fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glTexCoord4fColor4fNormal3fVertex4fSUN, load, "glTexCoord4fColor4fNormal3fVertex4fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glTexCoord4fColor4fNormal3fVertex4fvSUN, load, "glTexCoord4fColor4fNormal3fVertex4fvSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glTexCoord4fVertex4fSUN, load, "glTexCoord4fVertex4fSUN")) ext_GL_SUN_vertex = false;
		if (!LoadExt(glTexCoord4fVertex4fvSUN, load, "glTexCoord4fVertex4fvSUN")) ext_GL_SUN_vertex = false;
		#endif // GL_SUN_vertex
		#ifdef GL_WIN_phong_shading
		ext_GL_WIN_phong_shading = Check("GL_WIN_phong_shading", exts, count);
		#endif // GL_WIN_phong_shading
		#ifdef GL_WIN_specular_fog
		ext_GL_WIN_specular_fog = Check("GL_WIN_specular_fog", exts, count);
		#endif // GL_WIN_specular_fog
		
		#ifdef GL_VERSION_3_0
		delete[] exts;
		#endif
	}
	
}
