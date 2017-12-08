#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashTicketOffer_t {
    bool_t isAccepted;
    int32_t_t amount;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTicketOffer_t& v) {
    j["isAccepted"] = v.isAccepted;
    j["amount"] = v.amount;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTicketOffer_t& v) {
    v.isAccepted = j.at("isAccepted").get<bool_t>();
    v.amount = j.at("amount").get<int32_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolClashTicketOffer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
