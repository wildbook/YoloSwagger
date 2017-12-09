#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardTime.hpp"
#include "ClashRewardDefinition.hpp"
namespace leagueapi {
  struct ClashRewardOutput_t {
    ClashRewardDefinition_t primary;
    ClashRewardTime_t grant;
    ClashRewardTime_t show;
    ClashRewardDefinition_t alternative;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardOutput_t& v) {
    j["primary"] = v.primary;
    j["grant"] = v.grant;
    j["show"] = v.show;
    j["alternative"] = v.alternative;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardOutput_t& v) {
    v.primary = j.at("primary").get<ClashRewardDefinition_t>();
    v.grant = j.at("grant").get<ClashRewardTime_t>();
    v.show = j.at("show").get<ClashRewardTime_t>();
    v.alternative = j.at("alternative").get<ClashRewardDefinition_t>();
  }
  inline std::string to_string(const ClashRewardOutput_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
