#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyCollectionsRental.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyCollectionsOwnership_t {
    LolChampSelectLegacyCollectionsRental_t rental;
    bool freeToPlayReward;
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyCollectionsOwnership_t& v) {
    j["rental"] = v.rental;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyCollectionsOwnership_t& v) {
    v.rental = j.at("rental").get<LolChampSelectLegacyCollectionsRental_t>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.owned = j.at("owned").get<bool>();
  }
  inline std::string to_string(const LolChampSelectLegacyCollectionsOwnership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
