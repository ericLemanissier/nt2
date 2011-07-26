//==============================================================================
//         Copyright 2003 - 2011 LASMEA UMR 6602 CNRS/Univ. Clermont II         
//         Copyright 2009 - 2011 LRI    UMR 8623 CNRS/Univ Paris Sud XI         
//                                                                              
//          Distributed under the Boost Software License, Version 1.0.          
//                 See accompanying file LICENSE.txt or copy at                 
//                     http://www.boost.org/LICENSE_1_0.txt                     
//==============================================================================
#ifndef BOOST_SIMD_TOOLBOX_ARITHMETIC_FUNCTION_SCALAR_IROUND2EVEN_HPP_INCLUDED
#define BOOST_SIMD_TOOLBOX_ARITHMETIC_FUNCTION_SCALAR_IROUND2EVEN_HPP_INCLUDED
#include <boost/simd/sdk/meta/as_integer.hpp>
#include <boost/simd/include/constants/properties.hpp>
#include <boost/simd/include/functions/seladd.hpp>
#include <boost/simd/include/functions/round.hpp>
#include <boost/simd/include/functions/is_inf.hpp>
#include <boost/simd/include/functions/is_ltz.hpp>
#include <boost/simd/include/functions/is_nan.hpp>


/////////////////////////////////////////////////////////////////////////////
// Implementation when type  is fundamental_
/////////////////////////////////////////////////////////////////////////////
namespace boost { namespace dispatch { namespace meta
{
  BOOST_DISPATCH_FUNCTOR_IMPLEMENTATION( boost::simd::tag::iround2even_, tag::cpu_
                            , (A0)
                            , (scalar_< fundamental_<A0> >)
                            )
  {

    typedef typename meta::strip<A0>::type result_type;

    BOOST_DISPATCH_FUNCTOR_CALL(1)
    {
      return a0;
    }
  };
} } }


namespace boost { namespace dispatch { namespace meta
{
  BOOST_DISPATCH_FUNCTOR_IMPLEMENTATION( boost::simd::tag::iround2even_, tag::cpu_
                            , (A0)
                            , (scalar_< real_<A0> >)
                            )
  {

    typedef typename meta::as_integer<A0, signed>::type result_type;

    BOOST_DISPATCH_FUNCTOR_CALL(1)
    {
      typedef result_type rtype; 
      if (is_inf(a0))
	{
	  if (is_ltz(a0))
	    return Valmin<rtype>(); 
	  else
	    return Valmax<rtype>();
	}
      if (boost::simd::is_nan(a0)) return Zero<rtype>(); 
      return round(a0);
    }
  };
} } }


#endif
