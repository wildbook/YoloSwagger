#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PaymentsPMCStartUrlResult_t {
    std::string createdAt;
    std::string id;
    std::string localeId;
    std::string playerFacingId;
    std::string pmcStartUrl;
    int16_t summonerLevel;
    std::string userId;
  };

  inline void to_json(nlohmann::json& j, const PaymentsPMCStartUrlResult_t& v) {
    j["createdAt"] = v.createdAt;
    j["id"] = v.id;
    j["localeId"] = v.localeId;
    j["playerFacingId"] = v.playerFacingId;
    j["pmcStartUrl"] = v.pmcStartUrl;
    j["summonerLevel"] = v.summonerLevel;
    j["userId"] = v.userId;
  }

  inline void from_json(const nlohmann::json& j, PaymentsPMCStartUrlResult_t& v) {
    v.createdAt = j.at("createdAt").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.localeId = j.at("localeId").get<std::string>();
    v.playerFacingId = j.at("playerFacingId").get<std::string>();
    v.pmcStartUrl = j.at("pmcStartUrl").get<std::string>();
    v.summonerLevel = j.at("summonerLevel").get<int16_t>();
    v.userId = j.at("userId").get<std::string>();
  }
}
