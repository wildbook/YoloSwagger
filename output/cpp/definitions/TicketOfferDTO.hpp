#pragma once
#include <json.hpp>
#include <optional>
#include "TicketOfferState.hpp"
namespace leagueapi {
  struct TicketOfferDTO_t {
    TicketOfferState_t ticketOfferState;
    int32_t count;
    uint64_t offerPlayerId;
    uint64_t receivePlayerId;
  };

  inline void to_json(nlohmann::json& j, const TicketOfferDTO_t& v) {
    j["ticketOfferState"] = v.ticketOfferState;
    j["count"] = v.count;
    j["offerPlayerId"] = v.offerPlayerId;
    j["receivePlayerId"] = v.receivePlayerId;
  }

  inline void from_json(const nlohmann::json& j, TicketOfferDTO_t& v) {
    v.ticketOfferState = j.at("ticketOfferState").get<TicketOfferState_t>();
    v.count = j.at("count").get<int32_t>();
    v.offerPlayerId = j.at("offerPlayerId").get<uint64_t>();
    v.receivePlayerId = j.at("receivePlayerId").get<uint64_t>();
  }
  inline std::string to_string(const TicketOfferDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
