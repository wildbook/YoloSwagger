#ifndef SWAGGER_TYPES_LolHonorV2HonorConfig_HPP
#define SWAGGER_TYPES_LolHonorV2HonorConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolHonorV2HonorConfig {
    // 
    bool Honor2018Enabled;
    // 
    bool DayOneModalEnabled;
    // 
    bool Enabled;
    // 
    int32_t SecondsToVote;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2HonorConfig& v) {
    j["Honor2018Enabled"] = v.Honor2018Enabled;
    j["DayOneModalEnabled"] = v.DayOneModalEnabled;
    j["Enabled"] = v.Enabled;
    j["SecondsToVote"] = v.SecondsToVote;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2HonorConfig& v) {
    v.Honor2018Enabled = j.at("Honor2018Enabled").get<bool>;
    v.DayOneModalEnabled = j.at("DayOneModalEnabled").get<bool>;
    v.Enabled = j.at("Enabled").get<bool>;
    v.SecondsToVote = j.at("SecondsToVote").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2HonorConfig_HPP