#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftPFTQuestionResponse.hpp"
#include "LolPftPFTEvent.hpp"
namespace leagueapi {
  struct LolPftPFTSurveyResults_t {
    std::vector<LolPftPFTQuestionResponse_t> questionResponses;
    std::vector<LolPftPFTEvent_t> actions;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTSurveyResults_t& v) {
    j["questionResponses"] = v.questionResponses;
    j["actions"] = v.actions;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTSurveyResults_t& v) {
    v.questionResponses = j.at("questionResponses").get<std::vector<LolPftPFTQuestionResponse_t>>();
    v.actions = j.at("actions").get<std::vector<LolPftPFTEvent_t>>();
  }
  inline std::string to_string(const LolPftPFTSurveyResults_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
