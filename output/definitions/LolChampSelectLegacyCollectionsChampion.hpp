#ifndef SWAGGER_TYPES_LolChampSelectLegacyCollectionsChampion_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyCollectionsChampion_HPP
#include <json.hpp>
#include "LolChampSelectLegacyCollectionsOwnership.hpp"
namespace leagueapi {
  // 
  struct LolChampSelectLegacyCollectionsChampion {
    // 
    bool freeToPlay;
    // 
    int32_t id;
    // 
    LolChampSelectLegacyCollectionsOwnership ownership;
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacyCollectionsChampion& v) {
    j["freeToPlay"] = v.freeToPlay;
    j["id"] = v.id;
    j["ownership"] = v.ownership;
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyCollectionsChampion& v) {
    v.freeToPlay = j.at("freeToPlay").get<bool>;
    v.id = j.at("id").get<int32_t>;
    v.ownership = j.at("ownership").get<LolChampSelectLegacyCollectionsOwnership>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyCollectionsChampion_HPP
