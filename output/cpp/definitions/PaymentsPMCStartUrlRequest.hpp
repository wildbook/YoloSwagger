#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PaymentsPMCStartUrlRequest_t {
    int32_t gifteeAccountId;
    int16_t summonerLevel;
    std::string gifteeMessage;
    std::string localeId;
    bool isPrepaid;
  };

  inline void to_json(nlohmann::json& j, const PaymentsPMCStartUrlRequest_t& v) {
    j["gifteeAccountId"] = v.gifteeAccountId;
    j["summonerLevel"] = v.summonerLevel;
    j["gifteeMessage"] = v.gifteeMessage;
    j["localeId"] = v.localeId;
    j["isPrepaid"] = v.isPrepaid;
  }

  inline void from_json(const nlohmann::json& j, PaymentsPMCStartUrlRequest_t& v) {
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>();
    v.summonerLevel = j.at("summonerLevel").get<int16_t>();
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>();
    v.localeId = j.at("localeId").get<std::string>();
    v.isPrepaid = j.at("isPrepaid").get<bool>();
  }
  inline std::string to_string(const PaymentsPMCStartUrlRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
