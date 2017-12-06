#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyPartyRewardType.hpp"
namespace leagueapi {
  struct LolLobbyPartyReward_t {
    int32_t premadeSize;
    LolLobbyLobbyPartyRewardType_t type;
    std::string value;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyReward_t& v) {
    j["premadeSize"] = v.premadeSize;
    j["type"] = v.type;
    j["value"] = v.value;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyReward_t& v) {
    v.premadeSize = j.at("premadeSize").get<int32_t>();
    v.type = j.at("type").get<LolLobbyLobbyPartyRewardType_t>();
    v.value = j.at("value").get<std::string>();
  }
}
