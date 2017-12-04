#ifndef SWAGGER_TYPES_LolLobbyPartyReward_HPP
#define SWAGGER_TYPES_LolLobbyPartyReward_HPP
#include <json.hpp>
#include "LolLobbyLobbyPartyRewardType.hpp"
namespace leagueapi {
  // 
  struct LolLobbyPartyReward {
    // 
    LolLobbyLobbyPartyRewardType type;
    // 
    int32_t premadeSize;
    // 
    std::string value;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyReward& v) {
    j["type"] = v.type;
    j["premadeSize"] = v.premadeSize;
    j["value"] = v.value;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyReward& v) {
    v.type = j.at("type").get<LolLobbyLobbyPartyRewardType>;
    v.premadeSize = j.at("premadeSize").get<int32_t>;
    v.value = j.at("value").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPartyReward_HPP
