#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashTicketOffer_t {
    int32_t amount;
    uint64_t summonerId;
    bool isAccepted;
  };

  inline void to_json(nlohmann::json& j, const LolClashTicketOffer_t& v) {
    j["amount"] = v.amount;
    j["summonerId"] = v.summonerId;
    j["isAccepted"] = v.isAccepted;
  }

  inline void from_json(const nlohmann::json& j, LolClashTicketOffer_t& v) {
    v.amount = j.at("amount").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.isAccepted = j.at("isAccepted").get<bool>();
  }
  inline std::string to_string(const LolClashTicketOffer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
