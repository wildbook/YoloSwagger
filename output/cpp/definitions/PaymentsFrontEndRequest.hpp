#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PaymentsFrontEndRequest_t {
    int32_t gifteeAccountId;
    std::string gifteeMessage;
    std::string rsoToken;
    std::string localeId;
    int16_t summonerLevel;
    bool isPrepaid;
  };

  inline void to_json(nlohmann::json& j, const PaymentsFrontEndRequest_t& v) {
    j["gifteeAccountId"] = v.gifteeAccountId;
    j["gifteeMessage"] = v.gifteeMessage;
    j["rsoToken"] = v.rsoToken;
    j["localeId"] = v.localeId;
    j["summonerLevel"] = v.summonerLevel;
    j["isPrepaid"] = v.isPrepaid;
  }

  inline void from_json(const nlohmann::json& j, PaymentsFrontEndRequest_t& v) {
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>();
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>();
    v.rsoToken = j.at("rsoToken").get<std::string>();
    v.localeId = j.at("localeId").get<std::string>();
    v.summonerLevel = j.at("summonerLevel").get<int16_t>();
    v.isPrepaid = j.at("isPrepaid").get<bool>();
  }
  inline std::string to_string(const PaymentsFrontEndRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
