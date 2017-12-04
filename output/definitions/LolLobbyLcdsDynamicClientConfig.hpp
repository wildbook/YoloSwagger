#ifndef SWAGGER_TYPES_LolLobbyLcdsDynamicClientConfig_HPP
#define SWAGGER_TYPES_LolLobbyLcdsDynamicClientConfig_HPP
#include <json.hpp>
#include "LolLobbyLcdsPartyRewardsConfig.hpp"
namespace test {
  // 
  struct LolLobbyLcdsDynamicClientConfig {
'    // 
    LolLobbyLcdsPartyRewardsConfig PartyRewards;
  };

  void to_json(nlohmann::json& j, const LolLobbyLcdsDynamicClientConfig& v) {
    j["PartyRewards"] = v.PartyRewards;
  }

  void from_json(const nlohmann::json& j, LolLobbyLcdsDynamicClientConfig& v) {
    v.PartyRewards = j.at("PartyRewards").get<LolLobbyLcdsPartyRewardsConfig>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLcdsDynamicClientConfig_HPP
