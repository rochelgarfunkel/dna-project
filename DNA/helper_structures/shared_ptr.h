#ifndef __SHARED_PTR_H__
#define __SHARED_PTR_H__

#include <cstddef>


template <typename T>
class SharedPtr{
public:
	/*if object will be created implicitly, ptr will be deleted at the end of scope without notifying the user.*/
	explicit SharedPtr(T* ptr = 0);
	
	template <typename Y>
	SharedPtr(SharedPtr<Y>& other);
	
	~SharedPtr();
	
	template <typename Y>
	SharedPtr<T>& operator = (SharedPtr<Y>& other);
	
	T* get() const;
	size_t* getCount() const;
	T* operator -> () const;
	operator bool() const;

private:
	T* m_ptr;
	size_t* m_counter;
};


template <typename T>
SharedPtr<T>::SharedPtr(T* ptr) : m_ptr(ptr), m_counter(new size_t(1))
{}


template <typename T>
template <typename Y>
SharedPtr<T>::SharedPtr(SharedPtr<Y>& other):m_ptr(other.get()), m_counter(&(++*(other.getCount())))
{}


template <typename T>
SharedPtr<T>::~SharedPtr()
{
	if(--(*m_counter) == 0)
	{
		delete m_ptr;
		delete m_counter;
		m_ptr = NULL;
		m_counter = NULL;
	}
}

	
template <typename T>
template <typename Y>
SharedPtr<T>& SharedPtr<T>::operator = (SharedPtr<Y>& other)
{
	if(m_ptr != other.get())
	{
		if(--*m_counter == 0)
			delete m_ptr;
		m_ptr = other.get();
		m_counter = &(++*other.getCount());
	}
	return *this;
}


template <typename T>
size_t* SharedPtr<T>::getCount() const
{
	return m_counter;
}


template <typename T>
T* SharedPtr<T>::get() const
{
	return m_ptr;
}


template <typename T>
inline T* SharedPtr<T>::operator -> () const
{
	return m_ptr;
}


template <typename T>
inline SharedPtr<T>::operator bool() const
{
	return m_ptr != NULL;
}


/* NON-MEMBER FUNCTIONS*/

template <typename T>
inline T& operator * (const SharedPtr<T>& SharedPtr)
{
	return *(SharedPtr.get());
}



#endif
