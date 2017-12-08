#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyCollectionsRental.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyCollectionsOwnership_t {
    bool owned;
    bool freeToPlayReward;
    LolChampSelectLegacyCollectionsRental_t rental;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyCollectionsOwnership_t& v) {
    j["owned"] = v.owned;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyCollectionsOwnership_t& v) {
    v.owned = j.at("owned").get<bool>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.rental = j.at("rental").get<LolChampSelectLegacyCollectionsRental_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyCollectionsOwnership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
