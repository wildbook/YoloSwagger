#ifndef SWAGGER_TYPES_LolChampSelectChampSelectPlayerSelection_HPP
#define SWAGGER_TYPES_LolChampSelectChampSelectPlayerSelection_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectChampSelectPlayerSelection {
    // 
    int32_t championPickIntent;
    // 
    uint64_t spell1Id;
    // 
    int32_t championId;
    // 
    std::string playerType;
    // 
    uint64_t summonerId;
    // 
    std::string assignedPosition;
    // 
    int32_t selectedSkinId;
    // 
    int32_t team;
    // 
    std::string displayName;
    // 
    uint64_t spell2Id;
    // 
    int64_t wardSkinId;
    // 
    int64_t cellId;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectPlayerSelection& v) {
    j["championPickIntent"] = v.championPickIntent;
    j["spell1Id"] = v.spell1Id;
    j["championId"] = v.championId;
    j["playerType"] = v.playerType;
    j["summonerId"] = v.summonerId;
    j["assignedPosition"] = v.assignedPosition;
    j["selectedSkinId"] = v.selectedSkinId;
    j["team"] = v.team;
    j["displayName"] = v.displayName;
    j["spell2Id"] = v.spell2Id;
    j["wardSkinId"] = v.wardSkinId;
    j["cellId"] = v.cellId;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectPlayerSelection& v) {
    v.championPickIntent = j.at("championPickIntent").get<int32_t>;
    v.spell1Id = j.at("spell1Id").get<uint64_t>;
    v.championId = j.at("championId").get<int32_t>;
    v.playerType = j.at("playerType").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.assignedPosition = j.at("assignedPosition").get<std::string>;
    v.selectedSkinId = j.at("selectedSkinId").get<int32_t>;
    v.team = j.at("team").get<int32_t>;
    v.displayName = j.at("displayName").get<std::string>;
    v.spell2Id = j.at("spell2Id").get<uint64_t>;
    v.wardSkinId = j.at("wardSkinId").get<int64_t>;
    v.cellId = j.at("cellId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectChampSelectPlayerSelection_HPP
