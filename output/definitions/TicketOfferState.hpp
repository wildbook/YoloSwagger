#ifndef SWAGGER_TYPES_TicketOfferState_HPP
#define SWAGGER_TYPES_TicketOfferState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class TicketOfferState {
    // 
    ACCEPTED = 1,
    // 
    ACTIVE = 0,
    // 
    REJECTED = 2,
    // 
    REVOKED = 3,
  };

  void to_json(nlohmann::json& j, const TicketOfferState& v) {
    switch(v) {
      case TicketOfferState::ACCEPTED:
        j = "ACCEPTED";
      break;
      case TicketOfferState::ACTIVE:
        j = "ACTIVE";
      break;
      case TicketOfferState::REJECTED:
        j = "REJECTED";
      break;
      case TicketOfferState::REVOKED:
        j = "REVOKED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, TicketOfferState& v) {
    const auto s& = j.get<std::string>();
    if(s == "ACCEPTED"){
      v = TicketOfferState::ACCEPTED;
      return;
    }
    if(s == "ACTIVE"){
      v = TicketOfferState::ACTIVE;
      return;
    }
    if(s == "REJECTED"){
      v = TicketOfferState::REJECTED;
      return;
    }
    if(s == "REVOKED"){
      v = TicketOfferState::REVOKED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_TicketOfferState_HPP
