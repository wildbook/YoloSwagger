#ifndef SWAGGER_TYPES_LolChampSelectLegacyChampSelectMySelection_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyChampSelectMySelection_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectLegacyChampSelectMySelection {
    // 
    int64_t wardSkinId;
    // 
    uint64_t spell1Id;
    // 
    int32_t selectedSkinId;
    // 
    uint64_t spell2Id;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectMySelection& v) {
    j["wardSkinId"] = v.wardSkinId;
    j["spell1Id"] = v.spell1Id;
    j["selectedSkinId"] = v.selectedSkinId;
    j["spell2Id"] = v.spell2Id;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectMySelection& v) {
    v.wardSkinId = j.at("wardSkinId").get<int64_t>;
    v.spell1Id = j.at("spell1Id").get<uint64_t>;
    v.selectedSkinId = j.at("selectedSkinId").get<int32_t>;
    v.spell2Id = j.at("spell2Id").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyChampSelectMySelection_HPP
