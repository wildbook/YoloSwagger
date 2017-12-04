#ifndef SWAGGER_TYPES_LolAccountVerificationAVSConfig_HPP
#define SWAGGER_TYPES_LolAccountVerificationAVSConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolAccountVerificationAVSConfig {
    // 
    bool Enabled;
  };

  void to_json(nlohmann::json& j, const LolAccountVerificationAVSConfig& v) {
    j["Enabled"] = v.Enabled;
  }

  void from_json(const nlohmann::json& j, LolAccountVerificationAVSConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolAccountVerificationAVSConfig_HPP
