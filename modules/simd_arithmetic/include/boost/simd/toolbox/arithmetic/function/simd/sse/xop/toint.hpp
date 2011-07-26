//==============================================================================
//         Copyright 2003 - 2011 LASMEA UMR 6602 CNRS/Univ. Clermont II         
//         Copyright 2009 - 2011 LRI    UMR 8623 CNRS/Univ Paris Sud XI         
//                                                                              
//          Distributed under the Boost Software License, Version 1.0.          
//                 See accompanying file LICENSE.txt or copy at                 
//                     http://www.boost.org/LICENSE_1_0.txt                     
//==============================================================================
#ifndef BOOST_SIMD_TOOLBOX_ARITHMETIC_FUNCTION_SIMD_SSE_XOP_TOINT_HPP_INCLUDED
#define BOOST_SIMD_TOOLBOX_ARITHMETIC_FUNCTION_SIMD_SSE_XOP_TOINT_HPP_INCLUDED
#include <boost/dispatch/meta/as_integer.hpp>
#include <boost/dispatch/meta/strip.hpp>
#include <boost/simd/include/functions/make.hpp>
/////////////////////////////////////////////////////////////////////////////
// Implementation when type A0 is arithmetic_
/////////////////////////////////////////////////////////////////////////////
namespace boost { namespace dispatch { namespace meta
{
  BOOST_DISPATCH_FUNCTOR_IMPLEMENTATION(boost::simd::tag::toint_, tag::cpu_,
                        (A0),
                        ((simd_<arithmetic_<A0>,boost::simd::tag::xop_>))
                       )
  {
 typedef typename meta::as_integer<A0>::type result_type; 
    BOOST_DISPATCH_FUNCTOR_CALL_REPEAT(1)
    {
      return a0;
    }
  };

/////////////////////////////////////////////////////////////////////////////
// Implementation when type A0 is double
/////////////////////////////////////////////////////////////////////////////


  BOOST_DISPATCH_FUNCTOR_IMPLEMENTATION(boost::simd::tag::toint_, tag::cpu_,
                        (A0),
                        ((simd_<double_<A0>,boost::simd::tag::xop_>))
                       )
  {
 typedef typename meta::as_integer<A0>::type result_type; 
    BOOST_DISPATCH_FUNCTOR_CALL_REPEAT(1)
    {
      typedef result_type type;
      return make<type>(a0[0],a0[1], a0[2],a0[3]); //TODO with _mm_cvttpd_epi32
    }
  };

/////////////////////////////////////////////////////////////////////////////
// Implementation when type A0 is float
/////////////////////////////////////////////////////////////////////////////


  BOOST_DISPATCH_FUNCTOR_IMPLEMENTATION(boost::simd::tag::toint_, tag::cpu_,
                        (A0),
                        ((simd_<float_<A0>,boost::simd::tag::xop_>))
                       )
  {
 typedef typename meta::as_integer<A0>::type result_type; 
    BOOST_DISPATCH_FUNCTOR_CALL_REPEAT(1)
    {
      typedef result_type type;
      type that =  {_mm256_cvttps_epi32(a0)};
      return  that;
    }
  };
} } }
#endif
