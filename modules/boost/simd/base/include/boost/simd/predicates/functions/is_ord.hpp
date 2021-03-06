//==============================================================================
//         Copyright 2003 - 2012   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2012   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef BOOST_SIMD_PREDICATES_FUNCTIONS_IS_ORD_HPP_INCLUDED
#define BOOST_SIMD_PREDICATES_FUNCTIONS_IS_ORD_HPP_INCLUDED
#include <boost/simd/include/functor.hpp>
#include <boost/dispatch/include/functor.hpp>


namespace boost { namespace simd { namespace tag
  {
   /*!
     @brief is_ord generic tag

     Represents the is_ord function in generic contexts.

     @par Models:
        Hierarchy
   **/
    struct is_ord_ : ext::elementwise_<is_ord_>
    {
      /// @brief Parent hierarchy
      typedef ext::elementwise_<is_ord_> parent;
      template<class... Args>
      static BOOST_FORCEINLINE BOOST_AUTO_DECLTYPE dispatch(Args&&... args)
      BOOST_AUTO_DECLTYPE_BODY( dispatching_is_ord_( ext::adl_helper(), static_cast<Args&&>(args)... ) )
    };}
  namespace ext
  {
   template<class Site>
   BOOST_FORCEINLINE generic_dispatcher<tag::is_ord_, Site> dispatching_is_ord_(adl_helper, boost::dispatch::meta::unknown_<Site>, ...)
   {
     return generic_dispatcher<tag::is_ord_, Site>();
   }
   template<class... Args>
   struct impl_is_ord_;
  }
  /*!
    Returns True if neither a0 nor a1 is nan.

    @par Semantic:

    @code
    logical<T> r = is_ord(a0,a1);
    @endcode

    is similar to:

    @code
    logical<T> r = (a0 == a0) && (a1 == a1);
    @endcode

    @param a0

    @param a1

    @return a logical value
  **/
  BOOST_DISPATCH_FUNCTION_IMPLEMENTATION(tag::is_ord_, is_ord, 2)
} }

#endif

