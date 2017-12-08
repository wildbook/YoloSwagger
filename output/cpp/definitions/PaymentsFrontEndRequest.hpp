#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PaymentsFrontEndRequest_t {
    std::string rsoToken;
    int32_t gifteeAccountId;
    bool isPrepaid;
    std::string localeId;
    int16_t summonerLevel;
    std::string gifteeMessage;
  };

  inline void to_json(nlohmann::json& j, const PaymentsFrontEndRequest_t& v) {
    j["rsoToken"] = v.rsoToken;
    j["gifteeAccountId"] = v.gifteeAccountId;
    j["isPrepaid"] = v.isPrepaid;
    j["localeId"] = v.localeId;
    j["summonerLevel"] = v.summonerLevel;
    j["gifteeMessage"] = v.gifteeMessage;
  }

  inline void from_json(const nlohmann::json& j, PaymentsFrontEndRequest_t& v) {
    v.rsoToken = j.at("rsoToken").get<std::string>();
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>();
    v.isPrepaid = j.at("isPrepaid").get<bool>();
    v.localeId = j.at("localeId").get<std::string>();
    v.summonerLevel = j.at("summonerLevel").get<int16_t>();
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>();
  }
  inline std::string to_string(const PaymentsFrontEndRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
