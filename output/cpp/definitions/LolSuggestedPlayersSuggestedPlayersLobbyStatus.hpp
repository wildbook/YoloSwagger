#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersLobbyStatus_t {
    int32_t queueId;
    std::vector<uint64_t> memberSummonerIds;
    std::vector<uint64_t> invitedSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersLobbyStatus_t& v) {
    j["queueId"] = v.queueId;
    j["memberSummonerIds"] = v.memberSummonerIds;
    j["invitedSummonerIds"] = v.invitedSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersLobbyStatus_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
