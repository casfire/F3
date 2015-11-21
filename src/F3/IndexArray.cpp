#include "IndexArray.hpp"

using namespace F3;

template <typename T> inline IndexFormat getIF();
template <> inline IndexFormat getIF<std::uint8_t >() { return IndexFormat::UINT8;  }
template <> inline IndexFormat getIF<std::uint16_t>() { return IndexFormat::UINT16; }
template <> inline IndexFormat getIF<std::uint32_t>() { return IndexFormat::UINT32; }

template <typename T>
IndexArray<T>::IndexArray(std::size_t count)
: IndexStreamBuffer(count, getIF<T>()), array(count)
{}

template <typename T>
IndexArray<T>::IndexArray(const T* data, std::size_t count)
: IndexStreamBuffer(data, count, getIF<T>()), array(data, data + count)
{}

template <typename T>
void IndexArray<T>::resize(std::size_t count)
{
	IndexStreamBuffer::resize(count);
	array.resize(count);
}

template <typename T>
const T& IndexArray<T>::operator[](std::size_t index) const
{
	return array[index];
}

template <typename T>
T& IndexArray<T>::operator[](std::size_t index)
{
	return array[index];
}

template <typename T>
const T* IndexArray<T>::getRawData() const
{
	return array.data();
}

template <typename T>
T* IndexArray<T>::getRawData()
{
	return array.data();
}

template <typename T>
void IndexArray<T>::update()
{
	IndexStreamBuffer::update(array.data());
}

template <typename T>
void IndexArray<T>::update(std::size_t start, std::size_t count)
{
	IndexStreamBuffer::update(&array[start], start, count);
}

template class IndexArray<std::uint8_t >;
template class IndexArray<std::uint16_t>;
template class IndexArray<std::uint32_t>;
