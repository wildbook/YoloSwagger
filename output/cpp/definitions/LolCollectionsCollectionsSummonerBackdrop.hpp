#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsSummonerBackdropType.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerBackdrop_t {
    uint64_t accountId;
    std::string backdropImage;
    std::string backdropMaskColor;
    LolCollectionsCollectionsSummonerBackdropType_t backdropType;
    std::string backdropVideo;
    int32_t championId;
    int32_t profileIconId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerBackdrop_t& v) {
    j["accountId"] = v.accountId;
    j["backdropImage"] = v.backdropImage;
    j["backdropMaskColor"] = v.backdropMaskColor;
    j["backdropType"] = v.backdropType;
    j["backdropVideo"] = v.backdropVideo;
    j["championId"] = v.championId;
    j["profileIconId"] = v.profileIconId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerBackdrop_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.backdropImage = j.at("backdropImage").get<std::string>();
    v.backdropMaskColor = j.at("backdropMaskColor").get<std::string>();
    v.backdropType = j.at("backdropType").get<LolCollectionsCollectionsSummonerBackdropType_t>();
    v.backdropVideo = j.at("backdropVideo").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
