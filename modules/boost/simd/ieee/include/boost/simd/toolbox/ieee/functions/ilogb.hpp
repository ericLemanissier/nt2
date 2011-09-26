//////////////////////////////////////////////////////////////////////////////
///   Copyright 2003 and onward LASMEA UMR 6602 CNRS/U.B.P Clermont-Ferrand
///   Copyright 2009 and onward LRI    UMR 8623 CNRS/Univ Paris Sud XI
///
///          Distributed under the Boost Software License, Version 1.0
///                 See accompanying file LICENSE.txt or copy at
///                     http://www.boost.org/LICENSE_1_0.txt
//////////////////////////////////////////////////////////////////////////////
#ifndef BOOST_SIMD_TOOLBOX_IEEE_FUNCTIONS_ILOGB_HPP_INCLUDED
#define BOOST_SIMD_TOOLBOX_IEEE_FUNCTIONS_ILOGB_HPP_INCLUDED
#include <boost/simd/include/simd.hpp>
#include <boost/dispatch/include/functor.hpp>

/*!
 * \internal functor \endinternal
 * \ingroup boost_simd_ieee
 * \defgroup ilogb ilogb function
 *
 * \par Description
 * This function returns the integer truncation
 * of the base 2 logarithm of a0.
 * It coincides with the exponent function
 * on all platforms supported.
 *
 * \par Header file
 * 
 * \code
 * #include <nt2/include/functions/ilogb.hpp>
 * \endcode
 * 
 * 
 * \synopsis
 *
 * \code
 * namespace boost::simd
 * {
 *   template <class A0>
 *     meta::call<tag::ilogb_(A0)>::type
 *     ilogb(const A0 & a0);
 * }
 * \endcode
 *
 * \param a0 is the unique parameter of ilogb
 * 
 * \return always an integer value
 *  
 * \internal end_functor \endinternal
**/

namespace boost { namespace simd { namespace tag
  {         
    /*!
     * \internal tag \endinternal
     * \file
     * \brief Define the tag ilogb_ of functor ilogb 
     *        in namespace boost::simd::tag
     * \internal end_tag \endinternal
    **/
    struct ilogb_ {};
  }
  BOOST_DISPATCH_FUNCTION_IMPLEMENTATION(tag::ilogb_, ilogb, 1)
} }

#endif

// modified by jt the 25/12/2010
