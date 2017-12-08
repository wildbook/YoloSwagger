#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSettingsSettingCategory_t {
    int32_t_t schemaVersion;
    nlohmann::json_t data;
  };

  inline void to_json(nlohmann::json& j, const LolSettingsSettingCategory_t& v) {
    j["schemaVersion"] = v.schemaVersion;
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, LolSettingsSettingCategory_t& v) {
    v.schemaVersion = j.at("schemaVersion").get<int32_t_t>();
    v.data = j.at("data").get<nlohmann::json_t>();
  }
  inline std::string to_string(const LolSettingsSettingCategory_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
