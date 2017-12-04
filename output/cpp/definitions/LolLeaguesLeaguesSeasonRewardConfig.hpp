#ifndef SWAGGER_TYPES_LolLeaguesLeaguesSeasonRewardConfig_HPP
#define SWAGGER_TYPES_LolLeaguesLeaguesSeasonRewardConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLeaguesLeaguesSeasonRewardConfig {
    // 
    bool QualificationWarningEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeaguesSeasonRewardConfig& v) {
    j["QualificationWarningEnabled"] = v.QualificationWarningEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeaguesSeasonRewardConfig& v) {
    v.QualificationWarningEnabled = j.at("QualificationWarningEnabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeaguesSeasonRewardConfig_HPP
