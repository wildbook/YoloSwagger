#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardOutput.hpp"
namespace leagueapi {
  struct ClashRewardConfigEntry_t {
    std::string key;
    std::vector<ClashRewardOutput_t> vals;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardConfigEntry_t& v) {
    j["key"] = v.key;
    j["vals"] = v.vals;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardConfigEntry_t& v) {
    v.key = j.at("key").get<std::string>();
    v.vals = j.at("vals").get<std::vector<ClashRewardOutput_t>>();
  }
  inline std::string to_string(const ClashRewardConfigEntry_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
