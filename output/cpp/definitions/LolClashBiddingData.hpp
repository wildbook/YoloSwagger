#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTicketOffer.hpp"
namespace leagueapi {
  struct LolClashBiddingData_t {
    int32_t currentPaid;
    int32_t currentBid;
    std::vector<LolClashTicketOffer_t> incomingOffers;
  };

  inline void to_json(nlohmann::json& j, const LolClashBiddingData_t& v) {
    j["currentPaid"] = v.currentPaid;
    j["currentBid"] = v.currentBid;
    j["incomingOffers"] = v.incomingOffers;
  }

  inline void from_json(const nlohmann::json& j, LolClashBiddingData_t& v) {
    v.currentPaid = j.at("currentPaid").get<int32_t>();
    v.currentBid = j.at("currentBid").get<int32_t>();
    v.incomingOffers = j.at("incomingOffers").get<std::vector<LolClashTicketOffer_t>>();
  }
}
