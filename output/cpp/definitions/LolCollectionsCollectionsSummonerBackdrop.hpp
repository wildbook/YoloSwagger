#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsSummonerBackdropType.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerBackdrop_t {
    int32_t championId;
    std::string backdropVideo;
    std::string backdropImage;
    int32_t profileIconId;
    std::string backdropMaskColor;
    uint64_t accountId;
    uint64_t summonerId;
    LolCollectionsCollectionsSummonerBackdropType_t backdropType;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerBackdrop_t& v) {
    j["championId"] = v.championId;
    j["backdropVideo"] = v.backdropVideo;
    j["backdropImage"] = v.backdropImage;
    j["profileIconId"] = v.profileIconId;
    j["backdropMaskColor"] = v.backdropMaskColor;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["backdropType"] = v.backdropType;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerBackdrop_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.backdropVideo = j.at("backdropVideo").get<std::string>();
    v.backdropImage = j.at("backdropImage").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.backdropMaskColor = j.at("backdropMaskColor").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.backdropType = j.at("backdropType").get<LolCollectionsCollectionsSummonerBackdropType_t>();
  }
}
