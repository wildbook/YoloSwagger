#ifndef SWAGGER_TYPES_RiotMessagingServicePluginRegionLocaleChangedEvent_HPP
#define SWAGGER_TYPES_RiotMessagingServicePluginRegionLocaleChangedEvent_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RiotMessagingServicePluginRegionLocaleChangedEvent {
    // 
    std::string locale;
    // 
    std::string region;
  };

  inline void to_json(nlohmann::json& j, const RiotMessagingServicePluginRegionLocaleChangedEvent& v) {
    j["locale"] = v.locale;
    j["region"] = v.region;
  }

  inline void from_json(const nlohmann::json& j, RiotMessagingServicePluginRegionLocaleChangedEvent& v) {
    v.locale = j.at("locale").get<std::string>;
    v.region = j.at("region").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RiotMessagingServicePluginRegionLocaleChangedEvent_HPP
