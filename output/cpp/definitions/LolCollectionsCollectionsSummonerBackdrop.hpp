#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsSummonerBackdropType.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerBackdrop_t {
    int32_t profileIconId;
    int32_t championId;
    LolCollectionsCollectionsSummonerBackdropType_t backdropType;
    std::string backdropImage;
    std::string backdropMaskColor;
    uint64_t summonerId;
    std::string backdropVideo;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerBackdrop_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["championId"] = v.championId;
    j["backdropType"] = v.backdropType;
    j["backdropImage"] = v.backdropImage;
    j["backdropMaskColor"] = v.backdropMaskColor;
    j["summonerId"] = v.summonerId;
    j["backdropVideo"] = v.backdropVideo;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerBackdrop_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.backdropType = j.at("backdropType").get<LolCollectionsCollectionsSummonerBackdropType_t>();
    v.backdropImage = j.at("backdropImage").get<std::string>();
    v.backdropMaskColor = j.at("backdropMaskColor").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.backdropVideo = j.at("backdropVideo").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsSummonerBackdrop_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
