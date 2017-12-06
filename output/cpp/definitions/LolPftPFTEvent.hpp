#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTEvent_t {
    std::vector<nlohmann::json> data;
    uint64_t playerSurveyId;
    std::string action;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEvent_t& v) {
    j["data"] = v.data;
    j["playerSurveyId"] = v.playerSurveyId;
    j["action"] = v.action;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEvent_t& v) {
    v.data = j.at("data").get<std::vector<nlohmann::json>>();
    v.playerSurveyId = j.at("playerSurveyId").get<uint64_t>();
    v.action = j.at("action").get<std::string>();
  }
}
