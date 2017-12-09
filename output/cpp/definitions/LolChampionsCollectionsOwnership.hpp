#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsRental.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsOwnership_t {
    bool owned;
    LolChampionsCollectionsRental_t rental;
    bool freeToPlayReward;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsOwnership_t& v) {
    j["owned"] = v.owned;
    j["rental"] = v.rental;
    j["freeToPlayReward"] = v.freeToPlayReward;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsOwnership_t& v) {
    v.owned = j.at("owned").get<bool>();
    v.rental = j.at("rental").get<LolChampionsCollectionsRental_t>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
  }
  inline std::string to_string(const LolChampionsCollectionsOwnership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
