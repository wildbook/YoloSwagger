#ifndef SWAGGER_TYPES_LolMissionsLoginSession_HPP
#define SWAGGER_TYPES_LolMissionsLoginSession_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMissionsLoginSession {
    // 
    std::string platformId;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsLoginSession& v) {
    j["platformId"] = v.platformId;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsLoginSession& v) {
    v.platformId = j.at("platformId").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolMissionsLoginSession_HPP
