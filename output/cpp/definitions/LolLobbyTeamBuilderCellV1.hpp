#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderCellV1_t {
    std::string summonerName;
    int32_t skinId;
    int32_t championPickIntent;
    int32_t spell1Id;
    uint64_t summonerId;
    int32_t spell2Id;
    int32_t cellId;
    std::string assignedPosition;
    int32_t teamId;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderCellV1_t& v) {
    j["summonerName"] = v.summonerName;
    j["skinId"] = v.skinId;
    j["championPickIntent"] = v.championPickIntent;
    j["spell1Id"] = v.spell1Id;
    j["summonerId"] = v.summonerId;
    j["spell2Id"] = v.spell2Id;
    j["cellId"] = v.cellId;
    j["assignedPosition"] = v.assignedPosition;
    j["teamId"] = v.teamId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderCellV1_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.championPickIntent = j.at("championPickIntent").get<int32_t>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.cellId = j.at("cellId").get<int32_t>();
    v.assignedPosition = j.at("assignedPosition").get<std::string>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderCellV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
