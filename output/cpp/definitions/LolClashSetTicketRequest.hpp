#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashSetTicketRequest_t {
    int32_t_t ticketAmount;
  };

  inline void to_json(nlohmann::json& j, const LolClashSetTicketRequest_t& v) {
    j["ticketAmount"] = v.ticketAmount;
  }

  inline void from_json(const nlohmann::json& j, LolClashSetTicketRequest_t& v) {
    v.ticketAmount = j.at("ticketAmount").get<int32_t_t>();
  }
  inline std::string to_string(const LolClashSetTicketRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
