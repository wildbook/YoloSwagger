#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolMatchmakingLobbyStatus_t {
    bool allowedPlayAgain;
    LolMatchmakingQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    bool isCustom;
    bool isLeader;
    bool isSpectator;
    std::optional<std::string> lobbyId;
    std::vector<uint64_t> memberSummonerIds;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingLobbyStatus_t& v) {
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["isCustom"] = v.isCustom;
    j["isLeader"] = v.isLeader;
    j["isSpectator"] = v.isSpectator;
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingLobbyStatus_t& v) {
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolMatchmakingQueueCustomGameSpectatorPolicy_t>();
    v.isCustom = j.at("isCustom").get<bool>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    if(auto it = j.find("lobbyId"); it != j.end() !it->is_null())
      v.lobbyId = it->get<std::string>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
}
