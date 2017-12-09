#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyReward.hpp"
namespace leagueapi {
  struct LolLobbyLobbyPartyRewards_t {
    bool isEnabled;
    int32_t queueId;
    std::vector<LolLobbyPartyReward_t> partyRewards;
    bool isCustom;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyPartyRewards_t& v) {
    j["isEnabled"] = v.isEnabled;
    j["queueId"] = v.queueId;
    j["partyRewards"] = v.partyRewards;
    j["isCustom"] = v.isCustom;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyPartyRewards_t& v) {
    v.isEnabled = j.at("isEnabled").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.partyRewards = j.at("partyRewards").get<std::vector<LolLobbyPartyReward_t>>();
    v.isCustom = j.at("isCustom").get<bool>();
  }
  inline std::string to_string(const LolLobbyLobbyPartyRewards_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
