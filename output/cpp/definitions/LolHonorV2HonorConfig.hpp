#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2HonorConfig_t {
    bool DayOneModalEnabled;
    bool Enabled;
    bool Honor2018Enabled;
    int32_t SecondsToVote;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2HonorConfig_t& v) {
    j["DayOneModalEnabled"] = v.DayOneModalEnabled;
    j["Enabled"] = v.Enabled;
    j["Honor2018Enabled"] = v.Honor2018Enabled;
    j["SecondsToVote"] = v.SecondsToVote;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2HonorConfig_t& v) {
    v.DayOneModalEnabled = j.at("DayOneModalEnabled").get<bool>();
    v.Enabled = j.at("Enabled").get<bool>();
    v.Honor2018Enabled = j.at("Honor2018Enabled").get<bool>();
    v.SecondsToVote = j.at("SecondsToVote").get<int32_t>();
  }
}
