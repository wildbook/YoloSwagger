#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMissionsLoginSession_t {
    uint64_t accountId;
    std::string platformId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["platformId"] = v.platformId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.platformId = j.at("platformId").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
