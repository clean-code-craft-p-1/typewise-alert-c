
#include "typewise-alert.h"

#include "gtest/gtest.h"

TEST(TypewiseAlert, InferBreachAsPerLimits) {
  ASSERT_TRUE(inferBreach(12, 20, 30) == TOO_LOW);
}
