#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PaymentsPMCStartUrlRequest_t {
    int16_t summonerLevel;
    std::string gifteeMessage;
    bool isPrepaid;
    int32_t gifteeAccountId;
    std::string localeId;
  };

  inline void to_json(nlohmann::json& j, const PaymentsPMCStartUrlRequest_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["gifteeMessage"] = v.gifteeMessage;
    j["isPrepaid"] = v.isPrepaid;
    j["gifteeAccountId"] = v.gifteeAccountId;
    j["localeId"] = v.localeId;
  }

  inline void from_json(const nlohmann::json& j, PaymentsPMCStartUrlRequest_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<int16_t>();
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>();
    v.isPrepaid = j.at("isPrepaid").get<bool>();
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>();
    v.localeId = j.at("localeId").get<std::string>();
  }
  inline std::string to_string(const PaymentsPMCStartUrlRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
