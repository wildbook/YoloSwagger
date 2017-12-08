#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksChampSelectPlayerSelection_t {
    uint64_t spell1Id;
    uint64_t spell2Id;
    std::string playerType;
    std::string assignedPosition;
    uint64_t summonerId;
    int64_t cellId;
    int32_t team;
    int32_t championId;
    std::string displayName;
    int32_t championPickIntent;
    int64_t wardSkinId;
    int32_t selectedSkinId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectPlayerSelection_t& v) {
    j["spell1Id"] = v.spell1Id;
    j["spell2Id"] = v.spell2Id;
    j["playerType"] = v.playerType;
    j["assignedPosition"] = v.assignedPosition;
    j["summonerId"] = v.summonerId;
    j["cellId"] = v.cellId;
    j["team"] = v.team;
    j["championId"] = v.championId;
    j["displayName"] = v.displayName;
    j["championPickIntent"] = v.championPickIntent;
    j["wardSkinId"] = v.wardSkinId;
    j["selectedSkinId"] = v.selectedSkinId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectPlayerSelection_t& v) {
    v.spell1Id = j.at("spell1Id").get<uint64_t>();
    v.spell2Id = j.at("spell2Id").get<uint64_t>();
    v.playerType = j.at("playerType").get<std::string>();
    v.assignedPosition = j.at("assignedPosition").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.cellId = j.at("cellId").get<int64_t>();
    v.team = j.at("team").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.championPickIntent = j.at("championPickIntent").get<int32_t>();
    v.wardSkinId = j.at("wardSkinId").get<int64_t>();
    v.selectedSkinId = j.at("selectedSkinId").get<int32_t>();
  }
  inline std::string to_string(const LolPerksChampSelectPlayerSelection_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
