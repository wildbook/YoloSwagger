#pragma once
#include <json.hpp>
#include <optional>
#include "LolMissionsCollectionsRental.hpp"
namespace leagueapi {
  struct LolMissionsCollectionsOwnership_t {
    bool owned;
    bool freeToPlayReward;
    LolMissionsCollectionsRental_t rental;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsCollectionsOwnership_t& v) {
    j["owned"] = v.owned;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsCollectionsOwnership_t& v) {
    v.owned = j.at("owned").get<bool>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.rental = j.at("rental").get<LolMissionsCollectionsRental_t>();
  }
  inline std::string to_string(const LolMissionsCollectionsOwnership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
