#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class TicketOfferState_t {
    REJECTED_E = 2,
    REVOKED_E = 3,
    ACCEPTED_E = 1,
    ACTIVE_E = 0,
  };

  inline void to_json(nlohmann::json& j, const TicketOfferState_t& v) {
    switch(v) {
      case TicketOfferState_t::REJECTED_E:
        j = "REJECTED";
      break;
      case TicketOfferState_t::REVOKED_E:
        j = "REVOKED";
      break;
      case TicketOfferState_t::ACCEPTED_E:
        j = "ACCEPTED";
      break;
      case TicketOfferState_t::ACTIVE_E:
        j = "ACTIVE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, TicketOfferState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "REJECTED"){
      v = TicketOfferState_t::REJECTED_E;
      return;
    }
    if(s == "REVOKED"){
      v = TicketOfferState_t::REVOKED_E;
      return;
    }
    if(s == "ACCEPTED"){
      v = TicketOfferState_t::ACCEPTED_E;
      return;
    }
    if(s == "ACTIVE"){
      v = TicketOfferState_t::ACTIVE_E;
      return;
    }
  }
  inline std::string to_string(const TicketOfferState_t& v) {
    switch(v) {
      case TicketOfferState_t::REJECTED_E:
        return "REJECTED";
      case TicketOfferState_t::REVOKED_E:
        return "REVOKED";
      case TicketOfferState_t::ACCEPTED_E:
        return "ACCEPTED";
      case TicketOfferState_t::ACTIVE_E:
        return "ACTIVE";
    }
  }

}
