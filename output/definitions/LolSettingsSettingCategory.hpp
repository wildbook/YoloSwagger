#ifndef SWAGGER_TYPES_LolSettingsSettingCategory_HPP
#define SWAGGER_TYPES_LolSettingsSettingCategory_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolSettingsSettingCategory {
'    // 
    nlohmann::json data;
    // 
    int32_t schemaVersion;
  };

  void to_json(nlohmann::json& j, const LolSettingsSettingCategory& v) {
    j["data"] = v.data;
    j["schemaVersion"] = v.schemaVersion;
  }

  void from_json(const nlohmann::json& j, LolSettingsSettingCategory& v) {
    v.data = j.at("data").get<nlohmann::json>;
    v.schemaVersion = j.at("schemaVersion").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolSettingsSettingCategory_HPP
