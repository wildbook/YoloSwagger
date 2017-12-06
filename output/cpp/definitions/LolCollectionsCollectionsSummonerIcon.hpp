#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerIcon_t {
    int32_t iconId;
    LolCollectionsCollectionsOwnership_t ownership;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerIcon_t& v) {
    j["iconId"] = v.iconId;
    j["ownership"] = v.ownership;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerIcon_t& v) {
    v.iconId = j.at("iconId").get<int32_t>();
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership_t>();
  }
}
