#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerIcon_t {
    LolCollectionsCollectionsOwnership_t ownership;
    int32_t iconId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerIcon_t& v) {
    j["ownership"] = v.ownership;
    j["iconId"] = v.iconId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerIcon_t& v) {
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership_t>();
    v.iconId = j.at("iconId").get<int32_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsSummonerIcon_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
