#ifndef SWAGGER_TYPES_LolCollectionsCollectionsSummonerIcon_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsSummonerIcon_HPP
#include <json.hpp>
#include "LolCollectionsCollectionsOwnership.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsSummonerIcon {
    // 
    int32_t iconId;
    // 
    LolCollectionsCollectionsOwnership ownership;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerIcon& v) {
    j["iconId"] = v.iconId;
    j["ownership"] = v.ownership;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerIcon& v) {
    v.iconId = j.at("iconId").get<int32_t>;
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsSummonerIcon_HPP
