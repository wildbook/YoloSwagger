#pragma once
#include <json.hpp>
#include <optional>
#include "LolPersonalizedOffersOffer.hpp"
namespace leagueapi {
  struct LolPersonalizedOffersOffers_t {
    std::vector<LolPersonalizedOffersOffer_t> offers;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOffers_t& v) {
    j["offers"] = v.offers;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOffers_t& v) {
    v.offers = j.at("offers").get<std::vector<LolPersonalizedOffersOffer_t>>();
  }
}
