//
// Created by andyshen on 1/25/21.
//
#include "../header.h"
class LRUCache {
 public:
  explicit LRUCache(size_t max_size) : max_size_(max_size) {}
  bool Get(const std::string &key, std::string *value) {
    auto val_iter = hash_map_.find(key);
    if (val_iter == hash_map_.cend()) {
      return false;
    } else {
      MoveToHead(key);
      value->assign(val_iter->second);
    }
    return true;
  }
  bool Set(const std::string &key, const std::string &val) {
    if (hash_map_.size() >= max_size_) {
      RemoveNode();
    }
    list_.push_front(key);
    hash_map_.insert(std::pair<std::string, std::string>{key, val});
    return true;
  }

 private:
  void MoveToHead(const std::string &key) {
    list_.remove(key);
    list_.push_front(key);
  }
  void RemoveNode() {
    std::string &key = list_.back();
    hash_map_.erase(key);
    list_.pop_back();
  }
 private:
  size_t max_size_;
  std::list<std::string> list_;
  std::unordered_map<std::string, std::string> hash_map_;
};