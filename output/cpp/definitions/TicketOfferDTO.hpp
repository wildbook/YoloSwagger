#pragma once
#include <json.hpp>
#include <optional>
#include "TicketOfferState.hpp"
namespace leagueapi {
  struct TicketOfferDTO_t {
    uint64_t offerPlayerId;
    TicketOfferState_t ticketOfferState;
    uint64_t receivePlayerId;
    int32_t count;
  };

  inline void to_json(nlohmann::json& j, const TicketOfferDTO_t& v) {
    j["offerPlayerId"] = v.offerPlayerId;
    j["ticketOfferState"] = v.ticketOfferState;
    j["receivePlayerId"] = v.receivePlayerId;
    j["count"] = v.count;
  }

  inline void from_json(const nlohmann::json& j, TicketOfferDTO_t& v) {
    v.offerPlayerId = j.at("offerPlayerId").get<uint64_t>();
    v.ticketOfferState = j.at("ticketOfferState").get<TicketOfferState_t>();
    v.receivePlayerId = j.at("receivePlayerId").get<uint64_t>();
    v.count = j.at("count").get<int32_t>();
  }
}
