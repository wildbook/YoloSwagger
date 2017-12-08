#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PaymentsPMCStartUrlRequest_t {
    bool_t isPrepaid;
    int16_t_t summonerLevel;
    std::string_t gifteeMessage;
    int32_t_t gifteeAccountId;
    std::string_t localeId;
  };

  inline void to_json(nlohmann::json& j, const PaymentsPMCStartUrlRequest_t& v) {
    j["isPrepaid"] = v.isPrepaid;
    j["summonerLevel"] = v.summonerLevel;
    j["gifteeMessage"] = v.gifteeMessage;
    j["gifteeAccountId"] = v.gifteeAccountId;
    j["localeId"] = v.localeId;
  }

  inline void from_json(const nlohmann::json& j, PaymentsPMCStartUrlRequest_t& v) {
    v.isPrepaid = j.at("isPrepaid").get<bool_t>();
    v.summonerLevel = j.at("summonerLevel").get<int16_t_t>();
    v.gifteeMessage = j.at("gifteeMessage").get<std::string_t>();
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t_t>();
    v.localeId = j.at("localeId").get<std::string_t>();
  }
  inline std::string to_string(const PaymentsPMCStartUrlRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
