#ifndef SWAGGER_TYPES_LolLobbyPartyReward_HPP
#define SWAGGER_TYPES_LolLobbyPartyReward_HPP
#include <json.hpp>
#include "LolLobbyLobbyPartyRewardType.hpp"
namespace test {
  // 
  struct LolLobbyPartyReward {
'    // 
    int32_t premadeSize;
    // 
    LolLobbyLobbyPartyRewardType type;
    // 
    std::string value;
  };

  void to_json(nlohmann::json& j, const LolLobbyPartyReward& v) {
    j["premadeSize"] = v.premadeSize;
    j["type"] = v.type;
    j["value"] = v.value;
  }

  void from_json(const nlohmann::json& j, LolLobbyPartyReward& v) {
    v.premadeSize = j.at("premadeSize").get<int32_t>;
    v.type = j.at("type").get<LolLobbyLobbyPartyRewardType>;
    v.value = j.at("value").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyPartyReward_HPP
