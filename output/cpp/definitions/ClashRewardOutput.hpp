#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardDefinition.hpp"
#include "ClashRewardTime.hpp"
namespace leagueapi {
  struct ClashRewardOutput_t {
    ClashRewardDefinition_t alternative;
    ClashRewardTime_t show;
    ClashRewardDefinition_t primary;
    ClashRewardTime_t grant;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardOutput_t& v) {
    j["alternative"] = v.alternative;
    j["show"] = v.show;
    j["primary"] = v.primary;
    j["grant"] = v.grant;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardOutput_t& v) {
    v.alternative = j.at("alternative").get<ClashRewardDefinition_t>();
    v.show = j.at("show").get<ClashRewardTime_t>();
    v.primary = j.at("primary").get<ClashRewardDefinition_t>();
    v.grant = j.at("grant").get<ClashRewardTime_t>();
  }
  inline std::string to_string(const ClashRewardOutput_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
