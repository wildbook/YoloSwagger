#pragma once
#include <json.hpp>
#include <optional>
#include "TicketOfferState.hpp"
namespace leagueapi {
  struct TicketOfferDTO_t {
    int32_t count;
    uint64_t offerPlayerId;
    uint64_t receivePlayerId;
    TicketOfferState_t ticketOfferState;
  };

  inline void to_json(nlohmann::json& j, const TicketOfferDTO_t& v) {
    j["count"] = v.count;
    j["offerPlayerId"] = v.offerPlayerId;
    j["receivePlayerId"] = v.receivePlayerId;
    j["ticketOfferState"] = v.ticketOfferState;
  }

  inline void from_json(const nlohmann::json& j, TicketOfferDTO_t& v) {
    v.count = j.at("count").get<int32_t>();
    v.offerPlayerId = j.at("offerPlayerId").get<uint64_t>();
    v.receivePlayerId = j.at("receivePlayerId").get<uint64_t>();
    v.ticketOfferState = j.at("ticketOfferState").get<TicketOfferState_t>();
  }
}
