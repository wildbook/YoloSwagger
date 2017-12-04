#ifndef SWAGGER_TYPES_LolSettingsSettingCategory_HPP
#define SWAGGER_TYPES_LolSettingsSettingCategory_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSettingsSettingCategory {
    // 
    int32_t schemaVersion;
    // 
    nlohmann::json data;
  };

  inline void to_json(nlohmann::json& j, const LolSettingsSettingCategory& v) {
    j["schemaVersion"] = v.schemaVersion;
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, LolSettingsSettingCategory& v) {
    v.schemaVersion = j.at("schemaVersion").get<int32_t>;
    v.data = j.at("data").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_LolSettingsSettingCategory_HPP
