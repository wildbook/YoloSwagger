#ifndef SWAGGER_TYPES_LolCollectionsCollectionsSummonerBackdrop_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsSummonerBackdrop_HPP
#include <json.hpp>
#include "LolCollectionsCollectionsSummonerBackdropType.hpp"
namespace test {
  // 
  struct LolCollectionsCollectionsSummonerBackdrop {
'    // 
    uint64_t accountId;
    // 
    std::string backdropImage;
    // 
    std::string backdropMaskColor;
    // 
    LolCollectionsCollectionsSummonerBackdropType backdropType;
    // 
    std::string backdropVideo;
    // 
    int32_t championId;
    // 
    int32_t profileIconId;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerBackdrop& v) {
    j["accountId"] = v.accountId;
    j["backdropImage"] = v.backdropImage;
    j["backdropMaskColor"] = v.backdropMaskColor;
    j["backdropType"] = v.backdropType;
    j["backdropVideo"] = v.backdropVideo;
    j["championId"] = v.championId;
    j["profileIconId"] = v.profileIconId;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerBackdrop& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.backdropImage = j.at("backdropImage").get<std::string>;
    v.backdropMaskColor = j.at("backdropMaskColor").get<std::string>;
    v.backdropType = j.at("backdropType").get<LolCollectionsCollectionsSummonerBackdropType>;
    v.backdropVideo = j.at("backdropVideo").get<std::string>;
    v.championId = j.at("championId").get<int32_t>;
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsSummonerBackdrop_HPP
