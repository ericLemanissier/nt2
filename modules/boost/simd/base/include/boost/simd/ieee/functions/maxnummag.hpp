//==============================================================================
//         Copyright 2003 - 2012   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2012   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef BOOST_SIMD_IEEE_FUNCTIONS_MAXNUMMAG_HPP_INCLUDED
#define BOOST_SIMD_IEEE_FUNCTIONS_MAXNUMMAG_HPP_INCLUDED
#include <boost/simd/include/functor.hpp>
#include <boost/dispatch/include/functor.hpp>


namespace boost { namespace simd { namespace tag
  {
   /*!
     @brief maxnummag generic tag

     Represents the maxnummag function in generic contexts.

     @par Models:
        Hierarchy
   **/
    struct maxnummag_ : ext::elementwise_<maxnummag_>
    {
      /// @brief Parent hierarchy
      typedef ext::elementwise_<maxnummag_> parent;
      template<class... Args>
      static BOOST_FORCEINLINE BOOST_AUTO_DECLTYPE dispatch(Args&&... args)
      BOOST_AUTO_DECLTYPE_BODY( dispatching_maxnummag_( ext::adl_helper(), static_cast<Args&&>(args)... ) )
    };
  }
  namespace ext
  {
   template<class Site>
   BOOST_FORCEINLINE generic_dispatcher<tag::maxnummag_, Site> dispatching_maxnummag_(adl_helper, boost::dispatch::meta::unknown_<Site>, ...)
   {
     return generic_dispatcher<tag::maxnummag_, Site>();
   }
   template<class... Args>
   struct impl_maxnummag_;
  }
  /*!
    Returns the input value which have the greatest absolute value, ignoring nan.

    @par Semantic:

    @code
    T r = maxnummag(a0,a1);
    @endcode

    is similar to:

    @code
    T r = isnan(a0) ? a1 : (isnan(a1) ? a0 : maxmag(a0, a1));
    @endcode

    @param a0

    @param a1

    @return a value of same type as the inputs
  **/
  BOOST_DISPATCH_FUNCTION_IMPLEMENTATION(tag::maxnummag_, maxnummag, 2)
} }

#endif
