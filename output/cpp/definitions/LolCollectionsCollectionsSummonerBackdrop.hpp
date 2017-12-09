#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsSummonerBackdropType.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerBackdrop_t {
    std::string backdropMaskColor;
    uint64_t accountId;
    int32_t profileIconId;
    std::string backdropVideo;
    std::string backdropImage;
    uint64_t summonerId;
    LolCollectionsCollectionsSummonerBackdropType_t backdropType;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerBackdrop_t& v) {
    j["backdropMaskColor"] = v.backdropMaskColor;
    j["accountId"] = v.accountId;
    j["profileIconId"] = v.profileIconId;
    j["backdropVideo"] = v.backdropVideo;
    j["backdropImage"] = v.backdropImage;
    j["summonerId"] = v.summonerId;
    j["backdropType"] = v.backdropType;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerBackdrop_t& v) {
    v.backdropMaskColor = j.at("backdropMaskColor").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.backdropVideo = j.at("backdropVideo").get<std::string>();
    v.backdropImage = j.at("backdropImage").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.backdropType = j.at("backdropType").get<LolCollectionsCollectionsSummonerBackdropType_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsSummonerBackdrop_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
