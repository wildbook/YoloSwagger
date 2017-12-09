#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderCellV1_t {
    int32_t teamId;
    uint64_t summonerId;
    int32_t cellId;
    int32_t spell1Id;
    std::string summonerName;
    std::string assignedPosition;
    int32_t skinId;
    int32_t championPickIntent;
    int32_t spell2Id;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderCellV1_t& v) {
    j["teamId"] = v.teamId;
    j["summonerId"] = v.summonerId;
    j["cellId"] = v.cellId;
    j["spell1Id"] = v.spell1Id;
    j["summonerName"] = v.summonerName;
    j["assignedPosition"] = v.assignedPosition;
    j["skinId"] = v.skinId;
    j["championPickIntent"] = v.championPickIntent;
    j["spell2Id"] = v.spell2Id;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderCellV1_t& v) {
    v.teamId = j.at("teamId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.cellId = j.at("cellId").get<int32_t>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.assignedPosition = j.at("assignedPosition").get<std::string>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.championPickIntent = j.at("championPickIntent").get<int32_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderCellV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
