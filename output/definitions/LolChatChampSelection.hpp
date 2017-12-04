#ifndef SWAGGER_TYPES_LolChatChampSelection_HPP
#define SWAGGER_TYPES_LolChatChampSelection_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatChampSelection {
    // 
    int32_t championId;
    // 
    int32_t selectedSkinIndex;
    // 
    std::string summonerInternalName;
  };

  void to_json(nlohmann::json& j, const LolChatChampSelection& v) {
    j["championId"] = v.championId;
    j["selectedSkinIndex"] = v.selectedSkinIndex;
    j["summonerInternalName"] = v.summonerInternalName;
  }

  void from_json(const nlohmann::json& j, LolChatChampSelection& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.selectedSkinIndex = j.at("selectedSkinIndex").get<int32_t>;
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatChampSelection_HPP
