#include "Sampler.hpp"
#include "Exception.hpp"
#include "opengl.hpp"

using namespace F3;
using namespace GL;

static const GLenum minFilter[] = {
	GL_NEAREST,
	GL_LINEAR,
	GL_LINEAR_MIPMAP_LINEAR,
	GL_LINEAR_MIPMAP_LINEAR,
};

static const GLenum magFilter[] = {
	GL_NEAREST,
	GL_LINEAR,
	GL_LINEAR,
	GL_LINEAR,
};

static const GLenum wrap[] = {
	GL_REPEAT,
	GL_MIRRORED_REPEAT,
	GL_CLAMP_TO_EDGE,
};

Sampler::Sampler(
	const TextureTarget& texture,
	SamplerFilter filter,
	SamplerEdge edge
)
: texture(texture), ID(0)
{
	glGenSamplers(1, &ID);
	if (ID <= 0) {
		throw Error("Failed to generate sampler.", __FILE__, __LINE__);
	}
	std::size_t f = static_cast<std::size_t>(filter);
	std::size_t e = static_cast<std::size_t>(edge);
	glSamplerParameterf(ID, GL_TEXTURE_MIN_FILTER, minFilter[f]);
	glSamplerParameterf(ID, GL_TEXTURE_MAG_FILTER, magFilter[f]);
	glSamplerParameterf(ID, GL_TEXTURE_WRAP_S, wrap[e]);
	glSamplerParameterf(ID, GL_TEXTURE_WRAP_T, wrap[e]);
	if (f == 3 && ext_GL_EXT_texture_filter_anisotropic) {
		float max;
		glGetFloatv(GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT, &max);
		glSamplerParameterf(ID, GL_TEXTURE_MAX_ANISOTROPY_EXT, max);
	}
	if (f > 2) {
		glBindTexture(GL_TEXTURE_2D, texture.ID);
		glGenerateMipmap(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, 0);
	}
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create sampler.", __FILE__, __LINE__);
	}
}

Sampler::Sampler(
	const TextureTarget& texture,
	SamplerFilter filter,
	float r, float g, float b, float a
)
: texture(texture), ID(0)
{
	glGenSamplers(1, &ID);
	if (ID <= 0) {
		throw Error("Failed to generate sampler.", __FILE__, __LINE__);
	}
	float border[] = {r, g, b, a};
	std::size_t f = static_cast<std::size_t>(filter);
	glSamplerParameteri(ID, GL_TEXTURE_MIN_FILTER, minFilter[f]);
	glSamplerParameteri(ID, GL_TEXTURE_MAG_FILTER, magFilter[f]);
	glSamplerParameteri(ID, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_BORDER);
	glSamplerParameteri(ID, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_BORDER);
	glSamplerParameterfv(ID, GL_TEXTURE_BORDER_COLOR, border);
	if (f == 3 && ext_GL_EXT_texture_filter_anisotropic) {
		float max;
		glGetFloatv(GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT, &max);
		glSamplerParameterf(ID, GL_TEXTURE_MAX_ANISOTROPY_EXT, max);
	}
	if (f > 2) {
		glBindTexture(GL_TEXTURE_2D, texture.ID);
		glGenerateMipmap(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, 0);
	}
	if (glGetError() != GL_NO_ERROR) {
		throw Error("Failed to create sampler.", __FILE__, __LINE__);
	}
}

Sampler::~Sampler()
{
	glDeleteSamplers(1, &ID);
}

const TextureTarget& Sampler::getTexture() const
{
	return texture;
}
