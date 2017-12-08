#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PaymentsPMCStartUrlResult_t {
    std::string_t localeId;
    std::string_t playerFacingId;
    std::string_t userId;
    std::string_t pmcStartUrl;
    int16_t_t summonerLevel;
    std::string_t id;
    std::string_t createdAt;
  };

  inline void to_json(nlohmann::json& j, const PaymentsPMCStartUrlResult_t& v) {
    j["localeId"] = v.localeId;
    j["playerFacingId"] = v.playerFacingId;
    j["userId"] = v.userId;
    j["pmcStartUrl"] = v.pmcStartUrl;
    j["summonerLevel"] = v.summonerLevel;
    j["id"] = v.id;
    j["createdAt"] = v.createdAt;
  }

  inline void from_json(const nlohmann::json& j, PaymentsPMCStartUrlResult_t& v) {
    v.localeId = j.at("localeId").get<std::string_t>();
    v.playerFacingId = j.at("playerFacingId").get<std::string_t>();
    v.userId = j.at("userId").get<std::string_t>();
    v.pmcStartUrl = j.at("pmcStartUrl").get<std::string_t>();
    v.summonerLevel = j.at("summonerLevel").get<int16_t_t>();
    v.id = j.at("id").get<std::string_t>();
    v.createdAt = j.at("createdAt").get<std::string_t>();
  }
  inline std::string to_string(const PaymentsPMCStartUrlResult_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
