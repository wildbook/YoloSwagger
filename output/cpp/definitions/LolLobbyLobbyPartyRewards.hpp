#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyReward.hpp"
namespace leagueapi {
  struct LolLobbyLobbyPartyRewards_t {
    std::vector<LolLobbyPartyReward_t> partyRewards;
    bool isCustom;
    int32_t queueId;
    bool isEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyPartyRewards_t& v) {
    j["partyRewards"] = v.partyRewards;
    j["isCustom"] = v.isCustom;
    j["queueId"] = v.queueId;
    j["isEnabled"] = v.isEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyPartyRewards_t& v) {
    v.partyRewards = j.at("partyRewards").get<std::vector<LolLobbyPartyReward_t>>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.isEnabled = j.at("isEnabled").get<bool>();
  }
}
