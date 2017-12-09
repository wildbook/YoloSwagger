#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PaymentsPMCStartUrlRequest_t {
    int32_t gifteeAccountId;
    std::string gifteeMessage;
    int16_t summonerLevel;
    bool isPrepaid;
    std::string localeId;
  };

  inline void to_json(nlohmann::json& j, const PaymentsPMCStartUrlRequest_t& v) {
    j["gifteeAccountId"] = v.gifteeAccountId;
    j["gifteeMessage"] = v.gifteeMessage;
    j["summonerLevel"] = v.summonerLevel;
    j["isPrepaid"] = v.isPrepaid;
    j["localeId"] = v.localeId;
  }

  inline void from_json(const nlohmann::json& j, PaymentsPMCStartUrlRequest_t& v) {
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>();
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>();
    v.summonerLevel = j.at("summonerLevel").get<int16_t>();
    v.isPrepaid = j.at("isPrepaid").get<bool>();
    v.localeId = j.at("localeId").get<std::string>();
  }
  inline std::string to_string(const PaymentsPMCStartUrlRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
