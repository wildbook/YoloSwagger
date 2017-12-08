#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsTeamIdDTO_t {
    std::string_t fullId;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsTeamIdDTO_t& v) {
    j["fullId"] = v.fullId;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsTeamIdDTO_t& v) {
    v.fullId = j.at("fullId").get<std::string_t>();
  }
  inline std::string to_string(const LeaguesLcdsTeamIdDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
