#ifndef SWAGGER_TYPES_LolPftPFTEvent_HPP
#define SWAGGER_TYPES_LolPftPFTEvent_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPftPFTEvent {
    // 
    std::string action;
    // 
    uint64_t playerSurveyId;
    // 
    std::vector<nlohmann::json> data;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEvent& v) {
    j["action"] = v.action;
    j["playerSurveyId"] = v.playerSurveyId;
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEvent& v) {
    v.action = j.at("action").get<std::string>;
    v.playerSurveyId = j.at("playerSurveyId").get<uint64_t>;
    v.data = j.at("data").get<std::vector<nlohmann::json>>;
  }

}
#endif // SWAGGER_TYPES_LolPftPFTEvent_HPP
