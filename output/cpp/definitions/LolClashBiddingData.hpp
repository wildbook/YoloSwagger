#ifndef SWAGGER_TYPES_LolClashBiddingData_HPP
#define SWAGGER_TYPES_LolClashBiddingData_HPP
#include <json.hpp>
#include "LolClashTicketOffer.hpp"
namespace leagueapi {
  // 
  struct LolClashBiddingData {
    // 
    int32_t currentBid;
    // 
    int32_t currentPaid;
    // 
    std::vector<LolClashTicketOffer> incomingOffers;
  };

  inline void to_json(nlohmann::json& j, const LolClashBiddingData& v) {
    j["currentBid"] = v.currentBid;
    j["currentPaid"] = v.currentPaid;
    j["incomingOffers"] = v.incomingOffers;
  }

  inline void from_json(const nlohmann::json& j, LolClashBiddingData& v) {
    v.currentBid = j.at("currentBid").get<int32_t>;
    v.currentPaid = j.at("currentPaid").get<int32_t>;
    v.incomingOffers = j.at("incomingOffers").get<std::vector<LolClashTicketOffer>>;
  }

}
#endif // SWAGGER_TYPES_LolClashBiddingData_HPP
