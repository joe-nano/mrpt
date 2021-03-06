/* +------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)            |
   |                          https://www.mrpt.org/                         |
   |                                                                        |
   | Copyright (c) 2005-2020, Individual contributors, see AUTHORS file     |
   | See: https://www.mrpt.org/Authors - All rights reserved.               |
   | Released under BSD License. See: https://www.mrpt.org/License          |
   +------------------------------------------------------------------------+ */

#include <gtest/gtest.h>
#include <mrpt/math/CVectorDynamic.h>

using namespace mrpt;
using namespace mrpt::math;
using namespace std;

TEST(CVectorDouble, resize)
{
	{
		mrpt::math::CVectorDouble v;
		EXPECT_TRUE(v.size() == 0);
	}

	for (int i = 0; i < 10; i++)
	{
		mrpt::math::CVectorDouble v(i);
		EXPECT_TRUE(v.size() == i);
	}

	for (int i = 0; i < 10; i++)
	{
		mrpt::math::CVectorDouble v;
		v.resize(i);
		EXPECT_TRUE(v.size() == i);
	}

	for (int i = 10; i >= 0; i--)
	{
		mrpt::math::CVectorDouble v;
		v.resize(i);
		EXPECT_TRUE(v.size() == i);
	}

	{
		mrpt::math::CVectorDouble v;
		for (int i = 0; i < 10; i++)
		{
			v.push_back(double(i));
			EXPECT_TRUE(v.size() == (i + 1));
		}
		for (int i = 0; i < 10; i++) EXPECT_NEAR(v[i], i, 1e-10);
	}
}
