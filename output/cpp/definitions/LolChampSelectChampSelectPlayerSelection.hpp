#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectChampSelectPlayerSelection_t {
    int32_t_t championPickIntent;
    uint64_t_t spell1Id;
    int32_t_t championId;
    std::string_t playerType;
    uint64_t_t summonerId;
    std::string_t assignedPosition;
    int32_t_t selectedSkinId;
    int32_t_t team;
    std::string_t displayName;
    uint64_t_t spell2Id;
    int64_t_t wardSkinId;
    int64_t_t cellId;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectPlayerSelection_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectPlayerSelection_t& v) {
    v.championPickIntent = j.at("championPickIntent").get<int32_t_t>();
    v.spell1Id = j.at("spell1Id").get<uint64_t_t>();
    v.championId = j.at("championId").get<int32_t_t>();
    v.playerType = j.at("playerType").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.assignedPosition = j.at("assignedPosition").get<std::string_t>();
    v.selectedSkinId = j.at("selectedSkinId").get<int32_t_t>();
    v.team = j.at("team").get<int32_t_t>();
    v.displayName = j.at("displayName").get<std::string_t>();
    v.spell2Id = j.at("spell2Id").get<uint64_t_t>();
    v.wardSkinId = j.at("wardSkinId").get<int64_t_t>();
    v.cellId = j.at("cellId").get<int64_t_t>();
  }
  inline std::string to_string(const LolChampSelectChampSelectPlayerSelection_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
