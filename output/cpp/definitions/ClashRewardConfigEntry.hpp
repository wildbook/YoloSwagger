#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardOutput.hpp"
namespace leagueapi {
  struct ClashRewardConfigEntry_t {
    std::vector<ClashRewardOutput_t> vals;
    std::string key;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardConfigEntry_t& v) {
    j["vals"] = v.vals;
    j["key"] = v.key;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardConfigEntry_t& v) {
    v.vals = j.at("vals").get<std::vector<ClashRewardOutput_t>>();
    v.key = j.at("key").get<std::string>();
  }
}
