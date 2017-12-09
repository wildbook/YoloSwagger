#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyReward.hpp"
namespace leagueapi {
  struct LolLobbyLobbyPartyRewards_t {
    bool isEnabled;
    bool isCustom;
    std::vector<LolLobbyPartyReward_t> partyRewards;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyPartyRewards_t& v) {
    j["isEnabled"] = v.isEnabled;
    j["isCustom"] = v.isCustom;
    j["partyRewards"] = v.partyRewards;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyPartyRewards_t& v) {
    v.isEnabled = j.at("isEnabled").get<bool>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.partyRewards = j.at("partyRewards").get<std::vector<LolLobbyPartyReward_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyLobbyPartyRewards_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
