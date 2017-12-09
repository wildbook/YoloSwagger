#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsPlayerChampionSelectionDTO_t {
    std::string summonerInternalName;
    int32_t selectedSkinIndex;
    int32_t championId;
    int32_t spell2Id;
    int32_t spell1Id;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsPlayerChampionSelectionDTO_t& v) {
    j["summonerInternalName"] = v.summonerInternalName;
    j["selectedSkinIndex"] = v.selectedSkinIndex;
    j["championId"] = v.championId;
    j["spell2Id"] = v.spell2Id;
    j["spell1Id"] = v.spell1Id;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsPlayerChampionSelectionDTO_t& v) {
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.selectedSkinIndex = j.at("selectedSkinIndex").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
  }
  inline std::string to_string(const ChampSelectLcdsPlayerChampionSelectionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
