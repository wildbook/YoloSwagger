#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PaymentsFrontEndRequest_t {
    int32_t gifteeAccountId;
    std::string gifteeMessage;
    bool isPrepaid;
    std::string localeId;
    std::string rsoToken;
    int16_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const PaymentsFrontEndRequest_t& v) {
    j["gifteeAccountId"] = v.gifteeAccountId;
    j["gifteeMessage"] = v.gifteeMessage;
    j["isPrepaid"] = v.isPrepaid;
    j["localeId"] = v.localeId;
    j["rsoToken"] = v.rsoToken;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, PaymentsFrontEndRequest_t& v) {
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>();
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>();
    v.isPrepaid = j.at("isPrepaid").get<bool>();
    v.localeId = j.at("localeId").get<std::string>();
    v.rsoToken = j.at("rsoToken").get<std::string>();
    v.summonerLevel = j.at("summonerLevel").get<int16_t>();
  }
  inline std::string to_string(const PaymentsFrontEndRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
