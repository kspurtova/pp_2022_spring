// Copyright 2022 Purtova Ksenia
#include <gtest/gtest.h>
#include<iostream>
#include "./shell_sort.h"

TEST(test_Shell_Batch_sort_seq, test_on_10_elements) {
  std::vector<int> res = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  std::vector<int> betch = ShellWithBatcher(res, 10, 2);
  std::sort(res.begin(), res.end());
  ASSERT_EQ(betch, res);
}


TEST(test_Shell_Batch_sort_omp, test_on_10_elements) {
  std::vector<int> res = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  std::vector<int> betch = ShellWithBatcherOpenMP(res, 10, 2);
  std::sort(res.begin(), res.end());
  ASSERT_EQ(betch, res);
}

TEST(test_Shell_Batch_sort_seq, test_on_10_random_elements) {
  std::vector<int> res = VectorRandomizer(10);
  std::vector<int> betch = ShellWithBatcher(res, 10, 2);
  std::sort(res.begin(), res.end());
  ASSERT_EQ(betch, res);
}

TEST(test_Shell_Batch_sort_omp, test_on_10_random_elements) {
  std::vector<int> res = VectorRandomizer(10);
  std::vector<int> betch = ShellWithBatcherOpenMP(res, 10, 2);
  std::sort(res.begin(), res.end());
  ASSERT_EQ(betch, res);
}

TEST(test_Shell_Batch_sort_seq, test_on_100_random_elements) {
  std::vector<int> res = VectorRandomizer(100);
  std::vector<int> betch = ShellWithBatcher(res, 100, 8);
  std::sort(res.begin(), res.end());
  ASSERT_EQ(betch, res);
}

TEST(test_Shell_Batch_sort_omp, test_on_100_random_elements) {
  std::vector<int> res = VectorRandomizer(100);
  std::vector<int> betch = ShellWithBatcherOpenMP(res, 100, 8);
  std::sort(res.begin(), res.end());
  ASSERT_EQ(betch, res);
}

TEST(test_Shell_Batch_sort_seq, test_on_1000_random_elements) {
  std::vector<int> res = VectorRandomizer(1000);
  std::vector<int> betch = ShellWithBatcher(res, 1000, 8);
  std::sort(res.begin(), res.end());
  ASSERT_EQ(betch, res);
}

TEST(test_Shell_Batch_sort_omp, test_on_1000_random_elements) {
  std::vector<int> res = VectorRandomizer(1000);
  std::vector<int> betch = ShellWithBatcherOpenMP(res, 1000, 8);
  std::sort(res.begin(), res.end());
  ASSERT_EQ(betch, res);
}

TEST(test_Shell_Batch_sort_seq, test_on_5000_random_elements_6) {
  std::vector<int> res = VectorRandomizer(5000);
  std::vector<int> betch = ShellWithBatcher(res, 5000, 6);
  std::sort(res.begin(), res.end());
  ASSERT_EQ(betch, res);
}

TEST(test_Shell_Batch_sort_omp, test_on_5000_random_elements_6) {
  std::vector<int> res = VectorRandomizer(5000);
  std::vector<int> betch = ShellWithBatcherOpenMP(res, 5000, 6);
  std::sort(res.begin(), res.end());
  ASSERT_EQ(betch, res);
}

TEST(test_Shell_Batch_sort_seq, test_on_5000_random_elements_8) {
  std::vector<int> res = VectorRandomizer(5000);
  std::vector<int> betch = ShellWithBatcher(res, 5000, 8);
  std::sort(res.begin(), res.end());
  ASSERT_EQ(betch, res);
}

TEST(test_Shell_Batch_sort_omp, test_on_5000_random_elements_8) {
  std::vector<int> res = VectorRandomizer(5000);
  std::vector<int> betch = ShellWithBatcherOpenMP(res, 5000, 8);
  std::sort(res.begin(), res.end());
  ASSERT_EQ(betch, res);
}

TEST(test_Shell_Batch_sort_seq, test_on_5000_random_elements_12) {
  std::vector<int> res = VectorRandomizer(5000);
  std::vector<int> betch = ShellWithBatcher(res, 5000, 12);
  std::sort(res.begin(), res.end());
  ASSERT_EQ(betch, res);
}

TEST(test_Shell_Batch_sort_omp, test_on_5000_random_elements_12) {
  std::vector<int> res = VectorRandomizer(5000);
  std::vector<int> betch = ShellWithBatcherOpenMP(res, 5000, 12);
  std::sort(res.begin(), res.end());
  ASSERT_EQ(betch, res);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
