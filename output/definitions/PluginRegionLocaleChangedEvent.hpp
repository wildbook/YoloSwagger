#ifndef SWAGGER_TYPES_PluginRegionLocaleChangedEvent_HPP
#define SWAGGER_TYPES_PluginRegionLocaleChangedEvent_HPP
#include <json.hpp>
namespace test {
  // 
  struct PluginRegionLocaleChangedEvent {
'    // 
    std::string locale;
    // 
    std::string region;
  };

  void to_json(nlohmann::json& j, const PluginRegionLocaleChangedEvent& v) {
    j["locale"] = v.locale;
    j["region"] = v.region;
  }

  void from_json(const nlohmann::json& j, PluginRegionLocaleChangedEvent& v) {
    v.locale = j.at("locale").get<std::string>;
    v.region = j.at("region").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PluginRegionLocaleChangedEvent_HPP
