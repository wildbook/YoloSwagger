#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2HonorConfig_t {
    bool_t Honor2018Enabled;
    bool_t DayOneModalEnabled;
    bool_t Enabled;
    int32_t_t SecondsToVote;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2HonorConfig_t& v) {
    j["Honor2018Enabled"] = v.Honor2018Enabled;
    j["DayOneModalEnabled"] = v.DayOneModalEnabled;
    j["Enabled"] = v.Enabled;
    j["SecondsToVote"] = v.SecondsToVote;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2HonorConfig_t& v) {
    v.Honor2018Enabled = j.at("Honor2018Enabled").get<bool_t>();
    v.DayOneModalEnabled = j.at("DayOneModalEnabled").get<bool_t>();
    v.Enabled = j.at("Enabled").get<bool_t>();
    v.SecondsToVote = j.at("SecondsToVote").get<int32_t_t>();
  }
  inline std::string to_string(const LolHonorV2HonorConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
