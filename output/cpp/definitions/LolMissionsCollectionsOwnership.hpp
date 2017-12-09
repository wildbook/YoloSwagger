#pragma once
#include <json.hpp>
#include <optional>
#include "LolMissionsCollectionsRental.hpp"
namespace leagueapi {
  struct LolMissionsCollectionsOwnership_t {
    bool owned;
    LolMissionsCollectionsRental_t rental;
    bool freeToPlayReward;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsCollectionsOwnership_t& v) {
    j["owned"] = v.owned;
    j["rental"] = v.rental;
    j["freeToPlayReward"] = v.freeToPlayReward;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsCollectionsOwnership_t& v) {
    v.owned = j.at("owned").get<bool>();
    v.rental = j.at("rental").get<LolMissionsCollectionsRental_t>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
  }
  inline std::string to_string(const LolMissionsCollectionsOwnership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
