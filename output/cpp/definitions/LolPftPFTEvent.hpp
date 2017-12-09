#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTEvent_t {
    std::vector<nlohmann::json> data;
    std::string action;
    uint64_t playerSurveyId;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEvent_t& v) {
    j["data"] = v.data;
    j["action"] = v.action;
    j["playerSurveyId"] = v.playerSurveyId;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEvent_t& v) {
    v.data = j.at("data").get<std::vector<nlohmann::json>>();
    v.action = j.at("action").get<std::string>();
    v.playerSurveyId = j.at("playerSurveyId").get<uint64_t>();
  }
  inline std::string to_string(const LolPftPFTEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
