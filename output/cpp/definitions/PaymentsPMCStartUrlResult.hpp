#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PaymentsPMCStartUrlResult_t {
    std::string playerFacingId;
    int16_t summonerLevel;
    std::string localeId;
    std::string createdAt;
    std::string pmcStartUrl;
    std::string id;
    std::string userId;
  };

  inline void to_json(nlohmann::json& j, const PaymentsPMCStartUrlResult_t& v) {
    j["playerFacingId"] = v.playerFacingId;
    j["summonerLevel"] = v.summonerLevel;
    j["localeId"] = v.localeId;
    j["createdAt"] = v.createdAt;
    j["pmcStartUrl"] = v.pmcStartUrl;
    j["id"] = v.id;
    j["userId"] = v.userId;
  }

  inline void from_json(const nlohmann::json& j, PaymentsPMCStartUrlResult_t& v) {
    v.playerFacingId = j.at("playerFacingId").get<std::string>();
    v.summonerLevel = j.at("summonerLevel").get<int16_t>();
    v.localeId = j.at("localeId").get<std::string>();
    v.createdAt = j.at("createdAt").get<std::string>();
    v.pmcStartUrl = j.at("pmcStartUrl").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.userId = j.at("userId").get<std::string>();
  }
  inline std::string to_string(const PaymentsPMCStartUrlResult_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
