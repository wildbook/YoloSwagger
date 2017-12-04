#ifndef SWAGGER_TYPES_LolChampSelectLegacyChampSelectPlayerSelection_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyChampSelectPlayerSelection_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectLegacyChampSelectPlayerSelection {
    // 
    std::string assignedPosition;
    // 
    int64_t cellId;
    // 
    int32_t championId;
    // 
    int32_t championPickIntent;
    // 
    std::string displayName;
    // 
    std::string playerType;
    // 
    int32_t selectedSkinId;
    // 
    uint64_t spell1Id;
    // 
    uint64_t spell2Id;
    // 
    uint64_t summonerId;
    // 
    int32_t team;
    // 
    int64_t wardSkinId;
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectPlayerSelection& v) {
    j["assignedPosition"] = v.assignedPosition;
    j["cellId"] = v.cellId;
    j["championId"] = v.championId;
    j["championPickIntent"] = v.championPickIntent;
    j["displayName"] = v.displayName;
    j["playerType"] = v.playerType;
    j["selectedSkinId"] = v.selectedSkinId;
    j["spell1Id"] = v.spell1Id;
    j["spell2Id"] = v.spell2Id;
    j["summonerId"] = v.summonerId;
    j["team"] = v.team;
    j["wardSkinId"] = v.wardSkinId;
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectPlayerSelection& v) {
    v.assignedPosition = j.at("assignedPosition").get<std::string>;
    v.cellId = j.at("cellId").get<int64_t>;
    v.championId = j.at("championId").get<int32_t>;
    v.championPickIntent = j.at("championPickIntent").get<int32_t>;
    v.displayName = j.at("displayName").get<std::string>;
    v.playerType = j.at("playerType").get<std::string>;
    v.selectedSkinId = j.at("selectedSkinId").get<int32_t>;
    v.spell1Id = j.at("spell1Id").get<uint64_t>;
    v.spell2Id = j.at("spell2Id").get<uint64_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.team = j.at("team").get<int32_t>;
    v.wardSkinId = j.at("wardSkinId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyChampSelectPlayerSelection_HPP
