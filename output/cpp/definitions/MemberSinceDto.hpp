#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerInfoDto.hpp"
namespace leagueapi {
  struct MemberSinceDto_t {
    std::string role;
    int64_t since;
    PlayerInfoDto_t playerInfo;
  };

  inline void to_json(nlohmann::json& j, const MemberSinceDto_t& v) {
    j["role"] = v.role;
    j["since"] = v.since;
    j["playerInfo"] = v.playerInfo;
  }

  inline void from_json(const nlohmann::json& j, MemberSinceDto_t& v) {
    v.role = j.at("role").get<std::string>();
    v.since = j.at("since").get<int64_t>();
    v.playerInfo = j.at("playerInfo").get<PlayerInfoDto_t>();
  }
  inline std::string to_string(const MemberSinceDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
