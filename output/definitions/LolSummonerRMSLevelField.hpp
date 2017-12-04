#ifndef SWAGGER_TYPES_LolSummonerRMSLevelField_HPP
#define SWAGGER_TYPES_LolSummonerRMSLevelField_HPP
#include <json.hpp>
#include "LolSummonerRMSLevelProgression.hpp"
namespace test {
  // 
  struct LolSummonerRMSLevelField {
'    // 
    uint32_t finalLevel;
    // 
    uint32_t initialLevel;
    // 
    LolSummonerRMSLevelProgression progress;
  };

  void to_json(nlohmann::json& j, const LolSummonerRMSLevelField& v) {
    j["finalLevel"] = v.finalLevel;
    j["initialLevel"] = v.initialLevel;
    j["progress"] = v.progress;
  }

  void from_json(const nlohmann::json& j, LolSummonerRMSLevelField& v) {
    v.finalLevel = j.at("finalLevel").get<uint32_t>;
    v.initialLevel = j.at("initialLevel").get<uint32_t>;
    v.progress = j.at("progress").get<LolSummonerRMSLevelProgression>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerRMSLevelField_HPP
