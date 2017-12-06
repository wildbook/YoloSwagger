#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2HonorConfig_t {
    bool Enabled;
    int32_t SecondsToVote;
    bool Honor2018Enabled;
    bool DayOneModalEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2HonorConfig_t& v) {
    j["Enabled"] = v.Enabled;
    j["SecondsToVote"] = v.SecondsToVote;
    j["Honor2018Enabled"] = v.Honor2018Enabled;
    j["DayOneModalEnabled"] = v.DayOneModalEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2HonorConfig_t& v) {
    v.Enabled = j.at("Enabled").get<bool>();
    v.SecondsToVote = j.at("SecondsToVote").get<int32_t>();
    v.Honor2018Enabled = j.at("Honor2018Enabled").get<bool>();
    v.DayOneModalEnabled = j.at("DayOneModalEnabled").get<bool>();
  }
}
