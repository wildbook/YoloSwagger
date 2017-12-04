#ifndef SWAGGER_TYPES_MemberSinceDto_HPP
#define SWAGGER_TYPES_MemberSinceDto_HPP
#include <json.hpp>
#include "PlayerInfoDto.hpp"
namespace leagueapi {
  // 
  struct MemberSinceDto {
    // 
    int64_t since;
    // 
    std::string role;
    // 
    PlayerInfoDto playerInfo;
  };

  inline void to_json(nlohmann::json& j, const MemberSinceDto& v) {
    j["since"] = v.since;
    j["role"] = v.role;
    j["playerInfo"] = v.playerInfo;
  }

  inline void from_json(const nlohmann::json& j, MemberSinceDto& v) {
    v.since = j.at("since").get<int64_t>;
    v.role = j.at("role").get<std::string>;
    v.playerInfo = j.at("playerInfo").get<PlayerInfoDto>;
  }

}
#endif // SWAGGER_TYPES_MemberSinceDto_HPP
