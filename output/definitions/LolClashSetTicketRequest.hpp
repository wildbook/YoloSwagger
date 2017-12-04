#ifndef SWAGGER_TYPES_LolClashSetTicketRequest_HPP
#define SWAGGER_TYPES_LolClashSetTicketRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashSetTicketRequest {
    // 
    int32_t ticketAmount;
  };

  void to_json(nlohmann::json& j, const LolClashSetTicketRequest& v) {
    j["ticketAmount"] = v.ticketAmount;
  }

  void from_json(const nlohmann::json& j, LolClashSetTicketRequest& v) {
    v.ticketAmount = j.at("ticketAmount").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashSetTicketRequest_HPP
