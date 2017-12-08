#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLeaguesLeaguesSeasonRewardConfig_t {
    bool QualificationWarningEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeaguesSeasonRewardConfig_t& v) {
    j["QualificationWarningEnabled"] = v.QualificationWarningEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeaguesSeasonRewardConfig_t& v) {
    v.QualificationWarningEnabled = j.at("QualificationWarningEnabled").get<bool>();
  }
  inline std::string to_string(const LolLeaguesLeaguesSeasonRewardConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
