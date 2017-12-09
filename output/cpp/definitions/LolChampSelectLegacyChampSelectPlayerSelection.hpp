#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectPlayerSelection_t {
    int64_t cellId;
    int64_t wardSkinId;
    int32_t championId;
    int32_t selectedSkinId;
    uint64_t summonerId;
    int32_t team;
    std::string displayName;
    std::string playerType;
    int32_t championPickIntent;
    uint64_t spell1Id;
    uint64_t spell2Id;
    std::string assignedPosition;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectPlayerSelection_t& v) {
    j["cellId"] = v.cellId;
    j["wardSkinId"] = v.wardSkinId;
    j["championId"] = v.championId;
    j["selectedSkinId"] = v.selectedSkinId;
    j["summonerId"] = v.summonerId;
    j["team"] = v.team;
    j["displayName"] = v.displayName;
    j["playerType"] = v.playerType;
    j["championPickIntent"] = v.championPickIntent;
    j["spell1Id"] = v.spell1Id;
    j["spell2Id"] = v.spell2Id;
    j["assignedPosition"] = v.assignedPosition;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectPlayerSelection_t& v) {
    v.cellId = j.at("cellId").get<int64_t>();
    v.wardSkinId = j.at("wardSkinId").get<int64_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.selectedSkinId = j.at("selectedSkinId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.team = j.at("team").get<int32_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.playerType = j.at("playerType").get<std::string>();
    v.championPickIntent = j.at("championPickIntent").get<int32_t>();
    v.spell1Id = j.at("spell1Id").get<uint64_t>();
    v.spell2Id = j.at("spell2Id").get<uint64_t>();
    v.assignedPosition = j.at("assignedPosition").get<std::string>();
  }
  inline std::string to_string(const LolChampSelectLegacyChampSelectPlayerSelection_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
