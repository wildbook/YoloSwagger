#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftPFTEndOfGameStats.hpp"
namespace leagueapi {
  struct LolPftPFTMetadata_t {
    uint64_t accountId;
    std::string appName;
    std::string appVersion;
    std::string env;
    std::string locale;
    LolPftPFTEndOfGameStats_t stats;
    std::string systemOs;
    std::string webRegion;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTMetadata_t& v) {
    j["accountId"] = v.accountId;
    j["appName"] = v.appName;
    j["appVersion"] = v.appVersion;
    j["env"] = v.env;
    j["locale"] = v.locale;
    j["stats"] = v.stats;
    j["systemOs"] = v.systemOs;
    j["webRegion"] = v.webRegion;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTMetadata_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.appName = j.at("appName").get<std::string>();
    v.appVersion = j.at("appVersion").get<std::string>();
    v.env = j.at("env").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
    v.stats = j.at("stats").get<LolPftPFTEndOfGameStats_t>();
    v.systemOs = j.at("systemOs").get<std::string>();
    v.webRegion = j.at("webRegion").get<std::string>();
  }
}
