#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsSummonerBackdropType.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerBackdrop_t {
    uint64_t accountId;
    std::string backdropMaskColor;
    std::string backdropVideo;
    LolCollectionsCollectionsSummonerBackdropType_t backdropType;
    uint64_t summonerId;
    std::string backdropImage;
    int32_t profileIconId;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerBackdrop_t& v) {
    j["accountId"] = v.accountId;
    j["backdropMaskColor"] = v.backdropMaskColor;
    j["backdropVideo"] = v.backdropVideo;
    j["backdropType"] = v.backdropType;
    j["summonerId"] = v.summonerId;
    j["backdropImage"] = v.backdropImage;
    j["profileIconId"] = v.profileIconId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerBackdrop_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.backdropMaskColor = j.at("backdropMaskColor").get<std::string>();
    v.backdropVideo = j.at("backdropVideo").get<std::string>();
    v.backdropType = j.at("backdropType").get<LolCollectionsCollectionsSummonerBackdropType_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.backdropImage = j.at("backdropImage").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsSummonerBackdrop_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
