#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashTicketOffer_t {
    bool isAccepted;
    uint64_t summonerId;
    int32_t amount;
  };

  inline void to_json(nlohmann::json& j, const LolClashTicketOffer_t& v) {
    j["isAccepted"] = v.isAccepted;
    j["summonerId"] = v.summonerId;
    j["amount"] = v.amount;
  }

  inline void from_json(const nlohmann::json& j, LolClashTicketOffer_t& v) {
    v.isAccepted = j.at("isAccepted").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.amount = j.at("amount").get<int32_t>();
  }
  inline std::string to_string(const LolClashTicketOffer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
