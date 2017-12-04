#ifndef SWAGGER_TYPES_LolChampionsLcdsDynamicClientConfig_HPP
#define SWAGGER_TYPES_LolChampionsLcdsDynamicClientConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampionsLcdsDynamicClientConfig {
    // 
    nlohmann::json DisabledChampions;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsLcdsDynamicClientConfig& v) {
    j["DisabledChampions"] = v.DisabledChampions;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsLcdsDynamicClientConfig& v) {
    v.DisabledChampions = j.at("DisabledChampions").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsLcdsDynamicClientConfig_HPP
