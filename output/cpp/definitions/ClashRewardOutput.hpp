#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardTime.hpp"
#include "ClashRewardDefinition.hpp"
namespace leagueapi {
  struct ClashRewardOutput_t {
    ClashRewardDefinition_t primary;
    ClashRewardTime_t show;
    ClashRewardTime_t grant;
    ClashRewardDefinition_t alternative;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardOutput_t& v) {
    j["primary"] = v.primary;
    j["show"] = v.show;
    j["grant"] = v.grant;
    j["alternative"] = v.alternative;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardOutput_t& v) {
    v.primary = j.at("primary").get<ClashRewardDefinition_t>();
    v.show = j.at("show").get<ClashRewardTime_t>();
    v.grant = j.at("grant").get<ClashRewardTime_t>();
    v.alternative = j.at("alternative").get<ClashRewardDefinition_t>();
  }
}
