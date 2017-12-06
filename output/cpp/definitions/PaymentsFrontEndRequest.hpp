#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PaymentsFrontEndRequest_t {
    int16_t summonerLevel;
    std::string gifteeMessage;
    std::string localeId;
    bool isPrepaid;
    std::string rsoToken;
    int32_t gifteeAccountId;
  };

  inline void to_json(nlohmann::json& j, const PaymentsFrontEndRequest_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["gifteeMessage"] = v.gifteeMessage;
    j["localeId"] = v.localeId;
    j["isPrepaid"] = v.isPrepaid;
    j["rsoToken"] = v.rsoToken;
    j["gifteeAccountId"] = v.gifteeAccountId;
  }

  inline void from_json(const nlohmann::json& j, PaymentsFrontEndRequest_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<int16_t>();
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>();
    v.localeId = j.at("localeId").get<std::string>();
    v.isPrepaid = j.at("isPrepaid").get<bool>();
    v.rsoToken = j.at("rsoToken").get<std::string>();
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>();
  }
}
