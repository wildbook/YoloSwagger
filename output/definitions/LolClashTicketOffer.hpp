#ifndef SWAGGER_TYPES_LolClashTicketOffer_HPP
#define SWAGGER_TYPES_LolClashTicketOffer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashTicketOffer {
    // 
    int32_t amount;
    // 
    bool isAccepted;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolClashTicketOffer& v) {
    j["amount"] = v.amount;
    j["isAccepted"] = v.isAccepted;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolClashTicketOffer& v) {
    v.amount = j.at("amount").get<int32_t>;
    v.isAccepted = j.at("isAccepted").get<bool>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashTicketOffer_HPP
