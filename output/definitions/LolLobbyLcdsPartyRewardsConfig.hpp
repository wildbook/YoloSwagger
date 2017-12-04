#ifndef SWAGGER_TYPES_LolLobbyLcdsPartyRewardsConfig_HPP
#define SWAGGER_TYPES_LolLobbyLcdsPartyRewardsConfig_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbyLcdsPartyRewardsConfig {
'    // 
    bool Enabled;
  };

  void to_json(nlohmann::json& j, const LolLobbyLcdsPartyRewardsConfig& v) {
    j["Enabled"] = v.Enabled;
  }

  void from_json(const nlohmann::json& j, LolLobbyLcdsPartyRewardsConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLcdsPartyRewardsConfig_HPP
