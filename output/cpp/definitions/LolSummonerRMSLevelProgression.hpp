#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerRMSLevelProgression_t {
    uint64_t finalXp;
    uint64_t initialLevelBoundary;
    uint64_t initialXp;
    uint64_t finalLevelBoundary;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerRMSLevelProgression_t& v) {
    j["finalXp"] = v.finalXp;
    j["initialLevelBoundary"] = v.initialLevelBoundary;
    j["initialXp"] = v.initialXp;
    j["finalLevelBoundary"] = v.finalLevelBoundary;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerRMSLevelProgression_t& v) {
    v.finalXp = j.at("finalXp").get<uint64_t>();
    v.initialLevelBoundary = j.at("initialLevelBoundary").get<uint64_t>();
    v.initialXp = j.at("initialXp").get<uint64_t>();
    v.finalLevelBoundary = j.at("finalLevelBoundary").get<uint64_t>();
  }
  inline std::string to_string(const LolSummonerRMSLevelProgression_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
