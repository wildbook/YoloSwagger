#pragma once
#include <json.hpp>
#include <optional>
#include "LolPersonalizedOffersOfferRequest.hpp"
namespace leagueapi {
  struct LolPersonalizedOffersOfferRequests_t {
    std::vector<LolPersonalizedOffersOfferRequest_t> offers;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOfferRequests_t& v) {
    j["offers"] = v.offers;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOfferRequests_t& v) {
    v.offers = j.at("offers").get<std::vector<LolPersonalizedOffersOfferRequest_t>>();
  }
  inline std::string to_string(const LolPersonalizedOffersOfferRequests_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
