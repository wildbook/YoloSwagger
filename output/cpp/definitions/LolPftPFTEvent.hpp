#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTEvent_t {
    uint64_t playerSurveyId;
    std::string action;
    std::vector<nlohmann::json> data;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEvent_t& v) {
    j["playerSurveyId"] = v.playerSurveyId;
    j["action"] = v.action;
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEvent_t& v) {
    v.playerSurveyId = j.at("playerSurveyId").get<uint64_t>();
    v.action = j.at("action").get<std::string>();
    v.data = j.at("data").get<std::vector<nlohmann::json>>();
  }
  inline std::string to_string(const LolPftPFTEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
