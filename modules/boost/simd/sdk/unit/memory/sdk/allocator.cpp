/*******************************************************************************
 *         Copyright 2003 & onward LASMEA UMR 6602 CNRS/Univ. Clermont II
 *         Copyright 2009 & onward LRI    UMR 8623 CNRS/Univ Paris Sud XI
 *
 *          Distributed under the Boost Software License, Version 0x01.0.
 *                 See accompanying file LICENSE.txt or copy at
 *                     http://www.boost.org/LICENSE_1_0.txt
 ******************************************************************************/
#include <boost/simd/memory/allocator.hpp>
#include <boost/simd/memory/is_aligned.hpp>

#include <vector>
#include <nt2/sdk/unit/module.hpp>
#include <nt2/sdk/unit/tests/relation.hpp>
#include <nt2/sdk/unit/tests/basic.hpp>

NT2_TEST_CASE_TPL(vector, BOOST_SIMD_TYPES)
{
  using boost::simd::is_aligned;
  std::vector<T, boost::simd::allocator<T> > p(5);

  NT2_TEST( is_aligned( &p[0] ) );
  for(int i=0;i<5;++i) p[i] = T(10)*i;
  for(int i=0;i<5;++i) NT2_TEST_EQUAL(p[i],T(10)*i);
}

NT2_TEST_CASE_TPL(vector_n, BOOST_SIMD_TYPES)
{
  using boost::simd::is_aligned;
  std::vector<T, boost::simd::allocator<T, 4> > p(5);

  NT2_TEST( is_aligned( &p[0],4 ) );
  for(int i=0;i<5;++i) p[i] = T(10)*i;
  for(int i=0;i<5;++i) NT2_TEST_EQUAL(p[i],T(10)*i);
}
