#ifndef SWAGGER_TYPES_PaymentsFrontEndRequest_HPP
#define SWAGGER_TYPES_PaymentsFrontEndRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PaymentsFrontEndRequest {
    // 
    bool isPrepaid;
    // 
    std::string localeId;
    // 
    std::string gifteeMessage;
    // 
    int16_t summonerLevel;
    // 
    int32_t gifteeAccountId;
    // 
    std::string rsoToken;
  };

  inline void to_json(nlohmann::json& j, const PaymentsFrontEndRequest& v) {
    j["isPrepaid"] = v.isPrepaid;
    j["localeId"] = v.localeId;
    j["gifteeMessage"] = v.gifteeMessage;
    j["summonerLevel"] = v.summonerLevel;
    j["gifteeAccountId"] = v.gifteeAccountId;
    j["rsoToken"] = v.rsoToken;
  }

  inline void from_json(const nlohmann::json& j, PaymentsFrontEndRequest& v) {
    v.isPrepaid = j.at("isPrepaid").get<bool>;
    v.localeId = j.at("localeId").get<std::string>;
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>;
    v.summonerLevel = j.at("summonerLevel").get<int16_t>;
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>;
    v.rsoToken = j.at("rsoToken").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PaymentsFrontEndRequest_HPP
