/*!
 * \file DataProcessor.hpp
 * \brief File containing the declaration of template DataProcessor class.
 *
 * \author tkornuta
 * \date Feb 11, 2010
 */

#ifndef DATAPROCESSOR_HPP_
#define DATAPROCESSOR_HPP_

#include <iostream>

namespace Base {

//template <class in, class out>

/*!
 * \class
 * \brief Abstract class for all data processors.
 * \author tkornuta
 * \date 2009-11-05
 */
class DataProcessor
{
public:
	/*!
	 * Constructor.
	 */
	DataProcessor()
	{
		std::cout << "Abstract DataProcessor: Hello \n";
	}

	/*!
	 * Destructor.
	 */
	virtual ~DataProcessor()
	{
		std::cout << "Abstract DataProcessor: Bye \n";
	}

	/*!
	 * Processes data.
	 */
	virtual void* processData(const void* data_) = 0;
	//virtual out& processData(const in& data_) = 0;
};

template <class in, class out>
class processor1 : public Base::DataProcessor
{
public:
in process (const out& out_) {};
};

}//: namespace Base

#endif /* DATAPROCESSOR_HPP_ */
