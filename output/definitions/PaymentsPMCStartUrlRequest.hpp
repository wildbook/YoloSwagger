#ifndef SWAGGER_TYPES_PaymentsPMCStartUrlRequest_HPP
#define SWAGGER_TYPES_PaymentsPMCStartUrlRequest_HPP
#include <json.hpp>
namespace test {
  // 
  struct PaymentsPMCStartUrlRequest {
'    // 
    int32_t gifteeAccountId;
    // 
    std::string gifteeMessage;
    // 
    bool isPrepaid;
    // 
    std::string localeId;
    // 
    int16_t summonerLevel;
  };

  void to_json(nlohmann::json& j, const PaymentsPMCStartUrlRequest& v) {
    j["gifteeAccountId"] = v.gifteeAccountId;
    j["gifteeMessage"] = v.gifteeMessage;
    j["isPrepaid"] = v.isPrepaid;
    j["localeId"] = v.localeId;
    j["summonerLevel"] = v.summonerLevel;
  }

  void from_json(const nlohmann::json& j, PaymentsPMCStartUrlRequest& v) {
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>;
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>;
    v.isPrepaid = j.at("isPrepaid").get<bool>;
    v.localeId = j.at("localeId").get<std::string>;
    v.summonerLevel = j.at("summonerLevel").get<int16_t>;
  }

}
#endif // SWAGGER_TYPES_PaymentsPMCStartUrlRequest_HPP
