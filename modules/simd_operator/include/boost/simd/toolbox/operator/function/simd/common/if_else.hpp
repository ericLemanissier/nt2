//==============================================================================
//         Copyright 2003 - 2011 LASMEA UMR 6602 CNRS/Univ. Clermont II         
//         Copyright 2009 - 2011 LRI    UMR 8623 CNRS/Univ Paris Sud XI         
//                                                                              
//          Distributed under the Boost Software License, Version 1.0.          
//                 See accompanying file LICENSE.txt or copy at                 
//                     http://www.boost.org/LICENSE_1_0.txt                     
//==============================================================================
#ifndef BOOST_SIMD_TOOLBOX_OPERATOR_FUNCTION_SIMD_COMMON_IF_ELSE_HPP_INCLUDED
#define BOOST_SIMD_TOOLBOX_OPERATOR_FUNCTION_SIMD_COMMON_IF_ELSE_HPP_INCLUDED

#include <boost/simd/toolbox/bitwise/include/select.hpp>
#include <boost/simd/toolbox/predicates/include/boolean.hpp>

namespace boost { namespace dispatch { namespace meta
{
  BOOST_DISPATCH_FUNCTOR_IMPLEMENTATION( boost::simd::tag::if_else_, tag::cpu_, (A0)(X)
                            , ((simd_< fundamental_<A0>, X >))
                              ((simd_< fundamental_<A0>, X >))
                              ((simd_< fundamental_<A0>, X >))
                            )
  {
    typedef A0 result_type;
    BOOST_DISPATCH_FUNCTOR_CALL_REPEAT(3)
    {
      return boost::simd::select( boost::simd::boolean(a0), a2, a1 );
    }
  };
} } }

#endif
