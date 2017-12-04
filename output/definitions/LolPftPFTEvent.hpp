#ifndef SWAGGER_TYPES_LolPftPFTEvent_HPP
#define SWAGGER_TYPES_LolPftPFTEvent_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolPftPFTEvent {
'    // 
    std::string action;
    // 
    std::vector<nlohmann::json> data;
    // 
    uint64_t playerSurveyId;
  };

  void to_json(nlohmann::json& j, const LolPftPFTEvent& v) {
    j["action"] = v.action;
    j["data"] = v.data;
    j["playerSurveyId"] = v.playerSurveyId;
  }

  void from_json(const nlohmann::json& j, LolPftPFTEvent& v) {
    v.action = j.at("action").get<std::string>;
    v.data = j.at("data").get<std::vector<nlohmann::json>>;
    v.playerSurveyId = j.at("playerSurveyId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPftPFTEvent_HPP
