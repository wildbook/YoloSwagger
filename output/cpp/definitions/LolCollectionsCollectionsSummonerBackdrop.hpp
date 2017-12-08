#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsSummonerBackdropType.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerBackdrop_t {
    uint64_t summonerId;
    uint64_t accountId;
    std::string backdropMaskColor;
    std::string backdropImage;
    std::string backdropVideo;
    int32_t profileIconId;
    int32_t championId;
    LolCollectionsCollectionsSummonerBackdropType_t backdropType;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerBackdrop_t& v) {
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
    j["backdropMaskColor"] = v.backdropMaskColor;
    j["backdropImage"] = v.backdropImage;
    j["backdropVideo"] = v.backdropVideo;
    j["profileIconId"] = v.profileIconId;
    j["championId"] = v.championId;
    j["backdropType"] = v.backdropType;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerBackdrop_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.backdropMaskColor = j.at("backdropMaskColor").get<std::string>();
    v.backdropImage = j.at("backdropImage").get<std::string>();
    v.backdropVideo = j.at("backdropVideo").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.backdropType = j.at("backdropType").get<LolCollectionsCollectionsSummonerBackdropType_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsSummonerBackdrop_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
