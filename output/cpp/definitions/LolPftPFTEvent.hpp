#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTEvent_t {
    std::string action;
    std::vector<nlohmann::json> data;
    uint64_t playerSurveyId;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEvent_t& v) {
    j["action"] = v.action;
    j["data"] = v.data;
    j["playerSurveyId"] = v.playerSurveyId;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEvent_t& v) {
    v.action = j.at("action").get<std::string>();
    v.data = j.at("data").get<std::vector<nlohmann::json>>();
    v.playerSurveyId = j.at("playerSurveyId").get<uint64_t>();
  }
}
