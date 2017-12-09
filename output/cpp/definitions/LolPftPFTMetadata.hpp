#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftPFTEndOfGameStats.hpp"
namespace leagueapi {
  struct LolPftPFTMetadata_t {
    uint64_t accountId;
    std::string appVersion;
    std::string systemOs;
    LolPftPFTEndOfGameStats_t stats;
    std::string env;
    std::string appName;
    std::string locale;
    std::string webRegion;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTMetadata_t& v) {
    j["accountId"] = v.accountId;
    j["appVersion"] = v.appVersion;
    j["systemOs"] = v.systemOs;
    j["stats"] = v.stats;
    j["env"] = v.env;
    j["appName"] = v.appName;
    j["locale"] = v.locale;
    j["webRegion"] = v.webRegion;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTMetadata_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.appVersion = j.at("appVersion").get<std::string>();
    v.systemOs = j.at("systemOs").get<std::string>();
    v.stats = j.at("stats").get<LolPftPFTEndOfGameStats_t>();
    v.env = j.at("env").get<std::string>();
    v.appName = j.at("appName").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
    v.webRegion = j.at("webRegion").get<std::string>();
  }
  inline std::string to_string(const LolPftPFTMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
