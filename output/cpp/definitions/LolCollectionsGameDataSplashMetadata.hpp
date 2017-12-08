#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsGameDataSplashMetadata_t {
    std::string_t OverrideColor;
    std::string_t CalculatedColor;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsGameDataSplashMetadata_t& v) {
    j["OverrideColor"] = v.OverrideColor;
    j["CalculatedColor"] = v.CalculatedColor;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsGameDataSplashMetadata_t& v) {
    v.OverrideColor = j.at("OverrideColor").get<std::string_t>();
    v.CalculatedColor = j.at("CalculatedColor").get<std::string_t>();
  }
  inline std::string to_string(const LolCollectionsGameDataSplashMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
