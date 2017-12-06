#pragma once
#include <json.hpp>
#include <optional>
#include "LolSummonerRMSLevelField.hpp"
namespace leagueapi {
  struct LolSummonerRMSXpAndLevelMessage_t {
    LolSummonerRMSLevelField_t level;
    nlohmann::json xp;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerRMSXpAndLevelMessage_t& v) {
    j["level"] = v.level;
    j["xp"] = v.xp;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerRMSXpAndLevelMessage_t& v) {
    v.level = j.at("level").get<LolSummonerRMSLevelField_t>();
    v.xp = j.at("xp").get<nlohmann::json>();
  }
}
