#ifndef SWAGGER_TYPES_ChampSelectLcdsPlayerChampionSelectionDTO_HPP
#define SWAGGER_TYPES_ChampSelectLcdsPlayerChampionSelectionDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ChampSelectLcdsPlayerChampionSelectionDTO {
    // 
    int32_t selectedSkinIndex;
    // 
    std::string summonerInternalName;
    // 
    int32_t spell1Id;
    // 
    int32_t championId;
    // 
    int32_t spell2Id;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsPlayerChampionSelectionDTO& v) {
    j["selectedSkinIndex"] = v.selectedSkinIndex;
    j["summonerInternalName"] = v.summonerInternalName;
    j["spell1Id"] = v.spell1Id;
    j["championId"] = v.championId;
    j["spell2Id"] = v.spell2Id;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsPlayerChampionSelectionDTO& v) {
    v.selectedSkinIndex = j.at("selectedSkinIndex").get<int32_t>;
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>;
    v.spell1Id = j.at("spell1Id").get<int32_t>;
    v.championId = j.at("championId").get<int32_t>;
    v.spell2Id = j.at("spell2Id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_ChampSelectLcdsPlayerChampionSelectionDTO_HPP
