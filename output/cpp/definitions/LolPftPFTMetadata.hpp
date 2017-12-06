#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftPFTEndOfGameStats.hpp"
namespace leagueapi {
  struct LolPftPFTMetadata_t {
    std::string locale;
    std::string appName;
    LolPftPFTEndOfGameStats_t stats;
    uint64_t accountId;
    std::string systemOs;
    std::string appVersion;
    std::string webRegion;
    std::string env;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTMetadata_t& v) {
    j["locale"] = v.locale;
    j["appName"] = v.appName;
    j["stats"] = v.stats;
    j["accountId"] = v.accountId;
    j["systemOs"] = v.systemOs;
    j["appVersion"] = v.appVersion;
    j["webRegion"] = v.webRegion;
    j["env"] = v.env;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTMetadata_t& v) {
    v.locale = j.at("locale").get<std::string>();
    v.appName = j.at("appName").get<std::string>();
    v.stats = j.at("stats").get<LolPftPFTEndOfGameStats_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.systemOs = j.at("systemOs").get<std::string>();
    v.appVersion = j.at("appVersion").get<std::string>();
    v.webRegion = j.at("webRegion").get<std::string>();
    v.env = j.at("env").get<std::string>();
  }
}
