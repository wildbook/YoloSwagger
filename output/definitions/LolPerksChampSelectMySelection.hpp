#ifndef SWAGGER_TYPES_LolPerksChampSelectMySelection_HPP
#define SWAGGER_TYPES_LolPerksChampSelectMySelection_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksChampSelectMySelection {
    // 
    int32_t selectedSkinId;
    // 
    uint64_t spell1Id;
    // 
    uint64_t spell2Id;
    // 
    int64_t wardSkinId;
  };

  void to_json(nlohmann::json& j, const LolPerksChampSelectMySelection& v) {
    j["selectedSkinId"] = v.selectedSkinId;
    j["spell1Id"] = v.spell1Id;
    j["spell2Id"] = v.spell2Id;
    j["wardSkinId"] = v.wardSkinId;
  }

  void from_json(const nlohmann::json& j, LolPerksChampSelectMySelection& v) {
    v.selectedSkinId = j.at("selectedSkinId").get<int32_t>;
    v.spell1Id = j.at("spell1Id").get<uint64_t>;
    v.spell2Id = j.at("spell2Id").get<uint64_t>;
    v.wardSkinId = j.at("wardSkinId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksChampSelectMySelection_HPP
