#ifndef SWAGGER_TYPES_MemberSinceDto_HPP
#define SWAGGER_TYPES_MemberSinceDto_HPP
#include <json.hpp>
#include "PlayerInfoDto.hpp"
namespace test {
  // 
  struct MemberSinceDto {
'    // 
    PlayerInfoDto playerInfo;
    // 
    std::string role;
    // 
    int64_t since;
  };

  void to_json(nlohmann::json& j, const MemberSinceDto& v) {
    j["playerInfo"] = v.playerInfo;
    j["role"] = v.role;
    j["since"] = v.since;
  }

  void from_json(const nlohmann::json& j, MemberSinceDto& v) {
    v.playerInfo = j.at("playerInfo").get<PlayerInfoDto>;
    v.role = j.at("role").get<std::string>;
    v.since = j.at("since").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_MemberSinceDto_HPP
