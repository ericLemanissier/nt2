//==============================================================================
//         Copyright 2003 - 2011 LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2011 LRI    UMR 8623 CNRS/Univ Paris Sud XI
//         Copyright 2012 - 2014 MetaScale SAS
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef BOOST_SIMD_PREDICATES_FUNCTIONS_SIMD_COMMON_IS_LTZ_HPP_INCLUDED
#define BOOST_SIMD_PREDICATES_FUNCTIONS_SIMD_COMMON_IS_LTZ_HPP_INCLUDED

#include <boost/simd/predicates/functions/is_ltz.hpp>
#include <boost/simd/sdk/meta/as_logical.hpp>
#include <boost/simd/include/functions/simd/is_less.hpp>
#include <boost/simd/include/constants/zero.hpp>
#include <boost/simd/include/constants/false.hpp>
#include <boost/dispatch/attributes.hpp>

namespace boost { namespace simd { namespace ext
{
  BOOST_DISPATCH_IMPLEMENT          ( is_ltz_, tag::cpu_
                                    , (A0)(X)
                                    , ((simd_<signed_<A0>,X>))
                                    )
  {
    typedef typename meta::as_logical<A0>::type result_type;
    BOOST_FORCEINLINE BOOST_SIMD_FUNCTOR_CALL(1)
    {
      return lt(a0, Zero<A0>());
    }
  };

  BOOST_DISPATCH_IMPLEMENT          ( is_ltz_, tag::cpu_
                                    , (A0)(X)
                                    , ((simd_<unsigned_<A0>,X>))
                                    )
  {
    typedef typename meta::as_logical<A0>::type result_type;
    BOOST_FORCEINLINE result_type operator()(const A0&)const
    {
     return boost::simd::False<result_type>();
    }
  };
} } }

#endif
