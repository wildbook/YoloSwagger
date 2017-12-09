#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsGameDataSplashMetadata_t {
    std::string CalculatedColor;
    std::string OverrideColor;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsGameDataSplashMetadata_t& v) {
    j["CalculatedColor"] = v.CalculatedColor;
    j["OverrideColor"] = v.OverrideColor;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsGameDataSplashMetadata_t& v) {
    v.CalculatedColor = j.at("CalculatedColor").get<std::string>();
    v.OverrideColor = j.at("OverrideColor").get<std::string>();
  }
  inline std::string to_string(const LolCollectionsGameDataSplashMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
