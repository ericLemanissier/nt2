//==============================================================================
//         Copyright 2003 - 2012   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2012   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef BOOST_SIMD_BITWISE_FUNCTIONS_BITWISE_NOTAND_HPP_INCLUDED
#define BOOST_SIMD_BITWISE_FUNCTIONS_BITWISE_NOTAND_HPP_INCLUDED
#include <boost/simd/include/functor.hpp>
#include <boost/dispatch/include/functor.hpp>
namespace boost { namespace simd { namespace tag
  {
    /*!
      @brief  bitwise_notand generic tag

      Represents the bitwise_notand function in generic contexts.

      @par Models:
      Hierarchy
    **/
    struct bitwise_notand_ : ext::elementwise_<bitwise_notand_>
    {
      /// @brief Parent hierarchy
      typedef ext::elementwise_<bitwise_notand_> parent;
    };
  }
  /*!
    Computes the bitwise and not of its parameters.

    @par semantic:
    For any given value @c x, of type @c T1 @c y of type @c T2
    of same memory size:

    @code
    T r = bitwise_notand(x, y);
    @endcode

    The code is equivalent to:

    @code
    T r = ~x & y;
    @endcode

    @par Alias

    b_notand

    @param  a0
    @param  a1

    @return      a value of the same type as the input.

  **/
  BOOST_DISPATCH_FUNCTION_IMPLEMENTATION(tag::bitwise_notand_, bitwise_notand, 2)
  BOOST_DISPATCH_FUNCTION_IMPLEMENTATION(tag::bitwise_notand_, b_notand, 2)
} }

#endif

// modified by jt the 25/12/2010
