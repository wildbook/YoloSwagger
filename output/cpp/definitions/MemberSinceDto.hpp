#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerInfoDto.hpp"
namespace leagueapi {
  struct MemberSinceDto_t {
    int64_t_t since;
    std::string_t role;
    PlayerInfoDto_t playerInfo;
  };

  inline void to_json(nlohmann::json& j, const MemberSinceDto_t& v) {
    j["since"] = v.since;
    j["role"] = v.role;
    j["playerInfo"] = v.playerInfo;
  }

  inline void from_json(const nlohmann::json& j, MemberSinceDto_t& v) {
    v.since = j.at("since").get<int64_t_t>();
    v.role = j.at("role").get<std::string_t>();
    v.playerInfo = j.at("playerInfo").get<PlayerInfoDto_t>();
  }
  inline std::string to_string(const MemberSinceDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
