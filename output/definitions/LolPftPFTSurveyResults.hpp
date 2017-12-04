#ifndef SWAGGER_TYPES_LolPftPFTSurveyResults_HPP
#define SWAGGER_TYPES_LolPftPFTSurveyResults_HPP
#include <json.hpp>
#include "LolPftPFTQuestionResponse.hpp"
#include "LolPftPFTEvent.hpp"
namespace leagueapi {
  // 
  struct LolPftPFTSurveyResults {
    // 
    std::vector<LolPftPFTEvent> actions;
    // 
    std::vector<LolPftPFTQuestionResponse> questionResponses;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTSurveyResults& v) {
    j["actions"] = v.actions;
    j["questionResponses"] = v.questionResponses;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTSurveyResults& v) {
    v.actions = j.at("actions").get<std::vector<LolPftPFTEvent>>;
    v.questionResponses = j.at("questionResponses").get<std::vector<LolPftPFTQuestionResponse>>;
  }

}
#endif // SWAGGER_TYPES_LolPftPFTSurveyResults_HPP
