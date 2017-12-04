#ifndef SWAGGER_TYPES_LolCollectionsCollectionsSummonerBackdrop_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsSummonerBackdrop_HPP
#include <json.hpp>
#include "LolCollectionsCollectionsSummonerBackdropType.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsSummonerBackdrop {
    // 
    int32_t profileIconId;
    // 
    int32_t championId;
    // 
    LolCollectionsCollectionsSummonerBackdropType backdropType;
    // 
    std::string backdropImage;
    // 
    std::string backdropMaskColor;
    // 
    uint64_t summonerId;
    // 
    std::string backdropVideo;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerBackdrop& v) {
    j["profileIconId"] = v.profileIconId;
    j["championId"] = v.championId;
    j["backdropType"] = v.backdropType;
    j["backdropImage"] = v.backdropImage;
    j["backdropMaskColor"] = v.backdropMaskColor;
    j["summonerId"] = v.summonerId;
    j["backdropVideo"] = v.backdropVideo;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerBackdrop& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.championId = j.at("championId").get<int32_t>;
    v.backdropType = j.at("backdropType").get<LolCollectionsCollectionsSummonerBackdropType>;
    v.backdropImage = j.at("backdropImage").get<std::string>;
    v.backdropMaskColor = j.at("backdropMaskColor").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.backdropVideo = j.at("backdropVideo").get<std::string>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsSummonerBackdrop_HPP
