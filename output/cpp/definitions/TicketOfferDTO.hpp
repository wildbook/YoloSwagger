#pragma once
#include <json.hpp>
#include <optional>
#include "TicketOfferState.hpp"
namespace leagueapi {
  struct TicketOfferDTO_t {
    int32_t count;
    uint64_t receivePlayerId;
    TicketOfferState_t ticketOfferState;
    uint64_t offerPlayerId;
  };

  inline void to_json(nlohmann::json& j, const TicketOfferDTO_t& v) {
    j["count"] = v.count;
    j["receivePlayerId"] = v.receivePlayerId;
    j["ticketOfferState"] = v.ticketOfferState;
    j["offerPlayerId"] = v.offerPlayerId;
  }

  inline void from_json(const nlohmann::json& j, TicketOfferDTO_t& v) {
    v.count = j.at("count").get<int32_t>();
    v.receivePlayerId = j.at("receivePlayerId").get<uint64_t>();
    v.ticketOfferState = j.at("ticketOfferState").get<TicketOfferState_t>();
    v.offerPlayerId = j.at("offerPlayerId").get<uint64_t>();
  }
  inline std::string to_string(const TicketOfferDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
