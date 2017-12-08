#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftPFTEndOfGameStats.hpp"
namespace leagueapi {
  struct LolPftPFTMetadata_t {
    std::string webRegion;
    uint64_t accountId;
    std::string locale;
    std::string appName;
    LolPftPFTEndOfGameStats_t stats;
    std::string env;
    std::string systemOs;
    std::string appVersion;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTMetadata_t& v) {
    j["webRegion"] = v.webRegion;
    j["accountId"] = v.accountId;
    j["locale"] = v.locale;
    j["appName"] = v.appName;
    j["stats"] = v.stats;
    j["env"] = v.env;
    j["systemOs"] = v.systemOs;
    j["appVersion"] = v.appVersion;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTMetadata_t& v) {
    v.webRegion = j.at("webRegion").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.locale = j.at("locale").get<std::string>();
    v.appName = j.at("appName").get<std::string>();
    v.stats = j.at("stats").get<LolPftPFTEndOfGameStats_t>();
    v.env = j.at("env").get<std::string>();
    v.systemOs = j.at("systemOs").get<std::string>();
    v.appVersion = j.at("appVersion").get<std::string>();
  }
  inline std::string to_string(const LolPftPFTMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
