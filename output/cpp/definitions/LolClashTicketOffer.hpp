#ifndef SWAGGER_TYPES_LolClashTicketOffer_HPP
#define SWAGGER_TYPES_LolClashTicketOffer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashTicketOffer {
    // 
    bool isAccepted;
    // 
    int32_t amount;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTicketOffer& v) {
    j["isAccepted"] = v.isAccepted;
    j["amount"] = v.amount;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTicketOffer& v) {
    v.isAccepted = j.at("isAccepted").get<bool>;
    v.amount = j.at("amount").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashTicketOffer_HPP
