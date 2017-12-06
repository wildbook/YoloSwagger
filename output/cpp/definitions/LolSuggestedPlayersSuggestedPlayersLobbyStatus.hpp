#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersLobbyStatus_t {
    std::vector<uint64_t> invitedSummonerIds;
    int32_t queueId;
    std::vector<uint64_t> memberSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersLobbyStatus_t& v) {
    j["invitedSummonerIds"] = v.invitedSummonerIds;
    j["queueId"] = v.queueId;
    j["memberSummonerIds"] = v.memberSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersLobbyStatus_t& v) {
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
  }
}
