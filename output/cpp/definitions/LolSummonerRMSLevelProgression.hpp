#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerRMSLevelProgression_t {
    uint64_t finalLevelBoundary;
    uint64_t finalXp;
    uint64_t initialLevelBoundary;
    uint64_t initialXp;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerRMSLevelProgression_t& v) {
    j["finalLevelBoundary"] = v.finalLevelBoundary;
    j["finalXp"] = v.finalXp;
    j["initialLevelBoundary"] = v.initialLevelBoundary;
    j["initialXp"] = v.initialXp;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerRMSLevelProgression_t& v) {
    v.finalLevelBoundary = j.at("finalLevelBoundary").get<uint64_t>();
    v.finalXp = j.at("finalXp").get<uint64_t>();
    v.initialLevelBoundary = j.at("initialLevelBoundary").get<uint64_t>();
    v.initialXp = j.at("initialXp").get<uint64_t>();
  }
}
