#ifndef SWAGGER_TYPES_PlayerInfoDto_HPP
#define SWAGGER_TYPES_PlayerInfoDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PlayerInfoDto {
    // 
    uint64_t currentAccountId;
    // 
    std::string currentPlatformId;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const PlayerInfoDto& v) {
    j["currentAccountId"] = v.currentAccountId;
    j["currentPlatformId"] = v.currentPlatformId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, PlayerInfoDto& v) {
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>;
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_PlayerInfoDto_HPP
