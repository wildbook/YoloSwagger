#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsRental.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsOwnership_t {
    bool freeToPlayReward;
    LolChampionsCollectionsRental_t rental;
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsOwnership_t& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsOwnership_t& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.rental = j.at("rental").get<LolChampionsCollectionsRental_t>();
    v.owned = j.at("owned").get<bool>();
  }
  inline std::string to_string(const LolChampionsCollectionsOwnership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
