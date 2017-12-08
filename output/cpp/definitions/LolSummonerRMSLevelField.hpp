#pragma once
#include <json.hpp>
#include <optional>
#include "LolSummonerRMSLevelProgression.hpp"
namespace leagueapi {
  struct LolSummonerRMSLevelField_t {
    uint32_t finalLevel;
    LolSummonerRMSLevelProgression_t progress;
    uint32_t initialLevel;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerRMSLevelField_t& v) {
    j["finalLevel"] = v.finalLevel;
    j["progress"] = v.progress;
    j["initialLevel"] = v.initialLevel;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerRMSLevelField_t& v) {
    v.finalLevel = j.at("finalLevel").get<uint32_t>();
    v.progress = j.at("progress").get<LolSummonerRMSLevelProgression_t>();
    v.initialLevel = j.at("initialLevel").get<uint32_t>();
  }
  inline std::string to_string(const LolSummonerRMSLevelField_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
