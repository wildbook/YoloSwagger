#ifndef SWAGGER_TYPES_LolLeaguesLeaguesSeasonRewardConfig_HPP
#define SWAGGER_TYPES_LolLeaguesLeaguesSeasonRewardConfig_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLeaguesLeaguesSeasonRewardConfig {
'    // 
    bool QualificationWarningEnabled;
  };

  void to_json(nlohmann::json& j, const LolLeaguesLeaguesSeasonRewardConfig& v) {
    j["QualificationWarningEnabled"] = v.QualificationWarningEnabled;
  }

  void from_json(const nlohmann::json& j, LolLeaguesLeaguesSeasonRewardConfig& v) {
    v.QualificationWarningEnabled = j.at("QualificationWarningEnabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeaguesSeasonRewardConfig_HPP
