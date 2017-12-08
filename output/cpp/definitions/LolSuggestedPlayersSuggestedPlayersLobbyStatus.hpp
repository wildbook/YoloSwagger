#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersLobbyStatus_t {
    int32_t_t queueId;
    std::vector<uint64_t> invitedSummonerIds;
    std::vector<uint64_t> memberSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersLobbyStatus_t& v) {
    j["queueId"] = v.queueId;
    j["invitedSummonerIds"] = v.invitedSummonerIds;
    j["memberSummonerIds"] = v.memberSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersLobbyStatus_t& v) {
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
