#include <gtest/gtest.h>
#include <glog/logging.h>

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  google::InitGoogleLogging("Kuiper");
  FLAGS_log_dir = "../../course1/log";
  FLAGS_alsologtostderr = true; // 日志记录到文件的同时输出到stderr

  LOG(INFO) << "Start test...\n";
  return RUN_ALL_TESTS();
}