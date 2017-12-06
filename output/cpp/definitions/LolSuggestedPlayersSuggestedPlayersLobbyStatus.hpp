#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersLobbyStatus_t {
    std::vector<uint64_t> invitedSummonerIds;
    std::vector<uint64_t> memberSummonerIds;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersLobbyStatus_t& v) {
    j["invitedSummonerIds"] = v.invitedSummonerIds;
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersLobbyStatus_t& v) {
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
}
