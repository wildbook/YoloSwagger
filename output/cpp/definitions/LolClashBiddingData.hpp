#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTicketOffer.hpp"
namespace leagueapi {
  struct LolClashBiddingData_t {
    int32_t_t currentBid;
    int32_t_t currentPaid;
    std::vector<LolClashTicketOffer_t> incomingOffers;
  };

  inline void to_json(nlohmann::json& j, const LolClashBiddingData_t& v) {
    j["currentBid"] = v.currentBid;
    j["currentPaid"] = v.currentPaid;
    j["incomingOffers"] = v.incomingOffers;
  }

  inline void from_json(const nlohmann::json& j, LolClashBiddingData_t& v) {
    v.currentBid = j.at("currentBid").get<int32_t_t>();
    v.currentPaid = j.at("currentPaid").get<int32_t_t>();
    v.incomingOffers = j.at("incomingOffers").get<std::vector<LolClashTicketOffer_t>>();
  }
  inline std::string to_string(const LolClashBiddingData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
