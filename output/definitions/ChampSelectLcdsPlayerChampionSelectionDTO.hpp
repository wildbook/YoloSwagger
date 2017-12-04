#ifndef SWAGGER_TYPES_ChampSelectLcdsPlayerChampionSelectionDTO_HPP
#define SWAGGER_TYPES_ChampSelectLcdsPlayerChampionSelectionDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ChampSelectLcdsPlayerChampionSelectionDTO {
    // 
    int32_t championId;
    // 
    int32_t selectedSkinIndex;
    // 
    int32_t spell1Id;
    // 
    int32_t spell2Id;
    // 
    std::string summonerInternalName;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsPlayerChampionSelectionDTO& v) {
    j["championId"] = v.championId;
    j["selectedSkinIndex"] = v.selectedSkinIndex;
    j["spell1Id"] = v.spell1Id;
    j["spell2Id"] = v.spell2Id;
    j["summonerInternalName"] = v.summonerInternalName;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsPlayerChampionSelectionDTO& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.selectedSkinIndex = j.at("selectedSkinIndex").get<int32_t>;
    v.spell1Id = j.at("spell1Id").get<int32_t>;
    v.spell2Id = j.at("spell2Id").get<int32_t>;
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ChampSelectLcdsPlayerChampionSelectionDTO_HPP
