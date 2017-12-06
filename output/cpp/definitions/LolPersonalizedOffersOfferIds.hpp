#pragma once
#include <json.hpp>
#include <optional>
#include "LolPersonalizedOffersOfferId.hpp"
namespace leagueapi {
  struct LolPersonalizedOffersOfferIds_t {
    std::vector<LolPersonalizedOffersOfferId_t> offers;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOfferIds_t& v) {
    j["offers"] = v.offers;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOfferIds_t& v) {
    v.offers = j.at("offers").get<std::vector<LolPersonalizedOffersOfferId_t>>();
  }
}
