#ifndef SWAGGER_TYPES_LolSummonerRMSLevelProgression_HPP
#define SWAGGER_TYPES_LolSummonerRMSLevelProgression_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolSummonerRMSLevelProgression {
'    // 
    uint64_t finalLevelBoundary;
    // 
    uint64_t finalXp;
    // 
    uint64_t initialLevelBoundary;
    // 
    uint64_t initialXp;
  };

  void to_json(nlohmann::json& j, const LolSummonerRMSLevelProgression& v) {
    j["finalLevelBoundary"] = v.finalLevelBoundary;
    j["finalXp"] = v.finalXp;
    j["initialLevelBoundary"] = v.initialLevelBoundary;
    j["initialXp"] = v.initialXp;
  }

  void from_json(const nlohmann::json& j, LolSummonerRMSLevelProgression& v) {
    v.finalLevelBoundary = j.at("finalLevelBoundary").get<uint64_t>;
    v.finalXp = j.at("finalXp").get<uint64_t>;
    v.initialLevelBoundary = j.at("initialLevelBoundary").get<uint64_t>;
    v.initialXp = j.at("initialXp").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerRMSLevelProgression_HPP
