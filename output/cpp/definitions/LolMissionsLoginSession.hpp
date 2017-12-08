#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMissionsLoginSession_t {
    std::string_t platformId;
    uint64_t_t summonerId;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsLoginSession_t& v) {
    j["platformId"] = v.platformId;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsLoginSession_t& v) {
    v.platformId = j.at("platformId").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolMissionsLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
