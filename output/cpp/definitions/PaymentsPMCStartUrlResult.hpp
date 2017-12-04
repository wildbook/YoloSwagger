#ifndef SWAGGER_TYPES_PaymentsPMCStartUrlResult_HPP
#define SWAGGER_TYPES_PaymentsPMCStartUrlResult_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PaymentsPMCStartUrlResult {
    // 
    std::string localeId;
    // 
    std::string playerFacingId;
    // 
    std::string userId;
    // 
    std::string pmcStartUrl;
    // 
    int16_t summonerLevel;
    // 
    std::string id;
    // 
    std::string createdAt;
  };

  inline void to_json(nlohmann::json& j, const PaymentsPMCStartUrlResult& v) {
    j["localeId"] = v.localeId;
    j["playerFacingId"] = v.playerFacingId;
    j["userId"] = v.userId;
    j["pmcStartUrl"] = v.pmcStartUrl;
    j["summonerLevel"] = v.summonerLevel;
    j["id"] = v.id;
    j["createdAt"] = v.createdAt;
  }

  inline void from_json(const nlohmann::json& j, PaymentsPMCStartUrlResult& v) {
    v.localeId = j.at("localeId").get<std::string>;
    v.playerFacingId = j.at("playerFacingId").get<std::string>;
    v.userId = j.at("userId").get<std::string>;
    v.pmcStartUrl = j.at("pmcStartUrl").get<std::string>;
    v.summonerLevel = j.at("summonerLevel").get<int16_t>;
    v.id = j.at("id").get<std::string>;
    v.createdAt = j.at("createdAt").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PaymentsPMCStartUrlResult_HPP
