#ifndef SWAGGER_TYPES_ClashRewardConfigEntry_HPP
#define SWAGGER_TYPES_ClashRewardConfigEntry_HPP
#include <json.hpp>
#include "ClashRewardOutput.hpp"
namespace leagueapi {
  // 
  struct ClashRewardConfigEntry {
    // 
    std::vector<ClashRewardOutput> vals;
    // 
    std::string key;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardConfigEntry& v) {
    j["vals"] = v.vals;
    j["key"] = v.key;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardConfigEntry& v) {
    v.vals = j.at("vals").get<std::vector<ClashRewardOutput>>;
    v.key = j.at("key").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClashRewardConfigEntry_HPP
