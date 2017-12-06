#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSettingsSettingCategory_t {
    nlohmann::json data;
    int32_t schemaVersion;
  };

  inline void to_json(nlohmann::json& j, const LolSettingsSettingCategory_t& v) {
    j["data"] = v.data;
    j["schemaVersion"] = v.schemaVersion;
  }

  inline void from_json(const nlohmann::json& j, LolSettingsSettingCategory_t& v) {
    v.data = j.at("data").get<nlohmann::json>();
    v.schemaVersion = j.at("schemaVersion").get<int32_t>();
  }
}
