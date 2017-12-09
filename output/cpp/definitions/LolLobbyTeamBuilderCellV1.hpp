#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderCellV1_t {
    int32_t cellId;
    int32_t teamId;
    int32_t championId;
    std::string assignedPosition;
    uint64_t summonerId;
    int32_t skinId;
    std::string summonerName;
    int32_t championPickIntent;
    int32_t spell1Id;
    int32_t spell2Id;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderCellV1_t& v) {
    j["cellId"] = v.cellId;
    j["teamId"] = v.teamId;
    j["championId"] = v.championId;
    j["assignedPosition"] = v.assignedPosition;
    j["summonerId"] = v.summonerId;
    j["skinId"] = v.skinId;
    j["summonerName"] = v.summonerName;
    j["championPickIntent"] = v.championPickIntent;
    j["spell1Id"] = v.spell1Id;
    j["spell2Id"] = v.spell2Id;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderCellV1_t& v) {
    v.cellId = j.at("cellId").get<int32_t>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.assignedPosition = j.at("assignedPosition").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.championPickIntent = j.at("championPickIntent").get<int32_t>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderCellV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
