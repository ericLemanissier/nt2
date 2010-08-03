/*******************************************************************************
 *         Copyright 2003 & onward LASMEA UMR 6602 CNRS/Univ. Clermont II
 *         Copyright 2009 & onward LRI    UMR 8623 CNRS/Univ Paris Sud XI
 *
 *          Distributed under the Boost Software License, Version 1.0.
 *                 See accompanying file LICENSE.txt or copy at
 *                     http://www.boost.org/LICENSE_1_0.txt
 ******************************************************************************/
#define NT2_UNIT_MODULE "nt2::meta::as_integer"

#include <nt2/sdk/meta/as_integer.hpp>
#include <nt2/sdk/functor/category.hpp>
#include <boost/type_traits/is_same.hpp>

#include <nt2/sdk/unit/tests.hpp>
#include <nt2/sdk/unit/module.hpp>

////////////////////////////////////////////////////////////////////////////////
// Test that as_integer is correct w/r to original sign
////////////////////////////////////////////////////////////////////////////////
NT2_TEST_CASE(as_integer_native_sign)
{
  using nt2::meta::as_integer;
  using boost::is_same;
  using namespace nt2;

  NT2_TEST( (is_same<as_integer<double  >::type,int64_t >::value ));
  NT2_TEST( (is_same<as_integer<float   >::type,int32_t >::value ));
  NT2_TEST( (is_same<as_integer<int64_t >::type,int64_t >::value ));
  NT2_TEST( (is_same<as_integer<int32_t >::type,int32_t >::value ));
  NT2_TEST( (is_same<as_integer<int16_t >::type,int16_t >::value ));
  NT2_TEST( (is_same<as_integer<int8_t  >::type,int8_t  >::value ));
  NT2_TEST( (is_same<as_integer<uint64_t>::type,uint64_t>::value ));
  NT2_TEST( (is_same<as_integer<uint32_t>::type,uint32_t>::value ));
  NT2_TEST( (is_same<as_integer<uint16_t>::type,uint16_t>::value ));
  NT2_TEST( (is_same<as_integer<uint8_t >::type,uint8_t >::value ));
  NT2_TEST( (is_same<as_integer<bool    >::type,uint8_t >::value ));
}

////////////////////////////////////////////////////////////////////////////////
// Test that as_integer is correct w/r to forced sign
////////////////////////////////////////////////////////////////////////////////
NT2_TEST_CASE(as_integer_native_forced_signed)
{
  using nt2::meta::as_integer;
  using boost::is_same;
  using namespace nt2;

  NT2_TEST( (is_same<as_integer<double  ,unsigned>::type,uint64_t >::value ));
  NT2_TEST( (is_same<as_integer<float   ,unsigned>::type,uint32_t >::value ));
  NT2_TEST( (is_same<as_integer<int64_t ,unsigned>::type,uint64_t >::value ));
  NT2_TEST( (is_same<as_integer<int32_t ,unsigned>::type,uint32_t >::value ));
  NT2_TEST( (is_same<as_integer<int16_t ,unsigned>::type,uint16_t >::value ));
  NT2_TEST( (is_same<as_integer<int8_t  ,unsigned>::type,uint8_t  >::value ));
  NT2_TEST( (is_same<as_integer<uint64_t,unsigned>::type,uint64_t >::value ));
  NT2_TEST( (is_same<as_integer<uint32_t,unsigned>::type,uint32_t >::value ));
  NT2_TEST( (is_same<as_integer<uint16_t,unsigned>::type,uint16_t >::value ));
  NT2_TEST( (is_same<as_integer<uint8_t ,unsigned>::type,uint8_t  >::value ));
  NT2_TEST( (is_same<as_integer<bool    ,unsigned>::type,uint8_t >::value ));
}

////////////////////////////////////////////////////////////////////////////////
// Test that as_integer is correct w/r to forced sign
////////////////////////////////////////////////////////////////////////////////
NT2_TEST_CASE(as_integer_native_forced_unsigned)
{
  using nt2::meta::as_integer;
  using boost::is_same;
  using namespace nt2;

  NT2_TEST( (is_same<as_integer<double  ,signed>::type,int64_t>::value ));
  NT2_TEST( (is_same<as_integer<float   ,signed>::type,int32_t>::value ));
  NT2_TEST( (is_same<as_integer<int64_t ,signed>::type,int64_t>::value ));
  NT2_TEST( (is_same<as_integer<int32_t ,signed>::type,int32_t>::value ));
  NT2_TEST( (is_same<as_integer<int16_t ,signed>::type,int16_t>::value ));
  NT2_TEST( (is_same<as_integer<int8_t  ,signed>::type,int8_t >::value ));
  NT2_TEST( (is_same<as_integer<uint64_t,signed>::type,int64_t>::value ));
  NT2_TEST( (is_same<as_integer<uint32_t,signed>::type,int32_t>::value ));
  NT2_TEST( (is_same<as_integer<uint16_t,signed>::type,int16_t>::value ));
  NT2_TEST( (is_same<as_integer<uint8_t ,signed>::type,int8_t >::value ));
  NT2_TEST( (is_same<as_integer<bool    ,signed>::type,int8_t >::value ));
}
