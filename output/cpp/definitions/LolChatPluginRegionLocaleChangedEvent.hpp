#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatPluginRegionLocaleChangedEvent_t {
    std::string locale;
    std::string region;
  };

  inline void to_json(nlohmann::json& j, const LolChatPluginRegionLocaleChangedEvent_t& v) {
    j["locale"] = v.locale;
    j["region"] = v.region;
  }

  inline void from_json(const nlohmann::json& j, LolChatPluginRegionLocaleChangedEvent_t& v) {
    v.locale = j.at("locale").get<std::string>();
    v.region = j.at("region").get<std::string>();
  }
  inline std::string to_string(const LolChatPluginRegionLocaleChangedEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
