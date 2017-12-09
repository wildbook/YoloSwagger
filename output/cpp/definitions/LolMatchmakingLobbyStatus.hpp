#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolMatchmakingLobbyStatus_t {
    std::vector<uint64_t> memberSummonerIds;
    bool isLeader;
    bool allowedPlayAgain;
    int32_t queueId;
    LolMatchmakingQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    bool isSpectator;
    std::optional<std::string> lobbyId;
    bool isCustom;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingLobbyStatus_t& v) {
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["isLeader"] = v.isLeader;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["queueId"] = v.queueId;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["isSpectator"] = v.isSpectator;
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["isCustom"] = v.isCustom;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingLobbyStatus_t& v) {
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
    v.isLeader = j.at("isLeader").get<bool>();
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolMatchmakingQueueCustomGameSpectatorPolicy_t>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    if(auto it = j.find("lobbyId"); it != j.end() && !it->is_null())
      v.lobbyId = it->get<std::string>();
    v.isCustom = j.at("isCustom").get<bool>();
  }
  inline std::string to_string(const LolMatchmakingLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
