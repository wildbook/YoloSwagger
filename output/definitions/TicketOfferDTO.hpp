#ifndef SWAGGER_TYPES_TicketOfferDTO_HPP
#define SWAGGER_TYPES_TicketOfferDTO_HPP
#include <json.hpp>
#include "TicketOfferState.hpp"
namespace leagueapi {
  // 
  struct TicketOfferDTO {
    // 
    int32_t count;
    // 
    uint64_t offerPlayerId;
    // 
    uint64_t receivePlayerId;
    // 
    TicketOfferState ticketOfferState;
  };

  inline void to_json(nlohmann::json& j, const TicketOfferDTO& v) {
    j["count"] = v.count;
    j["offerPlayerId"] = v.offerPlayerId;
    j["receivePlayerId"] = v.receivePlayerId;
    j["ticketOfferState"] = v.ticketOfferState;
  }

  inline void from_json(const nlohmann::json& j, TicketOfferDTO& v) {
    v.count = j.at("count").get<int32_t>;
    v.offerPlayerId = j.at("offerPlayerId").get<uint64_t>;
    v.receivePlayerId = j.at("receivePlayerId").get<uint64_t>;
    v.ticketOfferState = j.at("ticketOfferState").get<TicketOfferState>;
  }

}
#endif // SWAGGER_TYPES_TicketOfferDTO_HPP
