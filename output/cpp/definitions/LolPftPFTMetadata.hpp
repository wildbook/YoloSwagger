#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftPFTEndOfGameStats.hpp"
namespace leagueapi {
  struct LolPftPFTMetadata_t {
    std::string env;
    std::string appVersion;
    uint64_t accountId;
    std::string systemOs;
    std::string appName;
    std::string locale;
    LolPftPFTEndOfGameStats_t stats;
    std::string webRegion;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTMetadata_t& v) {
    j["env"] = v.env;
    j["appVersion"] = v.appVersion;
    j["accountId"] = v.accountId;
    j["systemOs"] = v.systemOs;
    j["appName"] = v.appName;
    j["locale"] = v.locale;
    j["stats"] = v.stats;
    j["webRegion"] = v.webRegion;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTMetadata_t& v) {
    v.env = j.at("env").get<std::string>();
    v.appVersion = j.at("appVersion").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.systemOs = j.at("systemOs").get<std::string>();
    v.appName = j.at("appName").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
    v.stats = j.at("stats").get<LolPftPFTEndOfGameStats_t>();
    v.webRegion = j.at("webRegion").get<std::string>();
  }
  inline std::string to_string(const LolPftPFTMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
