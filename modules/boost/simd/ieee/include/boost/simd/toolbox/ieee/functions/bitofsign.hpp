//////////////////////////////////////////////////////////////////////////////
///   Copyright 2003 and onward LASMEA UMR 6602 CNRS/U.B.P Clermont-Ferrand
///   Copyright 2009 and onward LRI    UMR 8623 CNRS/Univ Paris Sud XI
///
///          Distributed under the Boost Software License, Version 1.0
///                 See accompanying file LICENSE.txt or copy at
///                     http://www.boost.org/LICENSE_1_0.txt
//////////////////////////////////////////////////////////////////////////////
#ifndef BOOST_SIMD_TOOLBOX_IEEE_FUNCTIONS_BITOFSIGN_HPP_INCLUDED
#define BOOST_SIMD_TOOLBOX_IEEE_FUNCTIONS_BITOFSIGN_HPP_INCLUDED
#include <boost/simd/include/simd.hpp>
#include <boost/dispatch/include/functor.hpp>

/*!
 * \internal functor \endinternal
 * \ingroup boost_simd_ieee
 * \defgroup bitofsign bitofsign function
 *
 * \par Description
 * Returns a value of the same type as the input
 * with all bits set to zero
 * except the bit of sign which is preserved.
 * Returns always zero for unsigned types
 *
 * \par Header file
 * 
 * \code
 * #include <nt2/include/functions/bitofsign.hpp>
 * \endcode
 * 
 * 
 * \synopsis
 *
 * \code
 * namespace boost::simd
 * {
 *   template <class A0>
 *     meta::call<tag::bitofsign_(A0)>::type
 *     bitofsign(const A0 & a0);
 * }
 * \endcode
 *
 * \param a0 is the unique parameter of bitofsign
 * 
 * \return a value of the same type as the parameter
 *  
 * \internal end_functor \endinternal
**/

namespace boost { namespace simd { namespace tag
  {         
    /*!
     * \internal tag \endinternal
     * \file
     * \brief Define the tag bitofsign_ of functor bitofsign 
     *        in namespace boost::simd::tag
     * \internal end_tag \endinternal
    **/
    struct bitofsign_ {};
  }
  BOOST_DISPATCH_FUNCTION_IMPLEMENTATION(tag::bitofsign_, bitofsign, 1)
} }

#endif

// modified by jt the 25/12/2010
