#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftPFTEndOfGameStats.hpp"
namespace leagueapi {
  struct LolPftPFTMetadata_t {
    LolPftPFTEndOfGameStats_t stats;
    std::string appName;
    std::string locale;
    std::string appVersion;
    std::string systemOs;
    std::string env;
    std::string webRegion;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTMetadata_t& v) {
    j["stats"] = v.stats;
    j["appName"] = v.appName;
    j["locale"] = v.locale;
    j["appVersion"] = v.appVersion;
    j["systemOs"] = v.systemOs;
    j["env"] = v.env;
    j["webRegion"] = v.webRegion;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTMetadata_t& v) {
    v.stats = j.at("stats").get<LolPftPFTEndOfGameStats_t>();
    v.appName = j.at("appName").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
    v.appVersion = j.at("appVersion").get<std::string>();
    v.systemOs = j.at("systemOs").get<std::string>();
    v.env = j.at("env").get<std::string>();
    v.webRegion = j.at("webRegion").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolPftPFTMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
