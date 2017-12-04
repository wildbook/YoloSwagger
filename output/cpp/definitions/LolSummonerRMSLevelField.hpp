#ifndef SWAGGER_TYPES_LolSummonerRMSLevelField_HPP
#define SWAGGER_TYPES_LolSummonerRMSLevelField_HPP
#include <json.hpp>
#include "LolSummonerRMSLevelProgression.hpp"
namespace leagueapi {
  // 
  struct LolSummonerRMSLevelField {
    // 
    uint32_t finalLevel;
    // 
    LolSummonerRMSLevelProgression progress;
    // 
    uint32_t initialLevel;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerRMSLevelField& v) {
    j["finalLevel"] = v.finalLevel;
    j["progress"] = v.progress;
    j["initialLevel"] = v.initialLevel;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerRMSLevelField& v) {
    v.finalLevel = j.at("finalLevel").get<uint32_t>;
    v.progress = j.at("progress").get<LolSummonerRMSLevelProgression>;
    v.initialLevel = j.at("initialLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerRMSLevelField_HPP
