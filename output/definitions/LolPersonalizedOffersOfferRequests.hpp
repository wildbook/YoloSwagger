#ifndef SWAGGER_TYPES_LolPersonalizedOffersOfferRequests_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersOfferRequests_HPP
#include <json.hpp>
#include "LolPersonalizedOffersOfferRequest.hpp"
namespace test {
  // 
  struct LolPersonalizedOffersOfferRequests {
'    // 
    std::vector<LolPersonalizedOffersOfferRequest> offers;
  };

  void to_json(nlohmann::json& j, const LolPersonalizedOffersOfferRequests& v) {
    j["offers"] = v.offers;
  }

  void from_json(const nlohmann::json& j, LolPersonalizedOffersOfferRequests& v) {
    v.offers = j.at("offers").get<std::vector<LolPersonalizedOffersOfferRequest>>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersOfferRequests_HPP
