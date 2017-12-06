#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAccountVerificationAVSConfig_t {
    bool Enabled;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationAVSConfig_t& v) {
    j["Enabled"] = v.Enabled;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationAVSConfig_t& v) {
    v.Enabled = j.at("Enabled").get<bool>();
  }
}
