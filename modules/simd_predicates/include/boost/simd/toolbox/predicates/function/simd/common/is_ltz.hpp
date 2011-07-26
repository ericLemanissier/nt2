//==============================================================================
//         Copyright 2003 - 2011 LASMEA UMR 6602 CNRS/Univ. Clermont II         
//         Copyright 2009 - 2011 LRI    UMR 8623 CNRS/Univ Paris Sud XI         
//                                                                              
//          Distributed under the Boost Software License, Version 1.0.          
//                 See accompanying file LICENSE.txt or copy at                 
//                     http://www.boost.org/LICENSE_1_0.txt                     
//==============================================================================
#ifndef BOOST_SIMD_TOOLBOX_PREDICATES_FUNCTION_SIMD_COMMON_IS_LTZ_HPP_INCLUDED
#define BOOST_SIMD_TOOLBOX_PREDICATES_FUNCTION_SIMD_COMMON_IS_LTZ_HPP_INCLUDED
#include <boost/simd/include/functions/boolean.hpp>
#include <boost/simd/include/constants/digits.hpp>
#include <boost/dispatch/meta/strip.hpp>



/////////////////////////////////////////////////////////////////////////////
// Implementation when type A0 is signed_
/////////////////////////////////////////////////////////////////////////////
namespace boost { namespace dispatch { namespace meta
{
  BOOST_DISPATCH_FUNCTOR_IMPLEMENTATION( boost::simd::tag::is_ltz_, tag::cpu_
                            , (A0)(X)
                            , ((simd_<signed_<A0>,X>))
                            )
  {

    typedef typename meta::strip<A0>::type result_type;

    BOOST_DISPATCH_FUNCTOR_CALL(1)
    {
      return lt(a0, Zero<A0>());
    }
  };
} } }


/////////////////////////////////////////////////////////////////////////////
// Implementation when type A0 is unsigned_
/////////////////////////////////////////////////////////////////////////////
namespace boost { namespace dispatch { namespace meta
{
  BOOST_DISPATCH_FUNCTOR_IMPLEMENTATION( boost::simd::tag::is_ltz_, tag::cpu_
                            , (A0)(X)
                            , ((simd_<unsigned_<A0>,X>))
                            )
  {

    typedef typename meta::strip<A0>::type result_type;

    BOOST_DISPATCH_FUNCTOR_CALL(1)
    {
      return False<A0>();
    }
  };
} } }


#endif
