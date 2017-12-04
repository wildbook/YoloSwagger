#ifndef SWAGGER_TYPES_LolChampionsLcdsDynamicClientConfig_HPP
#define SWAGGER_TYPES_LolChampionsLcdsDynamicClientConfig_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolChampionsLcdsDynamicClientConfig {
'    // 
    nlohmann::json DisabledChampions;
  };

  void to_json(nlohmann::json& j, const LolChampionsLcdsDynamicClientConfig& v) {
    j["DisabledChampions"] = v.DisabledChampions;
  }

  void from_json(const nlohmann::json& j, LolChampionsLcdsDynamicClientConfig& v) {
    v.DisabledChampions = j.at("DisabledChampions").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsLcdsDynamicClientConfig_HPP
