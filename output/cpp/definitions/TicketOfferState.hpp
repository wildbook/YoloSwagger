#ifndef SWAGGER_TYPES_TicketOfferState_HPP
#define SWAGGER_TYPES_TicketOfferState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class TicketOfferState {
    // 
    ACTIVE = 0,
    // 
    ACCEPTED = 1,
    // 
    REVOKED = 3,
    // 
    REJECTED = 2,
  };

  inline void to_json(nlohmann::json& j, const TicketOfferState& v) {
    switch(v) {
      case TicketOfferState::ACTIVE:
        j = "ACTIVE";
      break;
      case TicketOfferState::ACCEPTED:
        j = "ACCEPTED";
      break;
      case TicketOfferState::REVOKED:
        j = "REVOKED";
      break;
      case TicketOfferState::REJECTED:
        j = "REJECTED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, TicketOfferState& v) {
    const auto& s = j.get<std::string>();
    if(s == "ACTIVE"){
      v = TicketOfferState::ACTIVE;
      return;
    }
    if(s == "ACCEPTED"){
      v = TicketOfferState::ACCEPTED;
      return;
    }
    if(s == "REVOKED"){
      v = TicketOfferState::REVOKED;
      return;
    }
    if(s == "REJECTED"){
      v = TicketOfferState::REJECTED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_TicketOfferState_HPP
