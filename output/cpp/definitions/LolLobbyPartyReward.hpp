#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyPartyRewardType.hpp"
namespace leagueapi {
  struct LolLobbyPartyReward_t {
    LolLobbyLobbyPartyRewardType_t type;
    int32_t premadeSize;
    std::string value;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyReward_t& v) {
    j["type"] = v.type;
    j["premadeSize"] = v.premadeSize;
    j["value"] = v.value;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyReward_t& v) {
    v.type = j.at("type").get<LolLobbyLobbyPartyRewardType_t>();
    v.premadeSize = j.at("premadeSize").get<int32_t>();
    v.value = j.at("value").get<std::string>();
  }
  inline std::string to_string(const LolLobbyPartyReward_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
