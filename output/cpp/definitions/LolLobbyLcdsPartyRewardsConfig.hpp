#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLcdsPartyRewardsConfig_t {
    bool Enabled;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLcdsPartyRewardsConfig_t& v) {
    j["Enabled"] = v.Enabled;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLcdsPartyRewardsConfig_t& v) {
    v.Enabled = j.at("Enabled").get<bool>();
  }
}
