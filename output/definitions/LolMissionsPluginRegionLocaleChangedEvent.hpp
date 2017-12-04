#ifndef SWAGGER_TYPES_LolMissionsPluginRegionLocaleChangedEvent_HPP
#define SWAGGER_TYPES_LolMissionsPluginRegionLocaleChangedEvent_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMissionsPluginRegionLocaleChangedEvent {
    // 
    std::string locale;
  };

  void to_json(nlohmann::json& j, const LolMissionsPluginRegionLocaleChangedEvent& v) {
    j["locale"] = v.locale;
  }

  void from_json(const nlohmann::json& j, LolMissionsPluginRegionLocaleChangedEvent& v) {
    v.locale = j.at("locale").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolMissionsPluginRegionLocaleChangedEvent_HPP
