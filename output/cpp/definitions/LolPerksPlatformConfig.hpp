#ifndef SWAGGER_TYPES_LolPerksPlatformConfig_HPP
#define SWAGGER_TYPES_LolPerksPlatformConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksPlatformConfig {
    // 
    bool PerksEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPlatformConfig& v) {
    j["PerksEnabled"] = v.PerksEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPlatformConfig& v) {
    v.PerksEnabled = j.at("PerksEnabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolPerksPlatformConfig_HPP