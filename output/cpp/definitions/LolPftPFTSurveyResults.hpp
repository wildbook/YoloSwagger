#ifndef SWAGGER_TYPES_LolPftPFTSurveyResults_HPP
#define SWAGGER_TYPES_LolPftPFTSurveyResults_HPP
#include <json.hpp>
#include "LolPftPFTQuestionResponse.hpp"
#include "LolPftPFTEvent.hpp"
namespace leagueapi {
  // 
  struct LolPftPFTSurveyResults {
    // 
    std::vector<LolPftPFTQuestionResponse> questionResponses;
    // 
    std::vector<LolPftPFTEvent> actions;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTSurveyResults& v) {
    j["questionResponses"] = v.questionResponses;
    j["actions"] = v.actions;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTSurveyResults& v) {
    v.questionResponses = j.at("questionResponses").get<std::vector<LolPftPFTQuestionResponse>>;
    v.actions = j.at("actions").get<std::vector<LolPftPFTEvent>>;
  }

}
#endif // SWAGGER_TYPES_LolPftPFTSurveyResults_HPP
