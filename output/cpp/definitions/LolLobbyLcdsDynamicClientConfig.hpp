#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLcdsPartyRewardsConfig.hpp"
namespace leagueapi {
  struct LolLobbyLcdsDynamicClientConfig_t {
    LolLobbyLcdsPartyRewardsConfig_t PartyRewards;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLcdsDynamicClientConfig_t& v) {
    j["PartyRewards"] = v.PartyRewards;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLcdsDynamicClientConfig_t& v) {
    v.PartyRewards = j.at("PartyRewards").get<LolLobbyLcdsPartyRewardsConfig_t>();
  }
}
