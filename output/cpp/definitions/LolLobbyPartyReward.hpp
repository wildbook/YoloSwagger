#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyPartyRewardType.hpp"
namespace leagueapi {
  struct LolLobbyPartyReward_t {
    std::string value;
    int32_t premadeSize;
    LolLobbyLobbyPartyRewardType_t type;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyReward_t& v) {
    j["value"] = v.value;
    j["premadeSize"] = v.premadeSize;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyReward_t& v) {
    v.value = j.at("value").get<std::string>();
    v.premadeSize = j.at("premadeSize").get<int32_t>();
    v.type = j.at("type").get<LolLobbyLobbyPartyRewardType_t>();
  }
  inline std::string to_string(const LolLobbyPartyReward_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
