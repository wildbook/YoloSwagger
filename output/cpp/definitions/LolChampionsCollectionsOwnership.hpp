#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsRental.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsOwnership_t {
    bool freeToPlayReward;
    bool owned;
    LolChampionsCollectionsRental_t rental;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsOwnership_t& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
    j["rental"] = v.rental;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsOwnership_t& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.owned = j.at("owned").get<bool>();
    v.rental = j.at("rental").get<LolChampionsCollectionsRental_t>();
  }
}
