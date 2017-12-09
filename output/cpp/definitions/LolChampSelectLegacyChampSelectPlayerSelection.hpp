#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectPlayerSelection_t {
    std::string displayName;
    int32_t selectedSkinId;
    int32_t championPickIntent;
    uint64_t summonerId;
    uint64_t spell2Id;
    std::string assignedPosition;
    int32_t team;
    uint64_t spell1Id;
    int64_t wardSkinId;
    int64_t cellId;
    std::string playerType;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectPlayerSelection_t& v) {
    j["displayName"] = v.displayName;
    j["selectedSkinId"] = v.selectedSkinId;
    j["championPickIntent"] = v.championPickIntent;
    j["summonerId"] = v.summonerId;
    j["spell2Id"] = v.spell2Id;
    j["assignedPosition"] = v.assignedPosition;
    j["team"] = v.team;
    j["spell1Id"] = v.spell1Id;
    j["wardSkinId"] = v.wardSkinId;
    j["cellId"] = v.cellId;
    j["playerType"] = v.playerType;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectPlayerSelection_t& v) {
    v.displayName = j.at("displayName").get<std::string>();
    v.selectedSkinId = j.at("selectedSkinId").get<int32_t>();
    v.championPickIntent = j.at("championPickIntent").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.spell2Id = j.at("spell2Id").get<uint64_t>();
    v.assignedPosition = j.at("assignedPosition").get<std::string>();
    v.team = j.at("team").get<int32_t>();
    v.spell1Id = j.at("spell1Id").get<uint64_t>();
    v.wardSkinId = j.at("wardSkinId").get<int64_t>();
    v.cellId = j.at("cellId").get<int64_t>();
    v.playerType = j.at("playerType").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyChampSelectPlayerSelection_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
