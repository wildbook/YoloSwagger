#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftPFTQuestionResponse.hpp"
#include "LolPftPFTEvent.hpp"
namespace leagueapi {
  struct LolPftPFTSurveyResults_t {
    std::vector<LolPftPFTEvent_t> actions;
    std::vector<LolPftPFTQuestionResponse_t> questionResponses;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTSurveyResults_t& v) {
    j["actions"] = v.actions;
    j["questionResponses"] = v.questionResponses;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTSurveyResults_t& v) {
    v.actions = j.at("actions").get<std::vector<LolPftPFTEvent_t>>();
    v.questionResponses = j.at("questionResponses").get<std::vector<LolPftPFTQuestionResponse_t>>();
  }
}
