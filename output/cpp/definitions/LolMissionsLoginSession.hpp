#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMissionsLoginSession_t {
    uint64_t accountId;
    uint64_t summonerId;
    std::string platformId;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["platformId"] = v.platformId;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.platformId = j.at("platformId").get<std::string>();
  }
  inline std::string to_string(const LolMissionsLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
