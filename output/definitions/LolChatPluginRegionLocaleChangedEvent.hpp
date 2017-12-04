#ifndef SWAGGER_TYPES_LolChatPluginRegionLocaleChangedEvent_HPP
#define SWAGGER_TYPES_LolChatPluginRegionLocaleChangedEvent_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolChatPluginRegionLocaleChangedEvent {
'    // 
    std::string locale;
    // 
    std::string region;
  };

  void to_json(nlohmann::json& j, const LolChatPluginRegionLocaleChangedEvent& v) {
    j["locale"] = v.locale;
    j["region"] = v.region;
  }

  void from_json(const nlohmann::json& j, LolChatPluginRegionLocaleChangedEvent& v) {
    v.locale = j.at("locale").get<std::string>;
    v.region = j.at("region").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatPluginRegionLocaleChangedEvent_HPP
