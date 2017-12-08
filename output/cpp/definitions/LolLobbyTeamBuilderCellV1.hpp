#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderCellV1_t {
    int32_t championPickIntent;
    int32_t spell1Id;
    uint64_t summonerId;
    std::string assignedPosition;
    int32_t teamId;
    int32_t spell2Id;
    int32_t skinId;
    int32_t championId;
    int32_t cellId;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderCellV1_t& v) {
    j["championPickIntent"] = v.championPickIntent;
    j["spell1Id"] = v.spell1Id;
    j["summonerId"] = v.summonerId;
    j["assignedPosition"] = v.assignedPosition;
    j["teamId"] = v.teamId;
    j["spell2Id"] = v.spell2Id;
    j["skinId"] = v.skinId;
    j["championId"] = v.championId;
    j["cellId"] = v.cellId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderCellV1_t& v) {
    v.championPickIntent = j.at("championPickIntent").get<int32_t>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.assignedPosition = j.at("assignedPosition").get<std::string>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.cellId = j.at("cellId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderCellV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
