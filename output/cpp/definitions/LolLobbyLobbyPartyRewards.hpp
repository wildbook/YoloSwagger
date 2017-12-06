#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyReward.hpp"
namespace leagueapi {
  struct LolLobbyLobbyPartyRewards_t {
    bool isCustom;
    bool isEnabled;
    std::vector<LolLobbyPartyReward_t> partyRewards;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyPartyRewards_t& v) {
    j["isCustom"] = v.isCustom;
    j["isEnabled"] = v.isEnabled;
    j["partyRewards"] = v.partyRewards;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyPartyRewards_t& v) {
    v.isCustom = j.at("isCustom").get<bool>();
    v.isEnabled = j.at("isEnabled").get<bool>();
    v.partyRewards = j.at("partyRewards").get<std::vector<LolLobbyPartyReward_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
}
