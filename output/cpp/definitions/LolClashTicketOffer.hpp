#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashTicketOffer_t {
    int32_t amount;
    bool isAccepted;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTicketOffer_t& v) {
    j["amount"] = v.amount;
    j["isAccepted"] = v.isAccepted;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTicketOffer_t& v) {
    v.amount = j.at("amount").get<int32_t>();
    v.isAccepted = j.at("isAccepted").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
