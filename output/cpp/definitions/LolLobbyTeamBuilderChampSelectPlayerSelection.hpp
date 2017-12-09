#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectPlayerSelection_t {
    uint64_t summonerId;
    int32_t team;
    int32_t selectedSkinId;
    uint64_t spell1Id;
    std::string assignedPosition;
    int32_t championPickIntent;
    uint64_t spell2Id;
    std::string playerType;
    int64_t cellId;
    int64_t wardSkinId;
    std::string displayName;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectPlayerSelection_t& v) {
    j["summonerId"] = v.summonerId;
    j["team"] = v.team;
    j["selectedSkinId"] = v.selectedSkinId;
    j["spell1Id"] = v.spell1Id;
    j["assignedPosition"] = v.assignedPosition;
    j["championPickIntent"] = v.championPickIntent;
    j["spell2Id"] = v.spell2Id;
    j["playerType"] = v.playerType;
    j["cellId"] = v.cellId;
    j["wardSkinId"] = v.wardSkinId;
    j["displayName"] = v.displayName;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectPlayerSelection_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.team = j.at("team").get<int32_t>();
    v.selectedSkinId = j.at("selectedSkinId").get<int32_t>();
    v.spell1Id = j.at("spell1Id").get<uint64_t>();
    v.assignedPosition = j.at("assignedPosition").get<std::string>();
    v.championPickIntent = j.at("championPickIntent").get<int32_t>();
    v.spell2Id = j.at("spell2Id").get<uint64_t>();
    v.playerType = j.at("playerType").get<std::string>();
    v.cellId = j.at("cellId").get<int64_t>();
    v.wardSkinId = j.at("wardSkinId").get<int64_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampSelectPlayerSelection_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
