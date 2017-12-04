#ifndef SWAGGER_TYPES_ClashRewardConfigEntry_HPP
#define SWAGGER_TYPES_ClashRewardConfigEntry_HPP
#include <json.hpp>
#include "ClashRewardOutput.hpp"
namespace test {
  // 
  struct ClashRewardConfigEntry {
'    // 
    std::string key;
    // 
    std::vector<ClashRewardOutput> vals;
  };

  void to_json(nlohmann::json& j, const ClashRewardConfigEntry& v) {
    j["key"] = v.key;
    j["vals"] = v.vals;
  }

  void from_json(const nlohmann::json& j, ClashRewardConfigEntry& v) {
    v.key = j.at("key").get<std::string>;
    v.vals = j.at("vals").get<std::vector<ClashRewardOutput>>;
  }

}
#endif // SWAGGER_TYPES_ClashRewardConfigEntry_HPP
