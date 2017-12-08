#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPlatformConfig_t {
    bool_t PerksEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPlatformConfig_t& v) {
    j["PerksEnabled"] = v.PerksEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPlatformConfig_t& v) {
    v.PerksEnabled = j.at("PerksEnabled").get<bool_t>();
  }
  inline std::string to_string(const LolPerksPlatformConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
