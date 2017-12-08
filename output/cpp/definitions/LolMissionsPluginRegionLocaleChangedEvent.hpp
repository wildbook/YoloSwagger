#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMissionsPluginRegionLocaleChangedEvent_t {
    std::string locale;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsPluginRegionLocaleChangedEvent_t& v) {
    j["locale"] = v.locale;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsPluginRegionLocaleChangedEvent_t& v) {
    v.locale = j.at("locale").get<std::string>();
  }
  inline std::string to_string(const LolMissionsPluginRegionLocaleChangedEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
