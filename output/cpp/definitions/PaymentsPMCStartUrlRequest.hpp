#ifndef SWAGGER_TYPES_PaymentsPMCStartUrlRequest_HPP
#define SWAGGER_TYPES_PaymentsPMCStartUrlRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PaymentsPMCStartUrlRequest {
    // 
    bool isPrepaid;
    // 
    int16_t summonerLevel;
    // 
    std::string gifteeMessage;
    // 
    int32_t gifteeAccountId;
    // 
    std::string localeId;
  };

  inline void to_json(nlohmann::json& j, const PaymentsPMCStartUrlRequest& v) {
    j["isPrepaid"] = v.isPrepaid;
    j["summonerLevel"] = v.summonerLevel;
    j["gifteeMessage"] = v.gifteeMessage;
    j["gifteeAccountId"] = v.gifteeAccountId;
    j["localeId"] = v.localeId;
  }

  inline void from_json(const nlohmann::json& j, PaymentsPMCStartUrlRequest& v) {
    v.isPrepaid = j.at("isPrepaid").get<bool>;
    v.summonerLevel = j.at("summonerLevel").get<int16_t>;
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>;
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>;
    v.localeId = j.at("localeId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PaymentsPMCStartUrlRequest_HPP
