#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PaymentsFrontEndRequest_t {
    bool_t isPrepaid;
    std::string_t localeId;
    std::string_t gifteeMessage;
    int16_t_t summonerLevel;
    int32_t_t gifteeAccountId;
    std::string_t rsoToken;
  };

  inline void to_json(nlohmann::json& j, const PaymentsFrontEndRequest_t& v) {
    j["isPrepaid"] = v.isPrepaid;
    j["localeId"] = v.localeId;
    j["gifteeMessage"] = v.gifteeMessage;
    j["summonerLevel"] = v.summonerLevel;
    j["gifteeAccountId"] = v.gifteeAccountId;
    j["rsoToken"] = v.rsoToken;
  }

  inline void from_json(const nlohmann::json& j, PaymentsFrontEndRequest_t& v) {
    v.isPrepaid = j.at("isPrepaid").get<bool_t>();
    v.localeId = j.at("localeId").get<std::string_t>();
    v.gifteeMessage = j.at("gifteeMessage").get<std::string_t>();
    v.summonerLevel = j.at("summonerLevel").get<int16_t_t>();
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t_t>();
    v.rsoToken = j.at("rsoToken").get<std::string_t>();
  }
  inline std::string to_string(const PaymentsFrontEndRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
