#ifndef SWAGGER_TYPES_LeaguesLcdsTeamIdDTO_HPP
#define SWAGGER_TYPES_LeaguesLcdsTeamIdDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LeaguesLcdsTeamIdDTO {
    // 
    std::string fullId;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsTeamIdDTO& v) {
    j["fullId"] = v.fullId;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsTeamIdDTO& v) {
    v.fullId = j.at("fullId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsTeamIdDTO_HPP
