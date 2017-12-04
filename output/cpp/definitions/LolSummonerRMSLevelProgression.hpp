#ifndef SWAGGER_TYPES_LolSummonerRMSLevelProgression_HPP
#define SWAGGER_TYPES_LolSummonerRMSLevelProgression_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSummonerRMSLevelProgression {
    // 
    uint64_t initialLevelBoundary;
    // 
    uint64_t initialXp;
    // 
    uint64_t finalLevelBoundary;
    // 
    uint64_t finalXp;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerRMSLevelProgression& v) {
    j["initialLevelBoundary"] = v.initialLevelBoundary;
    j["initialXp"] = v.initialXp;
    j["finalLevelBoundary"] = v.finalLevelBoundary;
    j["finalXp"] = v.finalXp;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerRMSLevelProgression& v) {
    v.initialLevelBoundary = j.at("initialLevelBoundary").get<uint64_t>;
    v.initialXp = j.at("initialXp").get<uint64_t>;
    v.finalLevelBoundary = j.at("finalLevelBoundary").get<uint64_t>;
    v.finalXp = j.at("finalXp").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerRMSLevelProgression_HPP
