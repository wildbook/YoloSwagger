#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsRental.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsOwnership_t {
    bool freeToPlayReward;
    bool owned;
    LolCollectionsCollectionsRental_t rental;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsOwnership_t& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
    j["rental"] = v.rental;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsOwnership_t& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.owned = j.at("owned").get<bool>();
    v.rental = j.at("rental").get<LolCollectionsCollectionsRental_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsOwnership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
