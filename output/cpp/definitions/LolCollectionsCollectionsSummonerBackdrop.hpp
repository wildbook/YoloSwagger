#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsSummonerBackdropType.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerBackdrop_t {
    int32_t profileIconId;
    std::string backdropMaskColor;
    uint64_t accountId;
    uint64_t summonerId;
    int32_t championId;
    std::string backdropImage;
    LolCollectionsCollectionsSummonerBackdropType_t backdropType;
    std::string backdropVideo;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerBackdrop_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["backdropMaskColor"] = v.backdropMaskColor;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["championId"] = v.championId;
    j["backdropImage"] = v.backdropImage;
    j["backdropType"] = v.backdropType;
    j["backdropVideo"] = v.backdropVideo;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerBackdrop_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.backdropMaskColor = j.at("backdropMaskColor").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.backdropImage = j.at("backdropImage").get<std::string>();
    v.backdropType = j.at("backdropType").get<LolCollectionsCollectionsSummonerBackdropType_t>();
    v.backdropVideo = j.at("backdropVideo").get<std::string>();
  }
  inline std::string to_string(const LolCollectionsCollectionsSummonerBackdrop_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
