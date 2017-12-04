#ifndef SWAGGER_TYPES_LolClashBiddingData_HPP
#define SWAGGER_TYPES_LolClashBiddingData_HPP
#include <json.hpp>
#include "LolClashTicketOffer.hpp"
namespace test {
  // 
  struct LolClashBiddingData {
'    // 
    int32_t currentBid;
    // 
    int32_t currentPaid;
    // 
    std::vector<LolClashTicketOffer> incomingOffers;
  };

  void to_json(nlohmann::json& j, const LolClashBiddingData& v) {
    j["currentBid"] = v.currentBid;
    j["currentPaid"] = v.currentPaid;
    j["incomingOffers"] = v.incomingOffers;
  }

  void from_json(const nlohmann::json& j, LolClashBiddingData& v) {
    v.currentBid = j.at("currentBid").get<int32_t>;
    v.currentPaid = j.at("currentPaid").get<int32_t>;
    v.incomingOffers = j.at("incomingOffers").get<std::vector<LolClashTicketOffer>>;
  }

}
#endif // SWAGGER_TYPES_LolClashBiddingData_HPP
