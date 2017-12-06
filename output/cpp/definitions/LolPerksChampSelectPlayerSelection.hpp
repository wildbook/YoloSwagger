#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksChampSelectPlayerSelection_t {
    int32_t championId;
    std::string playerType;
    uint64_t spell1Id;
    uint64_t spell2Id;
    int32_t championPickIntent;
    std::string assignedPosition;
    std::string displayName;
    int32_t team;
    int32_t selectedSkinId;
    int64_t wardSkinId;
    uint64_t summonerId;
    int64_t cellId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectPlayerSelection_t& v) {
    j["championId"] = v.championId;
    j["playerType"] = v.playerType;
    j["spell1Id"] = v.spell1Id;
    j["spell2Id"] = v.spell2Id;
    j["championPickIntent"] = v.championPickIntent;
    j["assignedPosition"] = v.assignedPosition;
    j["displayName"] = v.displayName;
    j["team"] = v.team;
    j["selectedSkinId"] = v.selectedSkinId;
    j["wardSkinId"] = v.wardSkinId;
    j["summonerId"] = v.summonerId;
    j["cellId"] = v.cellId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectPlayerSelection_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.playerType = j.at("playerType").get<std::string>();
    v.spell1Id = j.at("spell1Id").get<uint64_t>();
    v.spell2Id = j.at("spell2Id").get<uint64_t>();
    v.championPickIntent = j.at("championPickIntent").get<int32_t>();
    v.assignedPosition = j.at("assignedPosition").get<std::string>();
    v.displayName = j.at("displayName").get<std::string>();
    v.team = j.at("team").get<int32_t>();
    v.selectedSkinId = j.at("selectedSkinId").get<int32_t>();
    v.wardSkinId = j.at("wardSkinId").get<int64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.cellId = j.at("cellId").get<int64_t>();
  }
}
