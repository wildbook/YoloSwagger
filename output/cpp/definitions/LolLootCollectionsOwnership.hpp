#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootCollectionsRental.hpp"
namespace leagueapi {
  struct LolLootCollectionsOwnership_t {
    bool owned;
    bool freeToPlayReward;
    LolLootCollectionsRental_t rental;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsOwnership_t& v) {
    j["owned"] = v.owned;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsOwnership_t& v) {
    v.owned = j.at("owned").get<bool>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.rental = j.at("rental").get<LolLootCollectionsRental_t>();
  }
  inline std::string to_string(const LolLootCollectionsOwnership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
