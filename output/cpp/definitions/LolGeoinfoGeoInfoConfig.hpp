#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGeoinfoGeoInfoConfig_t {
    bool_t Enabled;
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoGeoInfoConfig_t& v) {
    j["Enabled"] = v.Enabled;
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoGeoInfoConfig_t& v) {
    v.Enabled = j.at("Enabled").get<bool_t>();
  }
  inline std::string to_string(const LolGeoinfoGeoInfoConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
