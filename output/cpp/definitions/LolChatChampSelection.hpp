#ifndef SWAGGER_TYPES_LolChatChampSelection_HPP
#define SWAGGER_TYPES_LolChatChampSelection_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatChampSelection {
    // 
    int32_t selectedSkinIndex;
    // 
    std::string summonerInternalName;
    // 
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolChatChampSelection& v) {
    j["selectedSkinIndex"] = v.selectedSkinIndex;
    j["summonerInternalName"] = v.summonerInternalName;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolChatChampSelection& v) {
    v.selectedSkinIndex = j.at("selectedSkinIndex").get<int32_t>;
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>;
    v.championId = j.at("championId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolChatChampSelection_HPP
