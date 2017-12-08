#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyCollectionsRental.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyCollectionsOwnership_t {
    bool_t freeToPlayReward;
    LolChampSelectLegacyCollectionsRental_t rental;
    bool_t owned;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyCollectionsOwnership_t& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyCollectionsOwnership_t& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool_t>();
    v.rental = j.at("rental").get<LolChampSelectLegacyCollectionsRental_t>();
    v.owned = j.at("owned").get<bool_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyCollectionsOwnership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
