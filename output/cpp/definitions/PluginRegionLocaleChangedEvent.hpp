#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PluginRegionLocaleChangedEvent_t {
    std::string_t locale;
    std::string_t region;
  };

  inline void to_json(nlohmann::json& j, const PluginRegionLocaleChangedEvent_t& v) {
    j["locale"] = v.locale;
    j["region"] = v.region;
  }

  inline void from_json(const nlohmann::json& j, PluginRegionLocaleChangedEvent_t& v) {
    v.locale = j.at("locale").get<std::string_t>();
    v.region = j.at("region").get<std::string_t>();
  }
  inline std::string to_string(const PluginRegionLocaleChangedEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
